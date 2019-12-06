#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 122
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  sym_comment = 36,
  sym__newline = 37,
  sym_source_file = 38,
  sym__declaration = 39,
  sym_variable_declaration = 40,
  sym_constant_declaration = 41,
  sym__statement = 42,
  sym_assign = 43,
  sym_assert = 44,
  sym_assert_with_bound = 45,
  sym_if = 46,
  sym_do = 47,
  sym_spec = 48,
  sym__expr = 49,
  sym_mul = 50,
  sym_div = 51,
  sym_add = 52,
  sym_sub = 53,
  sym__term = 54,
  sym__pred = 55,
  sym_eq = 56,
  sym_neq = 57,
  sym_gt = 58,
  sym_gte = 59,
  sym_lt = 60,
  sym_lte = 61,
  sym_constant = 62,
  sym_type = 63,
  sym_boolean = 64,
  sym__variable_list = 65,
  sym__constant_list = 66,
  sym_guarded_command = 67,
  sym__guarded_command_list = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_source_file_repeat2 = 70,
  aux_sym__variable_list_repeat1 = 71,
  aux_sym__constant_list_repeat1 = 72,
  aux_sym__guarded_command_list_repeat1 = 73,
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
  [sym_comment] = "comment",
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(100);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(100);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '0') ADVANCE(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '}') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'n') SKIP(1)
      END_STATE();
    case 20:
      if (lookahead == 'n') SKIP(5)
      END_STATE();
    case 21:
      if (lookahead == 'n') SKIP(6)
      END_STATE();
    case 22:
      if (lookahead == 'n') SKIP(2)
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(63);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 33:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(76);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      END_STATE();
    case 34:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\\') SKIP(37)
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 35:
      if (eof) ADVANCE(38);
      if (lookahead == 'n') SKIP(0)
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == 'n') SKIP(33)
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == 'n') SKIP(34)
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_con);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_con);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_skip);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_skip);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_abort);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_abort);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_bnd);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_od);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_od);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'k') ADVANCE(80);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 33},
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
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 34},
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
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 33},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 33},
  [86] = {.lex_state = 33},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 33},
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
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_con] = ACTIONS(9),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_variable] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(25),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_variable] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(25),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_variable] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(25),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_variable] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(25),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_variable] = ACTIONS(34),
    [aux_sym_constant_token1] = ACTIONS(37),
    [sym_integer] = ACTIONS(34),
    [anon_sym_True] = ACTIONS(40),
    [anon_sym_False] = ACTIONS(40),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_con] = ACTIONS(9),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_variable] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(25),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_variable] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(45),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_od] = ACTIONS(49),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(53),
    [sym_abort] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_od] = ACTIONS(65),
    [anon_sym_LBRACE_BANG] = ACTIONS(67),
    [sym_variable] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(75),
    [sym_abort] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_LBRACE_BANG] = ACTIONS(67),
    [anon_sym_BANG_RBRACE] = ACTIONS(73),
    [sym_variable] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(78),
    [sym_abort] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_fi] = ACTIONS(49),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(80),
    [sym_abort] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_fi] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_LBRACE_BANG] = ACTIONS(67),
    [sym_variable] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(83),
    [sym_abort] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [anon_sym_BANG_RBRACE] = ACTIONS(85),
    [sym_variable] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(83),
    [sym_abort] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [anon_sym_BANG_RBRACE] = ACTIONS(87),
    [sym_variable] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(83),
    [sym_abort] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_skip] = ACTIONS(89),
    [sym_abort] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_LBRACE_BANG] = ACTIONS(67),
    [sym_variable] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(83),
    [sym_abort] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(78),
    [sym_abort] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
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
    [sym_skip] = ACTIONS(47),
    [sym_abort] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [sym_variable] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(100),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_BANG_EQ] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_GT_EQ] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(104),
    [anon_sym_LT_EQ] = ACTIONS(102),
    [anon_sym_DASH_GT] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_BANG_EQ] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_LT_EQ] = ACTIONS(106),
    [anon_sym_DASH_GT] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_BANG_EQ] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__declaration] = STATE(29),
    [sym_variable_declaration] = STATE(111),
    [sym_constant_declaration] = STATE(111),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_var] = ACTIONS(120),
    [anon_sym_con] = ACTIONS(123),
    [sym_skip] = ACTIONS(126),
    [sym_abort] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_if] = ACTIONS(126),
    [anon_sym_do] = ACTIONS(126),
    [anon_sym_LBRACE_BANG] = ACTIONS(118),
    [sym_variable] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_DASH_GT] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__expr] = STATE(68),
    [sym_mul] = STATE(68),
    [sym_div] = STATE(68),
    [sym_add] = STATE(68),
    [sym_sub] = STATE(68),
    [sym__term] = STATE(68),
    [sym_constant] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(132),
    [sym_variable] = ACTIONS(134),
    [aux_sym_constant_token1] = ACTIONS(136),
    [sym_integer] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__expr] = STATE(65),
    [sym_mul] = STATE(65),
    [sym_div] = STATE(65),
    [sym_add] = STATE(65),
    [sym_sub] = STATE(65),
    [sym__term] = STATE(65),
    [sym_constant] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(132),
    [sym_variable] = ACTIONS(138),
    [aux_sym_constant_token1] = ACTIONS(136),
    [sym_integer] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__expr] = STATE(60),
    [sym_mul] = STATE(60),
    [sym_div] = STATE(60),
    [sym_add] = STATE(60),
    [sym_sub] = STATE(60),
    [sym__term] = STATE(60),
    [sym_constant] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(142),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__expr] = STATE(66),
    [sym_mul] = STATE(66),
    [sym_div] = STATE(66),
    [sym_add] = STATE(66),
    [sym_sub] = STATE(66),
    [sym__term] = STATE(66),
    [sym_constant] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(146),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__expr] = STATE(72),
    [sym_mul] = STATE(72),
    [sym_div] = STATE(72),
    [sym_add] = STATE(72),
    [sym_sub] = STATE(72),
    [sym__term] = STATE(72),
    [sym_constant] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(148),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__expr] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym_constant] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(150),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym__expr] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym_constant] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(152),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym__expr] = STATE(58),
    [sym_mul] = STATE(58),
    [sym_div] = STATE(58),
    [sym_add] = STATE(58),
    [sym_sub] = STATE(58),
    [sym__term] = STATE(58),
    [sym_constant] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(154),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym__expr] = STATE(69),
    [sym_mul] = STATE(69),
    [sym_div] = STATE(69),
    [sym_add] = STATE(69),
    [sym_sub] = STATE(69),
    [sym__term] = STATE(69),
    [sym_constant] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(132),
    [sym_variable] = ACTIONS(156),
    [aux_sym_constant_token1] = ACTIONS(136),
    [sym_integer] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym__expr] = STATE(55),
    [sym_mul] = STATE(55),
    [sym_div] = STATE(55),
    [sym_add] = STATE(55),
    [sym_sub] = STATE(55),
    [sym__term] = STATE(55),
    [sym_constant] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(158),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym__expr] = STATE(67),
    [sym_mul] = STATE(67),
    [sym_div] = STATE(67),
    [sym_add] = STATE(67),
    [sym_sub] = STATE(67),
    [sym__term] = STATE(67),
    [sym_constant] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(132),
    [sym_variable] = ACTIONS(160),
    [aux_sym_constant_token1] = ACTIONS(136),
    [sym_integer] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(176),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym__expr] = STATE(63),
    [sym_mul] = STATE(63),
    [sym_div] = STATE(63),
    [sym_add] = STATE(63),
    [sym_sub] = STATE(63),
    [sym__term] = STATE(63),
    [sym_constant] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(132),
    [sym_variable] = ACTIONS(180),
    [aux_sym_constant_token1] = ACTIONS(136),
    [sym_integer] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym__expr] = STATE(25),
    [sym_mul] = STATE(25),
    [sym_div] = STATE(25),
    [sym_add] = STATE(25),
    [sym_sub] = STATE(25),
    [sym__term] = STATE(25),
    [sym_constant] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(182),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym__expr] = STATE(26),
    [sym_mul] = STATE(26),
    [sym_div] = STATE(26),
    [sym_add] = STATE(26),
    [sym_sub] = STATE(26),
    [sym__term] = STATE(26),
    [sym_constant] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(184),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym__expr] = STATE(27),
    [sym_mul] = STATE(27),
    [sym_div] = STATE(27),
    [sym_add] = STATE(27),
    [sym_sub] = STATE(27),
    [sym__term] = STATE(27),
    [sym_constant] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(186),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym__expr] = STATE(28),
    [sym_mul] = STATE(28),
    [sym_div] = STATE(28),
    [sym_add] = STATE(28),
    [sym_sub] = STATE(28),
    [sym__term] = STATE(28),
    [sym_constant] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(188),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym__expr] = STATE(57),
    [sym_mul] = STATE(57),
    [sym_div] = STATE(57),
    [sym_add] = STATE(57),
    [sym_sub] = STATE(57),
    [sym__term] = STATE(57),
    [sym_constant] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(190),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym__expr] = STATE(56),
    [sym_mul] = STATE(56),
    [sym_div] = STATE(56),
    [sym_add] = STATE(56),
    [sym_sub] = STATE(56),
    [sym__term] = STATE(56),
    [sym_constant] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_variable] = ACTIONS(192),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_integer] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(176),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_var] = ACTIONS(196),
    [anon_sym_con] = ACTIONS(196),
    [sym_skip] = ACTIONS(196),
    [sym_abort] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_if] = ACTIONS(196),
    [anon_sym_do] = ACTIONS(196),
    [anon_sym_LBRACE_BANG] = ACTIONS(194),
    [sym_variable] = ACTIONS(196),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_skip] = ACTIONS(198),
    [sym_abort] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_if] = ACTIONS(198),
    [anon_sym_do] = ACTIONS(198),
    [anon_sym_od] = ACTIONS(198),
    [anon_sym_LBRACE_BANG] = ACTIONS(200),
    [sym_variable] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_skip] = ACTIONS(198),
    [sym_abort] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_if] = ACTIONS(198),
    [anon_sym_do] = ACTIONS(198),
    [anon_sym_LBRACE_BANG] = ACTIONS(200),
    [anon_sym_BANG_RBRACE] = ACTIONS(200),
    [sym_variable] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_skip] = ACTIONS(198),
    [sym_abort] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_if] = ACTIONS(198),
    [anon_sym_fi] = ACTIONS(198),
    [anon_sym_do] = ACTIONS(198),
    [anon_sym_LBRACE_BANG] = ACTIONS(200),
    [sym_variable] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [anon_sym_RBRACE] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_skip] = ACTIONS(198),
    [sym_abort] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_if] = ACTIONS(198),
    [anon_sym_do] = ACTIONS(198),
    [anon_sym_LBRACE_BANG] = ACTIONS(200),
    [sym_variable] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(214),
    [sym_variable] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(216),
    [sym_integer] = ACTIONS(214),
    [anon_sym_True] = ACTIONS(216),
    [anon_sym_False] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(114),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(228),
  },
  [66] = {
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(106),
  },
  [68] = {
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(102),
  },
  [69] = {
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(98),
  },
  [70] = {
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(128),
  },
  [71] = {
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(94),
  },
  [72] = {
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym_constant] = STATE(81),
    [sym__constant_list] = STATE(100),
    [aux_sym__constant_list_repeat1] = STATE(78),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_DASH_GT] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_DASH_GT] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [anon_sym_fi] = ACTIONS(236),
    [anon_sym_od] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [sym__variable_list] = STATE(109),
    [aux_sym__variable_list_repeat1] = STATE(87),
    [sym_variable] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_constant] = STATE(82),
    [aux_sym__constant_list_repeat1] = STATE(80),
    [aux_sym_constant_token1] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_fi] = ACTIONS(242),
    [anon_sym_od] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym_constant] = STATE(90),
    [aux_sym__constant_list_repeat1] = STATE(80),
    [aux_sym_constant_token1] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [anon_sym_COLON] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [aux_sym__variable_list_repeat1] = STATE(84),
    [sym_variable] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [anon_sym_COLON] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [sym_type] = STATE(107),
    [aux_sym_constant_token1] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [aux_sym__variable_list_repeat1] = STATE(84),
    [sym_variable] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [sym_type] = STATE(103),
    [aux_sym_constant_token1] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(270),
  },
  [92] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(272),
  },
  [93] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(274),
  },
  [94] = {
    [anon_sym_COLON_EQ] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(278),
  },
  [96] = {
    [anon_sym_DASH_GT] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [97] = {
    [aux_sym_constant_token1] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(286),
  },
  [100] = {
    [anon_sym_COLON] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [anon_sym_bnd] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
  },
  [102] = {
    [anon_sym_od] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(294),
  },
  [104] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(296),
  },
  [107] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(298),
  },
  [108] = {
    [anon_sym_COLON] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [anon_sym_COLON] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [sym_variable] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(306),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(310),
  },
  [114] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(312),
  },
  [115] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(314),
  },
  [116] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(316),
  },
  [117] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(318),
  },
  [118] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(320),
  },
  [119] = {
    [anon_sym_DASH_GT] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
  },
  [120] = {
    [anon_sym_fi] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [anon_sym_DASH_GT] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(77),
  [9] = {.count = 1, .reusable = false}, SHIFT(73),
  [11] = {.count = 1, .reusable = false}, SHIFT(117),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = false}, SHIFT(2),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, SHIFT(115),
  [21] = {.count = 1, .reusable = false}, SHIFT(94),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(50),
  [27] = {.count = 1, .reusable = false}, SHIFT(22),
  [29] = {.count = 1, .reusable = false}, SHIFT(75),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(50),
  [37] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(22),
  [40] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(75),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(42),
  [47] = {.count = 1, .reusable = false}, SHIFT(118),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_guarded_command, 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_guarded_command, 3),
  [53] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(118),
  [56] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [62] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [65] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(115),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(94),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(113),
  [78] = {.count = 1, .reusable = false}, SHIFT(116),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(116),
  [83] = {.count = 1, .reusable = false}, SHIFT(113),
  [85] = {.count = 1, .reusable = true}, SHIFT(95),
  [87] = {.count = 1, .reusable = true}, SHIFT(92),
  [89] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(117),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [108] = {.count = 1, .reusable = true}, SHIFT(44),
  [110] = {.count = 1, .reusable = true}, SHIFT(45),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [126] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [132] = {.count = 1, .reusable = true}, SHIFT(36),
  [134] = {.count = 1, .reusable = true}, SHIFT(68),
  [136] = {.count = 1, .reusable = true}, SHIFT(71),
  [138] = {.count = 1, .reusable = true}, SHIFT(65),
  [140] = {.count = 1, .reusable = true}, SHIFT(34),
  [142] = {.count = 1, .reusable = true}, SHIFT(60),
  [144] = {.count = 1, .reusable = true}, SHIFT(22),
  [146] = {.count = 1, .reusable = true}, SHIFT(66),
  [148] = {.count = 1, .reusable = true}, SHIFT(72),
  [150] = {.count = 1, .reusable = true}, SHIFT(64),
  [152] = {.count = 1, .reusable = true}, SHIFT(59),
  [154] = {.count = 1, .reusable = true}, SHIFT(58),
  [156] = {.count = 1, .reusable = true}, SHIFT(69),
  [158] = {.count = 1, .reusable = true}, SHIFT(55),
  [160] = {.count = 1, .reusable = true}, SHIFT(67),
  [162] = {.count = 1, .reusable = true}, SHIFT(30),
  [164] = {.count = 1, .reusable = true}, SHIFT(46),
  [166] = {.count = 1, .reusable = false}, SHIFT(47),
  [168] = {.count = 1, .reusable = true}, SHIFT(48),
  [170] = {.count = 1, .reusable = true}, SHIFT(49),
  [172] = {.count = 1, .reusable = false}, SHIFT(40),
  [174] = {.count = 1, .reusable = true}, SHIFT(38),
  [176] = {.count = 1, .reusable = false}, SHIFT(37),
  [178] = {.count = 1, .reusable = true}, SHIFT(33),
  [180] = {.count = 1, .reusable = true}, SHIFT(63),
  [182] = {.count = 1, .reusable = true}, SHIFT(25),
  [184] = {.count = 1, .reusable = true}, SHIFT(26),
  [186] = {.count = 1, .reusable = true}, SHIFT(27),
  [188] = {.count = 1, .reusable = true}, SHIFT(28),
  [190] = {.count = 1, .reusable = true}, SHIFT(57),
  [192] = {.count = 1, .reusable = true}, SHIFT(56),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__declaration, 2),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym__declaration, 2),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
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
  [226] = {.count = 1, .reusable = false}, SHIFT(43),
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
