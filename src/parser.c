#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 30
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_var = 1,
  anon_sym_COLON = 2,
  anon_sym_con = 3,
  sym_skip = 4,
  sym_abort = 5,
  sym_variable = 6,
  aux_sym_constant_token1 = 7,
  anon_sym_COMMA = 8,
  sym_source_file = 9,
  sym__declaration = 10,
  sym_variable_declaration = 11,
  sym_constant_declaration = 12,
  sym__statement = 13,
  sym_constant = 14,
  sym_type = 15,
  sym__variable_list = 16,
  sym__constant_list = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_source_file_repeat2 = 19,
  aux_sym__variable_list_repeat1 = 20,
  aux_sym__constant_list_repeat1 = 21,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_con] = "con",
  [sym_skip] = "skip",
  [sym_abort] = "abort",
  [sym_variable] = "variable",
  [aux_sym_constant_token1] = "constant_token1",
  [anon_sym_COMMA] = ",",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym__statement] = "_statement",
  [sym_constant] = "constant",
  [sym_type] = "type",
  [sym__variable_list] = "_variable_list",
  [sym__constant_list] = "_constant_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
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
  [sym_skip] = {
    .visible = true,
    .named = true,
  },
  [sym_abort] = {
    .visible = true,
    .named = true,
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
  [sym__statement] = {
    .visible = false,
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
  [aux_sym_source_file_repeat2] = {
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
      if (eof) ADVANCE(13);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'k') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_con);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_skip);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_abort);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_con] = ACTIONS(1),
    [sym_skip] = ACTIONS(1),
    [sym_abort] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym__declaration] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_constant_declaration] = STATE(2),
    [sym__statement] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(9),
    [sym_abort] = ACTIONS(9),
  },
  [2] = {
    [sym__declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_constant_declaration] = STATE(3),
    [sym__statement] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_source_file_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(13),
    [sym_abort] = ACTIONS(13),
  },
  [3] = {
    [sym__declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_constant_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_con] = ACTIONS(20),
    [sym_skip] = ACTIONS(15),
    [sym_abort] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_con] = ACTIONS(23),
    [sym_skip] = ACTIONS(23),
    [sym_abort] = ACTIONS(23),
  },
  [5] = {
    [sym__statement] = STATE(8),
    [aux_sym_source_file_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_skip] = ACTIONS(25),
    [sym_abort] = ACTIONS(25),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_con] = ACTIONS(27),
    [sym_skip] = ACTIONS(27),
    [sym_abort] = ACTIONS(27),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_var] = ACTIONS(29),
    [anon_sym_con] = ACTIONS(29),
    [sym_skip] = ACTIONS(29),
    [sym_abort] = ACTIONS(29),
  },
  [8] = {
    [sym__statement] = STATE(8),
    [aux_sym_source_file_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_skip] = ACTIONS(33),
    [sym_abort] = ACTIONS(33),
  },
  [9] = {
    [sym__statement] = STATE(8),
    [aux_sym_source_file_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_skip] = ACTIONS(25),
    [sym_abort] = ACTIONS(25),
  },
  [10] = {
    [sym_constant] = STATE(20),
    [sym__constant_list] = STATE(23),
    [aux_sym__constant_list_repeat1] = STATE(13),
    [aux_sym_constant_token1] = ACTIONS(38),
  },
  [11] = {
    [sym__variable_list] = STATE(28),
    [aux_sym__variable_list_repeat1] = STATE(22),
    [sym_variable] = ACTIONS(40),
  },
  [12] = {
    [sym_constant] = STATE(29),
    [aux_sym__constant_list_repeat1] = STATE(12),
    [aux_sym_constant_token1] = ACTIONS(42),
  },
  [13] = {
    [sym_constant] = STATE(19),
    [aux_sym__constant_list_repeat1] = STATE(12),
    [aux_sym_constant_token1] = ACTIONS(38),
  },
  [14] = {
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
  },
  [15] = {
    [sym_type] = STATE(6),
    [aux_sym_constant_token1] = ACTIONS(49),
  },
  [16] = {
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(47),
  },
  [17] = {
    [aux_sym__variable_list_repeat1] = STATE(17),
    [sym_variable] = ACTIONS(53),
  },
  [18] = {
    [sym_type] = STATE(4),
    [aux_sym_constant_token1] = ACTIONS(49),
  },
  [19] = {
    [anon_sym_COLON] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(58),
  },
  [20] = {
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(58),
  },
  [21] = {
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
  },
  [22] = {
    [aux_sym__variable_list_repeat1] = STATE(17),
    [sym_variable] = ACTIONS(64),
  },
  [23] = {
    [anon_sym_COLON] = ACTIONS(66),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(68),
  },
  [25] = {
    [sym_variable] = ACTIONS(70),
  },
  [26] = {
    [aux_sym_constant_token1] = ACTIONS(72),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(47),
  },
  [28] = {
    [anon_sym_COLON] = ACTIONS(74),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(58),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(11),
  [7] = {.count = 1, .reusable = true}, SHIFT(10),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [20] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [25] = {.count = 1, .reusable = true}, SHIFT(8),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [38] = {.count = 1, .reusable = true}, SHIFT(21),
  [40] = {.count = 1, .reusable = true}, SHIFT(14),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(21),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(25),
  [49] = {.count = 1, .reusable = true}, SHIFT(7),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(27),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [58] = {.count = 1, .reusable = true}, SHIFT(26),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [64] = {.count = 1, .reusable = true}, SHIFT(16),
  [66] = {.count = 1, .reusable = true}, SHIFT(18),
  [68] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [70] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [72] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [74] = {.count = 1, .reusable = true}, SHIFT(15),
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
