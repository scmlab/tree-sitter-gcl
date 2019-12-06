#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 182
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
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
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_STAR = 17,
  anon_sym_SLASH = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_EQ = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_GT = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_LT = 25,
  anon_sym_LT_EQ = 26,
  sym_variable = 27,
  aux_sym_constant_token1 = 28,
  sym_integer = 29,
  anon_sym_True = 30,
  anon_sym_False = 31,
  anon_sym_DASH_GT = 32,
  anon_sym_PIPE = 33,
  sym_source_file = 34,
  sym__declaration = 35,
  sym_variable_declaration = 36,
  sym_constant_declaration = 37,
  sym__statement = 38,
  sym_assign = 39,
  sym_assert = 40,
  sym_assert_with_bound = 41,
  sym_if = 42,
  sym_do = 43,
  sym__expr = 44,
  sym_mul = 45,
  sym_div = 46,
  sym_add = 47,
  sym_sub = 48,
  sym__term = 49,
  sym__pred = 50,
  sym_eq = 51,
  sym_neq = 52,
  sym_gt = 53,
  sym_gte = 54,
  sym_lt = 55,
  sym_lte = 56,
  sym_constant = 57,
  sym_type = 58,
  sym_boolean = 59,
  sym__variable_list = 60,
  sym__constant_list = 61,
  sym_guarded_command = 62,
  sym__guarded_command_list = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_source_file_repeat2 = 65,
  aux_sym__variable_list_repeat1 = 66,
  aux_sym__constant_list_repeat1 = 67,
  aux_sym__guarded_command_list_repeat1 = 68,
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
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == 'F') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'F') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_con);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_skip);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_abort);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_bnd);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_bnd);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_od);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_od);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'k') ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
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
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 14},
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
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(169),
    [sym__declaration] = STATE(24),
    [sym_variable_declaration] = STATE(24),
    [sym_constant_declaration] = STATE(24),
    [sym__statement] = STATE(31),
    [sym_assign] = STATE(31),
    [sym_assert] = STATE(31),
    [sym_assert_with_bound] = STATE(31),
    [sym_if] = STATE(31),
    [sym_do] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(31),
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
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(156),
    [sym_eq] = STATE(156),
    [sym_neq] = STATE(156),
    [sym_gt] = STATE(156),
    [sym_gte] = STATE(156),
    [sym_lt] = STATE(156),
    [sym_lte] = STATE(156),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(156),
    [sym_guarded_command] = STATE(134),
    [sym__guarded_command_list] = STATE(153),
    [aux_sym__guarded_command_list_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [3] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(164),
    [sym_eq] = STATE(164),
    [sym_neq] = STATE(164),
    [sym_gt] = STATE(164),
    [sym_gte] = STATE(164),
    [sym_lt] = STATE(164),
    [sym_lte] = STATE(164),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(164),
    [sym_guarded_command] = STATE(134),
    [sym__guarded_command_list] = STATE(165),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [4] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(164),
    [sym_eq] = STATE(164),
    [sym_neq] = STATE(164),
    [sym_gt] = STATE(164),
    [sym_gte] = STATE(164),
    [sym_lt] = STATE(164),
    [sym_lte] = STATE(164),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(164),
    [sym_guarded_command] = STATE(134),
    [sym__guarded_command_list] = STATE(158),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [5] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(156),
    [sym_eq] = STATE(156),
    [sym_neq] = STATE(156),
    [sym_gt] = STATE(156),
    [sym_gte] = STATE(156),
    [sym_lt] = STATE(156),
    [sym_lte] = STATE(156),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(156),
    [sym_guarded_command] = STATE(134),
    [sym__guarded_command_list] = STATE(157),
    [aux_sym__guarded_command_list_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [6] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(164),
    [sym_eq] = STATE(164),
    [sym_neq] = STATE(164),
    [sym_gt] = STATE(164),
    [sym_gte] = STATE(164),
    [sym_lt] = STATE(164),
    [sym_lte] = STATE(164),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(164),
    [sym_guarded_command] = STATE(134),
    [sym__guarded_command_list] = STATE(152),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [7] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(164),
    [sym_eq] = STATE(164),
    [sym_neq] = STATE(164),
    [sym_gt] = STATE(164),
    [sym_gte] = STATE(164),
    [sym_lt] = STATE(164),
    [sym_lte] = STATE(164),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(164),
    [sym_guarded_command] = STATE(134),
    [sym__guarded_command_list] = STATE(151),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [8] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(156),
    [sym_eq] = STATE(156),
    [sym_neq] = STATE(156),
    [sym_gt] = STATE(156),
    [sym_gte] = STATE(156),
    [sym_lt] = STATE(156),
    [sym_lte] = STATE(156),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(156),
    [sym_guarded_command] = STATE(134),
    [sym__guarded_command_list] = STATE(161),
    [aux_sym__guarded_command_list_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [9] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(156),
    [sym_eq] = STATE(156),
    [sym_neq] = STATE(156),
    [sym_gt] = STATE(156),
    [sym_gte] = STATE(156),
    [sym_lt] = STATE(156),
    [sym_lte] = STATE(156),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(156),
    [sym_guarded_command] = STATE(134),
    [sym__guarded_command_list] = STATE(160),
    [aux_sym__guarded_command_list_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [10] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(170),
    [sym_eq] = STATE(170),
    [sym_neq] = STATE(170),
    [sym_gt] = STATE(170),
    [sym_gte] = STATE(170),
    [sym_lt] = STATE(170),
    [sym_lte] = STATE(170),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(170),
    [sym_guarded_command] = STATE(171),
    [aux_sym__guarded_command_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_variable] = ACTIONS(30),
    [aux_sym_constant_token1] = ACTIONS(33),
    [sym_integer] = ACTIONS(30),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
  },
  [11] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(156),
    [sym_eq] = STATE(156),
    [sym_neq] = STATE(156),
    [sym_gt] = STATE(156),
    [sym_gte] = STATE(156),
    [sym_lt] = STATE(156),
    [sym_lte] = STATE(156),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(156),
    [sym_guarded_command] = STATE(136),
    [aux_sym__guarded_command_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [12] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(164),
    [sym_eq] = STATE(164),
    [sym_neq] = STATE(164),
    [sym_gt] = STATE(164),
    [sym_gte] = STATE(164),
    [sym_lt] = STATE(164),
    [sym_lte] = STATE(164),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(164),
    [sym_guarded_command] = STATE(136),
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
    [anon_sym_COMMA] = ACTIONS(39),
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
    [anon_sym_DASH_GT] = ACTIONS(39),
  },
  [14] = {
    [sym__expr] = STATE(65),
    [sym_mul] = STATE(65),
    [sym_div] = STATE(65),
    [sym_add] = STATE(65),
    [sym_sub] = STATE(65),
    [sym__term] = STATE(65),
    [sym__pred] = STATE(167),
    [sym_eq] = STATE(167),
    [sym_neq] = STATE(167),
    [sym_gt] = STATE(167),
    [sym_gte] = STATE(167),
    [sym_lt] = STATE(167),
    [sym_lte] = STATE(167),
    [sym_constant] = STATE(65),
    [sym_boolean] = STATE(167),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(43),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
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
  [16] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(143),
    [sym_eq] = STATE(143),
    [sym_neq] = STATE(143),
    [sym_gt] = STATE(143),
    [sym_gte] = STATE(143),
    [sym_lt] = STATE(143),
    [sym_lte] = STATE(143),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [17] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(139),
    [sym_eq] = STATE(139),
    [sym_neq] = STATE(139),
    [sym_gt] = STATE(139),
    [sym_gte] = STATE(139),
    [sym_lt] = STATE(139),
    [sym_lte] = STATE(139),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(139),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_skip] = ACTIONS(51),
    [sym_abort] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_skip] = ACTIONS(63),
    [sym_abort] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [sym_variable] = ACTIONS(63),
    [anon_sym_DASH_GT] = ACTIONS(61),
  },
  [21] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(140),
    [sym_eq] = STATE(140),
    [sym_neq] = STATE(140),
    [sym_gt] = STATE(140),
    [sym_gte] = STATE(140),
    [sym_lt] = STATE(140),
    [sym_lte] = STATE(140),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_skip] = ACTIONS(67),
    [sym_abort] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
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
  [23] = {
    [sym__expr] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym__term] = STATE(95),
    [sym__pred] = STATE(147),
    [sym_eq] = STATE(147),
    [sym_neq] = STATE(147),
    [sym_gt] = STATE(147),
    [sym_gte] = STATE(147),
    [sym_lt] = STATE(147),
    [sym_lte] = STATE(147),
    [sym_constant] = STATE(95),
    [sym_boolean] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
  },
  [24] = {
    [sym__declaration] = STATE(34),
    [sym_variable_declaration] = STATE(34),
    [sym_constant_declaration] = STATE(34),
    [sym__statement] = STATE(30),
    [sym_assign] = STATE(30),
    [sym_assert] = STATE(30),
    [sym_assert_with_bound] = STATE(30),
    [sym_if] = STATE(30),
    [sym_do] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(34),
    [aux_sym_source_file_repeat2] = STATE(30),
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
    [sym__statement] = STATE(25),
    [sym_assign] = STATE(25),
    [sym_assert] = STATE(25),
    [sym_assert_with_bound] = STATE(25),
    [sym_if] = STATE(25),
    [sym_do] = STATE(25),
    [aux_sym_source_file_repeat2] = STATE(25),
    [sym_skip] = ACTIONS(73),
    [sym_abort] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(82),
    [anon_sym_do] = ACTIONS(84),
    [sym_variable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(90),
  },
  [26] = {
    [sym__statement] = STATE(27),
    [sym_assign] = STATE(27),
    [sym_assert] = STATE(27),
    [sym_assert_with_bound] = STATE(27),
    [sym_if] = STATE(27),
    [sym_do] = STATE(27),
    [aux_sym_source_file_repeat2] = STATE(27),
    [sym_skip] = ACTIONS(92),
    [sym_abort] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(96),
    [anon_sym_do] = ACTIONS(98),
    [anon_sym_od] = ACTIONS(100),
    [sym_variable] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(104),
  },
  [27] = {
    [sym__statement] = STATE(27),
    [sym_assign] = STATE(27),
    [sym_assert] = STATE(27),
    [sym_assert_with_bound] = STATE(27),
    [sym_if] = STATE(27),
    [sym_do] = STATE(27),
    [aux_sym_source_file_repeat2] = STATE(27),
    [sym_skip] = ACTIONS(106),
    [sym_abort] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(112),
    [anon_sym_do] = ACTIONS(115),
    [anon_sym_od] = ACTIONS(82),
    [sym_variable] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(90),
  },
  [28] = {
    [sym__statement] = STATE(25),
    [sym_assign] = STATE(25),
    [sym_assert] = STATE(25),
    [sym_assert_with_bound] = STATE(25),
    [sym_if] = STATE(25),
    [sym_do] = STATE(25),
    [aux_sym_source_file_repeat2] = STATE(25),
    [sym_skip] = ACTIONS(121),
    [sym_abort] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_fi] = ACTIONS(100),
    [anon_sym_do] = ACTIONS(127),
    [sym_variable] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(104),
  },
  [29] = {
    [sym__statement] = STATE(29),
    [sym_assign] = STATE(29),
    [sym_assert] = STATE(29),
    [sym_assert_with_bound] = STATE(29),
    [sym_if] = STATE(29),
    [sym_do] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_skip] = ACTIONS(131),
    [sym_abort] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_do] = ACTIONS(140),
    [sym_variable] = ACTIONS(143),
  },
  [30] = {
    [sym__statement] = STATE(29),
    [sym_assign] = STATE(29),
    [sym_assert] = STATE(29),
    [sym_assert_with_bound] = STATE(29),
    [sym_if] = STATE(29),
    [sym_do] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_skip] = ACTIONS(148),
    [sym_abort] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
  },
  [31] = {
    [sym__statement] = STATE(29),
    [sym_assign] = STATE(29),
    [sym_assert] = STATE(29),
    [sym_assert_with_bound] = STATE(29),
    [sym_if] = STATE(29),
    [sym_do] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_skip] = ACTIONS(148),
    [sym_abort] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
  },
  [32] = {
    [sym__statement] = STATE(33),
    [sym_assign] = STATE(33),
    [sym_assert] = STATE(33),
    [sym_assert_with_bound] = STATE(33),
    [sym_if] = STATE(33),
    [sym_do] = STATE(33),
    [aux_sym_source_file_repeat2] = STATE(33),
    [sym_skip] = ACTIONS(150),
    [sym_abort] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_if] = ACTIONS(154),
    [anon_sym_do] = ACTIONS(156),
    [sym_variable] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(104),
  },
  [33] = {
    [sym__statement] = STATE(33),
    [sym_assign] = STATE(33),
    [sym_assert] = STATE(33),
    [sym_assert_with_bound] = STATE(33),
    [sym_if] = STATE(33),
    [sym_do] = STATE(33),
    [aux_sym_source_file_repeat2] = STATE(33),
    [sym_skip] = ACTIONS(160),
    [sym_abort] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_if] = ACTIONS(166),
    [anon_sym_do] = ACTIONS(169),
    [sym_variable] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(90),
  },
  [34] = {
    [sym__declaration] = STATE(34),
    [sym_variable_declaration] = STATE(34),
    [sym_constant_declaration] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_var] = ACTIONS(177),
    [anon_sym_con] = ACTIONS(180),
    [sym_skip] = ACTIONS(183),
    [sym_abort] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_do] = ACTIONS(183),
    [sym_variable] = ACTIONS(183),
  },
  [35] = {
    [sym__statement] = STATE(32),
    [sym_assign] = STATE(32),
    [sym_assert] = STATE(32),
    [sym_assert_with_bound] = STATE(32),
    [sym_if] = STATE(32),
    [sym_do] = STATE(32),
    [aux_sym_source_file_repeat2] = STATE(32),
    [sym_skip] = ACTIONS(185),
    [sym_abort] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_if] = ACTIONS(154),
    [anon_sym_do] = ACTIONS(156),
    [sym_variable] = ACTIONS(158),
  },
  [36] = {
    [sym__statement] = STATE(26),
    [sym_assign] = STATE(26),
    [sym_assert] = STATE(26),
    [sym_assert_with_bound] = STATE(26),
    [sym_if] = STATE(26),
    [sym_do] = STATE(26),
    [aux_sym_source_file_repeat2] = STATE(26),
    [sym_skip] = ACTIONS(187),
    [sym_abort] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(96),
    [anon_sym_do] = ACTIONS(98),
    [sym_variable] = ACTIONS(102),
  },
  [37] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_assert_with_bound] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [sym_skip] = ACTIONS(189),
    [sym_abort] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_do] = ACTIONS(127),
    [sym_variable] = ACTIONS(129),
  },
  [38] = {
    [sym_skip] = ACTIONS(67),
    [sym_abort] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_od] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(65),
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
    [sym_skip] = ACTIONS(191),
    [sym_abort] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_fi] = ACTIONS(191),
    [anon_sym_do] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(201),
    [sym_variable] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(193),
  },
  [42] = {
    [sym_skip] = ACTIONS(63),
    [sym_abort] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_variable] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(61),
  },
  [43] = {
    [sym_skip] = ACTIONS(67),
    [sym_abort] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_fi] = ACTIONS(67),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [44] = {
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
  [45] = {
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_od] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
  },
  [46] = {
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_fi] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
  },
  [47] = {
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
  [48] = {
    [sym_skip] = ACTIONS(191),
    [sym_abort] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_do] = ACTIONS(191),
    [anon_sym_od] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(209),
    [sym_variable] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(193),
  },
  [49] = {
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
  [50] = {
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
  [51] = {
    [sym_skip] = ACTIONS(63),
    [sym_abort] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(63),
    [anon_sym_od] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_variable] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(61),
  },
  [52] = {
    [sym__expr] = STATE(42),
    [sym_mul] = STATE(42),
    [sym_div] = STATE(42),
    [sym_add] = STATE(42),
    [sym_sub] = STATE(42),
    [sym__term] = STATE(42),
    [sym_constant] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(213),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(213),
  },
  [53] = {
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
  [54] = {
    [sym__expr] = STATE(20),
    [sym_mul] = STATE(20),
    [sym_div] = STATE(20),
    [sym_add] = STATE(20),
    [sym_sub] = STATE(20),
    [sym__term] = STATE(20),
    [sym_constant] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(219),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(219),
  },
  [55] = {
    [sym__expr] = STATE(19),
    [sym_mul] = STATE(19),
    [sym_div] = STATE(19),
    [sym_add] = STATE(19),
    [sym_sub] = STATE(19),
    [sym__term] = STATE(19),
    [sym_constant] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(223),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(223),
  },
  [56] = {
    [sym__expr] = STATE(107),
    [sym_mul] = STATE(107),
    [sym_div] = STATE(107),
    [sym_add] = STATE(107),
    [sym_sub] = STATE(107),
    [sym__term] = STATE(107),
    [sym_constant] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(225),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(225),
  },
  [57] = {
    [sym__expr] = STATE(99),
    [sym_mul] = STATE(99),
    [sym_div] = STATE(99),
    [sym_add] = STATE(99),
    [sym_sub] = STATE(99),
    [sym__term] = STATE(99),
    [sym_constant] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(227),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(227),
  },
  [58] = {
    [sym__expr] = STATE(108),
    [sym_mul] = STATE(108),
    [sym_div] = STATE(108),
    [sym_add] = STATE(108),
    [sym_sub] = STATE(108),
    [sym__term] = STATE(108),
    [sym_constant] = STATE(108),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(229),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(229),
  },
  [59] = {
    [sym__expr] = STATE(104),
    [sym_mul] = STATE(104),
    [sym_div] = STATE(104),
    [sym_add] = STATE(104),
    [sym_sub] = STATE(104),
    [sym__term] = STATE(104),
    [sym_constant] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(231),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(231),
  },
  [60] = {
    [sym__expr] = STATE(102),
    [sym_mul] = STATE(102),
    [sym_div] = STATE(102),
    [sym_add] = STATE(102),
    [sym_sub] = STATE(102),
    [sym__term] = STATE(102),
    [sym_constant] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(233),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(233),
  },
  [61] = {
    [sym__expr] = STATE(105),
    [sym_mul] = STATE(105),
    [sym_div] = STATE(105),
    [sym_add] = STATE(105),
    [sym_sub] = STATE(105),
    [sym__term] = STATE(105),
    [sym_constant] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(235),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(235),
  },
  [62] = {
    [sym__expr] = STATE(129),
    [sym_mul] = STATE(129),
    [sym_div] = STATE(129),
    [sym_add] = STATE(129),
    [sym_sub] = STATE(129),
    [sym__term] = STATE(129),
    [sym_constant] = STATE(129),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(237),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(237),
  },
  [63] = {
    [sym__expr] = STATE(123),
    [sym_mul] = STATE(123),
    [sym_div] = STATE(123),
    [sym_add] = STATE(123),
    [sym_sub] = STATE(123),
    [sym__term] = STATE(123),
    [sym_constant] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(239),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(239),
  },
  [64] = {
    [sym__expr] = STATE(126),
    [sym_mul] = STATE(126),
    [sym_div] = STATE(126),
    [sym_add] = STATE(126),
    [sym_sub] = STATE(126),
    [sym__term] = STATE(126),
    [sym_constant] = STATE(126),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(241),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(241),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(259),
  },
  [66] = {
    [sym__expr] = STATE(124),
    [sym_mul] = STATE(124),
    [sym_div] = STATE(124),
    [sym_add] = STATE(124),
    [sym_sub] = STATE(124),
    [sym__term] = STATE(124),
    [sym_constant] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(261),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(261),
  },
  [67] = {
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
  },
  [68] = {
    [sym__expr] = STATE(122),
    [sym_mul] = STATE(122),
    [sym_div] = STATE(122),
    [sym_add] = STATE(122),
    [sym_sub] = STATE(122),
    [sym__term] = STATE(122),
    [sym_constant] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(267),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(267),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_skip] = ACTIONS(191),
    [sym_abort] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_do] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
    [sym_variable] = ACTIONS(191),
  },
  [70] = {
    [sym__expr] = STATE(128),
    [sym_mul] = STATE(128),
    [sym_div] = STATE(128),
    [sym_add] = STATE(128),
    [sym_sub] = STATE(128),
    [sym__term] = STATE(128),
    [sym_constant] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(269),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(269),
  },
  [71] = {
    [sym__expr] = STATE(15),
    [sym_mul] = STATE(15),
    [sym_div] = STATE(15),
    [sym_add] = STATE(15),
    [sym_sub] = STATE(15),
    [sym__term] = STATE(15),
    [sym_constant] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(271),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(271),
  },
  [72] = {
    [sym_skip] = ACTIONS(63),
    [sym_abort] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_variable] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(61),
  },
  [73] = {
    [sym__expr] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym__term] = STATE(50),
    [sym_constant] = STATE(50),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(275),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(275),
  },
  [74] = {
    [sym_skip] = ACTIONS(67),
    [sym_abort] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [75] = {
    [sym__expr] = STATE(48),
    [sym_mul] = STATE(48),
    [sym_div] = STATE(48),
    [sym_add] = STATE(48),
    [sym_sub] = STATE(48),
    [sym__term] = STATE(48),
    [sym_constant] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(279),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(279),
  },
  [76] = {
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
  [77] = {
    [sym_skip] = ACTIONS(191),
    [sym_abort] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_do] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_variable] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(193),
  },
  [78] = {
    [sym__expr] = STATE(67),
    [sym_mul] = STATE(67),
    [sym_div] = STATE(67),
    [sym_add] = STATE(67),
    [sym_sub] = STATE(67),
    [sym__term] = STATE(67),
    [sym_constant] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(285),
    [sym_variable] = ACTIONS(287),
    [aux_sym_constant_token1] = ACTIONS(289),
    [sym_integer] = ACTIONS(287),
  },
  [79] = {
    [sym__expr] = STATE(72),
    [sym_mul] = STATE(72),
    [sym_div] = STATE(72),
    [sym_add] = STATE(72),
    [sym_sub] = STATE(72),
    [sym__term] = STATE(72),
    [sym_constant] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(285),
    [sym_variable] = ACTIONS(291),
    [aux_sym_constant_token1] = ACTIONS(289),
    [sym_integer] = ACTIONS(291),
  },
  [80] = {
    [sym__expr] = STATE(74),
    [sym_mul] = STATE(74),
    [sym_div] = STATE(74),
    [sym_add] = STATE(74),
    [sym_sub] = STATE(74),
    [sym__term] = STATE(74),
    [sym_constant] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(285),
    [sym_variable] = ACTIONS(293),
    [aux_sym_constant_token1] = ACTIONS(289),
    [sym_integer] = ACTIONS(293),
  },
  [81] = {
    [sym__expr] = STATE(53),
    [sym_mul] = STATE(53),
    [sym_div] = STATE(53),
    [sym_add] = STATE(53),
    [sym_sub] = STATE(53),
    [sym__term] = STATE(53),
    [sym_constant] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(285),
    [sym_variable] = ACTIONS(295),
    [aux_sym_constant_token1] = ACTIONS(289),
    [sym_integer] = ACTIONS(295),
  },
  [82] = {
    [sym__expr] = STATE(127),
    [sym_mul] = STATE(127),
    [sym_div] = STATE(127),
    [sym_add] = STATE(127),
    [sym_sub] = STATE(127),
    [sym__term] = STATE(127),
    [sym_constant] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(297),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(297),
  },
  [83] = {
    [sym__expr] = STATE(77),
    [sym_mul] = STATE(77),
    [sym_div] = STATE(77),
    [sym_add] = STATE(77),
    [sym_sub] = STATE(77),
    [sym__term] = STATE(77),
    [sym_constant] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(285),
    [sym_variable] = ACTIONS(299),
    [aux_sym_constant_token1] = ACTIONS(289),
    [sym_integer] = ACTIONS(299),
  },
  [84] = {
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
  [85] = {
    [sym__expr] = STATE(125),
    [sym_mul] = STATE(125),
    [sym_div] = STATE(125),
    [sym_add] = STATE(125),
    [sym_sub] = STATE(125),
    [sym__term] = STATE(125),
    [sym_constant] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(301),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(301),
  },
  [86] = {
    [sym__expr] = STATE(69),
    [sym_mul] = STATE(69),
    [sym_div] = STATE(69),
    [sym_add] = STATE(69),
    [sym_sub] = STATE(69),
    [sym__term] = STATE(69),
    [sym_constant] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(303),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(303),
  },
  [87] = {
    [sym__expr] = STATE(22),
    [sym_mul] = STATE(22),
    [sym_div] = STATE(22),
    [sym_add] = STATE(22),
    [sym_sub] = STATE(22),
    [sym__term] = STATE(22),
    [sym_constant] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_variable] = ACTIONS(305),
    [aux_sym_constant_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(305),
  },
  [88] = {
    [sym__expr] = STATE(41),
    [sym_mul] = STATE(41),
    [sym_div] = STATE(41),
    [sym_add] = STATE(41),
    [sym_sub] = STATE(41),
    [sym__term] = STATE(41),
    [sym_constant] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(307),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(307),
  },
  [89] = {
    [sym__expr] = STATE(39),
    [sym_mul] = STATE(39),
    [sym_div] = STATE(39),
    [sym_add] = STATE(39),
    [sym_sub] = STATE(39),
    [sym__term] = STATE(39),
    [sym_constant] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(309),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(309),
  },
  [90] = {
    [sym__expr] = STATE(43),
    [sym_mul] = STATE(43),
    [sym_div] = STATE(43),
    [sym_add] = STATE(43),
    [sym_sub] = STATE(43),
    [sym__term] = STATE(43),
    [sym_constant] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(311),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(311),
  },
  [91] = {
    [sym__expr] = STATE(46),
    [sym_mul] = STATE(46),
    [sym_div] = STATE(46),
    [sym_add] = STATE(46),
    [sym_sub] = STATE(46),
    [sym__term] = STATE(46),
    [sym_constant] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(211),
    [sym_variable] = ACTIONS(313),
    [aux_sym_constant_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(313),
  },
  [92] = {
    [sym__expr] = STATE(45),
    [sym_mul] = STATE(45),
    [sym_div] = STATE(45),
    [sym_add] = STATE(45),
    [sym_sub] = STATE(45),
    [sym__term] = STATE(45),
    [sym_constant] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(315),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(315),
  },
  [93] = {
    [sym__expr] = STATE(51),
    [sym_mul] = STATE(51),
    [sym_div] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym__term] = STATE(51),
    [sym_constant] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(317),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(317),
  },
  [94] = {
    [sym__expr] = STATE(38),
    [sym_mul] = STATE(38),
    [sym_div] = STATE(38),
    [sym_add] = STATE(38),
    [sym_sub] = STATE(38),
    [sym__term] = STATE(38),
    [sym_constant] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(319),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(319),
  },
  [95] = {
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(259),
  },
  [96] = {
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
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_var] = ACTIONS(327),
    [anon_sym_con] = ACTIONS(327),
    [sym_skip] = ACTIONS(327),
    [sym_abort] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_do] = ACTIONS(327),
    [sym_variable] = ACTIONS(327),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_var] = ACTIONS(331),
    [anon_sym_con] = ACTIONS(331),
    [sym_skip] = ACTIONS(331),
    [sym_abort] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_if] = ACTIONS(331),
    [anon_sym_do] = ACTIONS(331),
    [sym_variable] = ACTIONS(331),
  },
  [99] = {
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(333),
  },
  [100] = {
    [sym_skip] = ACTIONS(337),
    [sym_abort] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_if] = ACTIONS(337),
    [anon_sym_do] = ACTIONS(337),
    [anon_sym_od] = ACTIONS(337),
    [sym_variable] = ACTIONS(337),
    [anon_sym_PIPE] = ACTIONS(339),
  },
  [101] = {
    [sym_skip] = ACTIONS(341),
    [sym_abort] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_do] = ACTIONS(341),
    [anon_sym_od] = ACTIONS(341),
    [sym_variable] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(343),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(345),
  },
  [103] = {
    [sym_skip] = ACTIONS(341),
    [sym_abort] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_fi] = ACTIONS(341),
    [anon_sym_do] = ACTIONS(341),
    [sym_variable] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(343),
  },
  [104] = {
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(347),
  },
  [105] = {
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(349),
  },
  [106] = {
    [sym_skip] = ACTIONS(351),
    [sym_abort] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_if] = ACTIONS(351),
    [anon_sym_fi] = ACTIONS(351),
    [anon_sym_do] = ACTIONS(351),
    [sym_variable] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(353),
  },
  [107] = {
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(355),
  },
  [108] = {
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(357),
  },
  [109] = {
    [sym_skip] = ACTIONS(337),
    [sym_abort] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_if] = ACTIONS(337),
    [anon_sym_fi] = ACTIONS(337),
    [anon_sym_do] = ACTIONS(337),
    [sym_variable] = ACTIONS(337),
    [anon_sym_PIPE] = ACTIONS(339),
  },
  [110] = {
    [sym_skip] = ACTIONS(359),
    [sym_abort] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_fi] = ACTIONS(359),
    [anon_sym_do] = ACTIONS(359),
    [sym_variable] = ACTIONS(359),
    [anon_sym_PIPE] = ACTIONS(361),
  },
  [111] = {
    [sym_skip] = ACTIONS(351),
    [sym_abort] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_if] = ACTIONS(351),
    [anon_sym_do] = ACTIONS(351),
    [anon_sym_od] = ACTIONS(351),
    [sym_variable] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(353),
  },
  [112] = {
    [sym_skip] = ACTIONS(359),
    [sym_abort] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_do] = ACTIONS(359),
    [anon_sym_od] = ACTIONS(359),
    [sym_variable] = ACTIONS(359),
    [anon_sym_PIPE] = ACTIONS(361),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_skip] = ACTIONS(351),
    [sym_abort] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_if] = ACTIONS(351),
    [anon_sym_do] = ACTIONS(351),
    [sym_variable] = ACTIONS(351),
  },
  [114] = {
    [sym_skip] = ACTIONS(337),
    [sym_abort] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_if] = ACTIONS(337),
    [anon_sym_do] = ACTIONS(337),
    [sym_variable] = ACTIONS(337),
    [anon_sym_PIPE] = ACTIONS(339),
  },
  [115] = {
    [sym_skip] = ACTIONS(359),
    [sym_abort] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_do] = ACTIONS(359),
    [sym_variable] = ACTIONS(359),
    [anon_sym_PIPE] = ACTIONS(361),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_skip] = ACTIONS(341),
    [sym_abort] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_do] = ACTIONS(341),
    [sym_variable] = ACTIONS(341),
  },
  [117] = {
    [sym_skip] = ACTIONS(351),
    [sym_abort] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_if] = ACTIONS(351),
    [anon_sym_do] = ACTIONS(351),
    [sym_variable] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(353),
  },
  [118] = {
    [sym_skip] = ACTIONS(341),
    [sym_abort] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_do] = ACTIONS(341),
    [sym_variable] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(343),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_skip] = ACTIONS(337),
    [sym_abort] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_if] = ACTIONS(337),
    [anon_sym_do] = ACTIONS(337),
    [sym_variable] = ACTIONS(337),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_skip] = ACTIONS(359),
    [sym_abort] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_do] = ACTIONS(359),
    [sym_variable] = ACTIONS(359),
  },
  [121] = {
    [anon_sym_LPAREN] = ACTIONS(363),
    [sym_variable] = ACTIONS(363),
    [aux_sym_constant_token1] = ACTIONS(365),
    [sym_integer] = ACTIONS(363),
    [anon_sym_True] = ACTIONS(365),
    [anon_sym_False] = ACTIONS(365),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
  },
  [123] = {
    [anon_sym_RBRACE] = ACTIONS(367),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
  },
  [125] = {
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
  },
  [126] = {
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
  },
  [127] = {
    [anon_sym_RBRACE] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
  },
  [128] = {
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
  },
  [130] = {
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_DASH_GT] = ACTIONS(381),
  },
  [131] = {
    [sym_constant] = STATE(145),
    [sym__constant_list] = STATE(163),
    [aux_sym__constant_list_repeat1] = STATE(135),
    [aux_sym_constant_token1] = ACTIONS(221),
  },
  [132] = {
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_DASH_GT] = ACTIONS(383),
  },
  [133] = {
    [sym_constant] = STATE(174),
    [aux_sym__constant_list_repeat1] = STATE(133),
    [aux_sym_constant_token1] = ACTIONS(385),
  },
  [134] = {
    [anon_sym_fi] = ACTIONS(388),
    [anon_sym_od] = ACTIONS(388),
    [anon_sym_PIPE] = ACTIONS(390),
  },
  [135] = {
    [sym_constant] = STATE(144),
    [aux_sym__constant_list_repeat1] = STATE(133),
    [aux_sym_constant_token1] = ACTIONS(221),
  },
  [136] = {
    [anon_sym_fi] = ACTIONS(392),
    [anon_sym_od] = ACTIONS(392),
    [anon_sym_PIPE] = ACTIONS(390),
  },
  [137] = {
    [sym__variable_list] = STATE(168),
    [aux_sym__variable_list_repeat1] = STATE(142),
    [sym_variable] = ACTIONS(394),
  },
  [138] = {
    [anon_sym_COLON] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(398),
  },
  [139] = {
    [anon_sym_RBRACE] = ACTIONS(400),
    [anon_sym_COMMA] = ACTIONS(402),
  },
  [140] = {
    [anon_sym_RBRACE] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(406),
  },
  [141] = {
    [aux_sym__variable_list_repeat1] = STATE(141),
    [sym_variable] = ACTIONS(408),
  },
  [142] = {
    [aux_sym__variable_list_repeat1] = STATE(141),
    [sym_variable] = ACTIONS(411),
  },
  [143] = {
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(415),
  },
  [144] = {
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COMMA] = ACTIONS(419),
  },
  [145] = {
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_COMMA] = ACTIONS(419),
  },
  [146] = {
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_COMMA] = ACTIONS(398),
  },
  [147] = {
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(427),
  },
  [148] = {
    [sym_type] = STATE(97),
    [aux_sym_constant_token1] = ACTIONS(429),
  },
  [149] = {
    [sym_type] = STATE(96),
    [aux_sym_constant_token1] = ACTIONS(429),
  },
  [150] = {
    [sym_variable] = ACTIONS(431),
  },
  [151] = {
    [anon_sym_od] = ACTIONS(433),
  },
  [152] = {
    [anon_sym_od] = ACTIONS(435),
  },
  [153] = {
    [anon_sym_fi] = ACTIONS(437),
  },
  [154] = {
    [anon_sym_COLON_EQ] = ACTIONS(439),
  },
  [155] = {
    [anon_sym_COLON_EQ] = ACTIONS(441),
  },
  [156] = {
    [anon_sym_DASH_GT] = ACTIONS(443),
  },
  [157] = {
    [anon_sym_fi] = ACTIONS(445),
  },
  [158] = {
    [anon_sym_od] = ACTIONS(447),
  },
  [159] = {
    [anon_sym_COLON_EQ] = ACTIONS(449),
  },
  [160] = {
    [anon_sym_fi] = ACTIONS(451),
  },
  [161] = {
    [anon_sym_fi] = ACTIONS(453),
  },
  [162] = {
    [anon_sym_bnd] = ACTIONS(455),
  },
  [163] = {
    [anon_sym_COLON] = ACTIONS(457),
  },
  [164] = {
    [anon_sym_DASH_GT] = ACTIONS(459),
  },
  [165] = {
    [anon_sym_od] = ACTIONS(461),
  },
  [166] = {
    [aux_sym_constant_token1] = ACTIONS(463),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(465),
  },
  [168] = {
    [anon_sym_COLON] = ACTIONS(467),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(469),
  },
  [170] = {
    [anon_sym_DASH_GT] = ACTIONS(471),
  },
  [171] = {
    [anon_sym_PIPE] = ACTIONS(390),
  },
  [172] = {
    [anon_sym_COLON_EQ] = ACTIONS(473),
  },
  [173] = {
    [anon_sym_COLON] = ACTIONS(475),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(419),
  },
  [175] = {
    [anon_sym_COMMA] = ACTIONS(398),
  },
  [176] = {
    [anon_sym_COLON] = ACTIONS(477),
  },
  [177] = {
    [anon_sym_COLON] = ACTIONS(479),
  },
  [178] = {
    [anon_sym_COLON] = ACTIONS(481),
  },
  [179] = {
    [anon_sym_bnd] = ACTIONS(483),
  },
  [180] = {
    [anon_sym_bnd] = ACTIONS(485),
  },
  [181] = {
    [anon_sym_bnd] = ACTIONS(487),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(137),
  [7] = {.count = 1, .reusable = false}, SHIFT(131),
  [9] = {.count = 1, .reusable = false}, SHIFT(31),
  [11] = {.count = 1, .reusable = true}, SHIFT(21),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = false}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(172),
  [19] = {.count = 1, .reusable = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, SHIFT(95),
  [23] = {.count = 1, .reusable = false}, SHIFT(13),
  [25] = {.count = 1, .reusable = false}, SHIFT(130),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(95),
  [33] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(13),
  [36] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(130),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(65),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [57] = {.count = 1, .reusable = true}, SHIFT(71),
  [59] = {.count = 1, .reusable = true}, SHIFT(87),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [71] = {.count = 1, .reusable = false}, SHIFT(30),
  [73] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(25),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [79] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [82] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(6),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(154),
  [90] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [92] = {.count = 1, .reusable = false}, SHIFT(27),
  [94] = {.count = 1, .reusable = true}, SHIFT(16),
  [96] = {.count = 1, .reusable = false}, SHIFT(8),
  [98] = {.count = 1, .reusable = false}, SHIFT(7),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_guarded_command, 3),
  [102] = {.count = 1, .reusable = false}, SHIFT(159),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_guarded_command, 3),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(27),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(16),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(159),
  [121] = {.count = 1, .reusable = false}, SHIFT(25),
  [123] = {.count = 1, .reusable = true}, SHIFT(17),
  [125] = {.count = 1, .reusable = false}, SHIFT(9),
  [127] = {.count = 1, .reusable = false}, SHIFT(6),
  [129] = {.count = 1, .reusable = false}, SHIFT(154),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(29),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(21),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(172),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [148] = {.count = 1, .reusable = false}, SHIFT(29),
  [150] = {.count = 1, .reusable = false}, SHIFT(33),
  [152] = {.count = 1, .reusable = true}, SHIFT(23),
  [154] = {.count = 1, .reusable = false}, SHIFT(5),
  [156] = {.count = 1, .reusable = false}, SHIFT(4),
  [158] = {.count = 1, .reusable = false}, SHIFT(155),
  [160] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(33),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(23),
  [166] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(5),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(4),
  [172] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(155),
  [175] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [177] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [180] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [183] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [185] = {.count = 1, .reusable = false}, SHIFT(32),
  [187] = {.count = 1, .reusable = false}, SHIFT(26),
  [189] = {.count = 1, .reusable = false}, SHIFT(28),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 3),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [195] = {.count = 1, .reusable = true}, SHIFT(89),
  [197] = {.count = 1, .reusable = true}, SHIFT(90),
  [199] = {.count = 1, .reusable = true}, SHIFT(52),
  [201] = {.count = 1, .reusable = true}, SHIFT(91),
  [203] = {.count = 1, .reusable = true}, SHIFT(73),
  [205] = {.count = 1, .reusable = true}, SHIFT(94),
  [207] = {.count = 1, .reusable = true}, SHIFT(93),
  [209] = {.count = 1, .reusable = true}, SHIFT(92),
  [211] = {.count = 1, .reusable = true}, SHIFT(66),
  [213] = {.count = 1, .reusable = true}, SHIFT(42),
  [215] = {.count = 1, .reusable = true}, SHIFT(44),
  [217] = {.count = 1, .reusable = true}, SHIFT(68),
  [219] = {.count = 1, .reusable = true}, SHIFT(20),
  [221] = {.count = 1, .reusable = true}, SHIFT(13),
  [223] = {.count = 1, .reusable = true}, SHIFT(19),
  [225] = {.count = 1, .reusable = true}, SHIFT(107),
  [227] = {.count = 1, .reusable = true}, SHIFT(99),
  [229] = {.count = 1, .reusable = true}, SHIFT(108),
  [231] = {.count = 1, .reusable = true}, SHIFT(104),
  [233] = {.count = 1, .reusable = true}, SHIFT(102),
  [235] = {.count = 1, .reusable = true}, SHIFT(105),
  [237] = {.count = 1, .reusable = true}, SHIFT(129),
  [239] = {.count = 1, .reusable = true}, SHIFT(123),
  [241] = {.count = 1, .reusable = true}, SHIFT(126),
  [243] = {.count = 1, .reusable = true}, SHIFT(18),
  [245] = {.count = 1, .reusable = true}, SHIFT(54),
  [247] = {.count = 1, .reusable = true}, SHIFT(55),
  [249] = {.count = 1, .reusable = true}, SHIFT(56),
  [251] = {.count = 1, .reusable = true}, SHIFT(57),
  [253] = {.count = 1, .reusable = false}, SHIFT(58),
  [255] = {.count = 1, .reusable = true}, SHIFT(59),
  [257] = {.count = 1, .reusable = false}, SHIFT(60),
  [259] = {.count = 1, .reusable = true}, SHIFT(61),
  [261] = {.count = 1, .reusable = true}, SHIFT(124),
  [263] = {.count = 1, .reusable = true}, SHIFT(81),
  [265] = {.count = 1, .reusable = true}, SHIFT(80),
  [267] = {.count = 1, .reusable = true}, SHIFT(122),
  [269] = {.count = 1, .reusable = true}, SHIFT(128),
  [271] = {.count = 1, .reusable = true}, SHIFT(15),
  [273] = {.count = 1, .reusable = true}, SHIFT(64),
  [275] = {.count = 1, .reusable = true}, SHIFT(50),
  [277] = {.count = 1, .reusable = true}, SHIFT(47),
  [279] = {.count = 1, .reusable = true}, SHIFT(48),
  [281] = {.count = 1, .reusable = true}, SHIFT(79),
  [283] = {.count = 1, .reusable = true}, SHIFT(78),
  [285] = {.count = 1, .reusable = true}, SHIFT(62),
  [287] = {.count = 1, .reusable = true}, SHIFT(67),
  [289] = {.count = 1, .reusable = true}, SHIFT(84),
  [291] = {.count = 1, .reusable = true}, SHIFT(72),
  [293] = {.count = 1, .reusable = true}, SHIFT(74),
  [295] = {.count = 1, .reusable = true}, SHIFT(53),
  [297] = {.count = 1, .reusable = true}, SHIFT(127),
  [299] = {.count = 1, .reusable = true}, SHIFT(77),
  [301] = {.count = 1, .reusable = true}, SHIFT(125),
  [303] = {.count = 1, .reusable = true}, SHIFT(69),
  [305] = {.count = 1, .reusable = true}, SHIFT(22),
  [307] = {.count = 1, .reusable = true}, SHIFT(41),
  [309] = {.count = 1, .reusable = true}, SHIFT(39),
  [311] = {.count = 1, .reusable = true}, SHIFT(43),
  [313] = {.count = 1, .reusable = true}, SHIFT(46),
  [315] = {.count = 1, .reusable = true}, SHIFT(45),
  [317] = {.count = 1, .reusable = true}, SHIFT(51),
  [319] = {.count = 1, .reusable = true}, SHIFT(38),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_constant_declaration, 4),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_variable_declaration, 4),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [335] = {.count = 1, .reusable = false}, SHIFT(55),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_do, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_assert_with_bound, 7),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_assert_with_bound, 7),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_assert, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_assert, 3),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_if, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [367] = {.count = 1, .reusable = true}, SHIFT(118),
  [369] = {.count = 1, .reusable = true}, SHIFT(40),
  [371] = {.count = 1, .reusable = true}, SHIFT(116),
  [373] = {.count = 1, .reusable = true}, SHIFT(49),
  [375] = {.count = 1, .reusable = true}, SHIFT(101),
  [377] = {.count = 1, .reusable = true}, SHIFT(103),
  [379] = {.count = 1, .reusable = true}, SHIFT(76),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym__pred, 3),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(13),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 1),
  [390] = {.count = 1, .reusable = true}, SHIFT(121),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 2),
  [394] = {.count = 1, .reusable = true}, SHIFT(138),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [398] = {.count = 1, .reusable = true}, SHIFT(150),
  [400] = {.count = 1, .reusable = true}, SHIFT(106),
  [402] = {.count = 1, .reusable = true}, SHIFT(179),
  [404] = {.count = 1, .reusable = true}, SHIFT(113),
  [406] = {.count = 1, .reusable = true}, SHIFT(162),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(175),
  [411] = {.count = 1, .reusable = true}, SHIFT(146),
  [413] = {.count = 1, .reusable = true}, SHIFT(111),
  [415] = {.count = 1, .reusable = true}, SHIFT(180),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [419] = {.count = 1, .reusable = true}, SHIFT(166),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [425] = {.count = 1, .reusable = true}, SHIFT(117),
  [427] = {.count = 1, .reusable = true}, SHIFT(181),
  [429] = {.count = 1, .reusable = true}, SHIFT(98),
  [431] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [433] = {.count = 1, .reusable = true}, SHIFT(100),
  [435] = {.count = 1, .reusable = true}, SHIFT(109),
  [437] = {.count = 1, .reusable = true}, SHIFT(120),
  [439] = {.count = 1, .reusable = true}, SHIFT(88),
  [441] = {.count = 1, .reusable = true}, SHIFT(83),
  [443] = {.count = 1, .reusable = true}, SHIFT(37),
  [445] = {.count = 1, .reusable = true}, SHIFT(115),
  [447] = {.count = 1, .reusable = true}, SHIFT(114),
  [449] = {.count = 1, .reusable = true}, SHIFT(75),
  [451] = {.count = 1, .reusable = true}, SHIFT(110),
  [453] = {.count = 1, .reusable = true}, SHIFT(112),
  [455] = {.count = 1, .reusable = true}, SHIFT(173),
  [457] = {.count = 1, .reusable = true}, SHIFT(149),
  [459] = {.count = 1, .reusable = true}, SHIFT(36),
  [461] = {.count = 1, .reusable = true}, SHIFT(119),
  [463] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [465] = {.count = 1, .reusable = true}, SHIFT(132),
  [467] = {.count = 1, .reusable = true}, SHIFT(148),
  [469] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [471] = {.count = 1, .reusable = true}, SHIFT(35),
  [473] = {.count = 1, .reusable = true}, SHIFT(86),
  [475] = {.count = 1, .reusable = true}, SHIFT(85),
  [477] = {.count = 1, .reusable = true}, SHIFT(70),
  [479] = {.count = 1, .reusable = true}, SHIFT(82),
  [481] = {.count = 1, .reusable = true}, SHIFT(63),
  [483] = {.count = 1, .reusable = true}, SHIFT(176),
  [485] = {.count = 1, .reusable = true}, SHIFT(177),
  [487] = {.count = 1, .reusable = true}, SHIFT(178),
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
