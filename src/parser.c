#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 122
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_var = 1,
  anon_sym_COLON = 2,
  anon_sym_con = 3,
  sym_skip = 4,
  sym_abort = 5,
  anon_sym_COLON_EQ = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_COMMA = 9,
  anon_sym_bnd = 10,
  anon_sym_if = 11,
  anon_sym_fi = 12,
  anon_sym_do = 13,
  anon_sym_od = 14,
  anon_sym_LBRACE_BANG = 15,
  anon_sym_BANG_RBRACE = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_LT = 27,
  anon_sym_LT_EQ = 28,
  sym_variable = 29,
  aux_sym_constant_token1 = 30,
  sym_integer = 31,
  anon_sym_True = 32,
  anon_sym_False = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_PIPE = 35,
  sym__newline = 36,
  sym_source_file = 37,
  sym__declaration = 38,
  sym_variable_declaration = 39,
  sym_constant_declaration = 40,
  sym__statement = 41,
  sym_assign = 42,
  sym_assert = 43,
  sym_assert_with_bound = 44,
  sym_if = 45,
  sym_do = 46,
  sym_spec = 47,
  sym__expr = 48,
  sym_mul = 49,
  sym_div = 50,
  sym_add = 51,
  sym_sub = 52,
  sym__term = 53,
  sym__pred = 54,
  sym_eq = 55,
  sym_neq = 56,
  sym_gt = 57,
  sym_gte = 58,
  sym_lt = 59,
  sym_lte = 60,
  sym_constant = 61,
  sym_type = 62,
  sym_boolean = 63,
  sym__variable_list = 64,
  sym__constant_list = 65,
  sym_guarded_command = 66,
  sym__guarded_command_list = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_source_file_repeat2 = 69,
  aux_sym__variable_list_repeat1 = 70,
  aux_sym__constant_list_repeat1 = 71,
  aux_sym__guarded_command_list_repeat1 = 72,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_con] = "con",
  [sym_skip] = "skip",
  [sym_abort] = "abort",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_bnd] = "bnd",
  [anon_sym_if] = "if",
  [anon_sym_fi] = "fi",
  [anon_sym_do] = "do",
  [anon_sym_od] = "od",
  [anon_sym_LBRACE_BANG] = "{!",
  [anon_sym_BANG_RBRACE] = "!}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [sym_variable] = "variable",
  [aux_sym_constant_token1] = "constant_token1",
  [sym_integer] = "integer",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_PIPE] = "|",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym__statement] = "_statement",
  [sym_assign] = "assign",
  [sym_assert] = "assert",
  [sym_assert_with_bound] = "assert_with_bound",
  [sym_if] = "if",
  [sym_do] = "do",
  [sym_spec] = "spec",
  [sym__expr] = "_expr",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym__term] = "_term",
  [sym__pred] = "_pred",
  [sym_eq] = "eq",
  [sym_neq] = "neq",
  [sym_gt] = "gt",
  [sym_gte] = "gte",
  [sym_lt] = "lt",
  [sym_lte] = "lte",
  [sym_constant] = "constant",
  [sym_type] = "type",
  [sym_boolean] = "boolean",
  [sym__variable_list] = "_variable_list",
  [sym__constant_list] = "_constant_list",
  [sym_guarded_command] = "guarded_command",
  [sym__guarded_command_list] = "_guarded_command_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__variable_list_repeat1] = "_variable_list_repeat1",
  [aux_sym__constant_list_repeat1] = "_constant_list_repeat1",
  [aux_sym__guarded_command_list_repeat1] = "_guarded_command_list_repeat1",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_od] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_RBRACE] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
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
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_with_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_do] = {
    .visible = true,
    .named = true,
  },
  [sym_spec] = {
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
  [sym__pred] = {
    .visible = false,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_neq] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_gte] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_lte] = {
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
  [sym_guarded_command] = {
    .visible = true,
    .named = true,
  },
  [sym__guarded_command_list] = {
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
  [aux_sym__guarded_command_list_repeat1] = {
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
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '}') ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '\\') SKIP(19)
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'n') SKIP(1)
      END_STATE();
    case 19:
      if (lookahead == 'n') SKIP(7)
      END_STATE();
    case 20:
      if (lookahead == 'n') SKIP(8)
      END_STATE();
    case 21:
      if (lookahead == 'n') SKIP(2)
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(62);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 32:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(75);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 33:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 34:
      if (eof) ADVANCE(37);
      if (lookahead == 'n') SKIP(0)
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == 'n') SKIP(32)
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == 'n') SKIP(33)
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_con);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_con);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_skip);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_skip);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_abort);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_abort);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_bnd);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_od);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_od);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(104);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'k') ADVANCE(79);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 32},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 32},
  [82] = {.lex_state = 32},
  [83] = {.lex_state = 32},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 32},
  [86] = {.lex_state = 32},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 32},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 32},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 32},
  [109] = {.lex_state = 32},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
};

