#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 45
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_var = 1,
  anon_sym_COLON = 2,
  anon_sym_con = 3,
  sym_skip = 4,
  sym_abort = 5,
  anon_sym_COLON_EQ = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_STAR = 9,
  anon_sym_SLASH = 10,
  anon_sym_PLUS = 11,
  anon_sym_DASH = 12,
  sym_variable = 13,
  aux_sym_constant_token1 = 14,
  sym_integer = 15,
  anon_sym_True = 16,
  anon_sym_False = 17,
  anon_sym_COMMA = 18,
  sym_source_file = 19,
  sym__declaration = 20,
  sym_variable_declaration = 21,
  sym_constant_declaration = 22,
  sym__statement = 23,
  sym_assign = 24,
  sym__expr = 25,
  sym_mul = 26,
  sym_div = 27,
  sym_add = 28,
  sym_sub = 29,
  sym__term = 30,
  sym_constant = 31,
  sym_type = 32,
  sym_boolean = 33,
  sym__variable_list = 34,
  sym__constant_list = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_source_file_repeat2 = 37,
  aux_sym__variable_list_repeat1 = 38,
  aux_sym__constant_list_repeat1 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_con] = "con",
  [sym_skip] = "skip",
  [sym_abort] = "abort",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_variable] = "variable",
  [aux_sym_constant_token1] = "constant_token1",
  [sym_integer] = "integer",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_COMMA] = ",",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym__statement] = "_statement",
  [sym_assign] = "assign",
  [sym__expr] = "_expr",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym__term] = "_term",
  [sym_constant] = "constant",
  [sym_type] = "type",
  [sym_boolean] = "boolean",
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
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
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
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_mul] = {
    .visible = true,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
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
  [sym_boolean] = {
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
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_con);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_skip);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_abort);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'k') ADVANCE(23);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 1},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_con] = ACTIONS(1),
    [sym_skip] = ACTIONS(1),
    [sym_abort] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__declaration] = STATE(8),
    [sym_variable_declaration] = STATE(8),
    [sym_constant_declaration] = STATE(8),
    [sym__statement] = STATE(18),
    [sym_assign] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_source_file_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(9),
    [sym_abort] = ACTIONS(9),
    [sym_variable] = ACTIONS(11),
  },
  [2] = {
    [sym__expr] = STATE(17),
    [sym_mul] = STATE(17),
    [sym_div] = STATE(17),
    [sym_add] = STATE(17),
    [sym_sub] = STATE(17),
    [sym__term] = STATE(17),
    [sym_constant] = STATE(17),
    [sym_boolean] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [sym_integer] = ACTIONS(15),
    [anon_sym_True] = ACTIONS(19),
    [anon_sym_False] = ACTIONS(19),
  },
  [3] = {
    [sym__expr] = STATE(15),
    [sym_mul] = STATE(15),
    [sym_div] = STATE(15),
    [sym_add] = STATE(15),
    [sym_sub] = STATE(15),
    [sym__term] = STATE(15),
    [sym_constant] = STATE(15),
    [sym_boolean] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(17),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(19),
    [anon_sym_False] = ACTIONS(19),
  },
  [4] = {
    [sym__expr] = STATE(11),
    [sym_mul] = STATE(11),
    [sym_div] = STATE(11),
    [sym_add] = STATE(11),
    [sym_sub] = STATE(11),
    [sym__term] = STATE(11),
    [sym_constant] = STATE(11),
    [sym_boolean] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(17),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(19),
    [anon_sym_False] = ACTIONS(19),
  },
  [5] = {
    [sym__expr] = STATE(12),
    [sym_mul] = STATE(12),
    [sym_div] = STATE(12),
    [sym_add] = STATE(12),
    [sym_sub] = STATE(12),
    [sym__term] = STATE(12),
    [sym_constant] = STATE(12),
    [sym_boolean] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_variable] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(17),
    [sym_integer] = ACTIONS(25),
    [anon_sym_True] = ACTIONS(19),
    [anon_sym_False] = ACTIONS(19),
  },
  [6] = {
    [sym__expr] = STATE(13),
    [sym_mul] = STATE(13),
    [sym_div] = STATE(13),
    [sym_add] = STATE(13),
    [sym_sub] = STATE(13),
    [sym__term] = STATE(13),
    [sym_constant] = STATE(13),
    [sym_boolean] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_variable] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(17),
    [sym_integer] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(19),
    [anon_sym_False] = ACTIONS(19),
  },
  [7] = {
    [sym__expr] = STATE(24),
    [sym_mul] = STATE(24),
    [sym_div] = STATE(24),
    [sym_add] = STATE(24),
    [sym_sub] = STATE(24),
    [sym__term] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_boolean] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_variable] = ACTIONS(29),
    [aux_sym_constant_token1] = ACTIONS(17),
    [sym_integer] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(19),
    [anon_sym_False] = ACTIONS(19),
  },
  [8] = {
    [sym__declaration] = STATE(10),
    [sym_variable_declaration] = STATE(10),
    [sym_constant_declaration] = STATE(10),
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(33),
    [sym_abort] = ACTIONS(33),
    [sym_variable] = ACTIONS(11),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [sym_skip] = ACTIONS(37),
    [sym_abort] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_variable] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(35),
  },
  [10] = {
    [sym__declaration] = STATE(10),
    [sym_variable_declaration] = STATE(10),
    [sym_constant_declaration] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_var] = ACTIONS(41),
    [anon_sym_con] = ACTIONS(44),
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [sym_variable] = ACTIONS(47),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_skip] = ACTIONS(51),
    [sym_abort] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_skip] = ACTIONS(59),
    [sym_abort] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_skip] = ACTIONS(63),
    [sym_abort] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_variable] = ACTIONS(63),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_skip] = ACTIONS(67),
    [sym_abort] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_skip] = ACTIONS(71),
    [sym_abort] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_variable] = ACTIONS(71),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_skip] = ACTIONS(75),
    [sym_abort] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_variable] = ACTIONS(75),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_skip] = ACTIONS(79),
    [sym_abort] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(83),
    [sym_variable] = ACTIONS(79),
  },
  [18] = {
    [sym__statement] = STATE(20),
    [sym_assign] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_skip] = ACTIONS(85),
    [sym_abort] = ACTIONS(85),
    [sym_variable] = ACTIONS(11),
  },
  [19] = {
    [sym__statement] = STATE(20),
    [sym_assign] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_skip] = ACTIONS(85),
    [sym_abort] = ACTIONS(85),
    [sym_variable] = ACTIONS(11),
  },
  [20] = {
    [sym__statement] = STATE(20),
    [sym_assign] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_skip] = ACTIONS(91),
    [sym_abort] = ACTIONS(91),
    [sym_variable] = ACTIONS(94),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_var] = ACTIONS(99),
    [anon_sym_con] = ACTIONS(99),
    [sym_skip] = ACTIONS(99),
    [sym_abort] = ACTIONS(99),
    [sym_variable] = ACTIONS(99),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_var] = ACTIONS(103),
    [anon_sym_con] = ACTIONS(103),
    [sym_skip] = ACTIONS(103),
    [sym_abort] = ACTIONS(103),
    [sym_variable] = ACTIONS(103),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_var] = ACTIONS(107),
    [anon_sym_con] = ACTIONS(107),
    [sym_skip] = ACTIONS(107),
    [sym_abort] = ACTIONS(107),
    [sym_variable] = ACTIONS(107),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(83),
  },
  [25] = {
    [sym_constant] = STATE(36),
    [sym__constant_list] = STATE(39),
    [aux_sym__constant_list_repeat1] = STATE(28),
    [aux_sym_constant_token1] = ACTIONS(111),
  },
  [26] = {
    [sym_constant] = STATE(38),
    [aux_sym__constant_list_repeat1] = STATE(26),
    [aux_sym_constant_token1] = ACTIONS(113),
  },
  [27] = {
    [sym__variable_list] = STATE(40),
    [aux_sym__variable_list_repeat1] = STATE(29),
    [sym_variable] = ACTIONS(116),
  },
  [28] = {
    [sym_constant] = STATE(31),
    [aux_sym__constant_list_repeat1] = STATE(26),
    [aux_sym_constant_token1] = ACTIONS(111),
  },
  [29] = {
    [aux_sym__variable_list_repeat1] = STATE(34),
    [sym_variable] = ACTIONS(118),
  },
  [30] = {
    [sym_type] = STATE(21),
    [aux_sym_constant_token1] = ACTIONS(120),
  },
  [31] = {
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(124),
  },
  [32] = {
    [anon_sym_COLON] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(128),
  },
  [33] = {
    [sym_type] = STATE(23),
    [aux_sym_constant_token1] = ACTIONS(120),
  },
  [34] = {
    [aux_sym__variable_list_repeat1] = STATE(34),
    [sym_variable] = ACTIONS(130),
  },
  [35] = {
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(128),
  },
  [36] = {
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(124),
  },
  [37] = {
    [anon_sym_COMMA] = ACTIONS(128),
  },
  [38] = {
    [anon_sym_COMMA] = ACTIONS(124),
  },
  [39] = {
    [anon_sym_COLON] = ACTIONS(137),
  },
  [40] = {
    [anon_sym_COLON] = ACTIONS(139),
  },
  [41] = {
    [aux_sym_constant_token1] = ACTIONS(141),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(143),
  },
  [43] = {
    [anon_sym_COLON_EQ] = ACTIONS(145),
  },
  [44] = {
    [sym_variable] = ACTIONS(147),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(27),
  [7] = {.count = 1, .reusable = false}, SHIFT(25),
  [9] = {.count = 1, .reusable = false}, SHIFT(18),
  [11] = {.count = 1, .reusable = false}, SHIFT(43),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(17),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = false}, SHIFT(16),
  [21] = {.count = 1, .reusable = true}, SHIFT(15),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, SHIFT(24),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [44] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [47] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [53] = {.count = 1, .reusable = true}, SHIFT(6),
  [55] = {.count = 1, .reusable = true}, SHIFT(5),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 3),
  [81] = {.count = 1, .reusable = true}, SHIFT(4),
  [83] = {.count = 1, .reusable = true}, SHIFT(3),
  [85] = {.count = 1, .reusable = false}, SHIFT(20),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [91] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(43),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_constant_declaration, 4),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_variable_declaration, 4),
  [109] = {.count = 1, .reusable = true}, SHIFT(14),
  [111] = {.count = 1, .reusable = true}, SHIFT(9),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(9),
  [116] = {.count = 1, .reusable = true}, SHIFT(35),
  [118] = {.count = 1, .reusable = true}, SHIFT(32),
  [120] = {.count = 1, .reusable = true}, SHIFT(22),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [124] = {.count = 1, .reusable = true}, SHIFT(41),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [128] = {.count = 1, .reusable = true}, SHIFT(44),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(37),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(30),
  [139] = {.count = 1, .reusable = true}, SHIFT(33),
  [141] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [143] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [145] = {.count = 1, .reusable = true}, SHIFT(2),
  [147] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
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
