; Markers / directives
(marker) @punctuation.special

; Tags line  ( % foo bar )
(tag) @keyword

; Comments  ( ; ... )
(comment) @comment

; Snippet descriptions  ( # ... )  -> render like headings/titles
(description (text) @markup.heading)
(description) @comment.block

; Authorship metadata  ( @ ... )
(authorship (text) @string.special)

; Variables  ( $ name: cmd --- opts )
(variable
  name: (var_name) @variable.parameter)
(variable
  command: (var_command) @string)
(variable
  options: (var_options) @attribute)
":" @punctuation.delimiter

; Placeholders inside commands  ( <var> )
(placeholder
  (var_ref) @variable)
"<" @punctuation.bracket
">" @punctuation.bracket

; Plain command text
(command_text) @none
