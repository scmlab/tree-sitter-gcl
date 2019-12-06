#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 198
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  sym_source_file = 36,
  sym__declaration = 37,
  sym_variable_declaration = 38,
  sym_constant_declaration = 39,
  sym__statement = 40,
  sym_assign = 41,
  sym_assert = 42,
  sym_assert_with_bound = 43,
  sym_if = 44,
  sym_do = 45,
  sym_spec = 46,
  sym__expr = 47,
  sym_mul = 48,
  sym_div = 49,
  sym_add = 50,
  sym_sub = 51,
  sym__term = 52,
  sym__pred = 53,
  sym_eq = 54,
  sym_neq = 55,
  sym_gt = 56,
  sym_gte = 57,
  sym_lt = 58,
  sym_lte = 59,
  sym_constant = 60,
  sym_type = 61,
  sym_boolean = 62,
  sym__variable_list = 63,
  sym__constant_list = 64,
  sym_guarded_command = 65,
  sym__guarded_command_list = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_source_file_repeat2 = 68,
  aux_sym__variable_list_repeat1 = 69,
  aux_sym__constant_list_repeat1 = 70,
  aux_sym__guarded_command_list_repeat1 = 71,
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
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '}') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == '|') ADVANCE(82);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_skip);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_abort);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(35);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANG_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'k') ADVANCE(56);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 82:
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
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
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
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 15},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 15},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 15},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 15},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
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
    [sym_variable] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(188),
    [sym__declaration] = STATE(15),
    [sym_variable_declaration] = STATE(15),
    [sym_constant_declaration] = STATE(15),
    [sym__statement] = STATE(41),
    [sym_assign] = STATE(41),
    [sym_assert] = STATE(41),
    [sym_assert_with_bound] = STATE(41),
    [sym_if] = STATE(41),
    [sym_do] = STATE(41),
    [sym_spec] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(15),
    [aux_sym_source_file_repeat2] = STATE(41),
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
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(174),
    [sym_eq] = STATE(174),
    [sym_neq] = STATE(174),
    [sym_gt] = STATE(174),
    [sym_gte] = STATE(174),
    [sym_lt] = STATE(174),
    [sym_lte] = STATE(174),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(174),
    [sym_guarded_command] = STATE(152),
    [sym__guarded_command_list] = STATE(168),
    [aux_sym__guarded_command_list_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [3] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(180),
    [sym_eq] = STATE(180),
    [sym_neq] = STATE(180),
    [sym_gt] = STATE(180),
    [sym_gte] = STATE(180),
    [sym_lt] = STATE(180),
    [sym_lte] = STATE(180),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(180),
    [sym_guarded_command] = STATE(152),
    [sym__guarded_command_list] = STATE(173),
    [aux_sym__guarded_command_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [4] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(174),
    [sym_eq] = STATE(174),
    [sym_neq] = STATE(174),
    [sym_gt] = STATE(174),
    [sym_gte] = STATE(174),
    [sym_lt] = STATE(174),
    [sym_lte] = STATE(174),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(174),
    [sym_guarded_command] = STATE(152),
    [sym__guarded_command_list] = STATE(172),
    [aux_sym__guarded_command_list_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [5] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(174),
    [sym_eq] = STATE(174),
    [sym_neq] = STATE(174),
    [sym_gt] = STATE(174),
    [sym_gte] = STATE(174),
    [sym_lt] = STATE(174),
    [sym_lte] = STATE(174),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(174),
    [sym_guarded_command] = STATE(152),
    [sym__guarded_command_list] = STATE(178),
    [aux_sym__guarded_command_list_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [6] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(174),
    [sym_eq] = STATE(174),
    [sym_neq] = STATE(174),
    [sym_gt] = STATE(174),
    [sym_gte] = STATE(174),
    [sym_lt] = STATE(174),
    [sym_lte] = STATE(174),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(174),
    [sym_guarded_command] = STATE(152),
    [sym__guarded_command_list] = STATE(167),
    [aux_sym__guarded_command_list_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [7] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(180),
    [sym_eq] = STATE(180),
    [sym_neq] = STATE(180),
    [sym_gt] = STATE(180),
    [sym_gte] = STATE(180),
    [sym_lt] = STATE(180),
    [sym_lte] = STATE(180),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(180),
    [sym_guarded_command] = STATE(152),
    [sym__guarded_command_list] = STATE(176),
    [aux_sym__guarded_command_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [8] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(180),
    [sym_eq] = STATE(180),
    [sym_neq] = STATE(180),
    [sym_gt] = STATE(180),
    [sym_gte] = STATE(180),
    [sym_lt] = STATE(180),
    [sym_lte] = STATE(180),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(180),
    [sym_guarded_command] = STATE(152),
    [sym__guarded_command_list] = STATE(177),
    [aux_sym__guarded_command_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [9] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(180),
    [sym_eq] = STATE(180),
    [sym_neq] = STATE(180),
    [sym_gt] = STATE(180),
    [sym_gte] = STATE(180),
    [sym_lt] = STATE(180),
    [sym_lte] = STATE(180),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(180),
    [sym_guarded_command] = STATE(152),
    [sym__guarded_command_list] = STATE(169),
    [aux_sym__guarded_command_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [10] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(180),
    [sym_eq] = STATE(180),
    [sym_neq] = STATE(180),
    [sym_gt] = STATE(180),
    [sym_gte] = STATE(180),
    [sym_lt] = STATE(180),
    [sym_lte] = STATE(180),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(180),
    [sym_guarded_command] = STATE(153),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [sym_skip] = ACTIONS(31),
    [sym_abort] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_LBRACE_BANG] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(29),
  },
  [12] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(186),
    [sym_eq] = STATE(186),
    [sym_neq] = STATE(186),
    [sym_gt] = STATE(186),
    [sym_gte] = STATE(186),
    [sym_lt] = STATE(186),
    [sym_lte] = STATE(186),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(186),
    [sym_guarded_command] = STATE(191),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_variable] = ACTIONS(36),
    [aux_sym_constant_token1] = ACTIONS(39),
    [sym_integer] = ACTIONS(36),
    [anon_sym_True] = ACTIONS(42),
    [anon_sym_False] = ACTIONS(42),
  },
  [13] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(174),
    [sym_eq] = STATE(174),
    [sym_neq] = STATE(174),
    [sym_gt] = STATE(174),
    [sym_gte] = STATE(174),
    [sym_lt] = STATE(174),
    [sym_lte] = STATE(174),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(174),
    [sym_guarded_command] = STATE(153),
    [aux_sym__guarded_command_list_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_LBRACE_BANG] = ACTIONS(45),
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
  [15] = {
    [sym__declaration] = STATE(45),
    [sym_variable_declaration] = STATE(45),
    [sym_constant_declaration] = STATE(45),
    [sym__statement] = STATE(31),
    [sym_assign] = STATE(31),
    [sym_assert] = STATE(31),
    [sym_assert_with_bound] = STATE(31),
    [sym_if] = STATE(31),
    [sym_do] = STATE(31),
    [sym_spec] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(45),
    [aux_sym_source_file_repeat2] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_con] = ACTIONS(7),
    [sym_skip] = ACTIONS(51),
    [sym_abort] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_LBRACE_BANG] = ACTIONS(53),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_skip] = ACTIONS(59),
    [sym_abort] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_LBRACE_BANG] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_skip] = ACTIONS(63),
    [sym_abort] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(63),
    [anon_sym_LBRACE_BANG] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_skip] = ACTIONS(71),
    [sym_abort] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_do] = ACTIONS(71),
    [anon_sym_LBRACE_BANG] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [sym_variable] = ACTIONS(71),
    [anon_sym_DASH_GT] = ACTIONS(69),
  },
  [20] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(164),
    [sym_eq] = STATE(164),
    [sym_neq] = STATE(164),
    [sym_gt] = STATE(164),
    [sym_gte] = STATE(164),
    [sym_lt] = STATE(164),
    [sym_lte] = STATE(164),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(164),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [21] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(162),
    [sym_eq] = STATE(162),
    [sym_neq] = STATE(162),
    [sym_gt] = STATE(162),
    [sym_gte] = STATE(162),
    [sym_lt] = STATE(162),
    [sym_lte] = STATE(162),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(162),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [22] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(165),
    [sym_eq] = STATE(165),
    [sym_neq] = STATE(165),
    [sym_gt] = STATE(165),
    [sym_gte] = STATE(165),
    [sym_lt] = STATE(165),
    [sym_lte] = STATE(165),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(165),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [23] = {
    [sym__expr] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym__pred] = STATE(156),
    [sym_eq] = STATE(156),
    [sym_neq] = STATE(156),
    [sym_gt] = STATE(156),
    [sym_gte] = STATE(156),
    [sym_lt] = STATE(156),
    [sym_lte] = STATE(156),
    [sym_constant] = STATE(103),
    [sym_boolean] = STATE(156),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [24] = {
    [sym__expr] = STATE(73),
    [sym_mul] = STATE(73),
    [sym_div] = STATE(73),
    [sym_add] = STATE(73),
    [sym_sub] = STATE(73),
    [sym__term] = STATE(73),
    [sym__pred] = STATE(175),
    [sym_eq] = STATE(175),
    [sym_neq] = STATE(175),
    [sym_gt] = STATE(175),
    [sym_gte] = STATE(175),
    [sym_lt] = STATE(175),
    [sym_lte] = STATE(175),
    [sym_constant] = STATE(73),
    [sym_boolean] = STATE(175),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_variable] = ACTIONS(73),
    [aux_sym_constant_token1] = ACTIONS(25),
    [sym_integer] = ACTIONS(73),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
  },
  [25] = {
    [sym__statement] = STATE(27),
    [sym_assign] = STATE(27),
    [sym_assert] = STATE(27),
    [sym_assert_with_bound] = STATE(27),
    [sym_if] = STATE(27),
    [sym_do] = STATE(27),
    [sym_spec] = STATE(27),
    [aux_sym_source_file_repeat2] = STATE(27),
    [sym_skip] = ACTIONS(75),
    [sym_abort] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_do] = ACTIONS(81),
    [anon_sym_od] = ACTIONS(83),
    [anon_sym_LBRACE_BANG] = ACTIONS(85),
    [sym_variable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
  },
  [26] = {
    [sym__statement] = STATE(29),
    [sym_assign] = STATE(29),
    [sym_assert] = STATE(29),
    [sym_assert_with_bound] = STATE(29),
    [sym_if] = STATE(29),
    [sym_do] = STATE(29),
    [sym_spec] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(29),
    [sym_skip] = ACTIONS(91),
    [sym_abort] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_fi] = ACTIONS(83),
    [anon_sym_do] = ACTIONS(97),
    [anon_sym_LBRACE_BANG] = ACTIONS(99),
    [sym_variable] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(89),
  },
  [27] = {
    [sym__statement] = STATE(27),
    [sym_assign] = STATE(27),
    [sym_assert] = STATE(27),
    [sym_assert_with_bound] = STATE(27),
    [sym_if] = STATE(27),
    [sym_do] = STATE(27),
    [sym_spec] = STATE(27),
    [aux_sym_source_file_repeat2] = STATE(27),
    [sym_skip] = ACTIONS(103),
    [sym_abort] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_do] = ACTIONS(112),
    [anon_sym_od] = ACTIONS(115),
    [anon_sym_LBRACE_BANG] = ACTIONS(117),
    [sym_variable] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(123),
  },
  [28] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_assert_with_bound] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [sym_spec] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [sym_skip] = ACTIONS(125),
    [sym_abort] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_do] = ACTIONS(134),
    [anon_sym_LBRACE_BANG] = ACTIONS(137),
    [anon_sym_BANG_RBRACE] = ACTIONS(123),
    [sym_variable] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(123),
  },
  [29] = {
    [sym__statement] = STATE(29),
    [sym_assign] = STATE(29),
    [sym_assert] = STATE(29),
    [sym_assert_with_bound] = STATE(29),
    [sym_if] = STATE(29),
    [sym_do] = STATE(29),
    [sym_spec] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(29),
    [sym_skip] = ACTIONS(143),
    [sym_abort] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_if] = ACTIONS(149),
    [anon_sym_fi] = ACTIONS(115),
    [anon_sym_do] = ACTIONS(152),
    [anon_sym_LBRACE_BANG] = ACTIONS(155),
    [sym_variable] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(123),
  },
  [30] = {
    [sym__statement] = STATE(30),
    [sym_assign] = STATE(30),
    [sym_assert] = STATE(30),
    [sym_assert_with_bound] = STATE(30),
    [sym_if] = STATE(30),
    [sym_do] = STATE(30),
    [sym_spec] = STATE(30),
    [aux_sym_source_file_repeat2] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_skip] = ACTIONS(161),
    [sym_abort] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_do] = ACTIONS(170),
    [anon_sym_LBRACE_BANG] = ACTIONS(173),
    [sym_variable] = ACTIONS(176),
  },
  [31] = {
    [sym__statement] = STATE(30),
    [sym_assign] = STATE(30),
    [sym_assert] = STATE(30),
    [sym_assert_with_bound] = STATE(30),
    [sym_if] = STATE(30),
    [sym_do] = STATE(30),
    [sym_spec] = STATE(30),
    [aux_sym_source_file_repeat2] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_skip] = ACTIONS(181),
    [sym_abort] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [32] = {
    [sym__statement] = STATE(34),
    [sym_assign] = STATE(34),
    [sym_assert] = STATE(34),
    [sym_assert_with_bound] = STATE(34),
    [sym_if] = STATE(34),
    [sym_do] = STATE(34),
    [sym_spec] = STATE(34),
    [aux_sym_source_file_repeat2] = STATE(34),
    [sym_skip] = ACTIONS(183),
    [sym_abort] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [anon_sym_BANG_RBRACE] = ACTIONS(193),
    [sym_variable] = ACTIONS(195),
  },
  [33] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_assert_with_bound] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [sym_spec] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [sym_skip] = ACTIONS(197),
    [sym_abort] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [anon_sym_BANG_RBRACE] = ACTIONS(199),
    [sym_variable] = ACTIONS(195),
  },
  [34] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_assert_with_bound] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [sym_spec] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [sym_skip] = ACTIONS(197),
    [sym_abort] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [anon_sym_BANG_RBRACE] = ACTIONS(201),
    [sym_variable] = ACTIONS(195),
  },
  [35] = {
    [sym__statement] = STATE(33),
    [sym_assign] = STATE(33),
    [sym_assert] = STATE(33),
    [sym_assert_with_bound] = STATE(33),
    [sym_if] = STATE(33),
    [sym_do] = STATE(33),
    [sym_spec] = STATE(33),
    [aux_sym_source_file_repeat2] = STATE(33),
    [sym_skip] = ACTIONS(203),
    [sym_abort] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [anon_sym_BANG_RBRACE] = ACTIONS(205),
    [sym_variable] = ACTIONS(195),
  },
  [36] = {
    [sym__statement] = STATE(37),
    [sym_assign] = STATE(37),
    [sym_assert] = STATE(37),
    [sym_assert_with_bound] = STATE(37),
    [sym_if] = STATE(37),
    [sym_do] = STATE(37),
    [sym_spec] = STATE(37),
    [aux_sym_source_file_repeat2] = STATE(37),
    [sym_skip] = ACTIONS(207),
    [sym_abort] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [anon_sym_BANG_RBRACE] = ACTIONS(209),
    [sym_variable] = ACTIONS(195),
  },
  [37] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_assert_with_bound] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [sym_spec] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [sym_skip] = ACTIONS(197),
    [sym_abort] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [anon_sym_BANG_RBRACE] = ACTIONS(211),
    [sym_variable] = ACTIONS(195),
  },
  [38] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_assert_with_bound] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [sym_spec] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [sym_skip] = ACTIONS(197),
    [sym_abort] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [sym_variable] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(89),
  },
  [39] = {
    [sym__statement] = STATE(40),
    [sym_assign] = STATE(40),
    [sym_assert] = STATE(40),
    [sym_assert_with_bound] = STATE(40),
    [sym_if] = STATE(40),
    [sym_do] = STATE(40),
    [sym_spec] = STATE(40),
    [aux_sym_source_file_repeat2] = STATE(40),
    [sym_skip] = ACTIONS(213),
    [sym_abort] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [anon_sym_BANG_RBRACE] = ACTIONS(215),
    [sym_variable] = ACTIONS(195),
  },
  [40] = {
    [sym__statement] = STATE(28),
    [sym_assign] = STATE(28),
    [sym_assert] = STATE(28),
    [sym_assert_with_bound] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [sym_spec] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(28),
    [sym_skip] = ACTIONS(197),
    [sym_abort] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [anon_sym_BANG_RBRACE] = ACTIONS(217),
    [sym_variable] = ACTIONS(195),
  },
  [41] = {
    [sym__statement] = STATE(30),
    [sym_assign] = STATE(30),
    [sym_assert] = STATE(30),
    [sym_assert_with_bound] = STATE(30),
    [sym_if] = STATE(30),
    [sym_do] = STATE(30),
    [sym_spec] = STATE(30),
    [aux_sym_source_file_repeat2] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_skip] = ACTIONS(181),
    [sym_abort] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_LBRACE_BANG] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [42] = {
    [sym__statement] = STATE(25),
    [sym_assign] = STATE(25),
    [sym_assert] = STATE(25),
    [sym_assert_with_bound] = STATE(25),
    [sym_if] = STATE(25),
    [sym_do] = STATE(25),
    [sym_spec] = STATE(25),
    [aux_sym_source_file_repeat2] = STATE(25),
    [sym_skip] = ACTIONS(219),
    [sym_abort] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_do] = ACTIONS(81),
    [anon_sym_LBRACE_BANG] = ACTIONS(85),
    [sym_variable] = ACTIONS(87),
  },
  [43] = {
    [sym__statement] = STATE(38),
    [sym_assign] = STATE(38),
    [sym_assert] = STATE(38),
    [sym_assert_with_bound] = STATE(38),
    [sym_if] = STATE(38),
    [sym_do] = STATE(38),
    [sym_spec] = STATE(38),
    [aux_sym_source_file_repeat2] = STATE(38),
    [sym_skip] = ACTIONS(221),
    [sym_abort] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_LBRACE_BANG] = ACTIONS(191),
    [sym_variable] = ACTIONS(195),
  },
  [44] = {
    [sym__statement] = STATE(26),
    [sym_assign] = STATE(26),
    [sym_assert] = STATE(26),
    [sym_assert_with_bound] = STATE(26),
    [sym_if] = STATE(26),
    [sym_do] = STATE(26),
    [sym_spec] = STATE(26),
    [aux_sym_source_file_repeat2] = STATE(26),
    [sym_skip] = ACTIONS(223),
    [sym_abort] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_do] = ACTIONS(97),
    [anon_sym_LBRACE_BANG] = ACTIONS(99),
    [sym_variable] = ACTIONS(101),
  },
  [45] = {
    [sym__declaration] = STATE(45),
    [sym_variable_declaration] = STATE(45),
    [sym_constant_declaration] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_var] = ACTIONS(227),
    [anon_sym_con] = ACTIONS(230),
    [sym_skip] = ACTIONS(233),
    [sym_abort] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_if] = ACTIONS(233),
    [anon_sym_do] = ACTIONS(233),
    [anon_sym_LBRACE_BANG] = ACTIONS(225),
    [sym_variable] = ACTIONS(233),
  },
  [46] = {
    [sym_skip] = ACTIONS(71),
    [sym_abort] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_do] = ACTIONS(71),
    [anon_sym_od] = ACTIONS(71),
    [anon_sym_LBRACE_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_variable] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [47] = {
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_LBRACE_BANG] = ACTIONS(53),
    [anon_sym_BANG_RBRACE] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
  },
  [48] = {
    [sym_skip] = ACTIONS(239),
    [sym_abort] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_fi] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_LBRACE_BANG] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(249),
    [sym_variable] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
  },
  [49] = {
    [sym_skip] = ACTIONS(63),
    [sym_abort] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(63),
    [anon_sym_od] = ACTIONS(63),
    [anon_sym_LBRACE_BANG] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_variable] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(61),
  },
  [50] = {
    [sym_skip] = ACTIONS(31),
    [sym_abort] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_fi] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_LBRACE_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(29),
  },
  [51] = {
    [sym_skip] = ACTIONS(59),
    [sym_abort] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_fi] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_LBRACE_BANG] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
  },
  [52] = {
    [sym_skip] = ACTIONS(63),
    [sym_abort] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(63),
    [anon_sym_LBRACE_BANG] = ACTIONS(61),
    [anon_sym_BANG_RBRACE] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_variable] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(61),
  },
  [53] = {
    [sym_skip] = ACTIONS(71),
    [sym_abort] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_do] = ACTIONS(71),
    [anon_sym_LBRACE_BANG] = ACTIONS(69),
    [anon_sym_BANG_RBRACE] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_variable] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [54] = {
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_LBRACE_BANG] = ACTIONS(45),
    [anon_sym_BANG_RBRACE] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(45),
  },
  [55] = {
    [sym_skip] = ACTIONS(59),
    [sym_abort] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_LBRACE_BANG] = ACTIONS(57),
    [anon_sym_BANG_RBRACE] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
  },
  [56] = {
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_fi] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_LBRACE_BANG] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(45),
  },
  [57] = {
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_fi] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_LBRACE_BANG] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
  },
  [58] = {
    [sym_skip] = ACTIONS(239),
    [sym_abort] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_LBRACE_BANG] = ACTIONS(241),
    [anon_sym_BANG_RBRACE] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(257),
    [sym_variable] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
  },
  [59] = {
    [sym_skip] = ACTIONS(71),
    [sym_abort] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_fi] = ACTIONS(71),
    [anon_sym_do] = ACTIONS(71),
    [anon_sym_LBRACE_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_variable] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [60] = {
    [sym_skip] = ACTIONS(63),
    [sym_abort] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(63),
    [anon_sym_LBRACE_BANG] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_variable] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(61),
  },
  [61] = {
    [sym_skip] = ACTIONS(31),
    [sym_abort] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_od] = ACTIONS(31),
    [anon_sym_LBRACE_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(29),
  },
  [62] = {
    [sym_skip] = ACTIONS(239),
    [sym_abort] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_od] = ACTIONS(239),
    [anon_sym_LBRACE_BANG] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(261),
    [sym_variable] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
  },
  [63] = {
    [sym_skip] = ACTIONS(55),
    [sym_abort] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_od] = ACTIONS(55),
    [anon_sym_LBRACE_BANG] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_variable] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
  },
  [64] = {
    [sym_skip] = ACTIONS(31),
    [sym_abort] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_LBRACE_BANG] = ACTIONS(29),
    [anon_sym_BANG_RBRACE] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(29),
  },
  [65] = {
    [sym_skip] = ACTIONS(59),
    [sym_abort] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_od] = ACTIONS(59),
    [anon_sym_LBRACE_BANG] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
  },
  [66] = {
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_od] = ACTIONS(47),
    [anon_sym_LBRACE_BANG] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(45),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_skip] = ACTIONS(239),
    [sym_abort] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_LBRACE_BANG] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
    [sym_variable] = ACTIONS(239),
  },
  [68] = {
    [sym__expr] = STATE(134),
    [sym_mul] = STATE(134),
    [sym_div] = STATE(134),
    [sym_add] = STATE(134),
    [sym_sub] = STATE(134),
    [sym__term] = STATE(134),
    [sym_constant] = STATE(134),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(269),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(269),
  },
  [69] = {
    [sym__expr] = STATE(52),
    [sym_mul] = STATE(52),
    [sym_div] = STATE(52),
    [sym_add] = STATE(52),
    [sym_sub] = STATE(52),
    [sym__term] = STATE(52),
    [sym_constant] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(275),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(275),
  },
  [70] = {
    [sym__expr] = STATE(143),
    [sym_mul] = STATE(143),
    [sym_div] = STATE(143),
    [sym_add] = STATE(143),
    [sym_sub] = STATE(143),
    [sym__term] = STATE(143),
    [sym_constant] = STATE(143),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(279),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(279),
  },
  [71] = {
    [sym__expr] = STATE(141),
    [sym_mul] = STATE(141),
    [sym_div] = STATE(141),
    [sym_add] = STATE(141),
    [sym_sub] = STATE(141),
    [sym__term] = STATE(141),
    [sym_constant] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(281),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(281),
  },
  [72] = {
    [sym__expr] = STATE(140),
    [sym_mul] = STATE(140),
    [sym_div] = STATE(140),
    [sym_add] = STATE(140),
    [sym_sub] = STATE(140),
    [sym__term] = STATE(140),
    [sym_constant] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(283),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(283),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(297),
  },
  [74] = {
    [sym__expr] = STATE(128),
    [sym_mul] = STATE(128),
    [sym_div] = STATE(128),
    [sym_add] = STATE(128),
    [sym_sub] = STATE(128),
    [sym__term] = STATE(128),
    [sym_constant] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(299),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(299),
  },
  [75] = {
    [sym__expr] = STATE(138),
    [sym_mul] = STATE(138),
    [sym_div] = STATE(138),
    [sym_add] = STATE(138),
    [sym_sub] = STATE(138),
    [sym__term] = STATE(138),
    [sym_constant] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(301),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(301),
  },
  [76] = {
    [sym__expr] = STATE(131),
    [sym_mul] = STATE(131),
    [sym_div] = STATE(131),
    [sym_add] = STATE(131),
    [sym_sub] = STATE(131),
    [sym__term] = STATE(131),
    [sym_constant] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(303),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(303),
  },
  [77] = {
    [sym__expr] = STATE(144),
    [sym_mul] = STATE(144),
    [sym_div] = STATE(144),
    [sym_add] = STATE(144),
    [sym_sub] = STATE(144),
    [sym__term] = STATE(144),
    [sym_constant] = STATE(144),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(305),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(305),
  },
  [78] = {
    [sym__expr] = STATE(17),
    [sym_mul] = STATE(17),
    [sym_div] = STATE(17),
    [sym_add] = STATE(17),
    [sym_sub] = STATE(17),
    [sym__term] = STATE(17),
    [sym_constant] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(307),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(307),
  },
  [79] = {
    [sym__expr] = STATE(142),
    [sym_mul] = STATE(142),
    [sym_div] = STATE(142),
    [sym_add] = STATE(142),
    [sym_sub] = STATE(142),
    [sym__term] = STATE(142),
    [sym_constant] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(309),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(309),
  },
  [80] = {
    [sym__expr] = STATE(145),
    [sym_mul] = STATE(145),
    [sym_div] = STATE(145),
    [sym_add] = STATE(145),
    [sym_sub] = STATE(145),
    [sym__term] = STATE(145),
    [sym_constant] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(311),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(311),
  },
  [81] = {
    [sym__expr] = STATE(67),
    [sym_mul] = STATE(67),
    [sym_div] = STATE(67),
    [sym_add] = STATE(67),
    [sym_sub] = STATE(67),
    [sym__term] = STATE(67),
    [sym_constant] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(313),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(313),
  },
  [82] = {
    [sym__expr] = STATE(19),
    [sym_mul] = STATE(19),
    [sym_div] = STATE(19),
    [sym_add] = STATE(19),
    [sym_sub] = STATE(19),
    [sym__term] = STATE(19),
    [sym_constant] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(315),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(315),
  },
  [83] = {
    [sym__expr] = STATE(14),
    [sym_mul] = STATE(14),
    [sym_div] = STATE(14),
    [sym_add] = STATE(14),
    [sym_sub] = STATE(14),
    [sym__term] = STATE(14),
    [sym_constant] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(317),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(317),
  },
  [84] = {
    [sym__expr] = STATE(18),
    [sym_mul] = STATE(18),
    [sym_div] = STATE(18),
    [sym_add] = STATE(18),
    [sym_sub] = STATE(18),
    [sym__term] = STATE(18),
    [sym_constant] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(319),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(319),
  },
  [85] = {
    [sym__expr] = STATE(136),
    [sym_mul] = STATE(136),
    [sym_div] = STATE(136),
    [sym_add] = STATE(136),
    [sym_sub] = STATE(136),
    [sym__term] = STATE(136),
    [sym_constant] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(321),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(321),
  },
  [86] = {
    [sym__expr] = STATE(60),
    [sym_mul] = STATE(60),
    [sym_div] = STATE(60),
    [sym_add] = STATE(60),
    [sym_sub] = STATE(60),
    [sym__term] = STATE(60),
    [sym_constant] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(323),
    [sym_variable] = ACTIONS(325),
    [aux_sym_constant_token1] = ACTIONS(327),
    [sym_integer] = ACTIONS(325),
  },
  [87] = {
    [sym__expr] = STATE(49),
    [sym_mul] = STATE(49),
    [sym_div] = STATE(49),
    [sym_add] = STATE(49),
    [sym_sub] = STATE(49),
    [sym__term] = STATE(49),
    [sym_constant] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(329),
    [sym_variable] = ACTIONS(331),
    [aux_sym_constant_token1] = ACTIONS(333),
    [sym_integer] = ACTIONS(331),
  },
  [88] = {
    [sym__expr] = STATE(139),
    [sym_mul] = STATE(139),
    [sym_div] = STATE(139),
    [sym_add] = STATE(139),
    [sym_sub] = STATE(139),
    [sym__term] = STATE(139),
    [sym_constant] = STATE(139),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(335),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(335),
  },
  [89] = {
    [sym__expr] = STATE(46),
    [sym_mul] = STATE(46),
    [sym_div] = STATE(46),
    [sym_add] = STATE(46),
    [sym_sub] = STATE(46),
    [sym__term] = STATE(46),
    [sym_constant] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(329),
    [sym_variable] = ACTIONS(337),
    [aux_sym_constant_token1] = ACTIONS(333),
    [sym_integer] = ACTIONS(337),
  },
  [90] = {
    [sym__expr] = STATE(66),
    [sym_mul] = STATE(66),
    [sym_div] = STATE(66),
    [sym_add] = STATE(66),
    [sym_sub] = STATE(66),
    [sym__term] = STATE(66),
    [sym_constant] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(329),
    [sym_variable] = ACTIONS(339),
    [aux_sym_constant_token1] = ACTIONS(333),
    [sym_integer] = ACTIONS(339),
  },
  [91] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym_constant] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(323),
    [sym_variable] = ACTIONS(341),
    [aux_sym_constant_token1] = ACTIONS(327),
    [sym_integer] = ACTIONS(341),
  },
  [92] = {
    [sym__expr] = STATE(58),
    [sym_mul] = STATE(58),
    [sym_div] = STATE(58),
    [sym_add] = STATE(58),
    [sym_sub] = STATE(58),
    [sym__term] = STATE(58),
    [sym_constant] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(343),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(343),
  },
  [93] = {
    [sym__expr] = STATE(55),
    [sym_mul] = STATE(55),
    [sym_div] = STATE(55),
    [sym_add] = STATE(55),
    [sym_sub] = STATE(55),
    [sym__term] = STATE(55),
    [sym_constant] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(345),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(345),
  },
  [94] = {
    [sym__expr] = STATE(54),
    [sym_mul] = STATE(54),
    [sym_div] = STATE(54),
    [sym_add] = STATE(54),
    [sym_sub] = STATE(54),
    [sym__term] = STATE(54),
    [sym_constant] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(347),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(347),
  },
  [95] = {
    [sym__expr] = STATE(53),
    [sym_mul] = STATE(53),
    [sym_div] = STATE(53),
    [sym_add] = STATE(53),
    [sym_sub] = STATE(53),
    [sym__term] = STATE(53),
    [sym_constant] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym_variable] = ACTIONS(349),
    [aux_sym_constant_token1] = ACTIONS(277),
    [sym_integer] = ACTIONS(349),
  },
  [96] = {
    [sym__expr] = STATE(133),
    [sym_mul] = STATE(133),
    [sym_div] = STATE(133),
    [sym_add] = STATE(133),
    [sym_sub] = STATE(133),
    [sym__term] = STATE(133),
    [sym_constant] = STATE(133),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(351),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(351),
  },
  [97] = {
    [sym__expr] = STATE(56),
    [sym_mul] = STATE(56),
    [sym_div] = STATE(56),
    [sym_add] = STATE(56),
    [sym_sub] = STATE(56),
    [sym__term] = STATE(56),
    [sym_constant] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(323),
    [sym_variable] = ACTIONS(353),
    [aux_sym_constant_token1] = ACTIONS(327),
    [sym_integer] = ACTIONS(353),
  },
  [98] = {
    [sym__expr] = STATE(51),
    [sym_mul] = STATE(51),
    [sym_div] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym__term] = STATE(51),
    [sym_constant] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(323),
    [sym_variable] = ACTIONS(355),
    [aux_sym_constant_token1] = ACTIONS(327),
    [sym_integer] = ACTIONS(355),
  },
  [99] = {
    [sym__expr] = STATE(126),
    [sym_mul] = STATE(126),
    [sym_div] = STATE(126),
    [sym_add] = STATE(126),
    [sym_sub] = STATE(126),
    [sym__term] = STATE(126),
    [sym_constant] = STATE(126),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_variable] = ACTIONS(357),
    [aux_sym_constant_token1] = ACTIONS(271),
    [sym_integer] = ACTIONS(357),
  },
  [100] = {
    [sym__expr] = STATE(48),
    [sym_mul] = STATE(48),
    [sym_div] = STATE(48),
    [sym_add] = STATE(48),
    [sym_sub] = STATE(48),
    [sym__term] = STATE(48),
    [sym_constant] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(323),
    [sym_variable] = ACTIONS(359),
    [aux_sym_constant_token1] = ACTIONS(327),
    [sym_integer] = ACTIONS(359),
  },
  [101] = {
    [sym__expr] = STATE(65),
    [sym_mul] = STATE(65),
    [sym_div] = STATE(65),
    [sym_add] = STATE(65),
    [sym_sub] = STATE(65),
    [sym__term] = STATE(65),
    [sym_constant] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(329),
    [sym_variable] = ACTIONS(361),
    [aux_sym_constant_token1] = ACTIONS(333),
    [sym_integer] = ACTIONS(361),
  },
  [102] = {
    [sym__expr] = STATE(62),
    [sym_mul] = STATE(62),
    [sym_div] = STATE(62),
    [sym_add] = STATE(62),
    [sym_sub] = STATE(62),
    [sym__term] = STATE(62),
    [sym_constant] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(329),
    [sym_variable] = ACTIONS(363),
    [aux_sym_constant_token1] = ACTIONS(333),
    [sym_integer] = ACTIONS(363),
  },
  [103] = {
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(297),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_var] = ACTIONS(367),
    [anon_sym_con] = ACTIONS(367),
    [sym_skip] = ACTIONS(367),
    [sym_abort] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_do] = ACTIONS(367),
    [anon_sym_LBRACE_BANG] = ACTIONS(365),
    [sym_variable] = ACTIONS(367),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_var] = ACTIONS(371),
    [anon_sym_con] = ACTIONS(371),
    [sym_skip] = ACTIONS(371),
    [sym_abort] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_if] = ACTIONS(371),
    [anon_sym_do] = ACTIONS(371),
    [anon_sym_LBRACE_BANG] = ACTIONS(369),
    [sym_variable] = ACTIONS(371),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_var] = ACTIONS(375),
    [anon_sym_con] = ACTIONS(375),
    [sym_skip] = ACTIONS(375),
    [sym_abort] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(375),
    [anon_sym_if] = ACTIONS(375),
    [anon_sym_do] = ACTIONS(375),
    [anon_sym_LBRACE_BANG] = ACTIONS(373),
    [sym_variable] = ACTIONS(375),
  },
  [107] = {
    [sym_skip] = ACTIONS(377),
    [sym_abort] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_do] = ACTIONS(377),
    [anon_sym_od] = ACTIONS(377),
    [anon_sym_LBRACE_BANG] = ACTIONS(379),
    [sym_variable] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(379),
  },
  [108] = {
    [sym_skip] = ACTIONS(381),
    [sym_abort] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_do] = ACTIONS(381),
    [anon_sym_od] = ACTIONS(381),
    [anon_sym_LBRACE_BANG] = ACTIONS(383),
    [sym_variable] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(383),
  },
  [109] = {
    [sym_skip] = ACTIONS(385),
    [sym_abort] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_if] = ACTIONS(385),
    [anon_sym_do] = ACTIONS(385),
    [anon_sym_LBRACE_BANG] = ACTIONS(387),
    [anon_sym_BANG_RBRACE] = ACTIONS(387),
    [sym_variable] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(387),
  },
  [110] = {
    [sym_skip] = ACTIONS(385),
    [sym_abort] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_if] = ACTIONS(385),
    [anon_sym_fi] = ACTIONS(385),
    [anon_sym_do] = ACTIONS(385),
    [anon_sym_LBRACE_BANG] = ACTIONS(387),
    [sym_variable] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(387),
  },
  [111] = {
    [sym_skip] = ACTIONS(381),
    [sym_abort] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_fi] = ACTIONS(381),
    [anon_sym_do] = ACTIONS(381),
    [anon_sym_LBRACE_BANG] = ACTIONS(383),
    [sym_variable] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(383),
  },
  [112] = {
    [sym_skip] = ACTIONS(385),
    [sym_abort] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_if] = ACTIONS(385),
    [anon_sym_do] = ACTIONS(385),
    [anon_sym_od] = ACTIONS(385),
    [anon_sym_LBRACE_BANG] = ACTIONS(387),
    [sym_variable] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(387),
  },
  [113] = {
    [sym_skip] = ACTIONS(377),
    [sym_abort] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_do] = ACTIONS(377),
    [anon_sym_LBRACE_BANG] = ACTIONS(379),
    [anon_sym_BANG_RBRACE] = ACTIONS(379),
    [sym_variable] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(379),
  },
  [114] = {
    [sym_skip] = ACTIONS(389),
    [sym_abort] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_if] = ACTIONS(389),
    [anon_sym_do] = ACTIONS(389),
    [anon_sym_LBRACE_BANG] = ACTIONS(391),
    [anon_sym_BANG_RBRACE] = ACTIONS(391),
    [sym_variable] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(391),
  },
  [115] = {
    [sym_skip] = ACTIONS(393),
    [sym_abort] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_if] = ACTIONS(393),
    [anon_sym_do] = ACTIONS(393),
    [anon_sym_LBRACE_BANG] = ACTIONS(395),
    [anon_sym_BANG_RBRACE] = ACTIONS(395),
    [sym_variable] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(395),
  },
  [116] = {
    [sym_skip] = ACTIONS(397),
    [sym_abort] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_do] = ACTIONS(397),
    [anon_sym_LBRACE_BANG] = ACTIONS(399),
    [anon_sym_BANG_RBRACE] = ACTIONS(399),
    [sym_variable] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(399),
  },
  [117] = {
    [sym_skip] = ACTIONS(381),
    [sym_abort] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_do] = ACTIONS(381),
    [anon_sym_LBRACE_BANG] = ACTIONS(383),
    [anon_sym_BANG_RBRACE] = ACTIONS(383),
    [sym_variable] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(383),
  },
  [118] = {
    [sym_skip] = ACTIONS(397),
    [sym_abort] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_fi] = ACTIONS(397),
    [anon_sym_do] = ACTIONS(397),
    [anon_sym_LBRACE_BANG] = ACTIONS(399),
    [sym_variable] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(399),
  },
  [119] = {
    [sym_skip] = ACTIONS(393),
    [sym_abort] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_if] = ACTIONS(393),
    [anon_sym_fi] = ACTIONS(393),
    [anon_sym_do] = ACTIONS(393),
    [anon_sym_LBRACE_BANG] = ACTIONS(395),
    [sym_variable] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(395),
  },
  [120] = {
    [sym_skip] = ACTIONS(389),
    [sym_abort] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_if] = ACTIONS(389),
    [anon_sym_fi] = ACTIONS(389),
    [anon_sym_do] = ACTIONS(389),
    [anon_sym_LBRACE_BANG] = ACTIONS(391),
    [sym_variable] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(391),
  },
  [121] = {
    [sym_skip] = ACTIONS(377),
    [sym_abort] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_fi] = ACTIONS(377),
    [anon_sym_do] = ACTIONS(377),
    [anon_sym_LBRACE_BANG] = ACTIONS(379),
    [sym_variable] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(379),
  },
  [122] = {
    [sym_skip] = ACTIONS(397),
    [sym_abort] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_do] = ACTIONS(397),
    [anon_sym_od] = ACTIONS(397),
    [anon_sym_LBRACE_BANG] = ACTIONS(399),
    [sym_variable] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(399),
  },
  [123] = {
    [sym_skip] = ACTIONS(393),
    [sym_abort] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_if] = ACTIONS(393),
    [anon_sym_do] = ACTIONS(393),
    [anon_sym_od] = ACTIONS(393),
    [anon_sym_LBRACE_BANG] = ACTIONS(395),
    [sym_variable] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(395),
  },
  [124] = {
    [sym_skip] = ACTIONS(389),
    [sym_abort] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_if] = ACTIONS(389),
    [anon_sym_do] = ACTIONS(389),
    [anon_sym_od] = ACTIONS(389),
    [anon_sym_LBRACE_BANG] = ACTIONS(391),
    [sym_variable] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(391),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [sym_skip] = ACTIONS(393),
    [sym_abort] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_if] = ACTIONS(393),
    [anon_sym_do] = ACTIONS(393),
    [anon_sym_LBRACE_BANG] = ACTIONS(395),
    [sym_variable] = ACTIONS(393),
  },
  [126] = {
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_DASH_GT] = ACTIONS(401),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_skip] = ACTIONS(397),
    [sym_abort] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_do] = ACTIONS(397),
    [anon_sym_LBRACE_BANG] = ACTIONS(399),
    [sym_variable] = ACTIONS(397),
  },
  [128] = {
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_COMMA] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_DASH_GT] = ACTIONS(405),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [sym_skip] = ACTIONS(377),
    [sym_abort] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_do] = ACTIONS(377),
    [anon_sym_LBRACE_BANG] = ACTIONS(379),
    [sym_variable] = ACTIONS(377),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [sym_skip] = ACTIONS(381),
    [sym_abort] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_do] = ACTIONS(381),
    [anon_sym_LBRACE_BANG] = ACTIONS(383),
    [sym_variable] = ACTIONS(381),
  },
  [131] = {
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_DASH_GT] = ACTIONS(407),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [sym_skip] = ACTIONS(389),
    [sym_abort] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_if] = ACTIONS(389),
    [anon_sym_do] = ACTIONS(389),
    [anon_sym_LBRACE_BANG] = ACTIONS(391),
    [sym_variable] = ACTIONS(389),
  },
  [133] = {
    [anon_sym_RBRACE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_DASH_GT] = ACTIONS(409),
  },
  [134] = {
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_DASH_GT] = ACTIONS(411),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [sym_skip] = ACTIONS(385),
    [sym_abort] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_if] = ACTIONS(385),
    [anon_sym_do] = ACTIONS(385),
    [anon_sym_LBRACE_BANG] = ACTIONS(387),
    [sym_variable] = ACTIONS(385),
  },
  [136] = {
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_DASH_GT] = ACTIONS(413),
  },
  [137] = {
    [anon_sym_LPAREN] = ACTIONS(415),
    [sym_variable] = ACTIONS(415),
    [aux_sym_constant_token1] = ACTIONS(417),
    [sym_integer] = ACTIONS(415),
    [anon_sym_True] = ACTIONS(417),
    [anon_sym_False] = ACTIONS(417),
  },
  [138] = {
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
  },
  [139] = {
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
  },
  [141] = {
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
  },
  [143] = {
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
  },
  [146] = {
    [sym_constant] = STATE(154),
    [sym__constant_list] = STATE(179),
    [aux_sym__constant_list_repeat1] = STATE(150),
    [aux_sym_constant_token1] = ACTIONS(271),
  },
  [147] = {
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_DASH_GT] = ACTIONS(433),
  },
  [148] = {
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
  },
  [149] = {
    [sym__variable_list] = STATE(184),
    [aux_sym__variable_list_repeat1] = STATE(159),
    [sym_variable] = ACTIONS(437),
  },
  [150] = {
    [sym_constant] = STATE(163),
    [aux_sym__constant_list_repeat1] = STATE(151),
    [aux_sym_constant_token1] = ACTIONS(271),
  },
  [151] = {
    [sym_constant] = STATE(182),
    [aux_sym__constant_list_repeat1] = STATE(151),
    [aux_sym_constant_token1] = ACTIONS(439),
  },
  [152] = {
    [anon_sym_fi] = ACTIONS(442),
    [anon_sym_od] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(444),
  },
  [153] = {
    [anon_sym_fi] = ACTIONS(446),
    [anon_sym_od] = ACTIONS(446),
    [anon_sym_PIPE] = ACTIONS(444),
  },
  [154] = {
    [anon_sym_COLON] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(450),
  },
  [155] = {
    [sym_type] = STATE(105),
    [aux_sym_constant_token1] = ACTIONS(452),
  },
  [156] = {
    [anon_sym_RBRACE] = ACTIONS(454),
    [anon_sym_COMMA] = ACTIONS(456),
  },
  [157] = {
    [anon_sym_COLON] = ACTIONS(458),
    [anon_sym_COMMA] = ACTIONS(460),
  },
  [158] = {
    [aux_sym__variable_list_repeat1] = STATE(158),
    [sym_variable] = ACTIONS(462),
  },
  [159] = {
    [aux_sym__variable_list_repeat1] = STATE(158),
    [sym_variable] = ACTIONS(465),
  },
  [160] = {
    [sym_type] = STATE(104),
    [aux_sym_constant_token1] = ACTIONS(452),
  },
  [161] = {
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_COMMA] = ACTIONS(460),
  },
  [162] = {
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(471),
  },
  [163] = {
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(450),
  },
  [164] = {
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(477),
  },
  [165] = {
    [anon_sym_RBRACE] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(481),
  },
  [166] = {
    [anon_sym_COLON_EQ] = ACTIONS(483),
  },
  [167] = {
    [anon_sym_fi] = ACTIONS(485),
  },
  [168] = {
    [anon_sym_fi] = ACTIONS(487),
  },
  [169] = {
    [anon_sym_od] = ACTIONS(489),
  },
  [170] = {
    [anon_sym_COLON_EQ] = ACTIONS(491),
  },
  [171] = {
    [anon_sym_bnd] = ACTIONS(493),
  },
  [172] = {
    [anon_sym_fi] = ACTIONS(495),
  },
  [173] = {
    [anon_sym_od] = ACTIONS(497),
  },
  [174] = {
    [anon_sym_DASH_GT] = ACTIONS(499),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(501),
  },
  [176] = {
    [anon_sym_od] = ACTIONS(503),
  },
  [177] = {
    [anon_sym_od] = ACTIONS(505),
  },
  [178] = {
    [anon_sym_fi] = ACTIONS(507),
  },
  [179] = {
    [anon_sym_COLON] = ACTIONS(509),
  },
  [180] = {
    [anon_sym_DASH_GT] = ACTIONS(511),
  },
  [181] = {
    [anon_sym_COLON_EQ] = ACTIONS(513),
  },
  [182] = {
    [anon_sym_COMMA] = ACTIONS(450),
  },
  [183] = {
    [sym_variable] = ACTIONS(515),
  },
  [184] = {
    [anon_sym_COLON] = ACTIONS(517),
  },
  [185] = {
    [aux_sym_constant_token1] = ACTIONS(519),
  },
  [186] = {
    [anon_sym_DASH_GT] = ACTIONS(521),
  },
  [187] = {
    [anon_sym_COMMA] = ACTIONS(460),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(523),
  },
  [189] = {
    [anon_sym_COLON_EQ] = ACTIONS(525),
  },
  [190] = {
    [anon_sym_COLON] = ACTIONS(527),
  },
  [191] = {
    [anon_sym_PIPE] = ACTIONS(444),
  },
  [192] = {
    [anon_sym_COLON] = ACTIONS(529),
  },
  [193] = {
    [anon_sym_COLON] = ACTIONS(531),
  },
  [194] = {
    [anon_sym_COLON] = ACTIONS(533),
  },
  [195] = {
    [anon_sym_bnd] = ACTIONS(535),
  },
  [196] = {
    [anon_sym_bnd] = ACTIONS(537),
  },
  [197] = {
    [anon_sym_bnd] = ACTIONS(539),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(149),
  [7] = {.count = 1, .reusable = false}, SHIFT(146),
  [9] = {.count = 1, .reusable = false}, SHIFT(41),
  [11] = {.count = 1, .reusable = false}, SHIFT(20),
  [13] = {.count = 1, .reusable = false}, SHIFT(6),
  [15] = {.count = 1, .reusable = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(35),
  [19] = {.count = 1, .reusable = false}, SHIFT(189),
  [21] = {.count = 1, .reusable = true}, SHIFT(24),
  [23] = {.count = 1, .reusable = true}, SHIFT(103),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(148),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(24),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(103),
  [39] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(11),
  [42] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(148),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(31),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [65] = {.count = 1, .reusable = true}, SHIFT(78),
  [67] = {.count = 1, .reusable = true}, SHIFT(83),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [73] = {.count = 1, .reusable = true}, SHIFT(73),
  [75] = {.count = 1, .reusable = false}, SHIFT(27),
  [77] = {.count = 1, .reusable = false}, SHIFT(22),
  [79] = {.count = 1, .reusable = false}, SHIFT(4),
  [81] = {.count = 1, .reusable = false}, SHIFT(3),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_guarded_command, 3),
  [85] = {.count = 1, .reusable = true}, SHIFT(39),
  [87] = {.count = 1, .reusable = false}, SHIFT(170),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_guarded_command, 3),
  [91] = {.count = 1, .reusable = false}, SHIFT(29),
  [93] = {.count = 1, .reusable = false}, SHIFT(21),
  [95] = {.count = 1, .reusable = false}, SHIFT(2),
  [97] = {.count = 1, .reusable = false}, SHIFT(9),
  [99] = {.count = 1, .reusable = true}, SHIFT(36),
  [101] = {.count = 1, .reusable = false}, SHIFT(166),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(27),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(22),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(4),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [115] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(39),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(170),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(28),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(23),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(5),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(32),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(181),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(29),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(21),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(36),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(166),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(30),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(6),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(35),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(189),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [181] = {.count = 1, .reusable = false}, SHIFT(30),
  [183] = {.count = 1, .reusable = false}, SHIFT(34),
  [185] = {.count = 1, .reusable = false}, SHIFT(23),
  [187] = {.count = 1, .reusable = false}, SHIFT(5),
  [189] = {.count = 1, .reusable = false}, SHIFT(8),
  [191] = {.count = 1, .reusable = true}, SHIFT(32),
  [193] = {.count = 1, .reusable = true}, SHIFT(117),
  [195] = {.count = 1, .reusable = false}, SHIFT(181),
  [197] = {.count = 1, .reusable = false}, SHIFT(28),
  [199] = {.count = 1, .reusable = true}, SHIFT(129),
  [201] = {.count = 1, .reusable = true}, SHIFT(113),
  [203] = {.count = 1, .reusable = false}, SHIFT(33),
  [205] = {.count = 1, .reusable = true}, SHIFT(130),
  [207] = {.count = 1, .reusable = false}, SHIFT(37),
  [209] = {.count = 1, .reusable = true}, SHIFT(111),
  [211] = {.count = 1, .reusable = true}, SHIFT(121),
  [213] = {.count = 1, .reusable = false}, SHIFT(40),
  [215] = {.count = 1, .reusable = true}, SHIFT(108),
  [217] = {.count = 1, .reusable = true}, SHIFT(107),
  [219] = {.count = 1, .reusable = false}, SHIFT(25),
  [221] = {.count = 1, .reusable = false}, SHIFT(38),
  [223] = {.count = 1, .reusable = false}, SHIFT(26),
  [225] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [233] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(101),
  [237] = {.count = 1, .reusable = true}, SHIFT(90),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 3),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [243] = {.count = 1, .reusable = true}, SHIFT(98),
  [245] = {.count = 1, .reusable = true}, SHIFT(97),
  [247] = {.count = 1, .reusable = true}, SHIFT(91),
  [249] = {.count = 1, .reusable = true}, SHIFT(86),
  [251] = {.count = 1, .reusable = true}, SHIFT(93),
  [253] = {.count = 1, .reusable = true}, SHIFT(94),
  [255] = {.count = 1, .reusable = true}, SHIFT(95),
  [257] = {.count = 1, .reusable = true}, SHIFT(69),
  [259] = {.count = 1, .reusable = true}, SHIFT(89),
  [261] = {.count = 1, .reusable = true}, SHIFT(87),
  [263] = {.count = 1, .reusable = true}, SHIFT(82),
  [265] = {.count = 1, .reusable = true}, SHIFT(84),
  [267] = {.count = 1, .reusable = true}, SHIFT(72),
  [269] = {.count = 1, .reusable = true}, SHIFT(134),
  [271] = {.count = 1, .reusable = true}, SHIFT(11),
  [273] = {.count = 1, .reusable = true}, SHIFT(80),
  [275] = {.count = 1, .reusable = true}, SHIFT(52),
  [277] = {.count = 1, .reusable = true}, SHIFT(64),
  [279] = {.count = 1, .reusable = true}, SHIFT(143),
  [281] = {.count = 1, .reusable = true}, SHIFT(141),
  [283] = {.count = 1, .reusable = true}, SHIFT(140),
  [285] = {.count = 1, .reusable = true}, SHIFT(16),
  [287] = {.count = 1, .reusable = true}, SHIFT(85),
  [289] = {.count = 1, .reusable = true}, SHIFT(68),
  [291] = {.count = 1, .reusable = false}, SHIFT(99),
  [293] = {.count = 1, .reusable = true}, SHIFT(96),
  [295] = {.count = 1, .reusable = false}, SHIFT(74),
  [297] = {.count = 1, .reusable = true}, SHIFT(76),
  [299] = {.count = 1, .reusable = true}, SHIFT(128),
  [301] = {.count = 1, .reusable = true}, SHIFT(138),
  [303] = {.count = 1, .reusable = true}, SHIFT(131),
  [305] = {.count = 1, .reusable = true}, SHIFT(144),
  [307] = {.count = 1, .reusable = true}, SHIFT(17),
  [309] = {.count = 1, .reusable = true}, SHIFT(142),
  [311] = {.count = 1, .reusable = true}, SHIFT(145),
  [313] = {.count = 1, .reusable = true}, SHIFT(67),
  [315] = {.count = 1, .reusable = true}, SHIFT(19),
  [317] = {.count = 1, .reusable = true}, SHIFT(14),
  [319] = {.count = 1, .reusable = true}, SHIFT(18),
  [321] = {.count = 1, .reusable = true}, SHIFT(136),
  [323] = {.count = 1, .reusable = true}, SHIFT(79),
  [325] = {.count = 1, .reusable = true}, SHIFT(60),
  [327] = {.count = 1, .reusable = true}, SHIFT(50),
  [329] = {.count = 1, .reusable = true}, SHIFT(77),
  [331] = {.count = 1, .reusable = true}, SHIFT(49),
  [333] = {.count = 1, .reusable = true}, SHIFT(61),
  [335] = {.count = 1, .reusable = true}, SHIFT(139),
  [337] = {.count = 1, .reusable = true}, SHIFT(46),
  [339] = {.count = 1, .reusable = true}, SHIFT(66),
  [341] = {.count = 1, .reusable = true}, SHIFT(59),
  [343] = {.count = 1, .reusable = true}, SHIFT(58),
  [345] = {.count = 1, .reusable = true}, SHIFT(55),
  [347] = {.count = 1, .reusable = true}, SHIFT(54),
  [349] = {.count = 1, .reusable = true}, SHIFT(53),
  [351] = {.count = 1, .reusable = true}, SHIFT(133),
  [353] = {.count = 1, .reusable = true}, SHIFT(56),
  [355] = {.count = 1, .reusable = true}, SHIFT(51),
  [357] = {.count = 1, .reusable = true}, SHIFT(126),
  [359] = {.count = 1, .reusable = true}, SHIFT(48),
  [361] = {.count = 1, .reusable = true}, SHIFT(65),
  [363] = {.count = 1, .reusable = true}, SHIFT(62),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_constant_declaration, 4),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_variable_declaration, 4),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_spec, 3),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 3),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_spec, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_assert_with_bound, 7),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_assert_with_bound, 7),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_do, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_if, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_assert, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_assert, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [403] = {.count = 1, .reusable = false}, SHIFT(84),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [417] = {.count = 1, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [419] = {.count = 1, .reusable = true}, SHIFT(109),
  [421] = {.count = 1, .reusable = true}, SHIFT(135),
  [423] = {.count = 1, .reusable = true}, SHIFT(110),
  [425] = {.count = 1, .reusable = true}, SHIFT(57),
  [427] = {.count = 1, .reusable = true}, SHIFT(112),
  [429] = {.count = 1, .reusable = true}, SHIFT(63),
  [431] = {.count = 1, .reusable = true}, SHIFT(47),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym__pred, 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [437] = {.count = 1, .reusable = true}, SHIFT(161),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(11),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 1),
  [444] = {.count = 1, .reusable = true}, SHIFT(137),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 2),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [450] = {.count = 1, .reusable = true}, SHIFT(185),
  [452] = {.count = 1, .reusable = true}, SHIFT(106),
  [454] = {.count = 1, .reusable = true}, SHIFT(116),
  [456] = {.count = 1, .reusable = true}, SHIFT(195),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [460] = {.count = 1, .reusable = true}, SHIFT(183),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(187),
  [465] = {.count = 1, .reusable = true}, SHIFT(157),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [469] = {.count = 1, .reusable = true}, SHIFT(118),
  [471] = {.count = 1, .reusable = true}, SHIFT(196),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [475] = {.count = 1, .reusable = true}, SHIFT(127),
  [477] = {.count = 1, .reusable = true}, SHIFT(171),
  [479] = {.count = 1, .reusable = true}, SHIFT(122),
  [481] = {.count = 1, .reusable = true}, SHIFT(197),
  [483] = {.count = 1, .reusable = true}, SHIFT(100),
  [485] = {.count = 1, .reusable = true}, SHIFT(125),
  [487] = {.count = 1, .reusable = true}, SHIFT(119),
  [489] = {.count = 1, .reusable = true}, SHIFT(120),
  [491] = {.count = 1, .reusable = true}, SHIFT(102),
  [493] = {.count = 1, .reusable = true}, SHIFT(190),
  [495] = {.count = 1, .reusable = true}, SHIFT(123),
  [497] = {.count = 1, .reusable = true}, SHIFT(124),
  [499] = {.count = 1, .reusable = true}, SHIFT(44),
  [501] = {.count = 1, .reusable = true}, SHIFT(147),
  [503] = {.count = 1, .reusable = true}, SHIFT(132),
  [505] = {.count = 1, .reusable = true}, SHIFT(114),
  [507] = {.count = 1, .reusable = true}, SHIFT(115),
  [509] = {.count = 1, .reusable = true}, SHIFT(160),
  [511] = {.count = 1, .reusable = true}, SHIFT(42),
  [513] = {.count = 1, .reusable = true}, SHIFT(92),
  [515] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [517] = {.count = 1, .reusable = true}, SHIFT(155),
  [519] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [521] = {.count = 1, .reusable = true}, SHIFT(43),
  [523] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [525] = {.count = 1, .reusable = true}, SHIFT(81),
  [527] = {.count = 1, .reusable = true}, SHIFT(88),
  [529] = {.count = 1, .reusable = true}, SHIFT(75),
  [531] = {.count = 1, .reusable = true}, SHIFT(71),
  [533] = {.count = 1, .reusable = true}, SHIFT(70),
  [535] = {.count = 1, .reusable = true}, SHIFT(192),
  [537] = {.count = 1, .reusable = true}, SHIFT(193),
  [539] = {.count = 1, .reusable = true}, SHIFT(194),
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
