#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 65
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_GT = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  sym_variable = 21,
  aux_sym_constant_token1 = 22,
  sym_integer = 23,
  anon_sym_True = 24,
  anon_sym_False = 25,
  anon_sym_COMMA = 26,
  sym_source_file = 27,
  sym__declaration = 28,
  sym_variable_declaration = 29,
  sym_constant_declaration = 30,
  sym__statement = 31,
  sym_assign = 32,
  sym_assert = 33,
  sym__expr = 34,
  sym_mul = 35,
  sym_div = 36,
  sym_add = 37,
  sym_sub = 38,
  sym__term = 39,
  sym__pred = 40,
  sym_eq = 41,
  sym_neq = 42,
  sym_gt = 43,
  sym_gte = 44,
  sym_lt = 45,
  sym_lte = 46,
  sym_constant = 47,
  sym_type = 48,
  sym_boolean = 49,
  sym__variable_list = 50,
  sym__constant_list = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_source_file_repeat2 = 53,
  aux_sym__variable_list_repeat1 = 54,
  aux_sym__constant_list_repeat1 = 55,
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
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym__statement] = "_statement",
  [sym_assign] = "assign",
  [sym_assert] = "assert",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_con);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_skip);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_abort);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'k') ADVANCE(32);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 55:
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
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
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
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym__declaration] = STATE(10),
    [sym_variable_declaration] = STATE(10),
    [sym_constant_declaration] = STATE(10),
    [sym__statement] = STATE(26),
    [sym_assign] = STATE(26),
    [sym_assert] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_source_file_repeat2] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(9),
    [sym_abort] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
  },
  [2] = {
    [sym__expr] = STATE(25),
    [sym_mul] = STATE(25),
    [sym_div] = STATE(25),
    [sym_add] = STATE(25),
    [sym_sub] = STATE(25),
    [sym__term] = STATE(25),
    [sym__pred] = STATE(56),
    [sym_eq] = STATE(56),
    [sym_neq] = STATE(56),
    [sym_gt] = STATE(56),
    [sym_gte] = STATE(56),
    [sym_lt] = STATE(56),
    [sym_lte] = STATE(56),
    [sym_constant] = STATE(25),
    [sym_boolean] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [aux_sym_constant_token1] = ACTIONS(19),
    [sym_integer] = ACTIONS(17),
    [anon_sym_True] = ACTIONS(21),
    [anon_sym_False] = ACTIONS(21),
  },
  [3] = {
    [sym__expr] = STATE(24),
    [sym_mul] = STATE(24),
    [sym_div] = STATE(24),
    [sym_add] = STATE(24),
    [sym_sub] = STATE(24),
    [sym__term] = STATE(24),
    [sym__pred] = STATE(59),
    [sym_eq] = STATE(59),
    [sym_neq] = STATE(59),
    [sym_gt] = STATE(59),
    [sym_gte] = STATE(59),
    [sym_lt] = STATE(59),
    [sym_lte] = STATE(59),
    [sym_constant] = STATE(24),
    [sym_boolean] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(19),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(21),
    [anon_sym_False] = ACTIONS(21),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [sym_skip] = ACTIONS(27),
    [sym_abort] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [sym_variable] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(25),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_skip] = ACTIONS(31),
    [sym_abort] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_skip] = ACTIONS(35),
    [sym_abort] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [sym_variable] = ACTIONS(35),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_skip] = ACTIONS(39),
    [sym_abort] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [sym_variable] = ACTIONS(39),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_skip] = ACTIONS(43),
    [sym_abort] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [sym_variable] = ACTIONS(43),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_skip] = ACTIONS(51),
    [sym_abort] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
  },
  [10] = {
    [sym__declaration] = STATE(19),
    [sym_variable_declaration] = STATE(19),
    [sym_constant_declaration] = STATE(19),
    [sym__statement] = STATE(27),
    [sym_assign] = STATE(27),
    [sym_assert] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_source_file_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
  },
  [11] = {
    [sym__expr] = STATE(40),
    [sym_mul] = STATE(40),
    [sym_div] = STATE(40),
    [sym_add] = STATE(40),
    [sym_sub] = STATE(40),
    [sym__term] = STATE(40),
    [sym_constant] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(59),
  },
  [12] = {
    [sym__expr] = STATE(6),
    [sym_mul] = STATE(6),
    [sym_div] = STATE(6),
    [sym_add] = STATE(6),
    [sym_sub] = STATE(6),
    [sym__term] = STATE(6),
    [sym_constant] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(63),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(63),
  },
  [13] = {
    [sym__expr] = STATE(36),
    [sym_mul] = STATE(36),
    [sym_div] = STATE(36),
    [sym_add] = STATE(36),
    [sym_sub] = STATE(36),
    [sym__term] = STATE(36),
    [sym_constant] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(65),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(65),
  },
  [14] = {
    [sym__expr] = STATE(37),
    [sym_mul] = STATE(37),
    [sym_div] = STATE(37),
    [sym_add] = STATE(37),
    [sym_sub] = STATE(37),
    [sym__term] = STATE(37),
    [sym_constant] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(67),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(67),
  },
  [15] = {
    [sym__expr] = STATE(38),
    [sym_mul] = STATE(38),
    [sym_div] = STATE(38),
    [sym_add] = STATE(38),
    [sym_sub] = STATE(38),
    [sym__term] = STATE(38),
    [sym_constant] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(69),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(69),
  },
  [16] = {
    [sym__expr] = STATE(34),
    [sym_mul] = STATE(34),
    [sym_div] = STATE(34),
    [sym_add] = STATE(34),
    [sym_sub] = STATE(34),
    [sym__term] = STATE(34),
    [sym_constant] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(71),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(71),
  },
  [17] = {
    [sym__expr] = STATE(33),
    [sym_mul] = STATE(33),
    [sym_div] = STATE(33),
    [sym_add] = STATE(33),
    [sym_sub] = STATE(33),
    [sym__term] = STATE(33),
    [sym_constant] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(73),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(73),
  },
  [18] = {
    [sym__expr] = STATE(29),
    [sym_mul] = STATE(29),
    [sym_div] = STATE(29),
    [sym_add] = STATE(29),
    [sym_sub] = STATE(29),
    [sym__term] = STATE(29),
    [sym_constant] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(75),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(75),
  },
  [19] = {
    [sym__declaration] = STATE(19),
    [sym_variable_declaration] = STATE(19),
    [sym_constant_declaration] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_var] = ACTIONS(79),
    [anon_sym_con] = ACTIONS(82),
    [sym_skip] = ACTIONS(85),
    [sym_abort] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_variable] = ACTIONS(85),
  },
  [20] = {
    [sym__expr] = STATE(9),
    [sym_mul] = STATE(9),
    [sym_div] = STATE(9),
    [sym_add] = STATE(9),
    [sym_sub] = STATE(9),
    [sym__term] = STATE(9),
    [sym_constant] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(87),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(87),
  },
  [21] = {
    [sym__expr] = STATE(8),
    [sym_mul] = STATE(8),
    [sym_div] = STATE(8),
    [sym_add] = STATE(8),
    [sym_sub] = STATE(8),
    [sym__term] = STATE(8),
    [sym_constant] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(89),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(89),
  },
  [22] = {
    [sym__expr] = STATE(7),
    [sym_mul] = STATE(7),
    [sym_div] = STATE(7),
    [sym_add] = STATE(7),
    [sym_sub] = STATE(7),
    [sym__term] = STATE(7),
    [sym_constant] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(91),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(91),
  },
  [23] = {
    [sym__expr] = STATE(35),
    [sym_mul] = STATE(35),
    [sym_div] = STATE(35),
    [sym_add] = STATE(35),
    [sym_sub] = STATE(35),
    [sym__term] = STATE(35),
    [sym_constant] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_variable] = ACTIONS(93),
    [aux_sym_constant_token1] = ACTIONS(61),
    [sym_integer] = ACTIONS(93),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(111),
  },
  [25] = {
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(111),
  },
  [26] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_skip] = ACTIONS(113),
    [sym_abort] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
  },
  [27] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_skip] = ACTIONS(113),
    [sym_abort] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
  },
  [28] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_skip] = ACTIONS(119),
    [sym_abort] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_variable] = ACTIONS(125),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_skip] = ACTIONS(130),
    [sym_abort] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_variable] = ACTIONS(130),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_var] = ACTIONS(134),
    [anon_sym_con] = ACTIONS(134),
    [sym_skip] = ACTIONS(134),
    [sym_abort] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(132),
    [sym_variable] = ACTIONS(134),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_var] = ACTIONS(138),
    [anon_sym_con] = ACTIONS(138),
    [sym_skip] = ACTIONS(138),
    [sym_abort] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(136),
    [sym_variable] = ACTIONS(138),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_var] = ACTIONS(142),
    [anon_sym_con] = ACTIONS(142),
    [sym_skip] = ACTIONS(142),
    [sym_abort] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(140),
    [sym_variable] = ACTIONS(142),
  },
  [33] = {
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [34] = {
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [35] = {
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [36] = {
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [37] = {
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [38] = {
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_skip] = ACTIONS(158),
    [sym_abort] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(156),
    [sym_variable] = ACTIONS(158),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [41] = {
    [sym_constant] = STATE(51),
    [sym__constant_list] = STATE(58),
    [aux_sym__constant_list_repeat1] = STATE(42),
    [aux_sym_constant_token1] = ACTIONS(61),
  },
  [42] = {
    [sym_constant] = STATE(46),
    [aux_sym__constant_list_repeat1] = STATE(44),
    [aux_sym_constant_token1] = ACTIONS(61),
  },
  [43] = {
    [sym__variable_list] = STATE(61),
    [aux_sym__variable_list_repeat1] = STATE(49),
    [sym_variable] = ACTIONS(160),
  },
  [44] = {
    [sym_constant] = STATE(60),
    [aux_sym__constant_list_repeat1] = STATE(44),
    [aux_sym_constant_token1] = ACTIONS(162),
  },
  [45] = {
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
  },
  [46] = {
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
  },
  [47] = {
    [sym_type] = STATE(30),
    [aux_sym_constant_token1] = ACTIONS(171),
  },
  [48] = {
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(175),
  },
  [49] = {
    [aux_sym__variable_list_repeat1] = STATE(50),
    [sym_variable] = ACTIONS(177),
  },
  [50] = {
    [aux_sym__variable_list_repeat1] = STATE(50),
    [sym_variable] = ACTIONS(179),
  },
  [51] = {
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(169),
  },
  [52] = {
    [anon_sym_COLON] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(175),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
  },
  [54] = {
    [sym_type] = STATE(31),
    [aux_sym_constant_token1] = ACTIONS(171),
  },
  [55] = {
    [aux_sym_constant_token1] = ACTIONS(188),
  },
  [56] = {
    [anon_sym_RBRACE] = ACTIONS(190),
  },
  [57] = {
    [sym_variable] = ACTIONS(192),
  },
  [58] = {
    [anon_sym_COLON] = ACTIONS(194),
  },
  [59] = {
    [anon_sym_RPAREN] = ACTIONS(196),
  },
  [60] = {
    [anon_sym_COMMA] = ACTIONS(169),
  },
  [61] = {
    [anon_sym_COLON] = ACTIONS(198),
  },
  [62] = {
    [anon_sym_COMMA] = ACTIONS(175),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(200),
  },
  [64] = {
    [anon_sym_COLON_EQ] = ACTIONS(202),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(43),
  [7] = {.count = 1, .reusable = false}, SHIFT(41),
  [9] = {.count = 1, .reusable = false}, SHIFT(26),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(64),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = true}, SHIFT(25),
  [19] = {.count = 1, .reusable = false}, SHIFT(4),
  [21] = {.count = 1, .reusable = false}, SHIFT(45),
  [23] = {.count = 1, .reusable = true}, SHIFT(24),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [45] = {.count = 1, .reusable = true}, SHIFT(12),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = true}, SHIFT(11),
  [59] = {.count = 1, .reusable = true}, SHIFT(40),
  [61] = {.count = 1, .reusable = true}, SHIFT(4),
  [63] = {.count = 1, .reusable = true}, SHIFT(6),
  [65] = {.count = 1, .reusable = true}, SHIFT(36),
  [67] = {.count = 1, .reusable = true}, SHIFT(37),
  [69] = {.count = 1, .reusable = true}, SHIFT(38),
  [71] = {.count = 1, .reusable = true}, SHIFT(34),
  [73] = {.count = 1, .reusable = true}, SHIFT(33),
  [75] = {.count = 1, .reusable = true}, SHIFT(29),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [82] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [85] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [87] = {.count = 1, .reusable = true}, SHIFT(9),
  [89] = {.count = 1, .reusable = true}, SHIFT(8),
  [91] = {.count = 1, .reusable = true}, SHIFT(7),
  [93] = {.count = 1, .reusable = true}, SHIFT(35),
  [95] = {.count = 1, .reusable = true}, SHIFT(5),
  [97] = {.count = 1, .reusable = true}, SHIFT(21),
  [99] = {.count = 1, .reusable = true}, SHIFT(20),
  [101] = {.count = 1, .reusable = true}, SHIFT(17),
  [103] = {.count = 1, .reusable = true}, SHIFT(16),
  [105] = {.count = 1, .reusable = false}, SHIFT(15),
  [107] = {.count = 1, .reusable = true}, SHIFT(14),
  [109] = {.count = 1, .reusable = false}, SHIFT(13),
  [111] = {.count = 1, .reusable = true}, SHIFT(23),
  [113] = {.count = 1, .reusable = false}, SHIFT(28),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(28),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(64),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 3),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_constant_declaration, 4),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_variable_declaration, 4),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_assert, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_assert, 3),
  [160] = {.count = 1, .reusable = true}, SHIFT(48),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(4),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(55),
  [171] = {.count = 1, .reusable = true}, SHIFT(32),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [175] = {.count = 1, .reusable = true}, SHIFT(57),
  [177] = {.count = 1, .reusable = true}, SHIFT(52),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(62),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym__pred, 3),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [190] = {.count = 1, .reusable = true}, SHIFT(39),
  [192] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [194] = {.count = 1, .reusable = true}, SHIFT(47),
  [196] = {.count = 1, .reusable = true}, SHIFT(53),
  [198] = {.count = 1, .reusable = true}, SHIFT(54),
  [200] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [202] = {.count = 1, .reusable = true}, SHIFT(18),
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
