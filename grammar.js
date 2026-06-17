/**
 * Tree-sitter grammar for navi (.cheat) files.
 * Format reference: https://github.com/denisidoro/navi/blob/master/docs/cheatsheet_syntax.md
 *
 * Line types:
 *   %  tags          -> "% tag1 tag2"
 *   ;  comment       -> "; this is a comment"
 *   #  description   -> "# print foo" (snippet description / header)
 *   $  variable      -> "$ user: echo -e 'foo\nbar' --- --map 'tr a b'"
 *   @  authorship    -> "@ john.doe"  (metadata, treated like a directive)
 *   otherwise        -> a command line (may contain <var> placeholders)
 */

module.exports = grammar({
  name: 'navi',

  extras: $ => [/[ \t]/],

  rules: {
    source_file: $ => repeat($._line),

    _line: $ => seq(
      choice(
        prec(2, $.tags),
        prec(2, $.comment),
        prec(2, $.description),
        prec(2, $.variable),
        prec(2, $.authorship),
        prec(1, $.command),
        $._blank
      ),
      /\r?\n/
    ),

    _blank: $ => token(prec(-1, /[ \t]*/)),

    // % tag1 tag2 ...
    tags: $ => seq(
      field('marker', alias('%', $.marker)),
      repeat1($.tag)
    ),
    tag: $ => /[^\s][^\s]*/,

    // ; comment text
    comment: $ => seq(
      field('marker', alias(';', $.marker)),
      optional($.text)
    ),

    // # snippet description
    description: $ => seq(
      field('marker', alias('#', $.marker)),
      optional($.text)
    ),

    // @ authorship / metadata
    authorship: $ => seq(
      field('marker', alias('@', $.marker)),
      optional($.text)
    ),

    // $ name: command --- options
    variable: $ => seq(
      field('marker', alias('$', $.marker)),
      field('name', $.var_name),
      ':',
      field('command', optional($.var_command)),
      optional(seq('---', field('options', optional($.var_options))))
    ),
    var_name: $ => /[A-Za-z_][A-Za-z0-9_]*/,
    // command text is a sequence of chunks: either a run of non-dash, non-newline
    // chars, or a single dash that is NOT the start of a " --- " separator.
    var_command: $ => repeat1(choice(
      token(/[^\n-]+/),
      token(prec(-1, '-'))
    )),
    var_options: $ => /[^\n]+/,

    // a runnable command line; may contain <placeholders>
    command: $ => prec.right(repeat1(choice(
      $.placeholder,
      $.command_text
    ))),
    placeholder: $ => seq('<', $.var_ref, '>'),
    var_ref: $ => /[A-Za-z_][A-Za-z0-9_]*/,
    // command text: the first char may not be a line-marker (% ; # $ @ < space),
    // but those chars are fine later in the line.
    command_text: $ => token(/[^%;#$@< \t\n][^<\n]*/),

    text: $ => /[^\n]+/,
  }
});
