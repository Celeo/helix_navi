#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  sym__blank = 2,
  anon_sym_PERCENT = 3,
  sym_tag = 4,
  anon_sym_SEMI = 5,
  anon_sym_POUND = 6,
  anon_sym_AT = 7,
  anon_sym_DOLLAR = 8,
  anon_sym_COLON = 9,
  anon_sym_DASH_DASH_DASH = 10,
  aux_sym_var_name_token1 = 11,
  aux_sym_var_command_token1 = 12,
  anon_sym_DASH = 13,
  aux_sym_var_options_token1 = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  sym_command_text = 17,
  sym_source_file = 18,
  sym__line = 19,
  sym_tags = 20,
  sym_comment = 21,
  sym_description = 22,
  sym_authorship = 23,
  sym_variable = 24,
  sym_var_name = 25,
  sym_var_command = 26,
  sym_var_options = 27,
  sym_command = 28,
  sym_placeholder = 29,
  sym_var_ref = 30,
  sym_text = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_tags_repeat1 = 33,
  aux_sym_var_command_repeat1 = 34,
  aux_sym_command_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [sym__blank] = "_blank",
  [anon_sym_PERCENT] = "marker",
  [sym_tag] = "tag",
  [anon_sym_SEMI] = "marker",
  [anon_sym_POUND] = "marker",
  [anon_sym_AT] = "marker",
  [anon_sym_DOLLAR] = "marker",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_DASH_DASH] = "---",
  [aux_sym_var_name_token1] = "var_name_token1",
  [aux_sym_var_command_token1] = "var_command_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_var_options_token1] = "var_options_token1",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_command_text] = "command_text",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_tags] = "tags",
  [sym_comment] = "comment",
  [sym_description] = "description",
  [sym_authorship] = "authorship",
  [sym_variable] = "variable",
  [sym_var_name] = "var_name",
  [sym_var_command] = "var_command",
  [sym_var_options] = "var_options",
  [sym_command] = "command",
  [sym_placeholder] = "placeholder",
  [sym_var_ref] = "var_ref",
  [sym_text] = "text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
  [aux_sym_var_command_repeat1] = "var_command_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym__blank] = sym__blank,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_tag] = sym_tag,
  [anon_sym_SEMI] = anon_sym_PERCENT,
  [anon_sym_POUND] = anon_sym_PERCENT,
  [anon_sym_AT] = anon_sym_PERCENT,
  [anon_sym_DOLLAR] = anon_sym_PERCENT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [aux_sym_var_name_token1] = aux_sym_var_name_token1,
  [aux_sym_var_command_token1] = aux_sym_var_command_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_var_options_token1] = aux_sym_var_options_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_command_text] = sym_command_text,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_tags] = sym_tags,
  [sym_comment] = sym_comment,
  [sym_description] = sym_description,
  [sym_authorship] = sym_authorship,
  [sym_variable] = sym_variable,
  [sym_var_name] = sym_var_name,
  [sym_var_command] = sym_var_command,
  [sym_var_options] = sym_var_options,
  [sym_command] = sym_command,
  [sym_placeholder] = sym_placeholder,
  [sym_var_ref] = sym_var_ref,
  [sym_text] = sym_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
  [aux_sym_var_command_repeat1] = aux_sym_var_command_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__blank] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_var_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_var_options_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_command_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_authorship] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_var_name] = {
    .visible = true,
    .named = true,
  },
  [sym_var_command] = {
    .visible = true,
    .named = true,
  },
  [sym_var_options] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_var_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_command = 1,
  field_marker = 2,
  field_name = 3,
  field_options = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_marker] = "marker",
  [field_name] = "name",
  [field_options] = "options",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_marker, 0},
  [1] =
    {field_marker, 0},
    {field_name, 1},
  [3] =
    {field_command, 3},
    {field_marker, 0},
    {field_name, 1},
  [6] =
    {field_marker, 0},
    {field_name, 1},
    {field_options, 4},
  [9] =
    {field_command, 3},
    {field_marker, 0},
    {field_name, 1},
    {field_options, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '\n', 8,
        '\r', 1,
        '#', 14,
        '$', 16,
        '%', 11,
        '-', 23,
        ':', 17,
        ';', 13,
        '<', 27,
        '>', 28,
        '@', 15,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < '#' || '%' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '@') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__blank);
      ADVANCE_MAP(
        '#', 14,
        '$', 16,
        '%', 11,
        ';', 13,
        '<', 27,
        '@', 15,
        '\t', 9,
        ' ', 9,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__blank);
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '#', 14,
        '$', 16,
        '%', 11,
        ';', 13,
        '<', 27,
        '@', 15,
        '\t', 9,
        ' ', 9,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_var_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_var_command_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_var_command_token1);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '-') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_var_command_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_var_options_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_var_options_token1);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_var_options_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_command_text);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_command_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [aux_sym_var_name_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__line] = STATE(3),
    [sym_tags] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_description] = STATE(26),
    [sym_authorship] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_command] = STATE(26),
    [sym_placeholder] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__blank] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [sym_command_text] = ACTIONS(19),
  },
  [2] = {
    [sym__line] = STATE(2),
    [sym_tags] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_description] = STATE(26),
    [sym_authorship] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_command] = STATE(26),
    [sym_placeholder] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__blank] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(26),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_DOLLAR] = ACTIONS(38),
    [anon_sym_LT] = ACTIONS(41),
    [sym_command_text] = ACTIONS(44),
  },
  [3] = {
    [sym__line] = STATE(2),
    [sym_tags] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_description] = STATE(26),
    [sym_authorship] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_command] = STATE(26),
    [sym_placeholder] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym__blank] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [sym_command_text] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 8,
      sym__blank,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_LT,
      sym_command_text,
  [14] = 5,
    ACTIONS(53), 1,
      aux_sym__line_token1,
    ACTIONS(55), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(7), 1,
      aux_sym_var_command_repeat1,
    STATE(19), 1,
      sym_var_command,
    ACTIONS(57), 2,
      aux_sym_var_command_token1,
      anon_sym_DASH,
  [31] = 3,
    STATE(6), 1,
      aux_sym_var_command_repeat1,
    ACTIONS(59), 2,
      aux_sym__line_token1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(61), 2,
      aux_sym_var_command_token1,
      anon_sym_DASH,
  [43] = 3,
    STATE(6), 1,
      aux_sym_var_command_repeat1,
    ACTIONS(64), 2,
      aux_sym__line_token1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(66), 2,
      aux_sym_var_command_token1,
      anon_sym_DASH,
  [55] = 4,
    ACTIONS(68), 1,
      aux_sym__line_token1,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_command_text,
    STATE(9), 2,
      sym_placeholder,
      aux_sym_command_repeat1,
  [69] = 4,
    ACTIONS(74), 1,
      aux_sym__line_token1,
    ACTIONS(76), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      sym_command_text,
    STATE(9), 2,
      sym_placeholder,
      aux_sym_command_repeat1,
  [83] = 3,
    ACTIONS(82), 1,
      aux_sym__line_token1,
    ACTIONS(84), 1,
      aux_sym_var_options_token1,
    STATE(34), 1,
      sym_var_options,
  [93] = 3,
    ACTIONS(86), 1,
      aux_sym__line_token1,
    ACTIONS(88), 1,
      aux_sym_var_options_token1,
    STATE(29), 1,
      sym_text,
  [103] = 3,
    ACTIONS(88), 1,
      aux_sym_var_options_token1,
    ACTIONS(90), 1,
      aux_sym__line_token1,
    STATE(28), 1,
      sym_text,
  [113] = 3,
    ACTIONS(88), 1,
      aux_sym_var_options_token1,
    ACTIONS(92), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      sym_text,
  [123] = 3,
    ACTIONS(84), 1,
      aux_sym_var_options_token1,
    ACTIONS(94), 1,
      aux_sym__line_token1,
    STATE(33), 1,
      sym_var_options,
  [133] = 3,
    ACTIONS(96), 1,
      aux_sym__line_token1,
    ACTIONS(98), 1,
      sym_tag,
    STATE(17), 1,
      aux_sym_tags_repeat1,
  [143] = 2,
    ACTIONS(102), 1,
      sym_command_text,
    ACTIONS(100), 2,
      aux_sym__line_token1,
      anon_sym_LT,
  [151] = 3,
    ACTIONS(104), 1,
      aux_sym__line_token1,
    ACTIONS(106), 1,
      sym_tag,
    STATE(17), 1,
      aux_sym_tags_repeat1,
  [161] = 2,
    ACTIONS(109), 1,
      aux_sym_var_name_token1,
    STATE(24), 1,
      sym_var_ref,
  [168] = 2,
    ACTIONS(111), 1,
      aux_sym__line_token1,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH_DASH,
  [175] = 2,
    ACTIONS(115), 1,
      aux_sym_var_name_token1,
    STATE(22), 1,
      sym_var_name,
  [182] = 2,
    ACTIONS(117), 1,
      sym_tag,
    STATE(15), 1,
      aux_sym_tags_repeat1,
  [189] = 1,
    ACTIONS(119), 1,
      anon_sym_COLON,
  [193] = 1,
    ACTIONS(121), 1,
      anon_sym_GT,
  [197] = 1,
    ACTIONS(123), 1,
      anon_sym_GT,
  [201] = 1,
    ACTIONS(125), 1,
      anon_sym_COLON,
  [205] = 1,
    ACTIONS(127), 1,
      aux_sym__line_token1,
  [209] = 1,
    ACTIONS(129), 1,
      aux_sym__line_token1,
  [213] = 1,
    ACTIONS(131), 1,
      aux_sym__line_token1,
  [217] = 1,
    ACTIONS(133), 1,
      aux_sym__line_token1,
  [221] = 1,
    ACTIONS(135), 1,
      aux_sym__line_token1,
  [225] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [229] = 1,
    ACTIONS(139), 1,
      aux_sym__line_token1,
  [233] = 1,
    ACTIONS(141), 1,
      aux_sym__line_token1,
  [237] = 1,
    ACTIONS(143), 1,
      aux_sym__line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 43,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 69,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 103,
  [SMALL_STATE(13)] = 113,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 143,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 161,
  [SMALL_STATE(19)] = 168,
  [SMALL_STATE(20)] = 175,
  [SMALL_STATE(21)] = 182,
  [SMALL_STATE(22)] = 189,
  [SMALL_STATE(23)] = 193,
  [SMALL_STATE(24)] = 197,
  [SMALL_STATE(25)] = 201,
  [SMALL_STATE(26)] = 205,
  [SMALL_STATE(27)] = 209,
  [SMALL_STATE(28)] = 213,
  [SMALL_STATE(29)] = 217,
  [SMALL_STATE(30)] = 221,
  [SMALL_STATE(31)] = 225,
  [SMALL_STATE(32)] = 229,
  [SMALL_STATE(33)] = 233,
  [SMALL_STATE(34)] = 237,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_command_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_command_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_command, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship, 1, 0, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_ref, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_name, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 2, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_options, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, 0, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_navi(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
