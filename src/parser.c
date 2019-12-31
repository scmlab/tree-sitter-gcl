#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 166
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  anon_sym_EQ_GT = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_TILDE = 26,
  anon_sym_EQ = 27,
  anon_sym_SLASH_EQ = 28,
  anon_sym_GT = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  aux_sym_variable_token1 = 33,
  aux_sym_constant_token1 = 34,
  sym_integer = 35,
  anon_sym_True = 36,
  anon_sym_False = 37,
  anon_sym_DASH_GT = 38,
  anon_sym_PIPE = 39,
  sym_comment = 40,
  sym__newline = 41,
  sym_source_file = 42,
  sym__declaration = 43,
  sym_variable_declaration = 44,
  sym_constant_declaration = 45,
  sym__statement = 46,
  sym_assign = 47,
  sym_assert = 48,
  sym_assert_with_bound = 49,
  sym_if = 50,
  sym_do = 51,
  sym_spec = 52,
  sym__expr = 53,
  sym_op = 54,
  sym_mul = 55,
  sym_div = 56,
  sym_add = 57,
  sym_sub = 58,
  sym_imp = 59,
  sym_or = 60,
  sym_and = 61,
  sym_neg = 62,
  sym_eq = 63,
  sym_neq = 64,
  sym_gt = 65,
  sym_gte = 66,
  sym_lt = 67,
  sym_lte = 68,
  sym__term = 69,
  sym_variable = 70,
  sym_constant = 71,
  sym_type = 72,
  sym_op_name = 73,
  sym_boolean = 74,
  sym__variable_list = 75,
  sym__constant_list = 76,
  sym_guarded_command = 77,
  sym__guarded_command_list = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_source_file_repeat2 = 80,
  aux_sym_op_repeat1 = 81,
  aux_sym__variable_list_repeat1 = 82,
  aux_sym__constant_list_repeat1 = 83,
  aux_sym__guarded_command_list_repeat1 = 84,
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
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH_EQ] = "/=",
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
  [sym_imp] = "imp",
  [sym_or] = "or",
  [sym_and] = "and",
  [sym_neg] = "neg",
  [sym_eq] = "eq",
  [sym_neq] = "neq",
  [sym_gt] = "gt",
  [sym_gte] = "gte",
  [sym_lt] = "lt",
  [sym_lte] = "lte",
  [sym__term] = "_term",
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
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
  [sym_imp] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_neg] = {
    .visible = true,
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
  [sym__term] = {
    .visible = false,
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
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '0') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'n') SKIP(2)
      END_STATE();
    case 19:
      if (lookahead == 'n') SKIP(5)
      END_STATE();
    case 20:
      if (lookahead == 'n') SKIP(6)
      END_STATE();
    case 21:
      if (lookahead == 'n') SKIP(7)
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == '|') ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(63);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 33:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\\') SKIP(37)
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 34:
      if (eof) ADVANCE(38);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 35:
      if (eof) ADVANCE(38);
      if (lookahead == 'n') SKIP(0)
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == 'n') SKIP(34)
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == 'n') SKIP(33)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
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
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'k') ADVANCE(84);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(71);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
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
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 34},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 34},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 33},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 34, .external_lex_state = 1},
  [86] = {.lex_state = 34, .external_lex_state = 1},
  [87] = {.lex_state = 34, .external_lex_state = 1},
  [88] = {.lex_state = 34},
  [89] = {.lex_state = 34, .external_lex_state = 1},
  [90] = {.lex_state = 34, .external_lex_state = 1},
  [91] = {.lex_state = 34, .external_lex_state = 1},
  [92] = {.lex_state = 34, .external_lex_state = 1},
  [93] = {.lex_state = 34, .external_lex_state = 1},
  [94] = {.lex_state = 34, .external_lex_state = 1},
  [95] = {.lex_state = 34, .external_lex_state = 1},
  [96] = {.lex_state = 34, .external_lex_state = 1},
  [97] = {.lex_state = 34},
  [98] = {.lex_state = 34, .external_lex_state = 1},
  [99] = {.lex_state = 34, .external_lex_state = 1},
  [100] = {.lex_state = 34},
  [101] = {.lex_state = 34, .external_lex_state = 1},
  [102] = {.lex_state = 34, .external_lex_state = 1},
  [103] = {.lex_state = 34, .external_lex_state = 1},
  [104] = {.lex_state = 34, .external_lex_state = 1},
  [105] = {.lex_state = 34},
  [106] = {.lex_state = 34, .external_lex_state = 1},
  [107] = {.lex_state = 34},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 34, .external_lex_state = 1},
  [110] = {.lex_state = 34},
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 34, .external_lex_state = 1},
  [113] = {.lex_state = 34, .external_lex_state = 1},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 34},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 34},
  [127] = {.lex_state = 34},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 34},
  [131] = {.lex_state = 34},
  [132] = {.lex_state = 34},
  [133] = {.lex_state = 34},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 34},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0, .external_lex_state = 1},
  [148] = {.lex_state = 0, .external_lex_state = 1},
  [149] = {.lex_state = 34},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 34},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 34},
  [165] = {.lex_state = 0},
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
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(150),
    [sym__declaration] = STATE(45),
    [sym_variable_declaration] = STATE(136),
    [sym_constant_declaration] = STATE(136),
    [sym__statement] = STATE(54),
    [sym_assign] = STATE(162),
    [sym_assert] = STATE(162),
    [sym_assert_with_bound] = STATE(162),
    [sym_if] = STATE(162),
    [sym_do] = STATE(162),
    [sym_spec] = STATE(162),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat1] = STATE(45),
    [aux_sym_source_file_repeat2] = STATE(54),
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
    [sym__expr] = STATE(100),
    [sym_op] = STATE(100),
    [sym_mul] = STATE(100),
    [sym_div] = STATE(100),
    [sym_add] = STATE(100),
    [sym_sub] = STATE(100),
    [sym_imp] = STATE(100),
    [sym_or] = STATE(100),
    [sym_and] = STATE(100),
    [sym_neg] = STATE(100),
    [sym_eq] = STATE(100),
    [sym_neq] = STATE(100),
    [sym_gt] = STATE(100),
    [sym_gte] = STATE(100),
    [sym_lt] = STATE(100),
    [sym_lte] = STATE(100),
    [sym__term] = STATE(100),
    [sym_variable] = STATE(100),
    [sym_constant] = STATE(100),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(100),
    [sym_guarded_command] = STATE(125),
    [sym__guarded_command_list] = STATE(142),
    [aux_sym__guarded_command_list_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expr] = STATE(111),
    [sym_op] = STATE(111),
    [sym_mul] = STATE(111),
    [sym_div] = STATE(111),
    [sym_add] = STATE(111),
    [sym_sub] = STATE(111),
    [sym_imp] = STATE(111),
    [sym_or] = STATE(111),
    [sym_and] = STATE(111),
    [sym_neg] = STATE(111),
    [sym_eq] = STATE(111),
    [sym_neq] = STATE(111),
    [sym_gt] = STATE(111),
    [sym_gte] = STATE(111),
    [sym_lt] = STATE(111),
    [sym_lte] = STATE(111),
    [sym__term] = STATE(111),
    [sym_variable] = STATE(111),
    [sym_constant] = STATE(111),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(111),
    [sym_guarded_command] = STATE(125),
    [sym__guarded_command_list] = STATE(159),
    [aux_sym__guarded_command_list_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(35),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expr] = STATE(100),
    [sym_op] = STATE(100),
    [sym_mul] = STATE(100),
    [sym_div] = STATE(100),
    [sym_add] = STATE(100),
    [sym_sub] = STATE(100),
    [sym_imp] = STATE(100),
    [sym_or] = STATE(100),
    [sym_and] = STATE(100),
    [sym_neg] = STATE(100),
    [sym_eq] = STATE(100),
    [sym_neq] = STATE(100),
    [sym_gt] = STATE(100),
    [sym_gte] = STATE(100),
    [sym_lt] = STATE(100),
    [sym_lte] = STATE(100),
    [sym__term] = STATE(100),
    [sym_variable] = STATE(100),
    [sym_constant] = STATE(100),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(100),
    [sym_guarded_command] = STATE(129),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__expr] = STATE(111),
    [sym_op] = STATE(111),
    [sym_mul] = STATE(111),
    [sym_div] = STATE(111),
    [sym_add] = STATE(111),
    [sym_sub] = STATE(111),
    [sym_imp] = STATE(111),
    [sym_or] = STATE(111),
    [sym_and] = STATE(111),
    [sym_neg] = STATE(111),
    [sym_eq] = STATE(111),
    [sym_neq] = STATE(111),
    [sym_gt] = STATE(111),
    [sym_gte] = STATE(111),
    [sym_lt] = STATE(111),
    [sym_lte] = STATE(111),
    [sym__term] = STATE(111),
    [sym_variable] = STATE(111),
    [sym_constant] = STATE(111),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(111),
    [sym_guarded_command] = STATE(129),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(35),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__expr] = STATE(88),
    [sym_op] = STATE(88),
    [sym_mul] = STATE(88),
    [sym_div] = STATE(88),
    [sym_add] = STATE(88),
    [sym_sub] = STATE(88),
    [sym_imp] = STATE(88),
    [sym_or] = STATE(88),
    [sym_and] = STATE(88),
    [sym_neg] = STATE(88),
    [sym_eq] = STATE(88),
    [sym_neq] = STATE(88),
    [sym_gt] = STATE(88),
    [sym_gte] = STATE(88),
    [sym_lt] = STATE(88),
    [sym_lte] = STATE(88),
    [sym__term] = STATE(88),
    [sym_variable] = STATE(88),
    [sym_constant] = STATE(88),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(88),
    [sym_guarded_command] = STATE(152),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(40),
    [aux_sym_variable_token1] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(46),
    [sym_integer] = ACTIONS(49),
    [anon_sym_True] = ACTIONS(52),
    [anon_sym_False] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__expr] = STATE(84),
    [sym_op] = STATE(84),
    [sym_mul] = STATE(84),
    [sym_div] = STATE(84),
    [sym_add] = STATE(84),
    [sym_sub] = STATE(84),
    [sym_imp] = STATE(84),
    [sym_or] = STATE(84),
    [sym_and] = STATE(84),
    [sym_neg] = STATE(84),
    [sym_eq] = STATE(84),
    [sym_neq] = STATE(84),
    [sym_gt] = STATE(84),
    [sym_gte] = STATE(84),
    [sym_lt] = STATE(84),
    [sym_lte] = STATE(84),
    [sym__term] = STATE(84),
    [sym_variable] = STATE(84),
    [sym_constant] = STATE(84),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(84),
    [aux_sym_op_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(55),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__expr] = STATE(83),
    [sym_op] = STATE(83),
    [sym_mul] = STATE(83),
    [sym_div] = STATE(83),
    [sym_add] = STATE(83),
    [sym_sub] = STATE(83),
    [sym_imp] = STATE(83),
    [sym_or] = STATE(83),
    [sym_and] = STATE(83),
    [sym_neg] = STATE(83),
    [sym_eq] = STATE(83),
    [sym_neq] = STATE(83),
    [sym_gt] = STATE(83),
    [sym_gte] = STATE(83),
    [sym_lt] = STATE(83),
    [sym_lte] = STATE(83),
    [sym__term] = STATE(83),
    [sym_variable] = STATE(83),
    [sym_constant] = STATE(83),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(83),
    [aux_sym_op_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(57),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__expr] = STATE(80),
    [sym_op] = STATE(80),
    [sym_mul] = STATE(80),
    [sym_div] = STATE(80),
    [sym_add] = STATE(80),
    [sym_sub] = STATE(80),
    [sym_imp] = STATE(80),
    [sym_or] = STATE(80),
    [sym_and] = STATE(80),
    [sym_neg] = STATE(80),
    [sym_eq] = STATE(80),
    [sym_neq] = STATE(80),
    [sym_gt] = STATE(80),
    [sym_gte] = STATE(80),
    [sym_lt] = STATE(80),
    [sym_lte] = STATE(80),
    [sym__term] = STATE(80),
    [sym_variable] = STATE(80),
    [sym_constant] = STATE(80),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(80),
    [aux_sym_op_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(59),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__expr] = STATE(82),
    [sym_op] = STATE(82),
    [sym_mul] = STATE(82),
    [sym_div] = STATE(82),
    [sym_add] = STATE(82),
    [sym_sub] = STATE(82),
    [sym_imp] = STATE(82),
    [sym_or] = STATE(82),
    [sym_and] = STATE(82),
    [sym_neg] = STATE(82),
    [sym_eq] = STATE(82),
    [sym_neq] = STATE(82),
    [sym_gt] = STATE(82),
    [sym_gte] = STATE(82),
    [sym_lt] = STATE(82),
    [sym_lte] = STATE(82),
    [sym__term] = STATE(82),
    [sym_variable] = STATE(82),
    [sym_constant] = STATE(82),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(82),
    [aux_sym_op_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(61),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__expr] = STATE(107),
    [sym_op] = STATE(107),
    [sym_mul] = STATE(107),
    [sym_div] = STATE(107),
    [sym_add] = STATE(107),
    [sym_sub] = STATE(107),
    [sym_imp] = STATE(107),
    [sym_or] = STATE(107),
    [sym_and] = STATE(107),
    [sym_neg] = STATE(107),
    [sym_eq] = STATE(107),
    [sym_neq] = STATE(107),
    [sym_gt] = STATE(107),
    [sym_gte] = STATE(107),
    [sym_lt] = STATE(107),
    [sym_lte] = STATE(107),
    [sym__term] = STATE(107),
    [sym_variable] = STATE(107),
    [sym_constant] = STATE(107),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(107),
    [aux_sym_op_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(66),
    [aux_sym_variable_token1] = ACTIONS(69),
    [aux_sym_constant_token1] = ACTIONS(72),
    [sym_integer] = ACTIONS(75),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__expr] = STATE(89),
    [sym_op] = STATE(89),
    [sym_mul] = STATE(89),
    [sym_div] = STATE(89),
    [sym_add] = STATE(89),
    [sym_sub] = STATE(89),
    [sym_imp] = STATE(89),
    [sym_or] = STATE(89),
    [sym_and] = STATE(89),
    [sym_neg] = STATE(89),
    [sym_eq] = STATE(89),
    [sym_neq] = STATE(89),
    [sym_gt] = STATE(89),
    [sym_gte] = STATE(89),
    [sym_lt] = STATE(89),
    [sym_lte] = STATE(89),
    [sym__term] = STATE(89),
    [sym_variable] = STATE(89),
    [sym_constant] = STATE(89),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__expr] = STATE(103),
    [sym_op] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym_imp] = STATE(103),
    [sym_or] = STATE(103),
    [sym_and] = STATE(103),
    [sym_neg] = STATE(103),
    [sym_eq] = STATE(103),
    [sym_neq] = STATE(103),
    [sym_gt] = STATE(103),
    [sym_gte] = STATE(103),
    [sym_lt] = STATE(103),
    [sym_lte] = STATE(103),
    [sym__term] = STATE(103),
    [sym_variable] = STATE(103),
    [sym_constant] = STATE(103),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(93),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__expr] = STATE(86),
    [sym_op] = STATE(86),
    [sym_mul] = STATE(86),
    [sym_div] = STATE(86),
    [sym_add] = STATE(86),
    [sym_sub] = STATE(86),
    [sym_imp] = STATE(86),
    [sym_or] = STATE(86),
    [sym_and] = STATE(86),
    [sym_neg] = STATE(86),
    [sym_eq] = STATE(86),
    [sym_neq] = STATE(86),
    [sym_gt] = STATE(86),
    [sym_gte] = STATE(86),
    [sym_lt] = STATE(86),
    [sym_lte] = STATE(86),
    [sym__term] = STATE(86),
    [sym_variable] = STATE(86),
    [sym_constant] = STATE(86),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(95),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__expr] = STATE(102),
    [sym_op] = STATE(102),
    [sym_mul] = STATE(102),
    [sym_div] = STATE(102),
    [sym_add] = STATE(102),
    [sym_sub] = STATE(102),
    [sym_imp] = STATE(102),
    [sym_or] = STATE(102),
    [sym_and] = STATE(102),
    [sym_neg] = STATE(102),
    [sym_eq] = STATE(102),
    [sym_neq] = STATE(102),
    [sym_gt] = STATE(102),
    [sym_gte] = STATE(102),
    [sym_lt] = STATE(102),
    [sym_lte] = STATE(102),
    [sym__term] = STATE(102),
    [sym_variable] = STATE(102),
    [sym_constant] = STATE(102),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(97),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__expr] = STATE(87),
    [sym_op] = STATE(87),
    [sym_mul] = STATE(87),
    [sym_div] = STATE(87),
    [sym_add] = STATE(87),
    [sym_sub] = STATE(87),
    [sym_imp] = STATE(87),
    [sym_or] = STATE(87),
    [sym_and] = STATE(87),
    [sym_neg] = STATE(87),
    [sym_eq] = STATE(87),
    [sym_neq] = STATE(87),
    [sym_gt] = STATE(87),
    [sym_gte] = STATE(87),
    [sym_lt] = STATE(87),
    [sym_lte] = STATE(87),
    [sym__term] = STATE(87),
    [sym_variable] = STATE(87),
    [sym_constant] = STATE(87),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(99),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__expr] = STATE(96),
    [sym_op] = STATE(96),
    [sym_mul] = STATE(96),
    [sym_div] = STATE(96),
    [sym_add] = STATE(96),
    [sym_sub] = STATE(96),
    [sym_imp] = STATE(96),
    [sym_or] = STATE(96),
    [sym_and] = STATE(96),
    [sym_neg] = STATE(96),
    [sym_eq] = STATE(96),
    [sym_neq] = STATE(96),
    [sym_gt] = STATE(96),
    [sym_gte] = STATE(96),
    [sym_lt] = STATE(96),
    [sym_lte] = STATE(96),
    [sym__term] = STATE(96),
    [sym_variable] = STATE(96),
    [sym_constant] = STATE(96),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(101),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__expr] = STATE(59),
    [sym_op] = STATE(59),
    [sym_mul] = STATE(59),
    [sym_div] = STATE(59),
    [sym_add] = STATE(59),
    [sym_sub] = STATE(59),
    [sym_imp] = STATE(59),
    [sym_or] = STATE(59),
    [sym_and] = STATE(59),
    [sym_neg] = STATE(59),
    [sym_eq] = STATE(59),
    [sym_neq] = STATE(59),
    [sym_gt] = STATE(59),
    [sym_gte] = STATE(59),
    [sym_lt] = STATE(59),
    [sym_lte] = STATE(59),
    [sym__term] = STATE(59),
    [sym_variable] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(103),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__expr] = STATE(94),
    [sym_op] = STATE(94),
    [sym_mul] = STATE(94),
    [sym_div] = STATE(94),
    [sym_add] = STATE(94),
    [sym_sub] = STATE(94),
    [sym_imp] = STATE(94),
    [sym_or] = STATE(94),
    [sym_and] = STATE(94),
    [sym_neg] = STATE(94),
    [sym_eq] = STATE(94),
    [sym_neq] = STATE(94),
    [sym_gt] = STATE(94),
    [sym_gte] = STATE(94),
    [sym_lt] = STATE(94),
    [sym_lte] = STATE(94),
    [sym__term] = STATE(94),
    [sym_variable] = STATE(94),
    [sym_constant] = STATE(94),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(105),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__expr] = STATE(93),
    [sym_op] = STATE(93),
    [sym_mul] = STATE(93),
    [sym_div] = STATE(93),
    [sym_add] = STATE(93),
    [sym_sub] = STATE(93),
    [sym_imp] = STATE(93),
    [sym_or] = STATE(93),
    [sym_and] = STATE(93),
    [sym_neg] = STATE(93),
    [sym_eq] = STATE(93),
    [sym_neq] = STATE(93),
    [sym_gt] = STATE(93),
    [sym_gte] = STATE(93),
    [sym_lt] = STATE(93),
    [sym_lte] = STATE(93),
    [sym__term] = STATE(93),
    [sym_variable] = STATE(93),
    [sym_constant] = STATE(93),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(107),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__expr] = STATE(92),
    [sym_op] = STATE(92),
    [sym_mul] = STATE(92),
    [sym_div] = STATE(92),
    [sym_add] = STATE(92),
    [sym_sub] = STATE(92),
    [sym_imp] = STATE(92),
    [sym_or] = STATE(92),
    [sym_and] = STATE(92),
    [sym_neg] = STATE(92),
    [sym_eq] = STATE(92),
    [sym_neq] = STATE(92),
    [sym_gt] = STATE(92),
    [sym_gte] = STATE(92),
    [sym_lt] = STATE(92),
    [sym_lte] = STATE(92),
    [sym__term] = STATE(92),
    [sym_variable] = STATE(92),
    [sym_constant] = STATE(92),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(109),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__expr] = STATE(91),
    [sym_op] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym_imp] = STATE(91),
    [sym_or] = STATE(91),
    [sym_and] = STATE(91),
    [sym_neg] = STATE(91),
    [sym_eq] = STATE(91),
    [sym_neq] = STATE(91),
    [sym_gt] = STATE(91),
    [sym_gte] = STATE(91),
    [sym_lt] = STATE(91),
    [sym_lte] = STATE(91),
    [sym__term] = STATE(91),
    [sym_variable] = STATE(91),
    [sym_constant] = STATE(91),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(111),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__expr] = STATE(108),
    [sym_op] = STATE(108),
    [sym_mul] = STATE(108),
    [sym_div] = STATE(108),
    [sym_add] = STATE(108),
    [sym_sub] = STATE(108),
    [sym_imp] = STATE(108),
    [sym_or] = STATE(108),
    [sym_and] = STATE(108),
    [sym_neg] = STATE(108),
    [sym_eq] = STATE(108),
    [sym_neq] = STATE(108),
    [sym_gt] = STATE(108),
    [sym_gte] = STATE(108),
    [sym_lt] = STATE(108),
    [sym_lte] = STATE(108),
    [sym__term] = STATE(108),
    [sym_variable] = STATE(108),
    [sym_constant] = STATE(108),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(108),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(113),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym_imp] = STATE(64),
    [sym_or] = STATE(64),
    [sym_and] = STATE(64),
    [sym_neg] = STATE(64),
    [sym_eq] = STATE(64),
    [sym_neq] = STATE(64),
    [sym_gt] = STATE(64),
    [sym_gte] = STATE(64),
    [sym_lt] = STATE(64),
    [sym_lte] = STATE(64),
    [sym__term] = STATE(64),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(115),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__expr] = STATE(110),
    [sym_op] = STATE(110),
    [sym_mul] = STATE(110),
    [sym_div] = STATE(110),
    [sym_add] = STATE(110),
    [sym_sub] = STATE(110),
    [sym_imp] = STATE(110),
    [sym_or] = STATE(110),
    [sym_and] = STATE(110),
    [sym_neg] = STATE(110),
    [sym_eq] = STATE(110),
    [sym_neq] = STATE(110),
    [sym_gt] = STATE(110),
    [sym_gte] = STATE(110),
    [sym_lt] = STATE(110),
    [sym_lte] = STATE(110),
    [sym__term] = STATE(110),
    [sym_variable] = STATE(110),
    [sym_constant] = STATE(110),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(117),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__expr] = STATE(90),
    [sym_op] = STATE(90),
    [sym_mul] = STATE(90),
    [sym_div] = STATE(90),
    [sym_add] = STATE(90),
    [sym_sub] = STATE(90),
    [sym_imp] = STATE(90),
    [sym_or] = STATE(90),
    [sym_and] = STATE(90),
    [sym_neg] = STATE(90),
    [sym_eq] = STATE(90),
    [sym_neq] = STATE(90),
    [sym_gt] = STATE(90),
    [sym_gte] = STATE(90),
    [sym_lt] = STATE(90),
    [sym_lte] = STATE(90),
    [sym__term] = STATE(90),
    [sym_variable] = STATE(90),
    [sym_constant] = STATE(90),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(119),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__expr] = STATE(53),
    [sym_op] = STATE(53),
    [sym_mul] = STATE(53),
    [sym_div] = STATE(53),
    [sym_add] = STATE(53),
    [sym_sub] = STATE(53),
    [sym_imp] = STATE(53),
    [sym_or] = STATE(53),
    [sym_and] = STATE(53),
    [sym_neg] = STATE(53),
    [sym_eq] = STATE(53),
    [sym_neq] = STATE(53),
    [sym_gt] = STATE(53),
    [sym_gte] = STATE(53),
    [sym_lt] = STATE(53),
    [sym_lte] = STATE(53),
    [sym__term] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_constant] = STATE(53),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(121),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__expr] = STATE(101),
    [sym_op] = STATE(101),
    [sym_mul] = STATE(101),
    [sym_div] = STATE(101),
    [sym_add] = STATE(101),
    [sym_sub] = STATE(101),
    [sym_imp] = STATE(101),
    [sym_or] = STATE(101),
    [sym_and] = STATE(101),
    [sym_neg] = STATE(101),
    [sym_eq] = STATE(101),
    [sym_neq] = STATE(101),
    [sym_gt] = STATE(101),
    [sym_gte] = STATE(101),
    [sym_lt] = STATE(101),
    [sym_lte] = STATE(101),
    [sym__term] = STATE(101),
    [sym_variable] = STATE(101),
    [sym_constant] = STATE(101),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(123),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__expr] = STATE(98),
    [sym_op] = STATE(98),
    [sym_mul] = STATE(98),
    [sym_div] = STATE(98),
    [sym_add] = STATE(98),
    [sym_sub] = STATE(98),
    [sym_imp] = STATE(98),
    [sym_or] = STATE(98),
    [sym_and] = STATE(98),
    [sym_neg] = STATE(98),
    [sym_eq] = STATE(98),
    [sym_neq] = STATE(98),
    [sym_gt] = STATE(98),
    [sym_gte] = STATE(98),
    [sym_lt] = STATE(98),
    [sym_lte] = STATE(98),
    [sym__term] = STATE(98),
    [sym_variable] = STATE(98),
    [sym_constant] = STATE(98),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(98),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(125),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__expr] = STATE(74),
    [sym_op] = STATE(74),
    [sym_mul] = STATE(74),
    [sym_div] = STATE(74),
    [sym_add] = STATE(74),
    [sym_sub] = STATE(74),
    [sym_imp] = STATE(74),
    [sym_or] = STATE(74),
    [sym_and] = STATE(74),
    [sym_neg] = STATE(74),
    [sym_eq] = STATE(74),
    [sym_neq] = STATE(74),
    [sym_gt] = STATE(74),
    [sym_gte] = STATE(74),
    [sym_lt] = STATE(74),
    [sym_lte] = STATE(74),
    [sym__term] = STATE(74),
    [sym_variable] = STATE(74),
    [sym_constant] = STATE(74),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(127),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__expr] = STATE(113),
    [sym_op] = STATE(113),
    [sym_mul] = STATE(113),
    [sym_div] = STATE(113),
    [sym_add] = STATE(113),
    [sym_sub] = STATE(113),
    [sym_imp] = STATE(113),
    [sym_or] = STATE(113),
    [sym_and] = STATE(113),
    [sym_neg] = STATE(113),
    [sym_eq] = STATE(113),
    [sym_neq] = STATE(113),
    [sym_gt] = STATE(113),
    [sym_gte] = STATE(113),
    [sym_lt] = STATE(113),
    [sym_lte] = STATE(113),
    [sym__term] = STATE(113),
    [sym_variable] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(129),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__expr] = STATE(81),
    [sym_op] = STATE(81),
    [sym_mul] = STATE(81),
    [sym_div] = STATE(81),
    [sym_add] = STATE(81),
    [sym_sub] = STATE(81),
    [sym_imp] = STATE(81),
    [sym_or] = STATE(81),
    [sym_and] = STATE(81),
    [sym_neg] = STATE(81),
    [sym_eq] = STATE(81),
    [sym_neq] = STATE(81),
    [sym_gt] = STATE(81),
    [sym_gte] = STATE(81),
    [sym_lt] = STATE(81),
    [sym_lte] = STATE(81),
    [sym__term] = STATE(81),
    [sym_variable] = STATE(81),
    [sym_constant] = STATE(81),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(131),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__expr] = STATE(75),
    [sym_op] = STATE(75),
    [sym_mul] = STATE(75),
    [sym_div] = STATE(75),
    [sym_add] = STATE(75),
    [sym_sub] = STATE(75),
    [sym_imp] = STATE(75),
    [sym_or] = STATE(75),
    [sym_and] = STATE(75),
    [sym_neg] = STATE(75),
    [sym_eq] = STATE(75),
    [sym_neq] = STATE(75),
    [sym_gt] = STATE(75),
    [sym_gte] = STATE(75),
    [sym_lt] = STATE(75),
    [sym_lte] = STATE(75),
    [sym__term] = STATE(75),
    [sym_variable] = STATE(75),
    [sym_constant] = STATE(75),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(133),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__expr] = STATE(105),
    [sym_op] = STATE(105),
    [sym_mul] = STATE(105),
    [sym_div] = STATE(105),
    [sym_add] = STATE(105),
    [sym_sub] = STATE(105),
    [sym_imp] = STATE(105),
    [sym_or] = STATE(105),
    [sym_and] = STATE(105),
    [sym_neg] = STATE(105),
    [sym_eq] = STATE(105),
    [sym_neq] = STATE(105),
    [sym_gt] = STATE(105),
    [sym_gte] = STATE(105),
    [sym_lt] = STATE(105),
    [sym_lte] = STATE(105),
    [sym__term] = STATE(105),
    [sym_variable] = STATE(105),
    [sym_constant] = STATE(105),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(135),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__expr] = STATE(76),
    [sym_op] = STATE(76),
    [sym_mul] = STATE(76),
    [sym_div] = STATE(76),
    [sym_add] = STATE(76),
    [sym_sub] = STATE(76),
    [sym_imp] = STATE(76),
    [sym_or] = STATE(76),
    [sym_and] = STATE(76),
    [sym_neg] = STATE(76),
    [sym_eq] = STATE(76),
    [sym_neq] = STATE(76),
    [sym_gt] = STATE(76),
    [sym_gte] = STATE(76),
    [sym_lt] = STATE(76),
    [sym_lte] = STATE(76),
    [sym__term] = STATE(76),
    [sym_variable] = STATE(76),
    [sym_constant] = STATE(76),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(137),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__expr] = STATE(95),
    [sym_op] = STATE(95),
    [sym_mul] = STATE(95),
    [sym_div] = STATE(95),
    [sym_add] = STATE(95),
    [sym_sub] = STATE(95),
    [sym_imp] = STATE(95),
    [sym_or] = STATE(95),
    [sym_and] = STATE(95),
    [sym_neg] = STATE(95),
    [sym_eq] = STATE(95),
    [sym_neq] = STATE(95),
    [sym_gt] = STATE(95),
    [sym_gte] = STATE(95),
    [sym_lt] = STATE(95),
    [sym_lte] = STATE(95),
    [sym__term] = STATE(95),
    [sym_variable] = STATE(95),
    [sym_constant] = STATE(95),
    [sym_op_name] = STATE(165),
    [sym_boolean] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(83),
    [aux_sym_variable_token1] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(87),
    [sym_integer] = ACTIONS(139),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym__expr] = STATE(72),
    [sym_op] = STATE(72),
    [sym_mul] = STATE(72),
    [sym_div] = STATE(72),
    [sym_add] = STATE(72),
    [sym_sub] = STATE(72),
    [sym_imp] = STATE(72),
    [sym_or] = STATE(72),
    [sym_and] = STATE(72),
    [sym_neg] = STATE(72),
    [sym_eq] = STATE(72),
    [sym_neq] = STATE(72),
    [sym_gt] = STATE(72),
    [sym_gte] = STATE(72),
    [sym_lt] = STATE(72),
    [sym_lte] = STATE(72),
    [sym__term] = STATE(72),
    [sym_variable] = STATE(72),
    [sym_constant] = STATE(72),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(141),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym__expr] = STATE(69),
    [sym_op] = STATE(69),
    [sym_mul] = STATE(69),
    [sym_div] = STATE(69),
    [sym_add] = STATE(69),
    [sym_sub] = STATE(69),
    [sym_imp] = STATE(69),
    [sym_or] = STATE(69),
    [sym_and] = STATE(69),
    [sym_neg] = STATE(69),
    [sym_eq] = STATE(69),
    [sym_neq] = STATE(69),
    [sym_gt] = STATE(69),
    [sym_gte] = STATE(69),
    [sym_lt] = STATE(69),
    [sym_lte] = STATE(69),
    [sym__term] = STATE(69),
    [sym_variable] = STATE(69),
    [sym_constant] = STATE(69),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(143),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym__expr] = STATE(58),
    [sym_op] = STATE(58),
    [sym_mul] = STATE(58),
    [sym_div] = STATE(58),
    [sym_add] = STATE(58),
    [sym_sub] = STATE(58),
    [sym_imp] = STATE(58),
    [sym_or] = STATE(58),
    [sym_and] = STATE(58),
    [sym_neg] = STATE(58),
    [sym_eq] = STATE(58),
    [sym_neq] = STATE(58),
    [sym_gt] = STATE(58),
    [sym_gte] = STATE(58),
    [sym_lt] = STATE(58),
    [sym_lte] = STATE(58),
    [sym__term] = STATE(58),
    [sym_variable] = STATE(58),
    [sym_constant] = STATE(58),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(145),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym__expr] = STATE(57),
    [sym_op] = STATE(57),
    [sym_mul] = STATE(57),
    [sym_div] = STATE(57),
    [sym_add] = STATE(57),
    [sym_sub] = STATE(57),
    [sym_imp] = STATE(57),
    [sym_or] = STATE(57),
    [sym_and] = STATE(57),
    [sym_neg] = STATE(57),
    [sym_eq] = STATE(57),
    [sym_neq] = STATE(57),
    [sym_gt] = STATE(57),
    [sym_gte] = STATE(57),
    [sym_lt] = STATE(57),
    [sym_lte] = STATE(57),
    [sym__term] = STATE(57),
    [sym_variable] = STATE(57),
    [sym_constant] = STATE(57),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(147),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym__expr] = STATE(55),
    [sym_op] = STATE(55),
    [sym_mul] = STATE(55),
    [sym_div] = STATE(55),
    [sym_add] = STATE(55),
    [sym_sub] = STATE(55),
    [sym_imp] = STATE(55),
    [sym_or] = STATE(55),
    [sym_and] = STATE(55),
    [sym_neg] = STATE(55),
    [sym_eq] = STATE(55),
    [sym_neq] = STATE(55),
    [sym_gt] = STATE(55),
    [sym_gte] = STATE(55),
    [sym_lt] = STATE(55),
    [sym_lte] = STATE(55),
    [sym__term] = STATE(55),
    [sym_variable] = STATE(55),
    [sym_constant] = STATE(55),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(149),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym__expr] = STATE(70),
    [sym_op] = STATE(70),
    [sym_mul] = STATE(70),
    [sym_div] = STATE(70),
    [sym_add] = STATE(70),
    [sym_sub] = STATE(70),
    [sym_imp] = STATE(70),
    [sym_or] = STATE(70),
    [sym_and] = STATE(70),
    [sym_neg] = STATE(70),
    [sym_eq] = STATE(70),
    [sym_neq] = STATE(70),
    [sym_gt] = STATE(70),
    [sym_gte] = STATE(70),
    [sym_lt] = STATE(70),
    [sym_lte] = STATE(70),
    [sym__term] = STATE(70),
    [sym_variable] = STATE(70),
    [sym_constant] = STATE(70),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(151),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym__expr] = STATE(60),
    [sym_op] = STATE(60),
    [sym_mul] = STATE(60),
    [sym_div] = STATE(60),
    [sym_add] = STATE(60),
    [sym_sub] = STATE(60),
    [sym_imp] = STATE(60),
    [sym_or] = STATE(60),
    [sym_and] = STATE(60),
    [sym_neg] = STATE(60),
    [sym_eq] = STATE(60),
    [sym_neq] = STATE(60),
    [sym_gt] = STATE(60),
    [sym_gte] = STATE(60),
    [sym_lt] = STATE(60),
    [sym_lte] = STATE(60),
    [sym__term] = STATE(60),
    [sym_variable] = STATE(60),
    [sym_constant] = STATE(60),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(153),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym__expr] = STATE(67),
    [sym_op] = STATE(67),
    [sym_mul] = STATE(67),
    [sym_div] = STATE(67),
    [sym_add] = STATE(67),
    [sym_sub] = STATE(67),
    [sym_imp] = STATE(67),
    [sym_or] = STATE(67),
    [sym_and] = STATE(67),
    [sym_neg] = STATE(67),
    [sym_eq] = STATE(67),
    [sym_neq] = STATE(67),
    [sym_gt] = STATE(67),
    [sym_gte] = STATE(67),
    [sym_lt] = STATE(67),
    [sym_lte] = STATE(67),
    [sym__term] = STATE(67),
    [sym_variable] = STATE(67),
    [sym_constant] = STATE(67),
    [sym_op_name] = STATE(163),
    [sym_boolean] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(155),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym__declaration] = STATE(97),
    [sym_variable_declaration] = STATE(136),
    [sym_constant_declaration] = STATE(136),
    [sym__statement] = STATE(71),
    [sym_assign] = STATE(162),
    [sym_assert] = STATE(162),
    [sym_assert_with_bound] = STATE(162),
    [sym_if] = STATE(162),
    [sym_do] = STATE(162),
    [sym_spec] = STATE(162),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat1] = STATE(97),
    [aux_sym_source_file_repeat2] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(157),
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
  [46] = {
    [sym__statement] = STATE(46),
    [sym_assign] = STATE(156),
    [sym_assert] = STATE(156),
    [sym_assert_with_bound] = STATE(156),
    [sym_if] = STATE(156),
    [sym_do] = STATE(156),
    [sym_spec] = STATE(156),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(46),
    [sym_skip] = ACTIONS(159),
    [sym_abort] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_fi] = ACTIONS(168),
    [anon_sym_do] = ACTIONS(170),
    [anon_sym_LBRACE_BANG] = ACTIONS(173),
    [aux_sym_variable_token1] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym__statement] = STATE(50),
    [sym_assign] = STATE(158),
    [sym_assert] = STATE(158),
    [sym_assert_with_bound] = STATE(158),
    [sym_if] = STATE(158),
    [sym_do] = STATE(158),
    [sym_spec] = STATE(158),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(50),
    [sym_skip] = ACTIONS(181),
    [sym_abort] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_od] = ACTIONS(183),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym__statement] = STATE(46),
    [sym_assign] = STATE(156),
    [sym_assert] = STATE(156),
    [sym_assert_with_bound] = STATE(156),
    [sym_if] = STATE(156),
    [sym_do] = STATE(156),
    [sym_spec] = STATE(156),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(46),
    [sym_skip] = ACTIONS(187),
    [sym_abort] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_fi] = ACTIONS(183),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym__statement] = STATE(49),
    [sym_assign] = STATE(137),
    [sym_assert] = STATE(137),
    [sym_assert_with_bound] = STATE(137),
    [sym_if] = STATE(137),
    [sym_do] = STATE(137),
    [sym_spec] = STATE(137),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(49),
    [sym_skip] = ACTIONS(189),
    [sym_abort] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(170),
    [anon_sym_LBRACE_BANG] = ACTIONS(173),
    [anon_sym_BANG_RBRACE] = ACTIONS(179),
    [aux_sym_variable_token1] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [sym__statement] = STATE(50),
    [sym_assign] = STATE(158),
    [sym_assert] = STATE(158),
    [sym_assert_with_bound] = STATE(158),
    [sym_if] = STATE(158),
    [sym_do] = STATE(158),
    [sym_spec] = STATE(158),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(50),
    [sym_skip] = ACTIONS(192),
    [sym_abort] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(170),
    [anon_sym_od] = ACTIONS(168),
    [anon_sym_LBRACE_BANG] = ACTIONS(173),
    [aux_sym_variable_token1] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_EQ_GT] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_SLASH_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_DASH_GT] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_EQ_GT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [anon_sym_SLASH_EQ] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_DASH_GT] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym__statement] = STATE(56),
    [sym_assign] = STATE(162),
    [sym_assert] = STATE(162),
    [sym_assert_with_bound] = STATE(162),
    [sym_if] = STATE(162),
    [sym_do] = STATE(162),
    [sym_spec] = STATE(162),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym__statement] = STATE(56),
    [sym_assign] = STATE(162),
    [sym_assert] = STATE(162),
    [sym_assert_with_bound] = STATE(162),
    [sym_if] = STATE(162),
    [sym_do] = STATE(162),
    [sym_spec] = STATE(162),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_skip] = ACTIONS(237),
    [sym_abort] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(170),
    [anon_sym_LBRACE_BANG] = ACTIONS(173),
    [aux_sym_variable_token1] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_EQ_GT] = ACTIONS(240),
    [anon_sym_PIPE_PIPE] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_SLASH_EQ] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(242),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(242),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_DASH_GT] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_EQ_GT] = ACTIONS(244),
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_AMP_AMP] = ACTIONS(244),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(244),
    [anon_sym_GT] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(244),
    [anon_sym_DASH_GT] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_EQ_GT] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [anon_sym_DASH_GT] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_DASH_GT] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(256),
    [anon_sym_EQ_GT] = ACTIONS(254),
    [anon_sym_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(254),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(254),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(254),
    [anon_sym_DASH_GT] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym__statement] = STATE(49),
    [sym_assign] = STATE(137),
    [sym_assert] = STATE(137),
    [sym_assert_with_bound] = STATE(137),
    [sym_if] = STATE(137),
    [sym_do] = STATE(137),
    [sym_spec] = STATE(137),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(49),
    [sym_skip] = ACTIONS(258),
    [sym_abort] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_EQ_GT] = ACTIONS(260),
    [anon_sym_PIPE_PIPE] = ACTIONS(260),
    [anon_sym_AMP_AMP] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_DASH_GT] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(264),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_DASH_GT] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym__statement] = STATE(73),
    [sym_assign] = STATE(137),
    [sym_assert] = STATE(137),
    [sym_assert_with_bound] = STATE(137),
    [sym_if] = STATE(137),
    [sym_do] = STATE(137),
    [sym_spec] = STATE(137),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(73),
    [sym_skip] = ACTIONS(258),
    [sym_abort] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [anon_sym_BANG_RBRACE] = ACTIONS(266),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_EQ_GT] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_EQ] = ACTIONS(270),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [anon_sym_DASH_GT] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_SLASH_EQ] = ACTIONS(272),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_GT_EQ] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(272),
    [anon_sym_DASH_GT] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_SLASH] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_EQ_GT] = ACTIONS(276),
    [anon_sym_PIPE_PIPE] = ACTIONS(276),
    [anon_sym_AMP_AMP] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_SLASH_EQ] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [anon_sym_DASH_GT] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(280),
    [anon_sym_PIPE_PIPE] = ACTIONS(280),
    [anon_sym_AMP_AMP] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [anon_sym_DASH_GT] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_DASH_GT] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym__statement] = STATE(56),
    [sym_assign] = STATE(162),
    [sym_assert] = STATE(162),
    [sym_assert_with_bound] = STATE(162),
    [sym_if] = STATE(162),
    [sym_do] = STATE(162),
    [sym_spec] = STATE(162),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_DASH_GT] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym__statement] = STATE(49),
    [sym_assign] = STATE(137),
    [sym_assert] = STATE(137),
    [sym_assert_with_bound] = STATE(137),
    [sym_if] = STATE(137),
    [sym_do] = STATE(137),
    [sym_spec] = STATE(137),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(49),
    [sym_skip] = ACTIONS(258),
    [sym_abort] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [anon_sym_BANG_RBRACE] = ACTIONS(292),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_SLASH_EQ] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_GT_EQ] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LT_EQ] = ACTIONS(294),
    [anon_sym_DASH_GT] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(298),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(300),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [anon_sym_AMP_AMP] = ACTIONS(302),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_SLASH_EQ] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(302),
    [anon_sym_DASH_GT] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [sym__statement] = STATE(48),
    [sym_assign] = STATE(156),
    [sym_assert] = STATE(156),
    [sym_assert_with_bound] = STATE(156),
    [sym_if] = STATE(156),
    [sym_do] = STATE(156),
    [sym_spec] = STATE(156),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(48),
    [sym_skip] = ACTIONS(187),
    [sym_abort] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym__statement] = STATE(47),
    [sym_assign] = STATE(158),
    [sym_assert] = STATE(158),
    [sym_assert_with_bound] = STATE(158),
    [sym_if] = STATE(158),
    [sym_do] = STATE(158),
    [sym_spec] = STATE(158),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(47),
    [sym_skip] = ACTIONS(181),
    [sym_abort] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [sym__statement] = STATE(62),
    [sym_assign] = STATE(137),
    [sym_assert] = STATE(137),
    [sym_assert_with_bound] = STATE(137),
    [sym_if] = STATE(137),
    [sym_do] = STATE(137),
    [sym_spec] = STATE(137),
    [sym_variable] = STATE(144),
    [aux_sym_source_file_repeat2] = STATE(62),
    [sym_skip] = ACTIONS(258),
    [sym_abort] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(314),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(195),
  },
  [86] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(298),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(300),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(298),
  },
  [87] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(288),
  },
  [88] = {
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_DASH_GT] = ACTIONS(328),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_EQ_GT] = ACTIONS(244),
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_AMP_AMP] = ACTIONS(244),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(244),
    [anon_sym_GT] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(244),
  },
  [90] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_EQ_GT] = ACTIONS(240),
    [anon_sym_PIPE_PIPE] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_SLASH_EQ] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(242),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(242),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(240),
  },
  [91] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(330),
    [anon_sym_PIPE_PIPE] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(209),
  },
  [92] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(284),
  },
  [93] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(252),
  },
  [94] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_SLASH_EQ] = ACTIONS(272),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_GT_EQ] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(272),
  },
  [95] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(330),
    [anon_sym_PIPE_PIPE] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(348),
  },
  [96] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(280),
    [anon_sym_PIPE_PIPE] = ACTIONS(280),
    [anon_sym_AMP_AMP] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(280),
  },
  [97] = {
    [sym__declaration] = STATE(97),
    [sym_variable_declaration] = STATE(136),
    [sym_constant_declaration] = STATE(136),
    [aux_sym_source_file_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_var] = ACTIONS(352),
    [anon_sym_con] = ACTIONS(355),
    [sym_skip] = ACTIONS(358),
    [sym_abort] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(358),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_do] = ACTIONS(358),
    [anon_sym_LBRACE_BANG] = ACTIONS(350),
    [aux_sym_variable_token1] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_EQ_GT] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(248),
  },
  [99] = {
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_EQ_GT] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_EQ] = ACTIONS(270),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(268),
  },
  [100] = {
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_DASH_GT] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_EQ_GT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [anon_sym_SLASH_EQ] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(205),
  },
  [102] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [anon_sym_AMP_AMP] = ACTIONS(302),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_SLASH_EQ] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(302),
  },
  [103] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_SLASH_EQ] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_GT_EQ] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LT_EQ] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(294),
  },
  [104] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_SLASH] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_EQ_GT] = ACTIONS(276),
    [anon_sym_PIPE_PIPE] = ACTIONS(276),
    [anon_sym_AMP_AMP] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_SLASH_EQ] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(276),
  },
  [105] = {
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [anon_sym_STAR] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_EQ_GT] = ACTIONS(260),
    [anon_sym_PIPE_PIPE] = ACTIONS(260),
    [anon_sym_AMP_AMP] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(260),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_EQ_GT] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_SLASH_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(201),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(366),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_SLASH_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_DASH_GT] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(256),
    [anon_sym_EQ_GT] = ACTIONS(254),
    [anon_sym_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(254),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(254),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(254),
  },
  [113] = {
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(264),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(264),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_var] = ACTIONS(372),
    [anon_sym_con] = ACTIONS(372),
    [sym_skip] = ACTIONS(372),
    [sym_abort] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_if] = ACTIONS(372),
    [anon_sym_do] = ACTIONS(372),
    [anon_sym_LBRACE_BANG] = ACTIONS(370),
    [aux_sym_variable_token1] = ACTIONS(372),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [sym_skip] = ACTIONS(374),
    [sym_abort] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_if] = ACTIONS(374),
    [anon_sym_do] = ACTIONS(374),
    [anon_sym_LBRACE_BANG] = ACTIONS(376),
    [anon_sym_BANG_RBRACE] = ACTIONS(376),
    [aux_sym_variable_token1] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
  },
  [116] = {
    [sym_skip] = ACTIONS(374),
    [sym_abort] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_if] = ACTIONS(374),
    [anon_sym_do] = ACTIONS(374),
    [anon_sym_od] = ACTIONS(374),
    [anon_sym_LBRACE_BANG] = ACTIONS(376),
    [aux_sym_variable_token1] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [sym_skip] = ACTIONS(374),
    [sym_abort] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_if] = ACTIONS(374),
    [anon_sym_fi] = ACTIONS(374),
    [anon_sym_do] = ACTIONS(374),
    [anon_sym_LBRACE_BANG] = ACTIONS(376),
    [aux_sym_variable_token1] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [sym_skip] = ACTIONS(374),
    [sym_abort] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_if] = ACTIONS(374),
    [anon_sym_do] = ACTIONS(374),
    [anon_sym_LBRACE_BANG] = ACTIONS(376),
    [aux_sym_variable_token1] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_TILDE] = ACTIONS(378),
    [aux_sym_variable_token1] = ACTIONS(378),
    [aux_sym_constant_token1] = ACTIONS(380),
    [sym_integer] = ACTIONS(378),
    [anon_sym_True] = ACTIONS(380),
    [anon_sym_False] = ACTIONS(380),
    [sym_comment] = ACTIONS(3),
  },
  [120] = {
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_TILDE] = ACTIONS(382),
    [aux_sym_variable_token1] = ACTIONS(382),
    [aux_sym_constant_token1] = ACTIONS(384),
    [sym_integer] = ACTIONS(382),
    [anon_sym_True] = ACTIONS(384),
    [anon_sym_False] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [sym_variable] = STATE(131),
    [sym__variable_list] = STATE(149),
    [aux_sym__variable_list_repeat1] = STATE(128),
    [aux_sym_variable_token1] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [sym_constant] = STATE(135),
    [sym__constant_list] = STATE(153),
    [aux_sym__constant_list_repeat1] = STATE(126),
    [aux_sym_constant_token1] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_COLON_EQ] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
  },
  [124] = {
    [sym_variable] = STATE(151),
    [aux_sym__variable_list_repeat1] = STATE(124),
    [aux_sym_variable_token1] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [anon_sym_fi] = ACTIONS(393),
    [anon_sym_od] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
  },
  [126] = {
    [sym_constant] = STATE(130),
    [aux_sym__constant_list_repeat1] = STATE(127),
    [aux_sym_constant_token1] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [sym_constant] = STATE(160),
    [aux_sym__constant_list_repeat1] = STATE(127),
    [aux_sym_constant_token1] = ACTIONS(397),
    [sym_comment] = ACTIONS(3),
  },
  [128] = {
    [sym_variable] = STATE(133),
    [aux_sym__variable_list_repeat1] = STATE(124),
    [aux_sym_variable_token1] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
  },
  [129] = {
    [anon_sym_fi] = ACTIONS(400),
    [anon_sym_od] = ACTIONS(400),
    [anon_sym_PIPE] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
  },
  [130] = {
    [anon_sym_COLON] = ACTIONS(402),
    [anon_sym_COMMA] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [131] = {
    [anon_sym_COLON] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [sym_type] = STATE(138),
    [aux_sym_constant_token1] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [133] = {
    [anon_sym_COLON] = ACTIONS(412),
    [anon_sym_COMMA] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [134] = {
    [sym_type] = STATE(154),
    [aux_sym_constant_token1] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [anon_sym_COLON] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(416),
  },
  [137] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(418),
  },
  [138] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(420),
  },
  [139] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(422),
  },
  [140] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(424),
  },
  [141] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(426),
  },
  [142] = {
    [anon_sym_fi] = ACTIONS(428),
    [sym_comment] = ACTIONS(3),
  },
  [143] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(430),
  },
  [144] = {
    [anon_sym_COLON_EQ] = ACTIONS(432),
    [sym_comment] = ACTIONS(3),
  },
  [145] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(434),
  },
  [146] = {
    [anon_sym_bnd] = ACTIONS(436),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(438),
  },
  [148] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(440),
  },
  [149] = {
    [anon_sym_COLON] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_comment] = ACTIONS(3),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [152] = {
    [anon_sym_PIPE] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
  },
  [153] = {
    [anon_sym_COLON] = ACTIONS(446),
    [sym_comment] = ACTIONS(3),
  },
  [154] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(448),
  },
  [155] = {
    [aux_sym_constant_token1] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
  },
  [156] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(452),
  },
  [157] = {
    [aux_sym_variable_token1] = ACTIONS(454),
    [sym_comment] = ACTIONS(3),
  },
  [158] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(456),
  },
  [159] = {
    [anon_sym_od] = ACTIONS(458),
    [sym_comment] = ACTIONS(3),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [161] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(460),
  },
  [162] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(462),
  },
  [163] = {
    [anon_sym_LPAREN] = ACTIONS(464),
    [sym_comment] = ACTIONS(3),
  },
  [164] = {
    [anon_sym_COLON] = ACTIONS(466),
    [sym_comment] = ACTIONS(3),
  },
  [165] = {
    [anon_sym_LPAREN] = ACTIONS(468),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(121),
  [9] = {.count = 1, .reusable = false}, SHIFT(122),
  [11] = {.count = 1, .reusable = false}, SHIFT(162),
  [13] = {.count = 1, .reusable = false}, SHIFT(32),
  [15] = {.count = 1, .reusable = false}, SHIFT(2),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, SHIFT(161),
  [21] = {.count = 1, .reusable = false}, SHIFT(123),
  [23] = {.count = 1, .reusable = true}, SHIFT(23),
  [25] = {.count = 1, .reusable = true}, SHIFT(24),
  [27] = {.count = 1, .reusable = true}, SHIFT(51),
  [29] = {.count = 1, .reusable = false}, SHIFT(52),
  [31] = {.count = 1, .reusable = true}, SHIFT(100),
  [33] = {.count = 1, .reusable = false}, SHIFT(61),
  [35] = {.count = 1, .reusable = true}, SHIFT(111),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(23),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(24),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(51),
  [46] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(52),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(88),
  [52] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(61),
  [55] = {.count = 1, .reusable = true}, SHIFT(84),
  [57] = {.count = 1, .reusable = true}, SHIFT(83),
  [59] = {.count = 1, .reusable = true}, SHIFT(80),
  [61] = {.count = 1, .reusable = true}, SHIFT(82),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(23),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(24),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(51),
  [72] = {.count = 2, .reusable = false}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(52),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(107),
  [78] = {.count = 2, .reusable = false}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(61),
  [81] = {.count = 1, .reusable = true}, SHIFT(25),
  [83] = {.count = 1, .reusable = true}, SHIFT(31),
  [85] = {.count = 1, .reusable = true}, SHIFT(85),
  [87] = {.count = 1, .reusable = false}, SHIFT(109),
  [89] = {.count = 1, .reusable = true}, SHIFT(89),
  [91] = {.count = 1, .reusable = false}, SHIFT(112),
  [93] = {.count = 1, .reusable = true}, SHIFT(103),
  [95] = {.count = 1, .reusable = true}, SHIFT(86),
  [97] = {.count = 1, .reusable = true}, SHIFT(102),
  [99] = {.count = 1, .reusable = true}, SHIFT(87),
  [101] = {.count = 1, .reusable = true}, SHIFT(96),
  [103] = {.count = 1, .reusable = true}, SHIFT(59),
  [105] = {.count = 1, .reusable = true}, SHIFT(94),
  [107] = {.count = 1, .reusable = true}, SHIFT(93),
  [109] = {.count = 1, .reusable = true}, SHIFT(92),
  [111] = {.count = 1, .reusable = true}, SHIFT(91),
  [113] = {.count = 1, .reusable = true}, SHIFT(108),
  [115] = {.count = 1, .reusable = true}, SHIFT(64),
  [117] = {.count = 1, .reusable = true}, SHIFT(110),
  [119] = {.count = 1, .reusable = true}, SHIFT(90),
  [121] = {.count = 1, .reusable = true}, SHIFT(53),
  [123] = {.count = 1, .reusable = true}, SHIFT(101),
  [125] = {.count = 1, .reusable = true}, SHIFT(98),
  [127] = {.count = 1, .reusable = true}, SHIFT(74),
  [129] = {.count = 1, .reusable = true}, SHIFT(113),
  [131] = {.count = 1, .reusable = true}, SHIFT(81),
  [133] = {.count = 1, .reusable = true}, SHIFT(75),
  [135] = {.count = 1, .reusable = true}, SHIFT(105),
  [137] = {.count = 1, .reusable = true}, SHIFT(76),
  [139] = {.count = 1, .reusable = true}, SHIFT(95),
  [141] = {.count = 1, .reusable = true}, SHIFT(72),
  [143] = {.count = 1, .reusable = true}, SHIFT(69),
  [145] = {.count = 1, .reusable = true}, SHIFT(58),
  [147] = {.count = 1, .reusable = true}, SHIFT(57),
  [149] = {.count = 1, .reusable = true}, SHIFT(55),
  [151] = {.count = 1, .reusable = true}, SHIFT(70),
  [153] = {.count = 1, .reusable = true}, SHIFT(60),
  [155] = {.count = 1, .reusable = true}, SHIFT(67),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(156),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(32),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [168] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(161),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(123),
  [179] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [181] = {.count = 1, .reusable = false}, SHIFT(158),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_guarded_command, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_guarded_command, 3),
  [187] = {.count = 1, .reusable = false}, SHIFT(156),
  [189] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(137),
  [192] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(158),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_op_name, 1),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_imp, 3),
  [211] = {.count = 1, .reusable = true}, SHIFT(18),
  [213] = {.count = 1, .reusable = false}, SHIFT(27),
  [215] = {.count = 1, .reusable = true}, SHIFT(39),
  [217] = {.count = 1, .reusable = false}, SHIFT(40),
  [219] = {.count = 1, .reusable = true}, SHIFT(41),
  [221] = {.count = 1, .reusable = true}, SHIFT(42),
  [223] = {.count = 1, .reusable = true}, SHIFT(43),
  [225] = {.count = 1, .reusable = false}, SHIFT(44),
  [227] = {.count = 1, .reusable = true}, SHIFT(38),
  [229] = {.count = 1, .reusable = false}, SHIFT(37),
  [231] = {.count = 1, .reusable = true}, SHIFT(35),
  [233] = {.count = 1, .reusable = false}, SHIFT(33),
  [235] = {.count = 1, .reusable = true}, SHIFT(30),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(162),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [258] = {.count = 1, .reusable = false}, SHIFT(137),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_op, 5),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_op, 5),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_neg, 2),
  [266] = {.count = 1, .reusable = true}, SHIFT(140),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_eq, 3),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_op, 4),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_op, 4),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_neq, 3),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_gt, 3),
  [292] = {.count = 1, .reusable = true}, SHIFT(147),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_lte, 3),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_lt, 3),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_gte, 3),
  [306] = {.count = 1, .reusable = true}, SHIFT(120),
  [308] = {.count = 1, .reusable = true}, SHIFT(68),
  [310] = {.count = 1, .reusable = true}, SHIFT(148),
  [312] = {.count = 1, .reusable = true}, SHIFT(146),
  [314] = {.count = 1, .reusable = true}, SHIFT(63),
  [316] = {.count = 1, .reusable = true}, SHIFT(104),
  [318] = {.count = 1, .reusable = true}, SHIFT(106),
  [320] = {.count = 1, .reusable = true}, SHIFT(29),
  [322] = {.count = 1, .reusable = false}, SHIFT(28),
  [324] = {.count = 1, .reusable = true}, SHIFT(12),
  [326] = {.count = 1, .reusable = false}, SHIFT(26),
  [328] = {.count = 1, .reusable = true}, SHIFT(79),
  [330] = {.count = 1, .reusable = true}, SHIFT(22),
  [332] = {.count = 1, .reusable = true}, SHIFT(21),
  [334] = {.count = 1, .reusable = true}, SHIFT(20),
  [336] = {.count = 1, .reusable = false}, SHIFT(19),
  [338] = {.count = 1, .reusable = true}, SHIFT(17),
  [340] = {.count = 1, .reusable = false}, SHIFT(16),
  [342] = {.count = 1, .reusable = true}, SHIFT(15),
  [344] = {.count = 1, .reusable = false}, SHIFT(14),
  [346] = {.count = 1, .reusable = true}, SHIFT(13),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [350] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [352] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [355] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [358] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [360] = {.count = 1, .reusable = true}, SHIFT(77),
  [362] = {.count = 1, .reusable = true}, SHIFT(145),
  [364] = {.count = 1, .reusable = true}, SHIFT(66),
  [366] = {.count = 1, .reusable = true}, SHIFT(99),
  [368] = {.count = 1, .reusable = true}, SHIFT(78),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym__declaration, 2),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym__declaration, 2),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [378] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [380] = {.count = 1, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [382] = {.count = 1, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2),
  [384] = {.count = 1, .reusable = false}, REDUCE(aux_sym_op_repeat1, 2),
  [386] = {.count = 1, .reusable = true}, SHIFT(123),
  [388] = {.count = 1, .reusable = true}, SHIFT(52),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(123),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 1),
  [395] = {.count = 1, .reusable = true}, SHIFT(119),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(52),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 2),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [404] = {.count = 1, .reusable = true}, SHIFT(155),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [408] = {.count = 1, .reusable = true}, SHIFT(157),
  [410] = {.count = 1, .reusable = true}, SHIFT(139),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [416] = {.count = 1, .reusable = true}, SHIFT(114),
  [418] = {.count = 1, .reusable = true}, SHIFT(115),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 3),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [428] = {.count = 1, .reusable = true}, SHIFT(143),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [432] = {.count = 1, .reusable = true}, SHIFT(36),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_assert_with_bound, 7),
  [436] = {.count = 1, .reusable = true}, SHIFT(164),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 4),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_assert, 3),
  [442] = {.count = 1, .reusable = true}, SHIFT(132),
  [444] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [446] = {.count = 1, .reusable = true}, SHIFT(134),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [452] = {.count = 1, .reusable = true}, SHIFT(117),
  [454] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [456] = {.count = 1, .reusable = true}, SHIFT(116),
  [458] = {.count = 1, .reusable = true}, SHIFT(141),
  [460] = {.count = 1, .reusable = true}, SHIFT(65),
  [462] = {.count = 1, .reusable = true}, SHIFT(118),
  [464] = {.count = 1, .reusable = true}, SHIFT(9),
  [466] = {.count = 1, .reusable = true}, SHIFT(34),
  [468] = {.count = 1, .reusable = true}, SHIFT(8),
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