enum {
  ts_external_token__newline = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
  },
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_bnd] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_fi] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_od] = ACTIONS(1),
    [anon_sym_LBRACE_BANG] = ACTIONS(1),
    [anon_sym_BANG_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(112),
    [sym__declaration] = STATE(7),
    [sym_variable_declaration] = STATE(111),
    [sym_constant_declaration] = STATE(111),
    [sym__statement] = STATE(18),
    [sym_assign] = STATE(117),
    [sym_assert] = STATE(117),
    [sym_assert_with_bound] = STATE(117),
    [sym_if] = STATE(117),
    [sym_do] = STATE(117),
    [sym_spec] = STATE(117),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_source_file_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(9),
    [sym_abort] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [2] = {
    [sym__expr] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym__term] = STATE(50),
    [sym__pred] = STATE(96),
    [sym_eq] = STATE(96),
    [sym_neq] = STATE(96),
    [sym_gt] = STATE(96),
    [sym_gte] = STATE(96),
    [sym_lt] = STATE(96),
    [sym_lte] = STATE(96),
    [sym_constant] = STATE(50),
    [sym_boolean] = STATE(96),
    [sym_guarded_command] = STATE(79),
    [sym__guarded_command_list] = STATE(120),
    [aux_sym__guarded_command_list_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [3] = {
    [sym__expr] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym__term] = STATE(50),
    [sym__pred] = STATE(119),
    [sym_eq] = STATE(119),
    [sym_neq] = STATE(119),
    [sym_gt] = STATE(119),
    [sym_gte] = STATE(119),
    [sym_lt] = STATE(119),
    [sym_lte] = STATE(119),
    [sym_constant] = STATE(50),
    [sym_boolean] = STATE(119),
    [sym_guarded_command] = STATE(79),
    [sym__guarded_command_list] = STATE(102),
    [aux_sym__guarded_command_list_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [4] = {
    [sym__expr] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym__term] = STATE(50),
    [sym__pred] = STATE(96),
    [sym_eq] = STATE(96),
    [sym_neq] = STATE(96),
    [sym_gt] = STATE(96),
    [sym_gte] = STATE(96),
    [sym_lt] = STATE(96),
    [sym_lte] = STATE(96),
    [sym_constant] = STATE(50),
    [sym_boolean] = STATE(96),
    [sym_guarded_command] = STATE(76),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [5] = {
    [sym__expr] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym__term] = STATE(50),
    [sym__pred] = STATE(119),
    [sym_eq] = STATE(119),
    [sym_neq] = STATE(119),
    [sym_gt] = STATE(119),
    [sym_gte] = STATE(119),
    [sym_lt] = STATE(119),
    [sym_lte] = STATE(119),
    [sym_constant] = STATE(50),
    [sym_boolean] = STATE(119),
    [sym_guarded_command] = STATE(76),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [6] = {
    [sym__expr] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym__term] = STATE(50),
    [sym__pred] = STATE(121),
    [sym_eq] = STATE(121),
    [sym_neq] = STATE(121),
    [sym_gt] = STATE(121),
    [sym_gte] = STATE(121),
    [sym_lt] = STATE(121),
    [sym_lte] = STATE(121),
    [sym_constant] = STATE(50),
    [sym_boolean] = STATE(121),
    [sym_guarded_command] = STATE(105),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_variable] = ACTIONS(32),
    [aux_sym_constant_token1] = ACTIONS(35),
    [sym_integer] = ACTIONS(32),
    [anon_sym_True] = ACTIONS(38),
    [anon_sym_False] = ACTIONS(38),
  },
  [7] = {
    [sym__declaration] = STATE(29),
    [sym_variable_declaration] = STATE(111),
    [sym_constant_declaration] = STATE(111),
    [sym__statement] = STATE(20),
    [sym_assign] = STATE(117),
    [sym_assert] = STATE(117),
    [sym_assert_with_bound] = STATE(117),
    [sym_if] = STATE(117),
    [sym_do] = STATE(117),
    [sym_spec] = STATE(117),
    [aux_sym_source_file_repeat1] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(9),
    [sym_abort] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [8] = {
    [sym__expr] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym__term] = STATE(50),
    [sym__pred] = STATE(89),
    [sym_eq] = STATE(89),
    [sym_neq] = STATE(89),
    [sym_gt] = STATE(89),
    [sym_gte] = STATE(89),
    [sym_lt] = STATE(89),
    [sym_lte] = STATE(89),
    [sym_constant] = STATE(50),
    [sym_boolean] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [9] = {
    [sym__expr] = STATE(42),
    [sym_mul] = STATE(42),
    [sym_div] = STATE(42),
    [sym_add] = STATE(42),
    [sym_sub] = STATE(42),
    [sym__term] = STATE(42),
    [sym__pred] = STATE(98),
    [sym_eq] = STATE(98),
    [sym_neq] = STATE(98),
    [sym_gt] = STATE(98),
    [sym_gte] = STATE(98),
    [sym_lt] = STATE(98),
    [sym_lte] = STATE(98),
    [sym_constant] = STATE(42),
    [sym_boolean] = STATE(98),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(43),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [10] = {
    [sym__statement] = STATE(11),
    [sym_assign] = STATE(118),
    [sym_assert] = STATE(118),
    [sym_assert_with_bound] = STATE(118),
    [sym_if] = STATE(118),
    [sym_do] = STATE(118),
    [sym_spec] = STATE(118),
    [aux_sym_source_file_repeat2] = STATE(11),
    [sym_skip] = ACTIONS(45),
    [sym_abort] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_od] = ACTIONS(47),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(49),
  },
  [11] = {
    [sym__statement] = STATE(11),
    [sym_assign] = STATE(118),
    [sym_assert] = STATE(118),
    [sym_assert_with_bound] = STATE(118),
    [sym_if] = STATE(118),
    [sym_do] = STATE(118),
    [sym_spec] = STATE(118),
    [aux_sym_source_file_repeat2] = STATE(11),
    [sym_skip] = ACTIONS(51),
    [sym_abort] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(57),
    [anon_sym_do] = ACTIONS(60),
    [anon_sym_od] = ACTIONS(63),
    [anon_sym_LBRACE_BANG] = ACTIONS(65),
    [sym_variable] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(71),
  },
  [12] = {
    [sym__statement] = STATE(12),
    [sym_assign] = STATE(113),
    [sym_assert] = STATE(113),
    [sym_assert_with_bound] = STATE(113),
    [sym_if] = STATE(113),
    [sym_do] = STATE(113),
    [sym_spec] = STATE(113),
    [aux_sym_source_file_repeat2] = STATE(12),
    [sym_skip] = ACTIONS(73),
    [sym_abort] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(57),
    [anon_sym_do] = ACTIONS(60),
    [anon_sym_LBRACE_BANG] = ACTIONS(65),
    [anon_sym_BANG_RBRACE] = ACTIONS(71),
    [sym_variable] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(71),
  },
  [13] = {
    [sym__statement] = STATE(14),
    [sym_assign] = STATE(116),
    [sym_assert] = STATE(116),
    [sym_assert_with_bound] = STATE(116),
    [sym_if] = STATE(116),
    [sym_do] = STATE(116),
    [sym_spec] = STATE(116),
    [aux_sym_source_file_repeat2] = STATE(14),
    [sym_skip] = ACTIONS(76),
    [sym_abort] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_fi] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(49),
  },
  [14] = {
    [sym__statement] = STATE(14),
    [sym_assign] = STATE(116),
    [sym_assert] = STATE(116),
    [sym_assert_with_bound] = STATE(116),
    [sym_if] = STATE(116),
    [sym_do] = STATE(116),
    [sym_spec] = STATE(116),
    [aux_sym_source_file_repeat2] = STATE(14),
    [sym_skip] = ACTIONS(78),
    [sym_abort] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(57),
    [anon_sym_fi] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(60),
    [anon_sym_LBRACE_BANG] = ACTIONS(65),
    [sym_variable] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(71),
  },
  [15] = {
    [sym__statement] = STATE(16),
    [sym_assign] = STATE(113),
    [sym_assert] = STATE(113),
    [sym_assert_with_bound] = STATE(113),
    [sym_if] = STATE(113),
    [sym_do] = STATE(113),
    [sym_spec] = STATE(113),
    [aux_sym_source_file_repeat2] = STATE(16),
    [sym_skip] = ACTIONS(81),
    [sym_abort] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [anon_sym_BANG_RBRACE] = ACTIONS(83),
    [sym_variable] = ACTIONS(19),
  },
  [16] = {
    [sym__statement] = STATE(12),
    [sym_assign] = STATE(113),
    [sym_assert] = STATE(113),
    [sym_assert_with_bound] = STATE(113),
    [sym_if] = STATE(113),
    [sym_do] = STATE(113),
    [sym_spec] = STATE(113),
    [aux_sym_source_file_repeat2] = STATE(12),
    [sym_skip] = ACTIONS(81),
    [sym_abort] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [anon_sym_BANG_RBRACE] = ACTIONS(85),
    [sym_variable] = ACTIONS(19),
  },
  [17] = {
    [sym__statement] = STATE(12),
    [sym_assign] = STATE(113),
    [sym_assert] = STATE(113),
    [sym_assert_with_bound] = STATE(113),
    [sym_if] = STATE(113),
    [sym_do] = STATE(113),
    [sym_spec] = STATE(113),
    [aux_sym_source_file_repeat2] = STATE(12),
    [sym_skip] = ACTIONS(81),
    [sym_abort] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(49),
  },
  [18] = {
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(117),
    [sym_assert] = STATE(117),
    [sym_assert_with_bound] = STATE(117),
    [sym_if] = STATE(117),
    [sym_do] = STATE(117),
    [sym_spec] = STATE(117),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_skip] = ACTIONS(9),
    [sym_abort] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [19] = {
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(117),
    [sym_assert] = STATE(117),
    [sym_assert_with_bound] = STATE(117),
    [sym_if] = STATE(117),
    [sym_do] = STATE(117),
    [sym_spec] = STATE(117),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_skip] = ACTIONS(87),
    [sym_abort] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(57),
    [anon_sym_do] = ACTIONS(60),
    [anon_sym_LBRACE_BANG] = ACTIONS(65),
    [sym_variable] = ACTIONS(68),
  },
  [20] = {
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(117),
    [sym_assert] = STATE(117),
    [sym_assert_with_bound] = STATE(117),
    [sym_if] = STATE(117),
    [sym_do] = STATE(117),
    [sym_spec] = STATE(117),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_skip] = ACTIONS(9),
    [sym_abort] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [21] = {
    [sym__statement] = STATE(17),
    [sym_assign] = STATE(113),
    [sym_assert] = STATE(113),
    [sym_assert_with_bound] = STATE(113),
    [sym_if] = STATE(113),
    [sym_do] = STATE(113),
    [sym_spec] = STATE(113),
    [aux_sym_source_file_repeat2] = STATE(17),
    [sym_skip] = ACTIONS(81),
    [sym_abort] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [22] = {
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_BANG_EQ] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(92),
  },
  [23] = {
    [sym__statement] = STATE(13),
    [sym_assign] = STATE(116),
    [sym_assert] = STATE(116),
    [sym_assert_with_bound] = STATE(116),
    [sym_if] = STATE(116),
    [sym_do] = STATE(116),
    [sym_spec] = STATE(116),
    [aux_sym_source_file_repeat2] = STATE(13),
    [sym_skip] = ACTIONS(76),
    [sym_abort] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [24] = {
    [sym__statement] = STATE(10),
    [sym_assign] = STATE(118),
    [sym_assert] = STATE(118),
    [sym_assert_with_bound] = STATE(118),
    [sym_if] = STATE(118),
    [sym_do] = STATE(118),
    [sym_spec] = STATE(118),
    [aux_sym_source_file_repeat2] = STATE(10),
    [sym_skip] = ACTIONS(45),
    [sym_abort] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [25] = {
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_BANG_EQ] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(96),
    [anon_sym_DASH_GT] = ACTIONS(96),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_BANG_EQ] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(100),
    [anon_sym_DASH_GT] = ACTIONS(100),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_BANG_EQ] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(110),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [anon_sym_DASH_GT] = ACTIONS(104),
  },
  [28] = {
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_BANG_EQ] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_DASH_GT] = ACTIONS(112),
  },
  [29] = {
    [sym__declaration] = STATE(29),
    [sym_variable_declaration] = STATE(111),
    [sym_constant_declaration] = STATE(111),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_var] = ACTIONS(118),
    [anon_sym_con] = ACTIONS(121),
    [sym_skip] = ACTIONS(124),
    [sym_abort] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_if] = ACTIONS(124),
    [anon_sym_do] = ACTIONS(124),
    [anon_sym_LBRACE_BANG] = ACTIONS(116),
    [sym_variable] = ACTIONS(124),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_DASH_GT] = ACTIONS(126),
  },
  [31] = {
    [sym__expr] = STATE(68),
    [sym_mul] = STATE(68),
    [sym_div] = STATE(68),
    [sym_add] = STATE(68),
    [sym_sub] = STATE(68),
    [sym__term] = STATE(68),
    [sym_constant] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_variable] = ACTIONS(132),
    [aux_sym_constant_token1] = ACTIONS(134),
    [sym_integer] = ACTIONS(132),
  },
  [32] = {
    [sym__expr] = STATE(65),
    [sym_mul] = STATE(65),
    [sym_div] = STATE(65),
    [sym_add] = STATE(65),
    [sym_sub] = STATE(65),
    [sym__term] = STATE(65),
    [sym_constant] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_variable] = ACTIONS(136),
    [aux_sym_constant_token1] = ACTIONS(134),
    [sym_integer] = ACTIONS(136),
  },
  [33] = {
    [sym__expr] = STATE(60),
    [sym_mul] = STATE(60),
    [sym_div] = STATE(60),
    [sym_add] = STATE(60),
    [sym_sub] = STATE(60),
    [sym__term] = STATE(60),
    [sym_constant] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(140),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(140),
  },
  [34] = {
    [sym__expr] = STATE(66),
    [sym_mul] = STATE(66),
    [sym_div] = STATE(66),
    [sym_add] = STATE(66),
    [sym_sub] = STATE(66),
    [sym__term] = STATE(66),
    [sym_constant] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(144),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(144),
  },
  [35] = {
    [sym__expr] = STATE(72),
    [sym_mul] = STATE(72),
    [sym_div] = STATE(72),
    [sym_add] = STATE(72),
    [sym_sub] = STATE(72),
    [sym__term] = STATE(72),
    [sym_constant] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(146),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(146),
  },
  [36] = {
    [sym__expr] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym_constant] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(148),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(148),
  },
  [37] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym_constant] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(150),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(150),
  },
  [38] = {
    [sym__expr] = STATE(58),
    [sym_mul] = STATE(58),
    [sym_div] = STATE(58),
    [sym_add] = STATE(58),
    [sym_sub] = STATE(58),
    [sym__term] = STATE(58),
    [sym_constant] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(152),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(152),
  },
  [39] = {
    [sym__expr] = STATE(69),
    [sym_mul] = STATE(69),
    [sym_div] = STATE(69),
    [sym_add] = STATE(69),
    [sym_sub] = STATE(69),
    [sym__term] = STATE(69),
    [sym_constant] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_variable] = ACTIONS(154),
    [aux_sym_constant_token1] = ACTIONS(134),
    [sym_integer] = ACTIONS(154),
  },
  [40] = {
    [sym__expr] = STATE(55),
    [sym_mul] = STATE(55),
    [sym_div] = STATE(55),
    [sym_add] = STATE(55),
    [sym_sub] = STATE(55),
    [sym__term] = STATE(55),
    [sym_constant] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(156),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(156),
  },
  [41] = {
    [sym__expr] = STATE(67),
    [sym_mul] = STATE(67),
    [sym_div] = STATE(67),
    [sym_add] = STATE(67),
    [sym_sub] = STATE(67),
    [sym__term] = STATE(67),
    [sym_constant] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_variable] = ACTIONS(158),
    [aux_sym_constant_token1] = ACTIONS(134),
    [sym_integer] = ACTIONS(158),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_BANG_EQ] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(176),
  },
  [43] = {
    [sym__expr] = STATE(63),
    [sym_mul] = STATE(63),
    [sym_div] = STATE(63),
    [sym_add] = STATE(63),
    [sym_sub] = STATE(63),
    [sym__term] = STATE(63),
    [sym_constant] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_variable] = ACTIONS(178),
    [aux_sym_constant_token1] = ACTIONS(134),
    [sym_integer] = ACTIONS(178),
  },
  [44] = {
    [sym__expr] = STATE(25),
    [sym_mul] = STATE(25),
    [sym_div] = STATE(25),
    [sym_add] = STATE(25),
    [sym_sub] = STATE(25),
    [sym__term] = STATE(25),
    [sym_constant] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(180),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(180),
  },
  [45] = {
    [sym__expr] = STATE(26),
    [sym_mul] = STATE(26),
    [sym_div] = STATE(26),
    [sym_add] = STATE(26),
    [sym_sub] = STATE(26),
    [sym__term] = STATE(26),
    [sym_constant] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(182),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(182),
  },
  [46] = {
    [sym__expr] = STATE(27),
    [sym_mul] = STATE(27),
    [sym_div] = STATE(27),
    [sym_add] = STATE(27),
    [sym_sub] = STATE(27),
    [sym__term] = STATE(27),
    [sym_constant] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(184),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(184),
  },
  [47] = {
    [sym__expr] = STATE(28),
    [sym_mul] = STATE(28),
    [sym_div] = STATE(28),
    [sym_add] = STATE(28),
    [sym_sub] = STATE(28),
    [sym__term] = STATE(28),
    [sym_constant] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(186),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(186),
  },
  [48] = {
    [sym__expr] = STATE(57),
    [sym_mul] = STATE(57),
    [sym_div] = STATE(57),
    [sym_add] = STATE(57),
    [sym_sub] = STATE(57),
    [sym__term] = STATE(57),
    [sym_constant] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(188),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(188),
  },
  [49] = {
    [sym__expr] = STATE(56),
    [sym_mul] = STATE(56),
    [sym_div] = STATE(56),
    [sym_add] = STATE(56),
    [sym_sub] = STATE(56),
    [sym__term] = STATE(56),
    [sym_constant] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_variable] = ACTIONS(190),
    [aux_sym_constant_token1] = ACTIONS(142),
    [sym_integer] = ACTIONS(190),
  },
  [50] = {
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_BANG_EQ] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(176),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_var] = ACTIONS(194),
    [anon_sym_con] = ACTIONS(194),
    [sym_skip] = ACTIONS(194),
    [sym_abort] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_if] = ACTIONS(194),
    [anon_sym_do] = ACTIONS(194),
    [anon_sym_LBRACE_BANG] = ACTIONS(192),
    [sym_variable] = ACTIONS(194),
  },
  [52] = {
    [sym_skip] = ACTIONS(196),
    [sym_abort] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_if] = ACTIONS(196),
    [anon_sym_do] = ACTIONS(196),
    [anon_sym_od] = ACTIONS(196),
    [anon_sym_LBRACE_BANG] = ACTIONS(198),
    [sym_variable] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(198),
  },
  [53] = {
    [sym_skip] = ACTIONS(196),
    [sym_abort] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_if] = ACTIONS(196),
    [anon_sym_do] = ACTIONS(196),
    [anon_sym_LBRACE_BANG] = ACTIONS(198),
    [anon_sym_BANG_RBRACE] = ACTIONS(198),
    [sym_variable] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(198),
  },
  [54] = {
    [sym_skip] = ACTIONS(196),
    [sym_abort] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_if] = ACTIONS(196),
    [anon_sym_fi] = ACTIONS(196),
    [anon_sym_do] = ACTIONS(196),
    [anon_sym_LBRACE_BANG] = ACTIONS(198),
    [sym_variable] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(198),
  },
  [55] = {
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_DASH_GT] = ACTIONS(200),
  },
  [56] = {
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_DASH_GT] = ACTIONS(204),
  },
  [57] = {
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_DASH_GT] = ACTIONS(206),
  },
  [58] = {
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_DASH_GT] = ACTIONS(208),
  },
  [59] = {
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_DASH_GT] = ACTIONS(210),
  },
  [60] = {
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_DASH_GT] = ACTIONS(212),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_skip] = ACTIONS(196),
    [sym_abort] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_if] = ACTIONS(196),
    [anon_sym_do] = ACTIONS(196),
    [anon_sym_LBRACE_BANG] = ACTIONS(198),
    [sym_variable] = ACTIONS(196),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(214),
    [sym_variable] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(216),
    [sym_integer] = ACTIONS(214),
    [anon_sym_True] = ACTIONS(216),
    [anon_sym_False] = ACTIONS(216),
  },
  [63] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym__newline] = ACTIONS(112),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(164),
  },
  [65] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym__newline] = ACTIONS(228),
  },
  [66] = {
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(164),
  },
  [67] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [68] = {
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [sym__newline] = ACTIONS(100),
  },
  [69] = {
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
  },
  [70] = {
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [sym__newline] = ACTIONS(126),
  },
  [71] = {
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [72] = {
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(164),
  },
  [73] = {
    [sym_constant] = STATE(81),
    [sym__constant_list] = STATE(100),
    [aux_sym__constant_list_repeat1] = STATE(78),
    [aux_sym_constant_token1] = ACTIONS(142),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_DASH_GT] = ACTIONS(232),
  },
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_DASH_GT] = ACTIONS(234),
  },
  [76] = {
    [anon_sym_fi] = ACTIONS(236),
    [anon_sym_od] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(238),
  },
  [77] = {
    [sym__variable_list] = STATE(109),
    [aux_sym__variable_list_repeat1] = STATE(87),
    [sym_variable] = ACTIONS(240),
  },
  [78] = {
    [sym_constant] = STATE(82),
    [aux_sym__constant_list_repeat1] = STATE(80),
    [aux_sym_constant_token1] = ACTIONS(142),
  },
  [79] = {
    [anon_sym_fi] = ACTIONS(242),
    [anon_sym_od] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(238),
  },
  [80] = {
    [sym_constant] = STATE(90),
    [aux_sym__constant_list_repeat1] = STATE(80),
    [aux_sym_constant_token1] = ACTIONS(244),
  },
  [81] = {
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
  },
  [82] = {
    [anon_sym_COLON] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(249),
  },
  [83] = {
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(255),
  },
  [84] = {
    [aux_sym__variable_list_repeat1] = STATE(84),
    [sym_variable] = ACTIONS(257),
  },
  [85] = {
    [anon_sym_COLON] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(255),
  },
  [86] = {
    [sym_type] = STATE(107),
    [aux_sym_constant_token1] = ACTIONS(262),
  },
  [87] = {
    [aux_sym__variable_list_repeat1] = STATE(84),
    [sym_variable] = ACTIONS(264),
  },
  [88] = {
    [sym_type] = STATE(103),
    [aux_sym_constant_token1] = ACTIONS(262),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(268),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(249),
  },
  [91] = {
    [sym__newline] = ACTIONS(270),
  },
  [92] = {
    [sym__newline] = ACTIONS(272),
  },
  [93] = {
    [sym__newline] = ACTIONS(274),
  },
  [94] = {
    [anon_sym_COLON_EQ] = ACTIONS(276),
  },
  [95] = {
    [sym__newline] = ACTIONS(278),
  },
  [96] = {
    [anon_sym_DASH_GT] = ACTIONS(280),
  },
  [97] = {
    [aux_sym_constant_token1] = ACTIONS(282),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(284),
  },
  [99] = {
    [sym__newline] = ACTIONS(286),
  },
  [100] = {
    [anon_sym_COLON] = ACTIONS(288),
  },
  [101] = {
    [anon_sym_bnd] = ACTIONS(290),
  },
  [102] = {
    [anon_sym_od] = ACTIONS(292),
  },
  [103] = {
    [sym__newline] = ACTIONS(294),
  },
  [104] = {
    [anon_sym_COMMA] = ACTIONS(255),
  },
  [105] = {
    [anon_sym_PIPE] = ACTIONS(238),
  },
  [106] = {
    [sym__newline] = ACTIONS(296),
  },
  [107] = {
    [sym__newline] = ACTIONS(298),
  },
  [108] = {
    [anon_sym_COLON] = ACTIONS(300),
  },
  [109] = {
    [anon_sym_COLON] = ACTIONS(302),
  },
  [110] = {
    [sym_variable] = ACTIONS(304),
  },
  [111] = {
    [sym__newline] = ACTIONS(306),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(308),
  },
  [113] = {
    [sym__newline] = ACTIONS(310),
  },
  [114] = {
    [sym__newline] = ACTIONS(312),
  },
  [115] = {
    [sym__newline] = ACTIONS(314),
  },
  [116] = {
    [sym__newline] = ACTIONS(316),
  },
  [117] = {
    [sym__newline] = ACTIONS(318),
  },
  [118] = {
    [sym__newline] = ACTIONS(320),
  },
  [119] = {
    [anon_sym_DASH_GT] = ACTIONS(322),
  },
  [120] = {
    [anon_sym_fi] = ACTIONS(324),
  },
  [121] = {
    [anon_sym_DASH_GT] = ACTIONS(326),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(77),
  [7] = {.count = 1, .reusable = false}, SHIFT(73),
  [9] = {.count = 1, .reusable = false}, SHIFT(117),
  [11] = {.count = 1, .reusable = false}, SHIFT(8),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = false}, SHIFT(3),
  [17] = {.count = 1, .reusable = true}, SHIFT(115),
  [19] = {.count = 1, .reusable = false}, SHIFT(94),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(50),
  [25] = {.count = 1, .reusable = false}, SHIFT(22),
  [27] = {.count = 1, .reusable = false}, SHIFT(75),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(9),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(50),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(22),
  [38] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(75),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(42),
  [45] = {.count = 1, .reusable = false}, SHIFT(118),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_guarded_command, 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_guarded_command, 3),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(118),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [63] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(115),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(94),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [73] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(113),
  [76] = {.count = 1, .reusable = false}, SHIFT(116),
  [78] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(116),
  [81] = {.count = 1, .reusable = false}, SHIFT(113),
  [83] = {.count = 1, .reusable = true}, SHIFT(95),
  [85] = {.count = 1, .reusable = true}, SHIFT(92),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(117),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [106] = {.count = 1, .reusable = true}, SHIFT(44),
  [108] = {.count = 1, .reusable = true}, SHIFT(45),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [124] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [130] = {.count = 1, .reusable = true}, SHIFT(36),
  [132] = {.count = 1, .reusable = true}, SHIFT(68),
  [134] = {.count = 1, .reusable = true}, SHIFT(71),
  [136] = {.count = 1, .reusable = true}, SHIFT(65),
  [138] = {.count = 1, .reusable = true}, SHIFT(34),
  [140] = {.count = 1, .reusable = true}, SHIFT(60),
  [142] = {.count = 1, .reusable = true}, SHIFT(22),
  [144] = {.count = 1, .reusable = true}, SHIFT(66),
  [146] = {.count = 1, .reusable = true}, SHIFT(72),
  [148] = {.count = 1, .reusable = true}, SHIFT(64),
  [150] = {.count = 1, .reusable = true}, SHIFT(59),
  [152] = {.count = 1, .reusable = true}, SHIFT(58),
  [154] = {.count = 1, .reusable = true}, SHIFT(69),
  [156] = {.count = 1, .reusable = true}, SHIFT(55),
  [158] = {.count = 1, .reusable = true}, SHIFT(67),
  [160] = {.count = 1, .reusable = true}, SHIFT(30),
  [162] = {.count = 1, .reusable = true}, SHIFT(46),
  [164] = {.count = 1, .reusable = true}, SHIFT(47),
  [166] = {.count = 1, .reusable = true}, SHIFT(48),
  [168] = {.count = 1, .reusable = true}, SHIFT(49),
  [170] = {.count = 1, .reusable = false}, SHIFT(40),
  [172] = {.count = 1, .reusable = true}, SHIFT(38),
  [174] = {.count = 1, .reusable = false}, SHIFT(37),
  [176] = {.count = 1, .reusable = true}, SHIFT(33),
  [178] = {.count = 1, .reusable = true}, SHIFT(63),
  [180] = {.count = 1, .reusable = true}, SHIFT(25),
  [182] = {.count = 1, .reusable = true}, SHIFT(26),
  [184] = {.count = 1, .reusable = true}, SHIFT(27),
  [186] = {.count = 1, .reusable = true}, SHIFT(28),
  [188] = {.count = 1, .reusable = true}, SHIFT(57),
  [190] = {.count = 1, .reusable = true}, SHIFT(56),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym__declaration, 2),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym__declaration, 2),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [202] = {.count = 1, .reusable = false}, SHIFT(47),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [214] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [216] = {.count = 1, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [218] = {.count = 1, .reusable = true}, SHIFT(39),
  [220] = {.count = 1, .reusable = true}, SHIFT(31),
  [222] = {.count = 1, .reusable = true}, SHIFT(70),
  [224] = {.count = 1, .reusable = true}, SHIFT(41),
  [226] = {.count = 1, .reusable = true}, SHIFT(43),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [230] = {.count = 1, .reusable = true}, SHIFT(114),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__pred, 3),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(62),
  [240] = {.count = 1, .reusable = true}, SHIFT(83),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 1),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(22),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [249] = {.count = 1, .reusable = true}, SHIFT(97),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [255] = {.count = 1, .reusable = true}, SHIFT(110),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(104),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [262] = {.count = 1, .reusable = true}, SHIFT(93),
  [264] = {.count = 1, .reusable = true}, SHIFT(85),
  [266] = {.count = 1, .reusable = true}, SHIFT(99),
  [268] = {.count = 1, .reusable = true}, SHIFT(101),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 4),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [276] = {.count = 1, .reusable = true}, SHIFT(32),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 3),
  [280] = {.count = 1, .reusable = true}, SHIFT(23),
  [282] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [284] = {.count = 1, .reusable = true}, SHIFT(74),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_assert, 3),
  [288] = {.count = 1, .reusable = true}, SHIFT(88),
  [290] = {.count = 1, .reusable = true}, SHIFT(108),
  [292] = {.count = 1, .reusable = true}, SHIFT(106),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [300] = {.count = 1, .reusable = true}, SHIFT(35),
  [302] = {.count = 1, .reusable = true}, SHIFT(86),
  [304] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [306] = {.count = 1, .reusable = true}, SHIFT(51),
  [308] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [310] = {.count = 1, .reusable = true}, SHIFT(53),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_assert_with_bound, 7),
  [314] = {.count = 1, .reusable = true}, SHIFT(15),
  [316] = {.count = 1, .reusable = true}, SHIFT(54),
  [318] = {.count = 1, .reusable = true}, SHIFT(61),
  [320] = {.count = 1, .reusable = true}, SHIFT(52),
  [322] = {.count = 1, .reusable = true}, SHIFT(24),
  [324] = {.count = 1, .reusable = true}, SHIFT(91),
  [326] = {.count = 1, .reusable = true}, SHIFT(21),
};

void *tree_sitter_GCL_external_scanner_create(void);
void tree_sitter_GCL_external_scanner_destroy(void *);
bool tree_sitter_GCL_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_GCL_external_scanner_serialize(void *, char *);
void tree_sitter_GCL_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_GCL_external_scanner_create,
      tree_sitter_GCL_external_scanner_destroy,
      tree_sitter_GCL_external_scanner_scan,
      tree_sitter_GCL_external_scanner_serialize,
      tree_sitter_GCL_external_scanner_deserialize,
    },
  };
  return &language;
}
