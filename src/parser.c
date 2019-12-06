#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 124
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_STAR = 13,
  anon_sym_SLASH = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_GT = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_LT = 21,
  anon_sym_LT_EQ = 22,
  sym_variable = 23,
  aux_sym_constant_token1 = 24,
  sym_integer = 25,
  anon_sym_True = 26,
  anon_sym_False = 27,
  anon_sym_COMMA = 28,
  anon_sym_DASH_GT = 29,
  anon_sym_PIPE = 30,
  sym_source_file = 31,
  sym__declaration = 32,
  sym_variable_declaration = 33,
  sym_constant_declaration = 34,
  sym__statement = 35,
  sym_assign = 36,
  sym_assert = 37,
  sym_if = 38,
  sym__expr = 39,
  sym_mul = 40,
  sym_div = 41,
  sym_add = 42,
  sym_sub = 43,
  sym__term = 44,
  sym__pred = 45,
  sym_eq = 46,
  sym_neq = 47,
  sym_gt = 48,
  sym_gte = 49,
  sym_lt = 50,
  sym_lte = 51,
  sym_constant = 52,
  sym_type = 53,
  sym_boolean = 54,
  sym__variable_list = 55,
  sym__constant_list = 56,
  sym_guarded_command = 57,
  sym__guarded_command_list = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_source_file_repeat2 = 60,
  aux_sym__variable_list_repeat1 = 61,
  aux_sym__constant_list_repeat1 = 62,
  aux_sym__guarded_command_list_repeat1 = 63,
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
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_con);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_skip);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_abort);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'k') ADVANCE(42);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
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
    [sym_source_file] = STATE(122),
    [sym__declaration] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_constant_declaration] = STATE(17),
    [sym__statement] = STATE(23),
    [sym_assign] = STATE(23),
    [sym_assert] = STATE(23),
    [sym_if] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(17),
    [aux_sym_source_file_repeat2] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(9),
    [sym_abort] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
  },
  [2] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(106),
    [sym_eq] = STATE(106),
    [sym_neq] = STATE(106),
    [sym_gt] = STATE(106),
    [sym_gte] = STATE(106),
    [sym_lt] = STATE(106),
    [sym_lte] = STATE(106),
    [sym_constant] = STATE(59),
    [sym_boolean] = STATE(106),
    [sym_guarded_command] = STATE(95),
    [sym__guarded_command_list] = STATE(112),
    [aux_sym__guarded_command_list_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [aux_sym_constant_token1] = ACTIONS(21),
    [sym_integer] = ACTIONS(19),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
  },
  [3] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(106),
    [sym_eq] = STATE(106),
    [sym_neq] = STATE(106),
    [sym_gt] = STATE(106),
    [sym_gte] = STATE(106),
    [sym_lt] = STATE(106),
    [sym_lte] = STATE(106),
    [sym_constant] = STATE(59),
    [sym_boolean] = STATE(106),
    [sym_guarded_command] = STATE(95),
    [sym__guarded_command_list] = STATE(117),
    [aux_sym__guarded_command_list_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [aux_sym_constant_token1] = ACTIONS(21),
    [sym_integer] = ACTIONS(19),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
  },
  [4] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(106),
    [sym_eq] = STATE(106),
    [sym_neq] = STATE(106),
    [sym_gt] = STATE(106),
    [sym_gte] = STATE(106),
    [sym_lt] = STATE(106),
    [sym_lte] = STATE(106),
    [sym_constant] = STATE(59),
    [sym_boolean] = STATE(106),
    [sym_guarded_command] = STATE(95),
    [sym__guarded_command_list] = STATE(105),
    [aux_sym__guarded_command_list_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [aux_sym_constant_token1] = ACTIONS(21),
    [sym_integer] = ACTIONS(19),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
  },
  [5] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(106),
    [sym_eq] = STATE(106),
    [sym_neq] = STATE(106),
    [sym_gt] = STATE(106),
    [sym_gte] = STATE(106),
    [sym_lt] = STATE(106),
    [sym_lte] = STATE(106),
    [sym_constant] = STATE(59),
    [sym_boolean] = STATE(106),
    [sym_guarded_command] = STATE(103),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [aux_sym_constant_token1] = ACTIONS(21),
    [sym_integer] = ACTIONS(19),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
  },
  [6] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(121),
    [sym_eq] = STATE(121),
    [sym_neq] = STATE(121),
    [sym_gt] = STATE(121),
    [sym_gte] = STATE(121),
    [sym_lt] = STATE(121),
    [sym_lte] = STATE(121),
    [sym_constant] = STATE(59),
    [sym_boolean] = STATE(121),
    [sym_guarded_command] = STATE(114),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_variable] = ACTIONS(28),
    [aux_sym_constant_token1] = ACTIONS(31),
    [sym_integer] = ACTIONS(28),
    [anon_sym_True] = ACTIONS(34),
    [anon_sym_False] = ACTIONS(34),
  },
  [7] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(111),
    [sym_eq] = STATE(111),
    [sym_neq] = STATE(111),
    [sym_gt] = STATE(111),
    [sym_gte] = STATE(111),
    [sym_lt] = STATE(111),
    [sym_lte] = STATE(111),
    [sym_constant] = STATE(59),
    [sym_boolean] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [aux_sym_constant_token1] = ACTIONS(21),
    [sym_integer] = ACTIONS(19),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [sym_skip] = ACTIONS(39),
    [sym_abort] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [sym_variable] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(37),
  },
  [9] = {
    [sym__expr] = STATE(37),
    [sym_mul] = STATE(37),
    [sym_div] = STATE(37),
    [sym_add] = STATE(37),
    [sym_sub] = STATE(37),
    [sym__term] = STATE(37),
    [sym__pred] = STATE(109),
    [sym_eq] = STATE(109),
    [sym_neq] = STATE(109),
    [sym_gt] = STATE(109),
    [sym_gte] = STATE(109),
    [sym_lt] = STATE(109),
    [sym_lte] = STATE(109),
    [sym_constant] = STATE(37),
    [sym_boolean] = STATE(109),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_variable] = ACTIONS(41),
    [aux_sym_constant_token1] = ACTIONS(21),
    [sym_integer] = ACTIONS(41),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
  },
  [10] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(116),
    [sym_eq] = STATE(116),
    [sym_neq] = STATE(116),
    [sym_gt] = STATE(116),
    [sym_gte] = STATE(116),
    [sym_lt] = STATE(116),
    [sym_lte] = STATE(116),
    [sym_constant] = STATE(59),
    [sym_boolean] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [aux_sym_constant_token1] = ACTIONS(21),
    [sym_integer] = ACTIONS(19),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
  },
  [11] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(107),
    [sym_eq] = STATE(107),
    [sym_neq] = STATE(107),
    [sym_gt] = STATE(107),
    [sym_gte] = STATE(107),
    [sym_lt] = STATE(107),
    [sym_lte] = STATE(107),
    [sym_constant] = STATE(59),
    [sym_boolean] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [aux_sym_constant_token1] = ACTIONS(21),
    [sym_integer] = ACTIONS(19),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_skip] = ACTIONS(45),
    [sym_abort] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [sym_variable] = ACTIONS(45),
    [anon_sym_DASH_GT] = ACTIONS(43),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_skip] = ACTIONS(53),
    [sym_abort] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [sym_variable] = ACTIONS(53),
    [anon_sym_DASH_GT] = ACTIONS(51),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_skip] = ACTIONS(57),
    [sym_abort] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [sym_variable] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(55),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_skip] = ACTIONS(61),
    [sym_abort] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [sym_variable] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(59),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_skip] = ACTIONS(65),
    [sym_abort] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [sym_variable] = ACTIONS(65),
    [anon_sym_DASH_GT] = ACTIONS(63),
  },
  [17] = {
    [sym__declaration] = STATE(19),
    [sym_variable_declaration] = STATE(19),
    [sym_constant_declaration] = STATE(19),
    [sym__statement] = STATE(27),
    [sym_assign] = STATE(27),
    [sym_assert] = STATE(27),
    [sym_if] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_source_file_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(69),
    [sym_abort] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
  },
  [18] = {
    [sym__statement] = STATE(20),
    [sym_assign] = STATE(20),
    [sym_assert] = STATE(20),
    [sym_if] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(20),
    [sym_skip] = ACTIONS(71),
    [sym_abort] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_fi] = ACTIONS(77),
    [sym_variable] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(81),
  },
  [19] = {
    [sym__declaration] = STATE(19),
    [sym_variable_declaration] = STATE(19),
    [sym_constant_declaration] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_var] = ACTIONS(85),
    [anon_sym_con] = ACTIONS(88),
    [sym_skip] = ACTIONS(91),
    [sym_abort] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_if] = ACTIONS(91),
    [sym_variable] = ACTIONS(91),
  },
  [20] = {
    [sym__statement] = STATE(20),
    [sym_assign] = STATE(20),
    [sym_assert] = STATE(20),
    [sym_if] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(20),
    [sym_skip] = ACTIONS(93),
    [sym_abort] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_fi] = ACTIONS(102),
    [sym_variable] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(107),
  },
  [21] = {
    [sym__expr] = STATE(75),
    [sym_mul] = STATE(75),
    [sym_div] = STATE(75),
    [sym_add] = STATE(75),
    [sym_sub] = STATE(75),
    [sym__term] = STATE(75),
    [sym_constant] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(111),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(111),
  },
  [22] = {
    [sym__expr] = STATE(76),
    [sym_mul] = STATE(76),
    [sym_div] = STATE(76),
    [sym_add] = STATE(76),
    [sym_sub] = STATE(76),
    [sym__term] = STATE(76),
    [sym_constant] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(115),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
  },
  [23] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_if] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_skip] = ACTIONS(117),
    [sym_abort] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
  },
  [24] = {
    [sym__expr] = STATE(51),
    [sym_mul] = STATE(51),
    [sym_div] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym__term] = STATE(51),
    [sym_constant] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym_variable] = ACTIONS(121),
    [aux_sym_constant_token1] = ACTIONS(123),
    [sym_integer] = ACTIONS(121),
  },
  [25] = {
    [sym_skip] = ACTIONS(39),
    [sym_abort] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_fi] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [sym_variable] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(37),
  },
  [26] = {
    [sym__expr] = STATE(58),
    [sym_mul] = STATE(58),
    [sym_div] = STATE(58),
    [sym_add] = STATE(58),
    [sym_sub] = STATE(58),
    [sym__term] = STATE(58),
    [sym_constant] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(125),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(125),
  },
  [27] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_if] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_skip] = ACTIONS(117),
    [sym_abort] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
  },
  [28] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_if] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_skip] = ACTIONS(129),
    [sym_abort] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_if] = ACTIONS(135),
    [sym_variable] = ACTIONS(138),
  },
  [29] = {
    [sym_skip] = ACTIONS(57),
    [sym_abort] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(57),
    [anon_sym_fi] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_variable] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(55),
  },
  [30] = {
    [sym_skip] = ACTIONS(61),
    [sym_abort] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fi] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [sym_variable] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(59),
  },
  [31] = {
    [sym__expr] = STATE(61),
    [sym_mul] = STATE(61),
    [sym_div] = STATE(61),
    [sym_add] = STATE(61),
    [sym_sub] = STATE(61),
    [sym__term] = STATE(61),
    [sym_constant] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_variable] = ACTIONS(143),
    [aux_sym_constant_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(143),
  },
  [32] = {
    [sym__expr] = STATE(60),
    [sym_mul] = STATE(60),
    [sym_div] = STATE(60),
    [sym_add] = STATE(60),
    [sym_sub] = STATE(60),
    [sym__term] = STATE(60),
    [sym_constant] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_variable] = ACTIONS(147),
    [aux_sym_constant_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(147),
  },
  [33] = {
    [sym__expr] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym_constant] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_variable] = ACTIONS(149),
    [aux_sym_constant_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(149),
  },
  [34] = {
    [sym__expr] = STATE(68),
    [sym_mul] = STATE(68),
    [sym_div] = STATE(68),
    [sym_add] = STATE(68),
    [sym_sub] = STATE(68),
    [sym__term] = STATE(68),
    [sym_constant] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_variable] = ACTIONS(151),
    [aux_sym_constant_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(151),
  },
  [35] = {
    [sym__statement] = STATE(35),
    [sym_assign] = STATE(35),
    [sym_assert] = STATE(35),
    [sym_if] = STATE(35),
    [aux_sym_source_file_repeat2] = STATE(35),
    [sym_skip] = ACTIONS(153),
    [sym_abort] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(159),
    [sym_variable] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(107),
  },
  [36] = {
    [sym__expr] = STATE(66),
    [sym_mul] = STATE(66),
    [sym_div] = STATE(66),
    [sym_add] = STATE(66),
    [sym_sub] = STATE(66),
    [sym__term] = STATE(66),
    [sym_constant] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_variable] = ACTIONS(165),
    [aux_sym_constant_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(165),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(183),
  },
  [38] = {
    [sym__expr] = STATE(86),
    [sym_mul] = STATE(86),
    [sym_div] = STATE(86),
    [sym_add] = STATE(86),
    [sym_sub] = STATE(86),
    [sym__term] = STATE(86),
    [sym_constant] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(185),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(185),
  },
  [39] = {
    [sym__expr] = STATE(15),
    [sym_mul] = STATE(15),
    [sym_div] = STATE(15),
    [sym_add] = STATE(15),
    [sym_sub] = STATE(15),
    [sym__term] = STATE(15),
    [sym_constant] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(187),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(187),
  },
  [40] = {
    [sym__expr] = STATE(14),
    [sym_mul] = STATE(14),
    [sym_div] = STATE(14),
    [sym_add] = STATE(14),
    [sym_sub] = STATE(14),
    [sym__term] = STATE(14),
    [sym_constant] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(189),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(189),
  },
  [41] = {
    [sym__expr] = STATE(13),
    [sym_mul] = STATE(13),
    [sym_div] = STATE(13),
    [sym_add] = STATE(13),
    [sym_sub] = STATE(13),
    [sym__term] = STATE(13),
    [sym_constant] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(191),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(191),
  },
  [42] = {
    [sym__expr] = STATE(12),
    [sym_mul] = STATE(12),
    [sym_div] = STATE(12),
    [sym_add] = STATE(12),
    [sym_sub] = STATE(12),
    [sym__term] = STATE(12),
    [sym_constant] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(193),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(193),
  },
  [43] = {
    [sym__expr] = STATE(74),
    [sym_mul] = STATE(74),
    [sym_div] = STATE(74),
    [sym_add] = STATE(74),
    [sym_sub] = STATE(74),
    [sym__term] = STATE(74),
    [sym_constant] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(195),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(195),
  },
  [44] = {
    [sym_skip] = ACTIONS(53),
    [sym_abort] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_fi] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [sym_variable] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(51),
  },
  [45] = {
    [sym__expr] = STATE(72),
    [sym_mul] = STATE(72),
    [sym_div] = STATE(72),
    [sym_add] = STATE(72),
    [sym_sub] = STATE(72),
    [sym__term] = STATE(72),
    [sym_constant] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(201),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(201),
  },
  [46] = {
    [sym__expr] = STATE(30),
    [sym_mul] = STATE(30),
    [sym_div] = STATE(30),
    [sym_add] = STATE(30),
    [sym_sub] = STATE(30),
    [sym__term] = STATE(30),
    [sym_constant] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym_variable] = ACTIONS(203),
    [aux_sym_constant_token1] = ACTIONS(123),
    [sym_integer] = ACTIONS(203),
  },
  [47] = {
    [sym__expr] = STATE(77),
    [sym_mul] = STATE(77),
    [sym_div] = STATE(77),
    [sym_add] = STATE(77),
    [sym_sub] = STATE(77),
    [sym__term] = STATE(77),
    [sym_constant] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(205),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(205),
  },
  [48] = {
    [sym__expr] = STATE(73),
    [sym_mul] = STATE(73),
    [sym_div] = STATE(73),
    [sym_add] = STATE(73),
    [sym_sub] = STATE(73),
    [sym__term] = STATE(73),
    [sym_constant] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(207),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(207),
  },
  [49] = {
    [sym_skip] = ACTIONS(65),
    [sym_abort] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_fi] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [sym_variable] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [50] = {
    [sym__expr] = STATE(87),
    [sym_mul] = STATE(87),
    [sym_div] = STATE(87),
    [sym_add] = STATE(87),
    [sym_sub] = STATE(87),
    [sym__term] = STATE(87),
    [sym_constant] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(209),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(209),
  },
  [51] = {
    [sym_skip] = ACTIONS(211),
    [sym_abort] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_fi] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [sym_variable] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
  },
  [52] = {
    [sym__expr] = STATE(56),
    [sym_mul] = STATE(56),
    [sym_div] = STATE(56),
    [sym_add] = STATE(56),
    [sym_sub] = STATE(56),
    [sym__term] = STATE(56),
    [sym_constant] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym_variable] = ACTIONS(219),
    [aux_sym_constant_token1] = ACTIONS(123),
    [sym_integer] = ACTIONS(219),
  },
  [53] = {
    [sym__expr] = STATE(44),
    [sym_mul] = STATE(44),
    [sym_div] = STATE(44),
    [sym_add] = STATE(44),
    [sym_sub] = STATE(44),
    [sym__term] = STATE(44),
    [sym_constant] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym_variable] = ACTIONS(221),
    [aux_sym_constant_token1] = ACTIONS(123),
    [sym_integer] = ACTIONS(221),
  },
  [54] = {
    [sym__expr] = STATE(29),
    [sym_mul] = STATE(29),
    [sym_div] = STATE(29),
    [sym_add] = STATE(29),
    [sym_sub] = STATE(29),
    [sym__term] = STATE(29),
    [sym_constant] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym_variable] = ACTIONS(223),
    [aux_sym_constant_token1] = ACTIONS(123),
    [sym_integer] = ACTIONS(223),
  },
  [55] = {
    [sym__expr] = STATE(85),
    [sym_mul] = STATE(85),
    [sym_div] = STATE(85),
    [sym_add] = STATE(85),
    [sym_sub] = STATE(85),
    [sym__term] = STATE(85),
    [sym_constant] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_variable] = ACTIONS(225),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(225),
  },
  [56] = {
    [sym_skip] = ACTIONS(45),
    [sym_abort] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_fi] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_variable] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(43),
  },
  [57] = {
    [sym__statement] = STATE(35),
    [sym_assign] = STATE(35),
    [sym_assert] = STATE(35),
    [sym_if] = STATE(35),
    [aux_sym_source_file_repeat2] = STATE(35),
    [sym_skip] = ACTIONS(227),
    [sym_abort] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_if] = ACTIONS(231),
    [sym_variable] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(81),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_skip] = ACTIONS(211),
    [sym_abort] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
    [sym_variable] = ACTIONS(211),
  },
  [59] = {
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(183),
  },
  [60] = {
    [sym_skip] = ACTIONS(53),
    [sym_abort] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [sym_variable] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(51),
  },
  [61] = {
    [sym_skip] = ACTIONS(45),
    [sym_abort] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_variable] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(43),
  },
  [62] = {
    [sym__statement] = STATE(57),
    [sym_assign] = STATE(57),
    [sym_assert] = STATE(57),
    [sym_if] = STATE(57),
    [aux_sym_source_file_repeat2] = STATE(57),
    [sym_skip] = ACTIONS(239),
    [sym_abort] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_if] = ACTIONS(231),
    [sym_variable] = ACTIONS(233),
  },
  [63] = {
    [sym__statement] = STATE(18),
    [sym_assign] = STATE(18),
    [sym_assert] = STATE(18),
    [sym_if] = STATE(18),
    [aux_sym_source_file_repeat2] = STATE(18),
    [sym_skip] = ACTIONS(241),
    [sym_abort] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [sym_variable] = ACTIONS(79),
  },
  [64] = {
    [sym_skip] = ACTIONS(57),
    [sym_abort] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_variable] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(55),
  },
  [65] = {
    [sym_skip] = ACTIONS(39),
    [sym_abort] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [sym_variable] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(37),
  },
  [66] = {
    [sym_skip] = ACTIONS(211),
    [sym_abort] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [sym_variable] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
  },
  [67] = {
    [sym_skip] = ACTIONS(65),
    [sym_abort] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [sym_variable] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [68] = {
    [sym_skip] = ACTIONS(61),
    [sym_abort] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [sym_variable] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(59),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_con] = ACTIONS(249),
    [sym_skip] = ACTIONS(249),
    [sym_abort] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_if] = ACTIONS(249),
    [sym_variable] = ACTIONS(249),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_con] = ACTIONS(253),
    [sym_skip] = ACTIONS(253),
    [sym_abort] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [sym_variable] = ACTIONS(253),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_var] = ACTIONS(257),
    [anon_sym_con] = ACTIONS(257),
    [sym_skip] = ACTIONS(257),
    [sym_abort] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_if] = ACTIONS(257),
    [sym_variable] = ACTIONS(257),
  },
  [72] = {
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(259),
  },
  [73] = {
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(263),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(265),
  },
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(267),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(269),
  },
  [77] = {
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(271),
  },
  [78] = {
    [sym_skip] = ACTIONS(273),
    [sym_abort] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_if] = ACTIONS(273),
    [anon_sym_fi] = ACTIONS(273),
    [sym_variable] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(275),
  },
  [79] = {
    [sym_skip] = ACTIONS(277),
    [sym_abort] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_fi] = ACTIONS(277),
    [sym_variable] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
  },
  [80] = {
    [sym_skip] = ACTIONS(277),
    [sym_abort] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_if] = ACTIONS(277),
    [sym_variable] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [sym_skip] = ACTIONS(277),
    [sym_abort] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_if] = ACTIONS(277),
    [sym_variable] = ACTIONS(277),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(281),
    [sym_variable] = ACTIONS(281),
    [aux_sym_constant_token1] = ACTIONS(283),
    [sym_integer] = ACTIONS(281),
    [anon_sym_True] = ACTIONS(283),
    [anon_sym_False] = ACTIONS(283),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_skip] = ACTIONS(273),
    [sym_abort] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_if] = ACTIONS(273),
    [sym_variable] = ACTIONS(273),
  },
  [84] = {
    [sym_skip] = ACTIONS(273),
    [sym_abort] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_if] = ACTIONS(273),
    [sym_variable] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(275),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
  },
  [88] = {
    [sym_constant] = STATE(94),
    [sym__constant_list] = STATE(113),
    [aux_sym__constant_list_repeat1] = STATE(92),
    [aux_sym_constant_token1] = ACTIONS(113),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_DASH_GT] = ACTIONS(289),
  },
  [90] = {
    [sym_constant] = STATE(108),
    [aux_sym__constant_list_repeat1] = STATE(90),
    [aux_sym_constant_token1] = ACTIONS(291),
  },
  [91] = {
    [sym__variable_list] = STATE(119),
    [aux_sym__variable_list_repeat1] = STATE(99),
    [sym_variable] = ACTIONS(294),
  },
  [92] = {
    [sym_constant] = STATE(97),
    [aux_sym__constant_list_repeat1] = STATE(90),
    [aux_sym_constant_token1] = ACTIONS(113),
  },
  [93] = {
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_DASH_GT] = ACTIONS(296),
  },
  [94] = {
    [anon_sym_COLON] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(300),
  },
  [95] = {
    [anon_sym_fi] = ACTIONS(302),
    [anon_sym_PIPE] = ACTIONS(304),
  },
  [96] = {
    [anon_sym_COLON] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(308),
  },
  [97] = {
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(300),
  },
  [98] = {
    [sym_type] = STATE(71),
    [aux_sym_constant_token1] = ACTIONS(312),
  },
  [99] = {
    [aux_sym__variable_list_repeat1] = STATE(100),
    [sym_variable] = ACTIONS(314),
  },
  [100] = {
    [aux_sym__variable_list_repeat1] = STATE(100),
    [sym_variable] = ACTIONS(316),
  },
  [101] = {
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(308),
  },
  [102] = {
    [sym_type] = STATE(69),
    [aux_sym_constant_token1] = ACTIONS(312),
  },
  [103] = {
    [anon_sym_fi] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(304),
  },
  [104] = {
    [anon_sym_COMMA] = ACTIONS(308),
  },
  [105] = {
    [anon_sym_fi] = ACTIONS(323),
  },
  [106] = {
    [anon_sym_DASH_GT] = ACTIONS(325),
  },
  [107] = {
    [anon_sym_RBRACE] = ACTIONS(327),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(300),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(329),
  },
  [110] = {
    [anon_sym_COLON_EQ] = ACTIONS(331),
  },
  [111] = {
    [anon_sym_RBRACE] = ACTIONS(333),
  },
  [112] = {
    [anon_sym_fi] = ACTIONS(335),
  },
  [113] = {
    [anon_sym_COLON] = ACTIONS(337),
  },
  [114] = {
    [anon_sym_PIPE] = ACTIONS(304),
  },
  [115] = {
    [anon_sym_COLON_EQ] = ACTIONS(339),
  },
  [116] = {
    [anon_sym_RBRACE] = ACTIONS(341),
  },
  [117] = {
    [anon_sym_fi] = ACTIONS(343),
  },
  [118] = {
    [sym_variable] = ACTIONS(345),
  },
  [119] = {
    [anon_sym_COLON] = ACTIONS(347),
  },
  [120] = {
    [aux_sym_constant_token1] = ACTIONS(349),
  },
  [121] = {
    [anon_sym_DASH_GT] = ACTIONS(351),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(353),
  },
  [123] = {
    [anon_sym_COLON_EQ] = ACTIONS(355),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(91),
  [7] = {.count = 1, .reusable = false}, SHIFT(88),
  [9] = {.count = 1, .reusable = false}, SHIFT(23),
  [11] = {.count = 1, .reusable = true}, SHIFT(11),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(123),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(59),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(93),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(9),
  [28] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(59),
  [31] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(93),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(37),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [47] = {.count = 1, .reusable = true}, SHIFT(39),
  [49] = {.count = 1, .reusable = true}, SHIFT(40),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [69] = {.count = 1, .reusable = false}, SHIFT(27),
  [71] = {.count = 1, .reusable = false}, SHIFT(20),
  [73] = {.count = 1, .reusable = true}, SHIFT(7),
  [75] = {.count = 1, .reusable = false}, SHIFT(2),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_guarded_command, 3),
  [79] = {.count = 1, .reusable = false}, SHIFT(110),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_guarded_command, 3),
  [83] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [91] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [102] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [104] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(110),
  [107] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(55),
  [111] = {.count = 1, .reusable = true}, SHIFT(75),
  [113] = {.count = 1, .reusable = true}, SHIFT(8),
  [115] = {.count = 1, .reusable = true}, SHIFT(76),
  [117] = {.count = 1, .reusable = false}, SHIFT(28),
  [119] = {.count = 1, .reusable = true}, SHIFT(50),
  [121] = {.count = 1, .reusable = true}, SHIFT(51),
  [123] = {.count = 1, .reusable = true}, SHIFT(25),
  [125] = {.count = 1, .reusable = true}, SHIFT(58),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(28),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(11),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(4),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(123),
  [141] = {.count = 1, .reusable = true}, SHIFT(38),
  [143] = {.count = 1, .reusable = true}, SHIFT(61),
  [145] = {.count = 1, .reusable = true}, SHIFT(65),
  [147] = {.count = 1, .reusable = true}, SHIFT(60),
  [149] = {.count = 1, .reusable = true}, SHIFT(64),
  [151] = {.count = 1, .reusable = true}, SHIFT(68),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(35),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(115),
  [165] = {.count = 1, .reusable = true}, SHIFT(66),
  [167] = {.count = 1, .reusable = true}, SHIFT(16),
  [169] = {.count = 1, .reusable = true}, SHIFT(41),
  [171] = {.count = 1, .reusable = true}, SHIFT(42),
  [173] = {.count = 1, .reusable = true}, SHIFT(43),
  [175] = {.count = 1, .reusable = true}, SHIFT(21),
  [177] = {.count = 1, .reusable = false}, SHIFT(45),
  [179] = {.count = 1, .reusable = true}, SHIFT(22),
  [181] = {.count = 1, .reusable = false}, SHIFT(47),
  [183] = {.count = 1, .reusable = true}, SHIFT(48),
  [185] = {.count = 1, .reusable = true}, SHIFT(86),
  [187] = {.count = 1, .reusable = true}, SHIFT(15),
  [189] = {.count = 1, .reusable = true}, SHIFT(14),
  [191] = {.count = 1, .reusable = true}, SHIFT(13),
  [193] = {.count = 1, .reusable = true}, SHIFT(12),
  [195] = {.count = 1, .reusable = true}, SHIFT(74),
  [197] = {.count = 1, .reusable = true}, SHIFT(46),
  [199] = {.count = 1, .reusable = true}, SHIFT(54),
  [201] = {.count = 1, .reusable = true}, SHIFT(72),
  [203] = {.count = 1, .reusable = true}, SHIFT(30),
  [205] = {.count = 1, .reusable = true}, SHIFT(77),
  [207] = {.count = 1, .reusable = true}, SHIFT(73),
  [209] = {.count = 1, .reusable = true}, SHIFT(87),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [215] = {.count = 1, .reusable = true}, SHIFT(53),
  [217] = {.count = 1, .reusable = true}, SHIFT(52),
  [219] = {.count = 1, .reusable = true}, SHIFT(56),
  [221] = {.count = 1, .reusable = true}, SHIFT(44),
  [223] = {.count = 1, .reusable = true}, SHIFT(29),
  [225] = {.count = 1, .reusable = true}, SHIFT(85),
  [227] = {.count = 1, .reusable = false}, SHIFT(35),
  [229] = {.count = 1, .reusable = true}, SHIFT(10),
  [231] = {.count = 1, .reusable = false}, SHIFT(3),
  [233] = {.count = 1, .reusable = false}, SHIFT(115),
  [235] = {.count = 1, .reusable = true}, SHIFT(34),
  [237] = {.count = 1, .reusable = true}, SHIFT(33),
  [239] = {.count = 1, .reusable = false}, SHIFT(57),
  [241] = {.count = 1, .reusable = false}, SHIFT(18),
  [243] = {.count = 1, .reusable = true}, SHIFT(32),
  [245] = {.count = 1, .reusable = true}, SHIFT(31),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_variable_declaration, 4),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_constant_declaration, 4),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [261] = {.count = 1, .reusable = false}, SHIFT(42),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_assert, 3),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_assert, 3),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_if, 3),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(67),
  [287] = {.count = 1, .reusable = true}, SHIFT(49),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__pred, 3),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(8),
  [294] = {.count = 1, .reusable = true}, SHIFT(96),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [300] = {.count = 1, .reusable = true}, SHIFT(120),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 1),
  [304] = {.count = 1, .reusable = true}, SHIFT(82),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [308] = {.count = 1, .reusable = true}, SHIFT(118),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [312] = {.count = 1, .reusable = true}, SHIFT(70),
  [314] = {.count = 1, .reusable = true}, SHIFT(101),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(104),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 2),
  [323] = {.count = 1, .reusable = true}, SHIFT(81),
  [325] = {.count = 1, .reusable = true}, SHIFT(63),
  [327] = {.count = 1, .reusable = true}, SHIFT(83),
  [329] = {.count = 1, .reusable = true}, SHIFT(89),
  [331] = {.count = 1, .reusable = true}, SHIFT(24),
  [333] = {.count = 1, .reusable = true}, SHIFT(78),
  [335] = {.count = 1, .reusable = true}, SHIFT(79),
  [337] = {.count = 1, .reusable = true}, SHIFT(98),
  [339] = {.count = 1, .reusable = true}, SHIFT(36),
  [341] = {.count = 1, .reusable = true}, SHIFT(84),
  [343] = {.count = 1, .reusable = true}, SHIFT(80),
  [345] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [347] = {.count = 1, .reusable = true}, SHIFT(102),
  [349] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [351] = {.count = 1, .reusable = true}, SHIFT(62),
  [353] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [355] = {.count = 1, .reusable = true}, SHIFT(26),
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
