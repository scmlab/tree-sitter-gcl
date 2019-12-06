#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 142
#define SYMBOL_COUNT 78
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
  aux_sym_variable_token1 = 29,
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
  sym_op = 50,
  sym_mul = 51,
  sym_div = 52,
  sym_add = 53,
  sym_sub = 54,
  sym__term = 55,
  sym__pred = 56,
  sym_eq = 57,
  sym_neq = 58,
  sym_gt = 59,
  sym_gte = 60,
  sym_lt = 61,
  sym_lte = 62,
  sym_variable = 63,
  sym_constant = 64,
  sym_type = 65,
  sym_op_name = 66,
  sym_boolean = 67,
  sym__variable_list = 68,
  sym__constant_list = 69,
  sym_guarded_command = 70,
  sym__guarded_command_list = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_source_file_repeat2 = 73,
  aux_sym_op_repeat1 = 74,
  aux_sym__variable_list_repeat1 = 75,
  aux_sym__constant_list_repeat1 = 76,
  aux_sym__guarded_command_list_repeat1 = 77,
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
  [aux_sym_variable_token1] = "variable_token1",
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
  [sym_op] = "op",
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
  [sym_variable] = "variable",
  [sym_constant] = "constant",
  [sym_type] = "type",
  [sym_op_name] = "op_name",
  [sym_boolean] = "boolean",
  [sym__variable_list] = "_variable_list",
  [sym__constant_list] = "_constant_list",
  [sym_guarded_command] = "guarded_command",
  [sym__guarded_command_list] = "_guarded_command_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_op_repeat1] = "op_repeat1",
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
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
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
  [sym_op] = {
    .visible = true,
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
  [sym_variable] = {
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
  [sym_op_name] = {
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
  [aux_sym_op_repeat1] = {
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
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'k') ADVANCE(80);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_variable_token1);
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
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 34},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0, .external_lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 33},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 33},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 33},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
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
    [sym_source_file] = STATE(129),
    [sym__declaration] = STATE(9),
    [sym_variable_declaration] = STATE(127),
    [sym_constant_declaration] = STATE(127),
    [sym__statement] = STATE(16),
    [sym_assign] = STATE(138),
    [sym_assert] = STATE(138),
    [sym_assert_with_bound] = STATE(138),
    [sym_if] = STATE(138),
    [sym_do] = STATE(138),
    [sym_spec] = STATE(138),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_source_file_repeat2] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_con] = ACTIONS(9),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expr] = STATE(59),
    [sym_op] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(136),
    [sym_eq] = STATE(136),
    [sym_neq] = STATE(136),
    [sym_gt] = STATE(136),
    [sym_gte] = STATE(136),
    [sym_lt] = STATE(136),
    [sym_lte] = STATE(136),
    [sym_variable] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_op_name] = STATE(111),
    [sym_boolean] = STATE(136),
    [sym_guarded_command] = STATE(97),
    [sym__guarded_command_list] = STATE(116),
    [aux_sym__guarded_command_list_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(31),
    [anon_sym_False] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expr] = STATE(59),
    [sym_op] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(123),
    [sym_eq] = STATE(123),
    [sym_neq] = STATE(123),
    [sym_gt] = STATE(123),
    [sym_gte] = STATE(123),
    [sym_lt] = STATE(123),
    [sym_lte] = STATE(123),
    [sym_variable] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_op_name] = STATE(111),
    [sym_boolean] = STATE(123),
    [sym_guarded_command] = STATE(97),
    [sym__guarded_command_list] = STATE(131),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(31),
    [anon_sym_False] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expr] = STATE(59),
    [sym_op] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(136),
    [sym_eq] = STATE(136),
    [sym_neq] = STATE(136),
    [sym_gt] = STATE(136),
    [sym_gte] = STATE(136),
    [sym_lt] = STATE(136),
    [sym_lte] = STATE(136),
    [sym_variable] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_op_name] = STATE(111),
    [sym_boolean] = STATE(136),
    [sym_guarded_command] = STATE(99),
    [aux_sym__guarded_command_list_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(31),
    [anon_sym_False] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__expr] = STATE(59),
    [sym_op] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(140),
    [sym_eq] = STATE(140),
    [sym_neq] = STATE(140),
    [sym_gt] = STATE(140),
    [sym_gte] = STATE(140),
    [sym_lt] = STATE(140),
    [sym_lte] = STATE(140),
    [sym_variable] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_op_name] = STATE(111),
    [sym_boolean] = STATE(140),
    [sym_guarded_command] = STATE(134),
    [aux_sym__guarded_command_list_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_variable_token1] = ACTIONS(36),
    [aux_sym_constant_token1] = ACTIONS(39),
    [sym_integer] = ACTIONS(42),
    [anon_sym_True] = ACTIONS(45),
    [anon_sym_False] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__expr] = STATE(59),
    [sym_op] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(123),
    [sym_eq] = STATE(123),
    [sym_neq] = STATE(123),
    [sym_gt] = STATE(123),
    [sym_gte] = STATE(123),
    [sym_lt] = STATE(123),
    [sym_lte] = STATE(123),
    [sym_variable] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_op_name] = STATE(111),
    [sym_boolean] = STATE(123),
    [sym_guarded_command] = STATE(99),
    [aux_sym__guarded_command_list_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(31),
    [anon_sym_False] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__expr] = STATE(59),
    [sym_op] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym__term] = STATE(59),
    [sym__pred] = STATE(101),
    [sym_eq] = STATE(101),
    [sym_neq] = STATE(101),
    [sym_gt] = STATE(101),
    [sym_gte] = STATE(101),
    [sym_lt] = STATE(101),
    [sym_lte] = STATE(101),
    [sym_variable] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_op_name] = STATE(111),
    [sym_boolean] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(31),
    [anon_sym_False] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__expr] = STATE(57),
    [sym_op] = STATE(57),
    [sym_mul] = STATE(57),
    [sym_div] = STATE(57),
    [sym_add] = STATE(57),
    [sym_sub] = STATE(57),
    [sym__term] = STATE(57),
    [sym__pred] = STATE(130),
    [sym_eq] = STATE(130),
    [sym_neq] = STATE(130),
    [sym_gt] = STATE(130),
    [sym_gte] = STATE(130),
    [sym_lt] = STATE(130),
    [sym_lte] = STATE(130),
    [sym_variable] = STATE(57),
    [sym_constant] = STATE(57),
    [sym_op_name] = STATE(111),
    [sym_boolean] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(27),
    [sym_integer] = ACTIONS(48),
    [anon_sym_True] = ACTIONS(31),
    [anon_sym_False] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__declaration] = STATE(43),
    [sym_variable_declaration] = STATE(127),
    [sym_constant_declaration] = STATE(127),
    [sym__statement] = STATE(20),
    [sym_assign] = STATE(138),
    [sym_assert] = STATE(138),
    [sym_assert_with_bound] = STATE(138),
    [sym_if] = STATE(138),
    [sym_do] = STATE(138),
    [sym_spec] = STATE(138),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat1] = STATE(43),
    [aux_sym_source_file_repeat2] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_con] = ACTIONS(9),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__statement] = STATE(11),
    [sym_assign] = STATE(135),
    [sym_assert] = STATE(135),
    [sym_assert_with_bound] = STATE(135),
    [sym_if] = STATE(135),
    [sym_do] = STATE(135),
    [sym_spec] = STATE(135),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(11),
    [sym_skip] = ACTIONS(52),
    [sym_abort] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_od] = ACTIONS(54),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__statement] = STATE(11),
    [sym_assign] = STATE(135),
    [sym_assert] = STATE(135),
    [sym_assert_with_bound] = STATE(135),
    [sym_if] = STATE(135),
    [sym_do] = STATE(135),
    [sym_spec] = STATE(135),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(11),
    [sym_skip] = ACTIONS(58),
    [sym_abort] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(64),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_od] = ACTIONS(70),
    [anon_sym_LBRACE_BANG] = ACTIONS(72),
    [aux_sym_variable_token1] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__statement] = STATE(12),
    [sym_assign] = STATE(133),
    [sym_assert] = STATE(133),
    [sym_assert_with_bound] = STATE(133),
    [sym_if] = STATE(133),
    [sym_do] = STATE(133),
    [sym_spec] = STATE(133),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(12),
    [sym_skip] = ACTIONS(80),
    [sym_abort] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(64),
    [anon_sym_fi] = ACTIONS(70),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_LBRACE_BANG] = ACTIONS(72),
    [aux_sym_variable_token1] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__statement] = STATE(12),
    [sym_assign] = STATE(133),
    [sym_assert] = STATE(133),
    [sym_assert_with_bound] = STATE(133),
    [sym_if] = STATE(133),
    [sym_do] = STATE(133),
    [sym_spec] = STATE(133),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(12),
    [sym_skip] = ACTIONS(83),
    [sym_abort] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_fi] = ACTIONS(54),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__statement] = STATE(14),
    [sym_assign] = STATE(128),
    [sym_assert] = STATE(128),
    [sym_assert_with_bound] = STATE(128),
    [sym_if] = STATE(128),
    [sym_do] = STATE(128),
    [sym_spec] = STATE(128),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(14),
    [sym_skip] = ACTIONS(85),
    [sym_abort] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(64),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_LBRACE_BANG] = ACTIONS(72),
    [anon_sym_BANG_RBRACE] = ACTIONS(78),
    [aux_sym_variable_token1] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__statement] = STATE(14),
    [sym_assign] = STATE(128),
    [sym_assert] = STATE(128),
    [sym_assert_with_bound] = STATE(128),
    [sym_if] = STATE(128),
    [sym_do] = STATE(128),
    [sym_spec] = STATE(128),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(14),
    [sym_skip] = ACTIONS(88),
    [sym_abort] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(138),
    [sym_assert] = STATE(138),
    [sym_assert_with_bound] = STATE(138),
    [sym_if] = STATE(138),
    [sym_do] = STATE(138),
    [sym_spec] = STATE(138),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__statement] = STATE(14),
    [sym_assign] = STATE(128),
    [sym_assert] = STATE(128),
    [sym_assert_with_bound] = STATE(128),
    [sym_if] = STATE(128),
    [sym_do] = STATE(128),
    [sym_spec] = STATE(128),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(14),
    [sym_skip] = ACTIONS(88),
    [sym_abort] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [anon_sym_BANG_RBRACE] = ACTIONS(90),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__statement] = STATE(17),
    [sym_assign] = STATE(128),
    [sym_assert] = STATE(128),
    [sym_assert_with_bound] = STATE(128),
    [sym_if] = STATE(128),
    [sym_do] = STATE(128),
    [sym_spec] = STATE(128),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(17),
    [sym_skip] = ACTIONS(88),
    [sym_abort] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [anon_sym_BANG_RBRACE] = ACTIONS(92),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(138),
    [sym_assert] = STATE(138),
    [sym_assert_with_bound] = STATE(138),
    [sym_if] = STATE(138),
    [sym_do] = STATE(138),
    [sym_spec] = STATE(138),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_skip] = ACTIONS(94),
    [sym_abort] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(64),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_LBRACE_BANG] = ACTIONS(72),
    [aux_sym_variable_token1] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(138),
    [sym_assert] = STATE(138),
    [sym_assert_with_bound] = STATE(138),
    [sym_if] = STATE(138),
    [sym_do] = STATE(138),
    [sym_spec] = STATE(138),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__statement] = STATE(10),
    [sym_assign] = STATE(135),
    [sym_assert] = STATE(135),
    [sym_assert_with_bound] = STATE(135),
    [sym_if] = STATE(135),
    [sym_do] = STATE(135),
    [sym_spec] = STATE(135),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(10),
    [sym_skip] = ACTIONS(52),
    [sym_abort] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__statement] = STATE(15),
    [sym_assign] = STATE(128),
    [sym_assert] = STATE(128),
    [sym_assert_with_bound] = STATE(128),
    [sym_if] = STATE(128),
    [sym_do] = STATE(128),
    [sym_spec] = STATE(128),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(15),
    [sym_skip] = ACTIONS(88),
    [sym_abort] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__statement] = STATE(13),
    [sym_assign] = STATE(133),
    [sym_assert] = STATE(133),
    [sym_assert_with_bound] = STATE(133),
    [sym_if] = STATE(133),
    [sym_do] = STATE(133),
    [sym_spec] = STATE(133),
    [sym_variable] = STATE(109),
    [aux_sym_source_file_repeat2] = STATE(13),
    [sym_skip] = ACTIONS(83),
    [sym_abort] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__expr] = STATE(78),
    [sym_op] = STATE(78),
    [sym_mul] = STATE(78),
    [sym_div] = STATE(78),
    [sym_add] = STATE(78),
    [sym_sub] = STATE(78),
    [sym__term] = STATE(78),
    [sym_variable] = STATE(78),
    [sym_constant] = STATE(78),
    [sym_op_name] = STATE(111),
    [aux_sym_op_repeat1] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(99),
    [aux_sym_variable_token1] = ACTIONS(102),
    [aux_sym_constant_token1] = ACTIONS(105),
    [sym_integer] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__expr] = STATE(71),
    [sym_op] = STATE(71),
    [sym_mul] = STATE(71),
    [sym_div] = STATE(71),
    [sym_add] = STATE(71),
    [sym_sub] = STATE(71),
    [sym__term] = STATE(71),
    [sym_variable] = STATE(71),
    [sym_constant] = STATE(71),
    [sym_op_name] = STATE(111),
    [aux_sym_op_repeat1] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_DASH_GT] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__expr] = STATE(74),
    [sym_op] = STATE(74),
    [sym_mul] = STATE(74),
    [sym_div] = STATE(74),
    [sym_add] = STATE(74),
    [sym_sub] = STATE(74),
    [sym__term] = STATE(74),
    [sym_variable] = STATE(74),
    [sym_constant] = STATE(74),
    [sym_op_name] = STATE(111),
    [aux_sym_op_repeat1] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__expr] = STATE(70),
    [sym_op] = STATE(70),
    [sym_mul] = STATE(70),
    [sym_div] = STATE(70),
    [sym_add] = STATE(70),
    [sym_sub] = STATE(70),
    [sym__term] = STATE(70),
    [sym_variable] = STATE(70),
    [sym_constant] = STATE(70),
    [sym_op_name] = STATE(111),
    [aux_sym_op_repeat1] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__expr] = STATE(73),
    [sym_op] = STATE(73),
    [sym_mul] = STATE(73),
    [sym_div] = STATE(73),
    [sym_add] = STATE(73),
    [sym_sub] = STATE(73),
    [sym__term] = STATE(73),
    [sym_variable] = STATE(73),
    [sym_constant] = STATE(73),
    [sym_op_name] = STATE(111),
    [aux_sym_op_repeat1] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__expr] = STATE(81),
    [sym_op] = STATE(81),
    [sym_mul] = STATE(81),
    [sym_div] = STATE(81),
    [sym_add] = STATE(81),
    [sym_sub] = STATE(81),
    [sym__term] = STATE(81),
    [sym_variable] = STATE(81),
    [sym_constant] = STATE(81),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__expr] = STATE(87),
    [sym_op] = STATE(87),
    [sym_mul] = STATE(87),
    [sym_div] = STATE(87),
    [sym_add] = STATE(87),
    [sym_sub] = STATE(87),
    [sym__term] = STATE(87),
    [sym_variable] = STATE(87),
    [sym_constant] = STATE(87),
    [sym_op_name] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(135),
    [aux_sym_variable_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [sym_integer] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__expr] = STATE(76),
    [sym_op] = STATE(76),
    [sym_mul] = STATE(76),
    [sym_div] = STATE(76),
    [sym_add] = STATE(76),
    [sym_sub] = STATE(76),
    [sym__term] = STATE(76),
    [sym_variable] = STATE(76),
    [sym_constant] = STATE(76),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__expr] = STATE(86),
    [sym_op] = STATE(86),
    [sym_mul] = STATE(86),
    [sym_div] = STATE(86),
    [sym_add] = STATE(86),
    [sym_sub] = STATE(86),
    [sym__term] = STATE(86),
    [sym_variable] = STATE(86),
    [sym_constant] = STATE(86),
    [sym_op_name] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(135),
    [aux_sym_variable_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [sym_integer] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__expr] = STATE(85),
    [sym_op] = STATE(85),
    [sym_mul] = STATE(85),
    [sym_div] = STATE(85),
    [sym_add] = STATE(85),
    [sym_sub] = STATE(85),
    [sym__term] = STATE(85),
    [sym_variable] = STATE(85),
    [sym_constant] = STATE(85),
    [sym_op_name] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(135),
    [aux_sym_variable_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [sym_integer] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__expr] = STATE(84),
    [sym_op] = STATE(84),
    [sym_mul] = STATE(84),
    [sym_div] = STATE(84),
    [sym_add] = STATE(84),
    [sym_sub] = STATE(84),
    [sym__term] = STATE(84),
    [sym_variable] = STATE(84),
    [sym_constant] = STATE(84),
    [sym_op_name] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(135),
    [aux_sym_variable_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [sym_integer] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_BANG_EQ] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym__expr] = STATE(79),
    [sym_op] = STATE(79),
    [sym_mul] = STATE(79),
    [sym_div] = STATE(79),
    [sym_add] = STATE(79),
    [sym_sub] = STATE(79),
    [sym__term] = STATE(79),
    [sym_variable] = STATE(79),
    [sym_constant] = STATE(79),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_DASH_GT] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym__expr] = STATE(82),
    [sym_op] = STATE(82),
    [sym_mul] = STATE(82),
    [sym_div] = STATE(82),
    [sym_add] = STATE(82),
    [sym_sub] = STATE(82),
    [sym__term] = STATE(82),
    [sym_variable] = STATE(82),
    [sym_constant] = STATE(82),
    [sym_op_name] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(135),
    [aux_sym_variable_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [sym_integer] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym__declaration] = STATE(43),
    [sym_variable_declaration] = STATE(127),
    [sym_constant_declaration] = STATE(127),
    [aux_sym_source_file_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_var] = ACTIONS(177),
    [anon_sym_con] = ACTIONS(180),
    [sym_skip] = ACTIONS(183),
    [sym_abort] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_do] = ACTIONS(183),
    [anon_sym_LBRACE_BANG] = ACTIONS(175),
    [aux_sym_variable_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_BANG_EQ] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym__expr] = STATE(65),
    [sym_op] = STATE(65),
    [sym_mul] = STATE(65),
    [sym_div] = STATE(65),
    [sym_add] = STATE(65),
    [sym_sub] = STATE(65),
    [sym__term] = STATE(65),
    [sym_variable] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym__expr] = STATE(63),
    [sym_op] = STATE(63),
    [sym_mul] = STATE(63),
    [sym_div] = STATE(63),
    [sym_add] = STATE(63),
    [sym_sub] = STATE(63),
    [sym__term] = STATE(63),
    [sym_variable] = STATE(63),
    [sym_constant] = STATE(63),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [sym__expr] = STATE(66),
    [sym_op] = STATE(66),
    [sym_mul] = STATE(66),
    [sym_div] = STATE(66),
    [sym_add] = STATE(66),
    [sym_sub] = STATE(66),
    [sym__term] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_constant] = STATE(66),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym__expr] = STATE(67),
    [sym_op] = STATE(67),
    [sym_mul] = STATE(67),
    [sym_div] = STATE(67),
    [sym_add] = STATE(67),
    [sym_sub] = STATE(67),
    [sym__term] = STATE(67),
    [sym_variable] = STATE(67),
    [sym_constant] = STATE(67),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym__expr] = STATE(68),
    [sym_op] = STATE(68),
    [sym_mul] = STATE(68),
    [sym_div] = STATE(68),
    [sym_add] = STATE(68),
    [sym_sub] = STATE(68),
    [sym__term] = STATE(68),
    [sym_variable] = STATE(68),
    [sym_constant] = STATE(68),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym__expr] = STATE(40),
    [sym_op] = STATE(40),
    [sym_mul] = STATE(40),
    [sym_div] = STATE(40),
    [sym_add] = STATE(40),
    [sym_sub] = STATE(40),
    [sym__term] = STATE(40),
    [sym_variable] = STATE(40),
    [sym_constant] = STATE(40),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym__expr] = STATE(45),
    [sym_op] = STATE(45),
    [sym_mul] = STATE(45),
    [sym_div] = STATE(45),
    [sym_add] = STATE(45),
    [sym_sub] = STATE(45),
    [sym__term] = STATE(45),
    [sym_variable] = STATE(45),
    [sym_constant] = STATE(45),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym__expr] = STATE(44),
    [sym_op] = STATE(44),
    [sym_mul] = STATE(44),
    [sym_div] = STATE(44),
    [sym_add] = STATE(44),
    [sym_sub] = STATE(44),
    [sym__term] = STATE(44),
    [sym_variable] = STATE(44),
    [sym_constant] = STATE(44),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym__expr] = STATE(41),
    [sym_op] = STATE(41),
    [sym_mul] = STATE(41),
    [sym_div] = STATE(41),
    [sym_add] = STATE(41),
    [sym_sub] = STATE(41),
    [sym__term] = STATE(41),
    [sym_variable] = STATE(41),
    [sym_constant] = STATE(41),
    [sym_op_name] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_variable_token1] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_integer] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_var] = ACTIONS(237),
    [anon_sym_con] = ACTIONS(237),
    [sym_skip] = ACTIONS(237),
    [sym_abort] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(237),
    [anon_sym_do] = ACTIONS(237),
    [anon_sym_LBRACE_BANG] = ACTIONS(235),
    [aux_sym_variable_token1] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_skip] = ACTIONS(239),
    [sym_abort] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_LBRACE_BANG] = ACTIONS(241),
    [anon_sym_BANG_RBRACE] = ACTIONS(241),
    [aux_sym_variable_token1] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_skip] = ACTIONS(239),
    [sym_abort] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_od] = ACTIONS(239),
    [anon_sym_LBRACE_BANG] = ACTIONS(241),
    [aux_sym_variable_token1] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_skip] = ACTIONS(239),
    [sym_abort] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_fi] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_LBRACE_BANG] = ACTIONS(241),
    [aux_sym_variable_token1] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_DASH_GT] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_DASH_GT] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_DASH_GT] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_DASH_GT] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_DASH_GT] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_DASH_GT] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_skip] = ACTIONS(239),
    [sym_abort] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_LBRACE_BANG] = ACTIONS(241),
    [aux_sym_variable_token1] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(261),
    [aux_sym_variable_token1] = ACTIONS(261),
    [aux_sym_constant_token1] = ACTIONS(263),
    [sym_integer] = ACTIONS(261),
    [anon_sym_True] = ACTIONS(263),
    [anon_sym_False] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(125),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(117),
  },
  [78] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(151),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(281),
  },
  [83] = {
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(193),
  },
  [84] = {
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(189),
  },
  [85] = {
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(185),
  },
  [86] = {
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(169),
  },
  [87] = {
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(161),
  },
  [88] = {
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(155),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(283),
    [aux_sym_variable_token1] = ACTIONS(283),
    [aux_sym_constant_token1] = ACTIONS(283),
    [sym_integer] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [sym_constant] = STATE(105),
    [sym__constant_list] = STATE(139),
    [aux_sym__constant_list_repeat1] = STATE(94),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_DASH_GT] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [sym_variable] = STATE(104),
    [sym__variable_list] = STATE(119),
    [aux_sym__variable_list_repeat1] = STATE(100),
    [aux_sym_variable_token1] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [sym_constant] = STATE(102),
    [aux_sym__constant_list_repeat1] = STATE(96),
    [aux_sym_constant_token1] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_COLON_EQ] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [sym_constant] = STATE(125),
    [aux_sym__constant_list_repeat1] = STATE(96),
    [aux_sym_constant_token1] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
  },
  [97] = {
    [anon_sym_fi] = ACTIONS(294),
    [anon_sym_od] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [sym_variable] = STATE(112),
    [aux_sym__variable_list_repeat1] = STATE(98),
    [aux_sym_variable_token1] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [anon_sym_fi] = ACTIONS(301),
    [anon_sym_od] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_variable] = STATE(107),
    [aux_sym__variable_list_repeat1] = STATE(98),
    [aux_sym_variable_token1] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
  },
  [102] = {
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [sym_type] = STATE(110),
    [aux_sym_constant_token1] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [sym_type] = STATE(113),
    [aux_sym_constant_token1] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(321),
  },
  [109] = {
    [anon_sym_COLON_EQ] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(325),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [anon_sym_COMMA] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(329),
  },
  [114] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(331),
  },
  [115] = {
    [anon_sym_COLON] = ACTIONS(333),
    [sym_comment] = ACTIONS(3),
  },
  [116] = {
    [anon_sym_od] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(337),
  },
  [118] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(339),
  },
  [119] = {
    [anon_sym_COLON] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
  },
  [120] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(343),
  },
  [121] = {
    [anon_sym_bnd] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(347),
  },
  [123] = {
    [anon_sym_DASH_GT] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
  },
  [124] = {
    [aux_sym_variable_token1] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [anon_sym_COMMA] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
  },
  [126] = {
    [aux_sym_constant_token1] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(355),
  },
  [128] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(357),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
  },
  [131] = {
    [anon_sym_fi] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(365),
  },
  [133] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(367),
  },
  [134] = {
    [anon_sym_PIPE] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(369),
  },
  [136] = {
    [anon_sym_DASH_GT] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
  },
  [137] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(373),
  },
  [138] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(375),
  },
  [139] = {
    [anon_sym_COLON] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
  },
  [140] = {
    [anon_sym_DASH_GT] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
  },
  [141] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(93),
  [9] = {.count = 1, .reusable = false}, SHIFT(90),
  [11] = {.count = 1, .reusable = false}, SHIFT(138),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = false}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(2),
  [19] = {.count = 1, .reusable = true}, SHIFT(137),
  [21] = {.count = 1, .reusable = false}, SHIFT(95),
  [23] = {.count = 1, .reusable = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = true}, SHIFT(29),
  [27] = {.count = 1, .reusable = false}, SHIFT(26),
  [29] = {.count = 1, .reusable = true}, SHIFT(59),
  [31] = {.count = 1, .reusable = false}, SHIFT(91),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(8),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(29),
  [39] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(26),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(59),
  [45] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(91),
  [48] = {.count = 1, .reusable = true}, SHIFT(57),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [52] = {.count = 1, .reusable = false}, SHIFT(135),
  [54] = {.count = 1, .reusable = false}, REDUCE(sym_guarded_command, 3),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_guarded_command, 3),
  [58] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(135),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [64] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [70] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(137),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(95),
  [78] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(133),
  [83] = {.count = 1, .reusable = false}, SHIFT(133),
  [85] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(128),
  [88] = {.count = 1, .reusable = false}, SHIFT(128),
  [90] = {.count = 1, .reusable = true}, SHIFT(132),
  [92] = {.count = 1, .reusable = true}, SHIFT(108),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(138),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(33),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(29),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(26),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(78),
  [111] = {.count = 1, .reusable = true}, SHIFT(33),
  [113] = {.count = 1, .reusable = true}, SHIFT(26),
  [115] = {.count = 1, .reusable = true}, SHIFT(71),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(74),
  [123] = {.count = 1, .reusable = true}, SHIFT(70),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_op_name, 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [131] = {.count = 1, .reusable = true}, SHIFT(73),
  [133] = {.count = 1, .reusable = true}, SHIFT(81),
  [135] = {.count = 1, .reusable = true}, SHIFT(31),
  [137] = {.count = 1, .reusable = true}, SHIFT(75),
  [139] = {.count = 1, .reusable = true}, SHIFT(77),
  [141] = {.count = 1, .reusable = true}, SHIFT(87),
  [143] = {.count = 1, .reusable = true}, SHIFT(76),
  [145] = {.count = 1, .reusable = true}, SHIFT(86),
  [147] = {.count = 1, .reusable = true}, SHIFT(85),
  [149] = {.count = 1, .reusable = true}, SHIFT(84),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_op, 5),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_op, 5),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_op, 4),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_op, 4),
  [159] = {.count = 1, .reusable = true}, SHIFT(79),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [163] = {.count = 1, .reusable = true}, SHIFT(54),
  [165] = {.count = 1, .reusable = true}, SHIFT(55),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [173] = {.count = 1, .reusable = true}, SHIFT(82),
  [175] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [177] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [180] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [183] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [197] = {.count = 1, .reusable = true}, SHIFT(65),
  [199] = {.count = 1, .reusable = true}, SHIFT(63),
  [201] = {.count = 1, .reusable = true}, SHIFT(64),
  [203] = {.count = 1, .reusable = true}, SHIFT(66),
  [205] = {.count = 1, .reusable = true}, SHIFT(67),
  [207] = {.count = 1, .reusable = true}, SHIFT(68),
  [209] = {.count = 1, .reusable = true}, SHIFT(40),
  [211] = {.count = 1, .reusable = true}, SHIFT(45),
  [213] = {.count = 1, .reusable = true}, SHIFT(44),
  [215] = {.count = 1, .reusable = true}, SHIFT(41),
  [217] = {.count = 1, .reusable = true}, SHIFT(46),
  [219] = {.count = 1, .reusable = true}, SHIFT(56),
  [221] = {.count = 1, .reusable = false}, SHIFT(53),
  [223] = {.count = 1, .reusable = true}, SHIFT(52),
  [225] = {.count = 1, .reusable = true}, SHIFT(51),
  [227] = {.count = 1, .reusable = false}, SHIFT(50),
  [229] = {.count = 1, .reusable = true}, SHIFT(49),
  [231] = {.count = 1, .reusable = false}, SHIFT(48),
  [233] = {.count = 1, .reusable = true}, SHIFT(47),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__declaration, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym__declaration, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [255] = {.count = 1, .reusable = true}, SHIFT(89),
  [257] = {.count = 1, .reusable = true}, SHIFT(80),
  [259] = {.count = 1, .reusable = true}, SHIFT(88),
  [261] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [263] = {.count = 1, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [265] = {.count = 1, .reusable = true}, SHIFT(38),
  [267] = {.count = 1, .reusable = true}, SHIFT(37),
  [269] = {.count = 1, .reusable = true}, SHIFT(118),
  [271] = {.count = 1, .reusable = true}, SHIFT(83),
  [273] = {.count = 1, .reusable = true}, SHIFT(36),
  [275] = {.count = 1, .reusable = true}, SHIFT(35),
  [277] = {.count = 1, .reusable = true}, SHIFT(34),
  [279] = {.count = 1, .reusable = false}, SHIFT(32),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [283] = {.count = 1, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__pred, 3),
  [289] = {.count = 1, .reusable = true}, SHIFT(95),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(26),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 1),
  [296] = {.count = 1, .reusable = true}, SHIFT(72),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(95),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(122),
  [305] = {.count = 1, .reusable = true}, SHIFT(121),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [309] = {.count = 1, .reusable = true}, SHIFT(126),
  [311] = {.count = 1, .reusable = true}, SHIFT(114),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [315] = {.count = 1, .reusable = true}, SHIFT(124),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 3),
  [323] = {.count = 1, .reusable = true}, SHIFT(42),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [327] = {.count = 1, .reusable = true}, SHIFT(30),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [333] = {.count = 1, .reusable = true}, SHIFT(39),
  [335] = {.count = 1, .reusable = true}, SHIFT(117),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_assert_with_bound, 7),
  [341] = {.count = 1, .reusable = true}, SHIFT(106),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [345] = {.count = 1, .reusable = true}, SHIFT(115),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_assert, 3),
  [349] = {.count = 1, .reusable = true}, SHIFT(23),
  [351] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [353] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [355] = {.count = 1, .reusable = true}, SHIFT(58),
  [357] = {.count = 1, .reusable = true}, SHIFT(60),
  [359] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [361] = {.count = 1, .reusable = true}, SHIFT(92),
  [363] = {.count = 1, .reusable = true}, SHIFT(120),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 4),
  [367] = {.count = 1, .reusable = true}, SHIFT(62),
  [369] = {.count = 1, .reusable = true}, SHIFT(61),
  [371] = {.count = 1, .reusable = true}, SHIFT(21),
  [373] = {.count = 1, .reusable = true}, SHIFT(18),
  [375] = {.count = 1, .reusable = true}, SHIFT(69),
  [377] = {.count = 1, .reusable = true}, SHIFT(103),
  [379] = {.count = 1, .reusable = true}, SHIFT(22),
  [381] = {.count = 1, .reusable = true}, SHIFT(25),
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
