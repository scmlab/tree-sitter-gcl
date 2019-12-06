#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 162
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_if = 9,
  anon_sym_fi = 10,
  anon_sym_do = 11,
  anon_sym_od = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_GT = 21,
  anon_sym_GT_EQ = 22,
  anon_sym_LT = 23,
  anon_sym_LT_EQ = 24,
  sym_variable = 25,
  aux_sym_constant_token1 = 26,
  sym_integer = 27,
  anon_sym_True = 28,
  anon_sym_False = 29,
  anon_sym_COMMA = 30,
  anon_sym_DASH_GT = 31,
  anon_sym_PIPE = 32,
  sym_source_file = 33,
  sym__declaration = 34,
  sym_variable_declaration = 35,
  sym_constant_declaration = 36,
  sym__statement = 37,
  sym_assign = 38,
  sym_assert = 39,
  sym_if = 40,
  sym_do = 41,
  sym__expr = 42,
  sym_mul = 43,
  sym_div = 44,
  sym_add = 45,
  sym_sub = 46,
  sym__term = 47,
  sym__pred = 48,
  sym_eq = 49,
  sym_neq = 50,
  sym_gt = 51,
  sym_gte = 52,
  sym_lt = 53,
  sym_lte = 54,
  sym_constant = 55,
  sym_type = 56,
  sym_boolean = 57,
  sym__variable_list = 58,
  sym__constant_list = 59,
  sym_guarded_command = 60,
  sym__guarded_command_list = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_source_file_repeat2 = 63,
  aux_sym__variable_list_repeat1 = 64,
  aux_sym__constant_list_repeat1 = 65,
  aux_sym__guarded_command_list_repeat1 = 66,
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
  [anon_sym_if] = "if",
  [anon_sym_fi] = "fi",
  [anon_sym_do] = "do",
  [anon_sym_od] = "od",
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
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_PIPE] = "|",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym__statement] = "_statement",
  [sym_assign] = "assign",
  [sym_assert] = "assert",
  [sym_if] = "if",
  [sym_do] = "do",
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
  [anon_sym_COMMA] = {
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
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_do] = {
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
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 'v') ADVANCE(43);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(67);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 'v') ADVANCE(43);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_con);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_skip);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_abort);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_od);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_od);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'k') ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_fi] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_od] = ACTIONS(1),
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
    [sym_variable] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(159),
    [sym__declaration] = STATE(24),
    [sym_variable_declaration] = STATE(24),
    [sym_constant_declaration] = STATE(24),
    [sym__statement] = STATE(32),
    [sym_assign] = STATE(32),
    [sym_assert] = STATE(32),
    [sym_if] = STATE(32),
    [sym_do] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(9),
    [sym_abort] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
  },
  [2] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(153),
    [sym_eq] = STATE(153),
    [sym_neq] = STATE(153),
    [sym_gt] = STATE(153),
    [sym_gte] = STATE(153),
    [sym_lt] = STATE(153),
    [sym_lte] = STATE(153),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(153),
    [sym_guarded_command] = STATE(119),
    [sym__guarded_command_list] = STATE(142),
    [aux_sym__guarded_command_list_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [3] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(153),
    [sym_eq] = STATE(153),
    [sym_neq] = STATE(153),
    [sym_gt] = STATE(153),
    [sym_gte] = STATE(153),
    [sym_lt] = STATE(153),
    [sym_lte] = STATE(153),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(153),
    [sym_guarded_command] = STATE(119),
    [sym__guarded_command_list] = STATE(137),
    [aux_sym__guarded_command_list_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [4] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(161),
    [sym_eq] = STATE(161),
    [sym_neq] = STATE(161),
    [sym_gt] = STATE(161),
    [sym_gte] = STATE(161),
    [sym_lt] = STATE(161),
    [sym_lte] = STATE(161),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(161),
    [sym_guarded_command] = STATE(119),
    [sym__guarded_command_list] = STATE(135),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [5] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(161),
    [sym_eq] = STATE(161),
    [sym_neq] = STATE(161),
    [sym_gt] = STATE(161),
    [sym_gte] = STATE(161),
    [sym_lt] = STATE(161),
    [sym_lte] = STATE(161),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(161),
    [sym_guarded_command] = STATE(119),
    [sym__guarded_command_list] = STATE(155),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [6] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(153),
    [sym_eq] = STATE(153),
    [sym_neq] = STATE(153),
    [sym_gt] = STATE(153),
    [sym_gte] = STATE(153),
    [sym_lt] = STATE(153),
    [sym_lte] = STATE(153),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(153),
    [sym_guarded_command] = STATE(119),
    [sym__guarded_command_list] = STATE(157),
    [aux_sym__guarded_command_list_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [7] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(153),
    [sym_eq] = STATE(153),
    [sym_neq] = STATE(153),
    [sym_gt] = STATE(153),
    [sym_gte] = STATE(153),
    [sym_lt] = STATE(153),
    [sym_lte] = STATE(153),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(153),
    [sym_guarded_command] = STATE(119),
    [sym__guarded_command_list] = STATE(148),
    [aux_sym__guarded_command_list_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [8] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(161),
    [sym_eq] = STATE(161),
    [sym_neq] = STATE(161),
    [sym_gt] = STATE(161),
    [sym_gte] = STATE(161),
    [sym_lt] = STATE(161),
    [sym_lte] = STATE(161),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(161),
    [sym_guarded_command] = STATE(119),
    [sym__guarded_command_list] = STATE(136),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [9] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(161),
    [sym_eq] = STATE(161),
    [sym_neq] = STATE(161),
    [sym_gt] = STATE(161),
    [sym_gte] = STATE(161),
    [sym_lt] = STATE(161),
    [sym_lte] = STATE(161),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(161),
    [sym_guarded_command] = STATE(119),
    [sym__guarded_command_list] = STATE(141),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [10] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(158),
    [sym_eq] = STATE(158),
    [sym_neq] = STATE(158),
    [sym_gt] = STATE(158),
    [sym_gte] = STATE(158),
    [sym_lt] = STATE(158),
    [sym_lte] = STATE(158),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(158),
    [sym_guarded_command] = STATE(138),
    [aux_sym__guarded_command_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_variable] = ACTIONS(30),
    [aux_sym_constant_token1] = ACTIONS(33),
    [sym_integer] = ACTIONS(30),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
  },
  [11] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(153),
    [sym_eq] = STATE(153),
    [sym_neq] = STATE(153),
    [sym_gt] = STATE(153),
    [sym_gte] = STATE(153),
    [sym_lt] = STATE(153),
    [sym_lte] = STATE(153),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(153),
    [sym_guarded_command] = STATE(120),
    [aux_sym__guarded_command_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [12] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(161),
    [sym_eq] = STATE(161),
    [sym_neq] = STATE(161),
    [sym_gt] = STATE(161),
    [sym_gte] = STATE(161),
    [sym_lt] = STATE(161),
    [sym_lte] = STATE(161),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(161),
    [sym_guarded_command] = STATE(120),
    [aux_sym__guarded_command_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [sym_skip] = ACTIONS(41),
    [sym_abort] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [sym_variable] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_DASH_GT] = ACTIONS(39),
  },
  [14] = {
    [sym__expr] = STATE(90),
    [sym_mul] = STATE(90),
    [sym_div] = STATE(90),
    [sym_add] = STATE(90),
    [sym_sub] = STATE(90),
    [sym__term] = STATE(90),
    [sym__pred] = STATE(151),
    [sym_eq] = STATE(151),
    [sym_neq] = STATE(151),
    [sym_gt] = STATE(151),
    [sym_gte] = STATE(151),
    [sym_lt] = STATE(151),
    [sym_lte] = STATE(151),
    [sym_constant] = STATE(90),
    [sym_boolean] = STATE(151),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(43),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [15] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(146),
    [sym_eq] = STATE(146),
    [sym_neq] = STATE(146),
    [sym_gt] = STATE(146),
    [sym_gte] = STATE(146),
    [sym_lt] = STATE(146),
    [sym_lte] = STATE(146),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(146),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [16] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(140),
    [sym_eq] = STATE(140),
    [sym_neq] = STATE(140),
    [sym_gt] = STATE(140),
    [sym_gte] = STATE(140),
    [sym_lt] = STATE(140),
    [sym_lte] = STATE(140),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [17] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(134),
    [sym_eq] = STATE(134),
    [sym_neq] = STATE(134),
    [sym_gt] = STATE(134),
    [sym_gte] = STATE(134),
    [sym_lt] = STATE(134),
    [sym_lte] = STATE(134),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(134),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [18] = {
    [sym__expr] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym__pred] = STATE(147),
    [sym_eq] = STATE(147),
    [sym_neq] = STATE(147),
    [sym_gt] = STATE(147),
    [sym_gte] = STATE(147),
    [sym_lt] = STATE(147),
    [sym_lte] = STATE(147),
    [sym_constant] = STATE(91),
    [sym_boolean] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [anon_sym_DASH_GT] = ACTIONS(45),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_skip] = ACTIONS(51),
    [sym_abort] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [anon_sym_DASH_GT] = ACTIONS(49),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_BANG_EQ] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_DASH_GT] = ACTIONS(53),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_skip] = ACTIONS(59),
    [sym_abort] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(57),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_skip] = ACTIONS(67),
    [sym_abort] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(65),
  },
  [24] = {
    [sym__declaration] = STATE(29),
    [sym_variable_declaration] = STATE(29),
    [sym_constant_declaration] = STATE(29),
    [sym__statement] = STATE(33),
    [sym_assign] = STATE(33),
    [sym_assert] = STATE(33),
    [sym_if] = STATE(33),
    [sym_do] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(71),
    [sym_abort] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
  },
  [25] = {
    [sym__statement] = STATE(27),
    [sym_assign] = STATE(27),
    [sym_assert] = STATE(27),
    [sym_if] = STATE(27),
    [sym_do] = STATE(27),
    [aux_sym_source_file_repeat2] = STATE(27),
    [sym_skip] = ACTIONS(73),
    [sym_abort] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_do] = ACTIONS(79),
    [anon_sym_od] = ACTIONS(81),
    [sym_variable] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
  },
  [26] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [sym_skip] = ACTIONS(87),
    [sym_abort] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_fi] = ACTIONS(81),
    [anon_sym_do] = ACTIONS(93),
    [sym_variable] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(85),
  },
  [27] = {
    [sym__statement] = STATE(27),
    [sym_assign] = STATE(27),
    [sym_assert] = STATE(27),
    [sym_if] = STATE(27),
    [sym_do] = STATE(27),
    [aux_sym_source_file_repeat2] = STATE(27),
    [sym_skip] = ACTIONS(97),
    [sym_abort] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_do] = ACTIONS(106),
    [anon_sym_od] = ACTIONS(109),
    [sym_variable] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(114),
  },
  [28] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [sym_skip] = ACTIONS(116),
    [sym_abort] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_fi] = ACTIONS(109),
    [anon_sym_do] = ACTIONS(125),
    [sym_variable] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(114),
  },
  [29] = {
    [sym__declaration] = STATE(29),
    [sym_variable_declaration] = STATE(29),
    [sym_constant_declaration] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_var] = ACTIONS(133),
    [anon_sym_con] = ACTIONS(136),
    [sym_skip] = ACTIONS(139),
    [sym_abort] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_do] = ACTIONS(139),
    [sym_variable] = ACTIONS(139),
  },
  [30] = {
    [sym__statement] = STATE(30),
    [sym_assign] = STATE(30),
    [sym_assert] = STATE(30),
    [sym_if] = STATE(30),
    [sym_do] = STATE(30),
    [aux_sym_source_file_repeat2] = STATE(30),
    [sym_skip] = ACTIONS(141),
    [sym_abort] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_do] = ACTIONS(150),
    [sym_variable] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(114),
  },
  [31] = {
    [sym__statement] = STATE(30),
    [sym_assign] = STATE(30),
    [sym_assert] = STATE(30),
    [sym_if] = STATE(30),
    [sym_do] = STATE(30),
    [aux_sym_source_file_repeat2] = STATE(30),
    [sym_skip] = ACTIONS(156),
    [sym_abort] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_do] = ACTIONS(162),
    [sym_variable] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(85),
  },
  [32] = {
    [sym__statement] = STATE(34),
    [sym_assign] = STATE(34),
    [sym_assert] = STATE(34),
    [sym_if] = STATE(34),
    [sym_do] = STATE(34),
    [aux_sym_source_file_repeat2] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_skip] = ACTIONS(166),
    [sym_abort] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
  },
  [33] = {
    [sym__statement] = STATE(34),
    [sym_assign] = STATE(34),
    [sym_assert] = STATE(34),
    [sym_if] = STATE(34),
    [sym_do] = STATE(34),
    [aux_sym_source_file_repeat2] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(168),
    [sym_skip] = ACTIONS(166),
    [sym_abort] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
  },
  [34] = {
    [sym__statement] = STATE(34),
    [sym_assign] = STATE(34),
    [sym_assert] = STATE(34),
    [sym_if] = STATE(34),
    [sym_do] = STATE(34),
    [aux_sym_source_file_repeat2] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_skip] = ACTIONS(170),
    [sym_abort] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(176),
    [anon_sym_do] = ACTIONS(179),
    [sym_variable] = ACTIONS(182),
  },
  [35] = {
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_od] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
  },
  [36] = {
    [sym_skip] = ACTIONS(67),
    [sym_abort] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_fi] = ACTIONS(67),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [37] = {
    [sym_skip] = ACTIONS(59),
    [sym_abort] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_fi] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
  },
  [38] = {
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_fi] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
  },
  [39] = {
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_fi] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(45),
  },
  [40] = {
    [sym_skip] = ACTIONS(51),
    [sym_abort] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_fi] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(49),
  },
  [41] = {
    [sym_skip] = ACTIONS(189),
    [sym_abort] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_fi] = ACTIONS(189),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(195),
    [sym_variable] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(191),
  },
  [42] = {
    [sym__statement] = STATE(31),
    [sym_assign] = STATE(31),
    [sym_assert] = STATE(31),
    [sym_if] = STATE(31),
    [sym_do] = STATE(31),
    [aux_sym_source_file_repeat2] = STATE(31),
    [sym_skip] = ACTIONS(197),
    [sym_abort] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_do] = ACTIONS(162),
    [sym_variable] = ACTIONS(164),
  },
  [43] = {
    [sym_skip] = ACTIONS(41),
    [sym_abort] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(41),
    [anon_sym_od] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_variable] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(39),
  },
  [44] = {
    [sym_skip] = ACTIONS(189),
    [sym_abort] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_od] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(205),
    [sym_variable] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(191),
  },
  [45] = {
    [sym_skip] = ACTIONS(41),
    [sym_abort] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_fi] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_variable] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(39),
  },
  [46] = {
    [sym_skip] = ACTIONS(51),
    [sym_abort] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_od] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(49),
  },
  [47] = {
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_od] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(45),
  },
  [48] = {
    [sym__statement] = STATE(26),
    [sym_assign] = STATE(26),
    [sym_assert] = STATE(26),
    [sym_if] = STATE(26),
    [sym_do] = STATE(26),
    [aux_sym_source_file_repeat2] = STATE(26),
    [sym_skip] = ACTIONS(207),
    [sym_abort] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_do] = ACTIONS(93),
    [sym_variable] = ACTIONS(95),
  },
  [49] = {
    [sym_skip] = ACTIONS(59),
    [sym_abort] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_od] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
  },
  [50] = {
    [sym_skip] = ACTIONS(67),
    [sym_abort] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_od] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [51] = {
    [sym__statement] = STATE(25),
    [sym_assign] = STATE(25),
    [sym_assert] = STATE(25),
    [sym_if] = STATE(25),
    [sym_do] = STATE(25),
    [aux_sym_source_file_repeat2] = STATE(25),
    [sym_skip] = ACTIONS(209),
    [sym_abort] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_do] = ACTIONS(79),
    [sym_variable] = ACTIONS(83),
  },
  [52] = {
    [sym__expr] = STATE(41),
    [sym_mul] = STATE(41),
    [sym_div] = STATE(41),
    [sym_add] = STATE(41),
    [sym_sub] = STATE(41),
    [sym__term] = STATE(41),
    [sym_constant] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(213),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(213),
  },
  [53] = {
    [sym__expr] = STATE(67),
    [sym_mul] = STATE(67),
    [sym_div] = STATE(67),
    [sym_add] = STATE(67),
    [sym_sub] = STATE(67),
    [sym__term] = STATE(67),
    [sym_constant] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(219),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(219),
  },
  [54] = {
    [sym__expr] = STATE(23),
    [sym_mul] = STATE(23),
    [sym_div] = STATE(23),
    [sym_add] = STATE(23),
    [sym_sub] = STATE(23),
    [sym__term] = STATE(23),
    [sym_constant] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(223),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(223),
  },
  [55] = {
    [sym__expr] = STATE(108),
    [sym_mul] = STATE(108),
    [sym_div] = STATE(108),
    [sym_add] = STATE(108),
    [sym_sub] = STATE(108),
    [sym__term] = STATE(108),
    [sym_constant] = STATE(108),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(225),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(225),
  },
  [56] = {
    [sym__expr] = STATE(104),
    [sym_mul] = STATE(104),
    [sym_div] = STATE(104),
    [sym_add] = STATE(104),
    [sym_sub] = STATE(104),
    [sym__term] = STATE(104),
    [sym_constant] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(227),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(227),
  },
  [57] = {
    [sym__expr] = STATE(101),
    [sym_mul] = STATE(101),
    [sym_div] = STATE(101),
    [sym_add] = STATE(101),
    [sym_sub] = STATE(101),
    [sym__term] = STATE(101),
    [sym_constant] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(229),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(229),
  },
  [58] = {
    [sym__expr] = STATE(102),
    [sym_mul] = STATE(102),
    [sym_div] = STATE(102),
    [sym_add] = STATE(102),
    [sym_sub] = STATE(102),
    [sym__term] = STATE(102),
    [sym_constant] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(231),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(231),
  },
  [59] = {
    [sym__expr] = STATE(105),
    [sym_mul] = STATE(105),
    [sym_div] = STATE(105),
    [sym_add] = STATE(105),
    [sym_sub] = STATE(105),
    [sym__term] = STATE(105),
    [sym_constant] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(233),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(233),
  },
  [60] = {
    [sym__expr] = STATE(107),
    [sym_mul] = STATE(107),
    [sym_div] = STATE(107),
    [sym_add] = STATE(107),
    [sym_sub] = STATE(107),
    [sym__term] = STATE(107),
    [sym_constant] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(235),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(235),
  },
  [61] = {
    [sym__expr] = STATE(82),
    [sym_mul] = STATE(82),
    [sym_div] = STATE(82),
    [sym_add] = STATE(82),
    [sym_sub] = STATE(82),
    [sym__term] = STATE(82),
    [sym_constant] = STATE(82),
    [anon_sym_LPAREN] = ACTIONS(237),
    [sym_variable] = ACTIONS(239),
    [aux_sym_constant_token1] = ACTIONS(241),
    [sym_integer] = ACTIONS(239),
  },
  [62] = {
    [sym__expr] = STATE(89),
    [sym_mul] = STATE(89),
    [sym_div] = STATE(89),
    [sym_add] = STATE(89),
    [sym_sub] = STATE(89),
    [sym__term] = STATE(89),
    [sym_constant] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(237),
    [sym_variable] = ACTIONS(243),
    [aux_sym_constant_token1] = ACTIONS(241),
    [sym_integer] = ACTIONS(243),
  },
  [63] = {
    [sym__expr] = STATE(72),
    [sym_mul] = STATE(72),
    [sym_div] = STATE(72),
    [sym_add] = STATE(72),
    [sym_sub] = STATE(72),
    [sym__term] = STATE(72),
    [sym_constant] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(237),
    [sym_variable] = ACTIONS(245),
    [aux_sym_constant_token1] = ACTIONS(241),
    [sym_integer] = ACTIONS(245),
  },
  [64] = {
    [sym__expr] = STATE(117),
    [sym_mul] = STATE(117),
    [sym_div] = STATE(117),
    [sym_add] = STATE(117),
    [sym_sub] = STATE(117),
    [sym__term] = STATE(117),
    [sym_constant] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(247),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(247),
  },
  [65] = {
    [sym__expr] = STATE(79),
    [sym_mul] = STATE(79),
    [sym_div] = STATE(79),
    [sym_add] = STATE(79),
    [sym_sub] = STATE(79),
    [sym__term] = STATE(79),
    [sym_constant] = STATE(79),
    [anon_sym_LPAREN] = ACTIONS(237),
    [sym_variable] = ACTIONS(249),
    [aux_sym_constant_token1] = ACTIONS(241),
    [sym_integer] = ACTIONS(249),
  },
  [66] = {
    [sym__expr] = STATE(114),
    [sym_mul] = STATE(114),
    [sym_div] = STATE(114),
    [sym_add] = STATE(114),
    [sym_sub] = STATE(114),
    [sym__term] = STATE(114),
    [sym_constant] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(251),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(251),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_skip] = ACTIONS(189),
    [sym_abort] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(255),
    [sym_variable] = ACTIONS(189),
  },
  [68] = {
    [sym__expr] = STATE(80),
    [sym_mul] = STATE(80),
    [sym_div] = STATE(80),
    [sym_add] = STATE(80),
    [sym_sub] = STATE(80),
    [sym__term] = STATE(80),
    [sym_constant] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(237),
    [sym_variable] = ACTIONS(257),
    [aux_sym_constant_token1] = ACTIONS(241),
    [sym_integer] = ACTIONS(257),
  },
  [69] = {
    [sym_skip] = ACTIONS(41),
    [sym_abort] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_variable] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(39),
  },
  [70] = {
    [sym__expr] = STATE(115),
    [sym_mul] = STATE(115),
    [sym_div] = STATE(115),
    [sym_add] = STATE(115),
    [sym_sub] = STATE(115),
    [sym__term] = STATE(115),
    [sym_constant] = STATE(115),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(259),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(259),
  },
  [71] = {
    [sym_skip] = ACTIONS(51),
    [sym_abort] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(49),
  },
  [72] = {
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(45),
  },
  [73] = {
    [sym__expr] = STATE(116),
    [sym_mul] = STATE(116),
    [sym_div] = STATE(116),
    [sym_add] = STATE(116),
    [sym_sub] = STATE(116),
    [sym__term] = STATE(116),
    [sym_constant] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(261),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(261),
  },
  [74] = {
    [sym__expr] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym__term] = STATE(50),
    [sym_constant] = STATE(50),
    [anon_sym_LPAREN] = ACTIONS(263),
    [sym_variable] = ACTIONS(265),
    [aux_sym_constant_token1] = ACTIONS(267),
    [sym_integer] = ACTIONS(265),
  },
  [75] = {
    [sym__expr] = STATE(49),
    [sym_mul] = STATE(49),
    [sym_div] = STATE(49),
    [sym_add] = STATE(49),
    [sym_sub] = STATE(49),
    [sym__term] = STATE(49),
    [sym_constant] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(263),
    [sym_variable] = ACTIONS(269),
    [aux_sym_constant_token1] = ACTIONS(267),
    [sym_integer] = ACTIONS(269),
  },
  [76] = {
    [sym__expr] = STATE(35),
    [sym_mul] = STATE(35),
    [sym_div] = STATE(35),
    [sym_add] = STATE(35),
    [sym_sub] = STATE(35),
    [sym__term] = STATE(35),
    [sym_constant] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(263),
    [sym_variable] = ACTIONS(271),
    [aux_sym_constant_token1] = ACTIONS(267),
    [sym_integer] = ACTIONS(271),
  },
  [77] = {
    [sym__expr] = STATE(47),
    [sym_mul] = STATE(47),
    [sym_div] = STATE(47),
    [sym_add] = STATE(47),
    [sym_sub] = STATE(47),
    [sym__term] = STATE(47),
    [sym_constant] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(263),
    [sym_variable] = ACTIONS(273),
    [aux_sym_constant_token1] = ACTIONS(267),
    [sym_integer] = ACTIONS(273),
  },
  [78] = {
    [sym__expr] = STATE(44),
    [sym_mul] = STATE(44),
    [sym_div] = STATE(44),
    [sym_add] = STATE(44),
    [sym_sub] = STATE(44),
    [sym__term] = STATE(44),
    [sym_constant] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(263),
    [sym_variable] = ACTIONS(275),
    [aux_sym_constant_token1] = ACTIONS(267),
    [sym_integer] = ACTIONS(275),
  },
  [79] = {
    [sym_skip] = ACTIONS(189),
    [sym_abort] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_variable] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(191),
  },
  [80] = {
    [sym_skip] = ACTIONS(67),
    [sym_abort] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [81] = {
    [sym__expr] = STATE(22),
    [sym_mul] = STATE(22),
    [sym_div] = STATE(22),
    [sym_add] = STATE(22),
    [sym_sub] = STATE(22),
    [sym__term] = STATE(22),
    [sym_constant] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(285),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(285),
  },
  [82] = {
    [sym_skip] = ACTIONS(59),
    [sym_abort] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
  },
  [83] = {
    [sym__expr] = STATE(39),
    [sym_mul] = STATE(39),
    [sym_div] = STATE(39),
    [sym_add] = STATE(39),
    [sym_sub] = STATE(39),
    [sym__term] = STATE(39),
    [sym_constant] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(287),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(287),
  },
  [84] = {
    [sym__expr] = STATE(38),
    [sym_mul] = STATE(38),
    [sym_div] = STATE(38),
    [sym_add] = STATE(38),
    [sym_sub] = STATE(38),
    [sym__term] = STATE(38),
    [sym_constant] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(289),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(289),
  },
  [85] = {
    [sym__expr] = STATE(37),
    [sym_mul] = STATE(37),
    [sym_div] = STATE(37),
    [sym_add] = STATE(37),
    [sym_sub] = STATE(37),
    [sym__term] = STATE(37),
    [sym_constant] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(291),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(291),
  },
  [86] = {
    [sym__expr] = STATE(36),
    [sym_mul] = STATE(36),
    [sym_div] = STATE(36),
    [sym_add] = STATE(36),
    [sym_sub] = STATE(36),
    [sym__term] = STATE(36),
    [sym_constant] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(293),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(293),
  },
  [87] = {
    [sym__expr] = STATE(21),
    [sym_mul] = STATE(21),
    [sym_div] = STATE(21),
    [sym_add] = STATE(21),
    [sym_sub] = STATE(21),
    [sym__term] = STATE(21),
    [sym_constant] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(295),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(295),
  },
  [88] = {
    [sym__expr] = STATE(19),
    [sym_mul] = STATE(19),
    [sym_div] = STATE(19),
    [sym_add] = STATE(19),
    [sym_sub] = STATE(19),
    [sym__term] = STATE(19),
    [sym_constant] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(297),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(297),
  },
  [89] = {
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(311),
  },
  [91] = {
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(311),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_var] = ACTIONS(315),
    [anon_sym_con] = ACTIONS(315),
    [sym_skip] = ACTIONS(315),
    [sym_abort] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_if] = ACTIONS(315),
    [anon_sym_do] = ACTIONS(315),
    [sym_variable] = ACTIONS(315),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_var] = ACTIONS(319),
    [anon_sym_con] = ACTIONS(319),
    [sym_skip] = ACTIONS(319),
    [sym_abort] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_if] = ACTIONS(319),
    [anon_sym_do] = ACTIONS(319),
    [sym_variable] = ACTIONS(319),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_var] = ACTIONS(323),
    [anon_sym_con] = ACTIONS(323),
    [sym_skip] = ACTIONS(323),
    [sym_abort] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_if] = ACTIONS(323),
    [anon_sym_do] = ACTIONS(323),
    [sym_variable] = ACTIONS(323),
  },
  [95] = {
    [sym_skip] = ACTIONS(325),
    [sym_abort] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_if] = ACTIONS(325),
    [anon_sym_fi] = ACTIONS(325),
    [anon_sym_do] = ACTIONS(325),
    [sym_variable] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(327),
  },
  [96] = {
    [sym_skip] = ACTIONS(329),
    [sym_abort] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_if] = ACTIONS(329),
    [anon_sym_fi] = ACTIONS(329),
    [anon_sym_do] = ACTIONS(329),
    [sym_variable] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(331),
  },
  [97] = {
    [sym_skip] = ACTIONS(333),
    [sym_abort] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_if] = ACTIONS(333),
    [anon_sym_fi] = ACTIONS(333),
    [anon_sym_do] = ACTIONS(333),
    [sym_variable] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
  },
  [98] = {
    [sym_skip] = ACTIONS(333),
    [sym_abort] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_if] = ACTIONS(333),
    [anon_sym_do] = ACTIONS(333),
    [anon_sym_od] = ACTIONS(333),
    [sym_variable] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
  },
  [99] = {
    [sym_skip] = ACTIONS(329),
    [sym_abort] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_if] = ACTIONS(329),
    [anon_sym_do] = ACTIONS(329),
    [anon_sym_od] = ACTIONS(329),
    [sym_variable] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(331),
  },
  [100] = {
    [sym_skip] = ACTIONS(325),
    [sym_abort] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_if] = ACTIONS(325),
    [anon_sym_do] = ACTIONS(325),
    [anon_sym_od] = ACTIONS(325),
    [sym_variable] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(327),
  },
  [101] = {
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(337),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(341),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [sym_skip] = ACTIONS(325),
    [sym_abort] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_if] = ACTIONS(325),
    [anon_sym_do] = ACTIONS(325),
    [sym_variable] = ACTIONS(325),
  },
  [104] = {
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(343),
  },
  [105] = {
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(345),
  },
  [106] = {
    [sym_skip] = ACTIONS(325),
    [sym_abort] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_if] = ACTIONS(325),
    [anon_sym_do] = ACTIONS(325),
    [sym_variable] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(327),
  },
  [107] = {
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(347),
  },
  [108] = {
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(349),
  },
  [109] = {
    [sym_skip] = ACTIONS(329),
    [sym_abort] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_if] = ACTIONS(329),
    [anon_sym_do] = ACTIONS(329),
    [sym_variable] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(331),
  },
  [110] = {
    [sym_skip] = ACTIONS(333),
    [sym_abort] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_if] = ACTIONS(333),
    [anon_sym_do] = ACTIONS(333),
    [sym_variable] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [sym_skip] = ACTIONS(333),
    [sym_abort] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_if] = ACTIONS(333),
    [anon_sym_do] = ACTIONS(333),
    [sym_variable] = ACTIONS(333),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_skip] = ACTIONS(329),
    [sym_abort] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_if] = ACTIONS(329),
    [anon_sym_do] = ACTIONS(329),
    [sym_variable] = ACTIONS(329),
  },
  [113] = {
    [anon_sym_LPAREN] = ACTIONS(351),
    [sym_variable] = ACTIONS(351),
    [aux_sym_constant_token1] = ACTIONS(353),
    [sym_integer] = ACTIONS(351),
    [anon_sym_True] = ACTIONS(353),
    [anon_sym_False] = ACTIONS(353),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(255),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(255),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(255),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(255),
  },
  [118] = {
    [sym_constant] = STATE(130),
    [sym__constant_list] = STATE(152),
    [aux_sym__constant_list_repeat1] = STATE(121),
    [aux_sym_constant_token1] = ACTIONS(221),
  },
  [119] = {
    [anon_sym_fi] = ACTIONS(361),
    [anon_sym_od] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(363),
  },
  [120] = {
    [anon_sym_fi] = ACTIONS(365),
    [anon_sym_od] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(363),
  },
  [121] = {
    [sym_constant] = STATE(133),
    [aux_sym__constant_list_repeat1] = STATE(122),
    [aux_sym_constant_token1] = ACTIONS(221),
  },
  [122] = {
    [sym_constant] = STATE(144),
    [aux_sym__constant_list_repeat1] = STATE(122),
    [aux_sym_constant_token1] = ACTIONS(367),
  },
  [123] = {
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_DASH_GT] = ACTIONS(370),
  },
  [124] = {
    [sym__variable_list] = STATE(156),
    [aux_sym__variable_list_repeat1] = STATE(129),
    [sym_variable] = ACTIONS(372),
  },
  [125] = {
    [anon_sym_RBRACE] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_DASH_GT] = ACTIONS(374),
  },
  [126] = {
    [sym_type] = STATE(93),
    [aux_sym_constant_token1] = ACTIONS(376),
  },
  [127] = {
    [anon_sym_COLON] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(380),
  },
  [128] = {
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(380),
  },
  [129] = {
    [aux_sym__variable_list_repeat1] = STATE(131),
    [sym_variable] = ACTIONS(384),
  },
  [130] = {
    [anon_sym_COLON] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(388),
  },
  [131] = {
    [aux_sym__variable_list_repeat1] = STATE(131),
    [sym_variable] = ACTIONS(390),
  },
  [132] = {
    [sym_type] = STATE(94),
    [aux_sym_constant_token1] = ACTIONS(376),
  },
  [133] = {
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(388),
  },
  [134] = {
    [anon_sym_RBRACE] = ACTIONS(395),
  },
  [135] = {
    [anon_sym_fi] = ACTIONS(397),
  },
  [136] = {
    [anon_sym_fi] = ACTIONS(399),
  },
  [137] = {
    [anon_sym_od] = ACTIONS(401),
  },
  [138] = {
    [anon_sym_PIPE] = ACTIONS(363),
  },
  [139] = {
    [anon_sym_COLON_EQ] = ACTIONS(403),
  },
  [140] = {
    [anon_sym_RBRACE] = ACTIONS(405),
  },
  [141] = {
    [anon_sym_fi] = ACTIONS(407),
  },
  [142] = {
    [anon_sym_od] = ACTIONS(409),
  },
  [143] = {
    [sym_variable] = ACTIONS(411),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(388),
  },
  [145] = {
    [anon_sym_COLON_EQ] = ACTIONS(413),
  },
  [146] = {
    [anon_sym_RBRACE] = ACTIONS(415),
  },
  [147] = {
    [anon_sym_RBRACE] = ACTIONS(417),
  },
  [148] = {
    [anon_sym_od] = ACTIONS(419),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(380),
  },
  [150] = {
    [anon_sym_COLON_EQ] = ACTIONS(421),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(423),
  },
  [152] = {
    [anon_sym_COLON] = ACTIONS(425),
  },
  [153] = {
    [anon_sym_DASH_GT] = ACTIONS(427),
  },
  [154] = {
    [aux_sym_constant_token1] = ACTIONS(429),
  },
  [155] = {
    [anon_sym_fi] = ACTIONS(431),
  },
  [156] = {
    [anon_sym_COLON] = ACTIONS(433),
  },
  [157] = {
    [anon_sym_od] = ACTIONS(435),
  },
  [158] = {
    [anon_sym_DASH_GT] = ACTIONS(437),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(439),
  },
  [160] = {
    [anon_sym_COLON_EQ] = ACTIONS(441),
  },
  [161] = {
    [anon_sym_DASH_GT] = ACTIONS(443),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(124),
  [7] = {.count = 1, .reusable = false}, SHIFT(118),
  [9] = {.count = 1, .reusable = false}, SHIFT(32),
  [11] = {.count = 1, .reusable = true}, SHIFT(17),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(160),
  [19] = {.count = 1, .reusable = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, SHIFT(91),
  [23] = {.count = 1, .reusable = false}, SHIFT(13),
  [25] = {.count = 1, .reusable = false}, SHIFT(123),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(91),
  [33] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(13),
  [36] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(123),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(90),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [61] = {.count = 1, .reusable = true}, SHIFT(88),
  [63] = {.count = 1, .reusable = true}, SHIFT(87),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [71] = {.count = 1, .reusable = false}, SHIFT(33),
  [73] = {.count = 1, .reusable = false}, SHIFT(27),
  [75] = {.count = 1, .reusable = true}, SHIFT(16),
  [77] = {.count = 1, .reusable = false}, SHIFT(9),
  [79] = {.count = 1, .reusable = false}, SHIFT(2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_guarded_command, 3),
  [83] = {.count = 1, .reusable = false}, SHIFT(139),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_guarded_command, 3),
  [87] = {.count = 1, .reusable = false}, SHIFT(28),
  [89] = {.count = 1, .reusable = true}, SHIFT(18),
  [91] = {.count = 1, .reusable = false}, SHIFT(8),
  [93] = {.count = 1, .reusable = false}, SHIFT(3),
  [95] = {.count = 1, .reusable = false}, SHIFT(150),
  [97] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(27),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(16),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [109] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [111] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(139),
  [114] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(28),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(18),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(150),
  [131] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [133] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [136] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [141] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(30),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(4),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(145),
  [156] = {.count = 1, .reusable = false}, SHIFT(30),
  [158] = {.count = 1, .reusable = true}, SHIFT(15),
  [160] = {.count = 1, .reusable = false}, SHIFT(4),
  [162] = {.count = 1, .reusable = false}, SHIFT(7),
  [164] = {.count = 1, .reusable = false}, SHIFT(145),
  [166] = {.count = 1, .reusable = false}, SHIFT(34),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(34),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(5),
  [179] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(6),
  [182] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(160),
  [185] = {.count = 1, .reusable = true}, SHIFT(83),
  [187] = {.count = 1, .reusable = true}, SHIFT(84),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [193] = {.count = 1, .reusable = true}, SHIFT(85),
  [195] = {.count = 1, .reusable = true}, SHIFT(86),
  [197] = {.count = 1, .reusable = false}, SHIFT(31),
  [199] = {.count = 1, .reusable = true}, SHIFT(77),
  [201] = {.count = 1, .reusable = true}, SHIFT(76),
  [203] = {.count = 1, .reusable = true}, SHIFT(75),
  [205] = {.count = 1, .reusable = true}, SHIFT(74),
  [207] = {.count = 1, .reusable = false}, SHIFT(26),
  [209] = {.count = 1, .reusable = false}, SHIFT(25),
  [211] = {.count = 1, .reusable = true}, SHIFT(73),
  [213] = {.count = 1, .reusable = true}, SHIFT(41),
  [215] = {.count = 1, .reusable = true}, SHIFT(45),
  [217] = {.count = 1, .reusable = true}, SHIFT(66),
  [219] = {.count = 1, .reusable = true}, SHIFT(67),
  [221] = {.count = 1, .reusable = true}, SHIFT(13),
  [223] = {.count = 1, .reusable = true}, SHIFT(23),
  [225] = {.count = 1, .reusable = true}, SHIFT(108),
  [227] = {.count = 1, .reusable = true}, SHIFT(104),
  [229] = {.count = 1, .reusable = true}, SHIFT(101),
  [231] = {.count = 1, .reusable = true}, SHIFT(102),
  [233] = {.count = 1, .reusable = true}, SHIFT(105),
  [235] = {.count = 1, .reusable = true}, SHIFT(107),
  [237] = {.count = 1, .reusable = true}, SHIFT(64),
  [239] = {.count = 1, .reusable = true}, SHIFT(82),
  [241] = {.count = 1, .reusable = true}, SHIFT(69),
  [243] = {.count = 1, .reusable = true}, SHIFT(89),
  [245] = {.count = 1, .reusable = true}, SHIFT(72),
  [247] = {.count = 1, .reusable = true}, SHIFT(117),
  [249] = {.count = 1, .reusable = true}, SHIFT(79),
  [251] = {.count = 1, .reusable = true}, SHIFT(114),
  [253] = {.count = 1, .reusable = true}, SHIFT(81),
  [255] = {.count = 1, .reusable = true}, SHIFT(54),
  [257] = {.count = 1, .reusable = true}, SHIFT(80),
  [259] = {.count = 1, .reusable = true}, SHIFT(115),
  [261] = {.count = 1, .reusable = true}, SHIFT(116),
  [263] = {.count = 1, .reusable = true}, SHIFT(70),
  [265] = {.count = 1, .reusable = true}, SHIFT(50),
  [267] = {.count = 1, .reusable = true}, SHIFT(43),
  [269] = {.count = 1, .reusable = true}, SHIFT(49),
  [271] = {.count = 1, .reusable = true}, SHIFT(35),
  [273] = {.count = 1, .reusable = true}, SHIFT(47),
  [275] = {.count = 1, .reusable = true}, SHIFT(44),
  [277] = {.count = 1, .reusable = true}, SHIFT(63),
  [279] = {.count = 1, .reusable = true}, SHIFT(62),
  [281] = {.count = 1, .reusable = true}, SHIFT(61),
  [283] = {.count = 1, .reusable = true}, SHIFT(68),
  [285] = {.count = 1, .reusable = true}, SHIFT(22),
  [287] = {.count = 1, .reusable = true}, SHIFT(39),
  [289] = {.count = 1, .reusable = true}, SHIFT(38),
  [291] = {.count = 1, .reusable = true}, SHIFT(37),
  [293] = {.count = 1, .reusable = true}, SHIFT(36),
  [295] = {.count = 1, .reusable = true}, SHIFT(21),
  [297] = {.count = 1, .reusable = true}, SHIFT(19),
  [299] = {.count = 1, .reusable = true}, SHIFT(20),
  [301] = {.count = 1, .reusable = true}, SHIFT(55),
  [303] = {.count = 1, .reusable = true}, SHIFT(56),
  [305] = {.count = 1, .reusable = false}, SHIFT(57),
  [307] = {.count = 1, .reusable = true}, SHIFT(58),
  [309] = {.count = 1, .reusable = false}, SHIFT(59),
  [311] = {.count = 1, .reusable = true}, SHIFT(60),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_variable_declaration, 4),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_constant_declaration, 4),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_assert, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_assert, 3),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_if, 3),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_do, 3),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [339] = {.count = 1, .reusable = false}, SHIFT(54),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [351] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [353] = {.count = 1, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [355] = {.count = 1, .reusable = true}, SHIFT(46),
  [357] = {.count = 1, .reusable = true}, SHIFT(40),
  [359] = {.count = 1, .reusable = true}, SHIFT(71),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 1),
  [363] = {.count = 1, .reusable = true}, SHIFT(113),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 2),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(13),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [372] = {.count = 1, .reusable = true}, SHIFT(127),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym__pred, 3),
  [376] = {.count = 1, .reusable = true}, SHIFT(92),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [380] = {.count = 1, .reusable = true}, SHIFT(143),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [384] = {.count = 1, .reusable = true}, SHIFT(128),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [388] = {.count = 1, .reusable = true}, SHIFT(154),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(149),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [395] = {.count = 1, .reusable = true}, SHIFT(103),
  [397] = {.count = 1, .reusable = true}, SHIFT(109),
  [399] = {.count = 1, .reusable = true}, SHIFT(96),
  [401] = {.count = 1, .reusable = true}, SHIFT(97),
  [403] = {.count = 1, .reusable = true}, SHIFT(78),
  [405] = {.count = 1, .reusable = true}, SHIFT(100),
  [407] = {.count = 1, .reusable = true}, SHIFT(99),
  [409] = {.count = 1, .reusable = true}, SHIFT(98),
  [411] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [413] = {.count = 1, .reusable = true}, SHIFT(65),
  [415] = {.count = 1, .reusable = true}, SHIFT(106),
  [417] = {.count = 1, .reusable = true}, SHIFT(95),
  [419] = {.count = 1, .reusable = true}, SHIFT(110),
  [421] = {.count = 1, .reusable = true}, SHIFT(52),
  [423] = {.count = 1, .reusable = true}, SHIFT(125),
  [425] = {.count = 1, .reusable = true}, SHIFT(132),
  [427] = {.count = 1, .reusable = true}, SHIFT(51),
  [429] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [431] = {.count = 1, .reusable = true}, SHIFT(112),
  [433] = {.count = 1, .reusable = true}, SHIFT(126),
  [435] = {.count = 1, .reusable = true}, SHIFT(111),
  [437] = {.count = 1, .reusable = true}, SHIFT(42),
  [439] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [441] = {.count = 1, .reusable = true}, SHIFT(53),
  [443] = {.count = 1, .reusable = true}, SHIFT(48),
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
