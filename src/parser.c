#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 27
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_var = 1,
  anon_sym_COLON = 2,
  anon_sym_con = 3,
  sym_variable = 4,
  aux_sym_constant_token1 = 5,
  anon_sym_COMMA = 6,
  sym_source_file = 7,
  sym__declaration = 8,
  sym_variable_declaration = 9,
  sym_constant_declaration = 10,
  sym_constant = 11,
  sym_type = 12,
  sym__variable_list = 13,
  sym__constant_list = 14,
  aux_sym_source_file_repeat1 = 15,
  aux_sym__variable_list_repeat1 = 16,
  aux_sym__constant_list_repeat1 = 17,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_con] = "con",
  [sym_variable] = "variable",
  [aux_sym_constant_token1] = "constant_token1",
  [anon_sym_COMMA] = ",",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym_constant] = "constant",
  [sym_type] = "type",
  [sym__variable_list] = "_variable_list",
  [sym__constant_list] = "_constant_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__variable_list_repeat1] = "_variable_list_repeat1",
  [aux_sym__constant_list_repeat1] = "_constant_list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_con] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_list] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_list] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__variable_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__constant_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'v') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_con);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_con] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_constant_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
  },
  [2] = {
    [sym__declaration] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_constant_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_con] = ACTIONS(14),
  },
  [3] = {
    [sym__declaration] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_constant_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
  },
  [4] = {
    [sym_constant] = STATE(12),
    [sym__constant_list] = STATE(20),
    [aux_sym__constant_list_repeat1] = STATE(10),
    [aux_sym_constant_token1] = ACTIONS(19),
  },
  [5] = {
    [sym__variable_list] = STATE(25),
    [aux_sym__variable_list_repeat1] = STATE(19),
    [sym_variable] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_con] = ACTIONS(23),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_con] = ACTIONS(25),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_con] = ACTIONS(27),
  },
  [9] = {
    [sym_constant] = STATE(26),
    [aux_sym__constant_list_repeat1] = STATE(9),
    [aux_sym_constant_token1] = ACTIONS(29),
  },
  [10] = {
    [sym_constant] = STATE(17),
    [aux_sym__constant_list_repeat1] = STATE(9),
    [aux_sym_constant_token1] = ACTIONS(19),
  },
  [11] = {
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_COMMA] = ACTIONS(34),
  },
  [12] = {
    [anon_sym_COLON] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(38),
  },
  [13] = {
    [sym_type] = STATE(7),
    [aux_sym_constant_token1] = ACTIONS(40),
  },
  [14] = {
    [anon_sym_COLON] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(34),
  },
  [15] = {
    [aux_sym__variable_list_repeat1] = STATE(15),
    [sym_variable] = ACTIONS(44),
  },
  [16] = {
    [sym_type] = STATE(6),
    [aux_sym_constant_token1] = ACTIONS(40),
  },
  [17] = {
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(38),
  },
  [18] = {
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
  },
  [19] = {
    [aux_sym__variable_list_repeat1] = STATE(15),
    [sym_variable] = ACTIONS(51),
  },
  [20] = {
    [anon_sym_COLON] = ACTIONS(53),
  },
  [21] = {
    [sym_variable] = ACTIONS(55),
  },
  [22] = {
    [aux_sym_constant_token1] = ACTIONS(57),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(59),
  },
  [24] = {
    [anon_sym_COMMA] = ACTIONS(34),
  },
  [25] = {
    [anon_sym_COLON] = ACTIONS(61),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(38),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(5),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [14] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(18),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(18),
  [32] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [34] = {.count = 1, .reusable = true}, SHIFT(21),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [38] = {.count = 1, .reusable = true}, SHIFT(22),
  [40] = {.count = 1, .reusable = true}, SHIFT(8),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(24),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(14),
  [53] = {.count = 1, .reusable = true}, SHIFT(16),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [59] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [61] = {.count = 1, .reusable = true}, SHIFT(13),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_GCL(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
