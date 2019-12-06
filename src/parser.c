#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 15
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_var = 1,
  anon_sym_COLON = 2,
  sym_variable = 3,
  sym_type = 4,
  anon_sym_COMMA = 5,
  sym_source_file = 6,
  sym__declaration = 7,
  sym_variable_declaration = 8,
  sym__variable_list = 9,
  aux_sym_source_file_repeat1 = 10,
  aux_sym__variable_list_repeat1 = 11,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [sym_variable] = "variable",
  [sym_type] = "type",
  [anon_sym_COMMA] = ",",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym__variable_list] = "_variable_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__variable_list_repeat1] = "_variable_list_repeat1",
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
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
  [sym__variable_list] = {
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
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 'v') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
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
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__declaration] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
  },
  [2] = {
    [sym__declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_var] = ACTIONS(5),
  },
  [3] = {
    [sym__declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
  },
  [4] = {
    [sym__variable_list] = STATE(11),
    [aux_sym__variable_list_repeat1] = STATE(6),
    [sym_variable] = ACTIONS(14),
  },
  [5] = {
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_COMMA] = ACTIONS(18),
  },
  [6] = {
    [aux_sym__variable_list_repeat1] = STATE(8),
    [sym_variable] = ACTIONS(20),
  },
  [7] = {
    [anon_sym_COLON] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(18),
  },
  [8] = {
    [aux_sym__variable_list_repeat1] = STATE(8),
    [sym_variable] = ACTIONS(24),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(27),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [11] = {
    [anon_sym_COLON] = ACTIONS(31),
  },
  [12] = {
    [sym_variable] = ACTIONS(33),
  },
  [13] = {
    [sym_type] = ACTIONS(35),
  },
  [14] = {
    [anon_sym_COMMA] = ACTIONS(18),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [9] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.count = 1, .reusable = true}, SHIFT(5),
  [16] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [18] = {.count = 1, .reusable = true}, SHIFT(12),
  [20] = {.count = 1, .reusable = true}, SHIFT(7),
  [22] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(14),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [29] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(9),
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
