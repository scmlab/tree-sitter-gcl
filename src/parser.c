#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 148
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_TILDE = 23,
  anon_sym_AMP_AMP = 24,
  anon_sym_PIPE_PIPE = 25,
  anon_sym_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_LT_EQ = 31,
  aux_sym_variable_token1 = 32,
  aux_sym_constant_token1 = 33,
  sym_integer = 34,
  anon_sym_True = 35,
  anon_sym_False = 36,
  anon_sym_DASH_GT = 37,
  anon_sym_PIPE = 38,
  sym_comment = 39,
  sym__newline = 40,
  sym_source_file = 41,
  sym__declaration = 42,
  sym_variable_declaration = 43,
  sym_constant_declaration = 44,
  sym__statement = 45,
  sym_assign = 46,
  sym_assert = 47,
  sym_assert_with_bound = 48,
  sym_if = 49,
  sym_do = 50,
  sym_spec = 51,
  sym__expr = 52,
  sym_op = 53,
  sym_mul = 54,
  sym_div = 55,
  sym_add = 56,
  sym_sub = 57,
  sym__term = 58,
  sym__pred = 59,
  sym_neg = 60,
  sym_and = 61,
  sym_or = 62,
  sym_eq = 63,
  sym_neq = 64,
  sym_gt = 65,
  sym_gte = 66,
  sym_lt = 67,
  sym_lte = 68,
  sym_variable = 69,
  sym_constant = 70,
  sym_type = 71,
  sym_op_name = 72,
  sym_boolean = 73,
  sym__variable_list = 74,
  sym__constant_list = 75,
  sym_guarded_command = 76,
  sym__guarded_command_list = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym_source_file_repeat2 = 79,
  aux_sym_op_repeat1 = 80,
  aux_sym__variable_list_repeat1 = 81,
  aux_sym__constant_list_repeat1 = 82,
  aux_sym__guarded_command_list_repeat1 = 83,
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
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
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
  [sym_neg] = "neg",
  [sym_and] = "and",
  [sym_or] = "or",
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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
  [sym_neg] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
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
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'F') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'F') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '0') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '}') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'n') SKIP(2)
      END_STATE();
    case 22:
      if (lookahead == 'n') SKIP(6)
      END_STATE();
    case 23:
      if (lookahead == 'n') SKIP(7)
      END_STATE();
    case 24:
      if (lookahead == 'n') SKIP(3)
      END_STATE();
    case 25:
      if (lookahead == 'n') SKIP(8)
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == '|') ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == '}') ADVANCE(67);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 37:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(83);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 38:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '\\') SKIP(41)
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 39:
      if (eof) ADVANCE(42);
      if (lookahead == 'n') SKIP(0)
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      if (lookahead == 'n') SKIP(37)
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == 'n') SKIP(38)
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_con);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_con);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_skip);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_skip);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_abort);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_abort);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(66);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_bnd);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_od);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_od);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANG_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '>') ADVANCE(112);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'k') ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(76);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 37},
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
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 38},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 38},
  [72] = {.lex_state = 38},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 37},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 37},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 37},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 37},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 37},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 37},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 37},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 37},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
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
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
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
    [sym_source_file] = STATE(135),
    [sym__declaration] = STATE(12),
    [sym_variable_declaration] = STATE(133),
    [sym_constant_declaration] = STATE(133),
    [sym__statement] = STATE(18),
    [sym_assign] = STATE(144),
    [sym_assert] = STATE(144),
    [sym_assert_with_bound] = STATE(144),
    [sym_if] = STATE(144),
    [sym_do] = STATE(144),
    [sym_spec] = STATE(144),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat1] = STATE(12),
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
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym__pred] = STATE(110),
    [sym_neg] = STATE(110),
    [sym_and] = STATE(110),
    [sym_or] = STATE(110),
    [sym_eq] = STATE(110),
    [sym_neq] = STATE(110),
    [sym_gt] = STATE(110),
    [sym_gte] = STATE(110),
    [sym_lt] = STATE(110),
    [sym_lte] = STATE(110),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(110),
    [sym_guarded_command] = STATE(111),
    [sym__guarded_command_list] = STATE(136),
    [aux_sym__guarded_command_list_repeat1] = STATE(5),
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
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym__pred] = STATE(109),
    [sym_neg] = STATE(109),
    [sym_and] = STATE(109),
    [sym_or] = STATE(109),
    [sym_eq] = STATE(109),
    [sym_neq] = STATE(109),
    [sym_gt] = STATE(109),
    [sym_gte] = STATE(109),
    [sym_lt] = STATE(109),
    [sym_lte] = STATE(109),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(109),
    [sym_guarded_command] = STATE(111),
    [sym__guarded_command_list] = STATE(120),
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
  [4] = {
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym__pred] = STATE(109),
    [sym_neg] = STATE(109),
    [sym_and] = STATE(109),
    [sym_or] = STATE(109),
    [sym_eq] = STATE(109),
    [sym_neq] = STATE(109),
    [sym_gt] = STATE(109),
    [sym_gte] = STATE(109),
    [sym_lt] = STATE(109),
    [sym_lte] = STATE(109),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(109),
    [sym_guarded_command] = STATE(107),
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
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym__pred] = STATE(110),
    [sym_neg] = STATE(110),
    [sym_and] = STATE(110),
    [sym_or] = STATE(110),
    [sym_eq] = STATE(110),
    [sym_neq] = STATE(110),
    [sym_gt] = STATE(110),
    [sym_gte] = STATE(110),
    [sym_lt] = STATE(110),
    [sym_lte] = STATE(110),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(110),
    [sym_guarded_command] = STATE(107),
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
  [6] = {
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym__pred] = STATE(101),
    [sym_neg] = STATE(101),
    [sym_and] = STATE(101),
    [sym_or] = STATE(101),
    [sym_eq] = STATE(101),
    [sym_neq] = STATE(101),
    [sym_gt] = STATE(101),
    [sym_gte] = STATE(101),
    [sym_lt] = STATE(101),
    [sym_lte] = STATE(101),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(101),
    [sym_guarded_command] = STATE(118),
    [aux_sym__guarded_command_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(38),
    [aux_sym_variable_token1] = ACTIONS(41),
    [aux_sym_constant_token1] = ACTIONS(44),
    [sym_integer] = ACTIONS(47),
    [anon_sym_True] = ACTIONS(50),
    [anon_sym_False] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym__pred] = STATE(79),
    [sym_neg] = STATE(79),
    [sym_and] = STATE(79),
    [sym_or] = STATE(79),
    [sym_eq] = STATE(79),
    [sym_neq] = STATE(79),
    [sym_gt] = STATE(79),
    [sym_gte] = STATE(79),
    [sym_lt] = STATE(79),
    [sym_lte] = STATE(79),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(79),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym__pred] = STATE(97),
    [sym_neg] = STATE(97),
    [sym_and] = STATE(97),
    [sym_or] = STATE(97),
    [sym_eq] = STATE(97),
    [sym_neq] = STATE(97),
    [sym_gt] = STATE(97),
    [sym_gte] = STATE(97),
    [sym_lt] = STATE(97),
    [sym_lte] = STATE(97),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym__pred] = STATE(76),
    [sym_neg] = STATE(76),
    [sym_and] = STATE(76),
    [sym_or] = STATE(76),
    [sym_eq] = STATE(76),
    [sym_neq] = STATE(76),
    [sym_gt] = STATE(76),
    [sym_gte] = STATE(76),
    [sym_lt] = STATE(76),
    [sym_lte] = STATE(76),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__expr] = STATE(64),
    [sym_op] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym__pred] = STATE(77),
    [sym_neg] = STATE(77),
    [sym_and] = STATE(77),
    [sym_or] = STATE(77),
    [sym_eq] = STATE(77),
    [sym_neq] = STATE(77),
    [sym_gt] = STATE(77),
    [sym_gte] = STATE(77),
    [sym_lt] = STATE(77),
    [sym_lte] = STATE(77),
    [sym_variable] = STATE(64),
    [sym_constant] = STATE(64),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__expr] = STATE(60),
    [sym_op] = STATE(60),
    [sym_mul] = STATE(60),
    [sym_div] = STATE(60),
    [sym_add] = STATE(60),
    [sym_sub] = STATE(60),
    [sym__term] = STATE(60),
    [sym__pred] = STATE(104),
    [sym_neg] = STATE(104),
    [sym_and] = STATE(104),
    [sym_or] = STATE(104),
    [sym_eq] = STATE(104),
    [sym_neq] = STATE(104),
    [sym_gt] = STATE(104),
    [sym_gte] = STATE(104),
    [sym_lt] = STATE(104),
    [sym_lte] = STATE(104),
    [sym_variable] = STATE(60),
    [sym_constant] = STATE(60),
    [sym_op_name] = STATE(145),
    [sym_boolean] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(29),
    [sym_integer] = ACTIONS(53),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__declaration] = STATE(45),
    [sym_variable_declaration] = STATE(133),
    [sym_constant_declaration] = STATE(133),
    [sym__statement] = STATE(25),
    [sym_assign] = STATE(144),
    [sym_assert] = STATE(144),
    [sym_assert_with_bound] = STATE(144),
    [sym_if] = STATE(144),
    [sym_do] = STATE(144),
    [sym_spec] = STATE(144),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat1] = STATE(45),
    [aux_sym_source_file_repeat2] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(55),
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
  [13] = {
    [sym__statement] = STATE(13),
    [sym_assign] = STATE(139),
    [sym_assert] = STATE(139),
    [sym_assert_with_bound] = STATE(139),
    [sym_if] = STATE(139),
    [sym_do] = STATE(139),
    [sym_spec] = STATE(139),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(13),
    [sym_skip] = ACTIONS(57),
    [sym_abort] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(66),
    [anon_sym_do] = ACTIONS(68),
    [anon_sym_LBRACE_BANG] = ACTIONS(71),
    [aux_sym_variable_token1] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__statement] = STATE(17),
    [sym_assign] = STATE(141),
    [sym_assert] = STATE(141),
    [sym_assert_with_bound] = STATE(141),
    [sym_if] = STATE(141),
    [sym_do] = STATE(141),
    [sym_spec] = STATE(141),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(17),
    [sym_skip] = ACTIONS(79),
    [sym_abort] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_od] = ACTIONS(81),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__statement] = STATE(15),
    [sym_assign] = STATE(134),
    [sym_assert] = STATE(134),
    [sym_assert_with_bound] = STATE(134),
    [sym_if] = STATE(134),
    [sym_do] = STATE(134),
    [sym_spec] = STATE(134),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(15),
    [sym_skip] = ACTIONS(85),
    [sym_abort] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(68),
    [anon_sym_LBRACE_BANG] = ACTIONS(71),
    [anon_sym_BANG_RBRACE] = ACTIONS(77),
    [aux_sym_variable_token1] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__statement] = STATE(13),
    [sym_assign] = STATE(139),
    [sym_assert] = STATE(139),
    [sym_assert_with_bound] = STATE(139),
    [sym_if] = STATE(139),
    [sym_do] = STATE(139),
    [sym_spec] = STATE(139),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(13),
    [sym_skip] = ACTIONS(88),
    [sym_abort] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_fi] = ACTIONS(81),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__statement] = STATE(17),
    [sym_assign] = STATE(141),
    [sym_assert] = STATE(141),
    [sym_assert_with_bound] = STATE(141),
    [sym_if] = STATE(141),
    [sym_do] = STATE(141),
    [sym_spec] = STATE(141),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(17),
    [sym_skip] = ACTIONS(90),
    [sym_abort] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(68),
    [anon_sym_od] = ACTIONS(66),
    [anon_sym_LBRACE_BANG] = ACTIONS(71),
    [aux_sym_variable_token1] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(144),
    [sym_assert] = STATE(144),
    [sym_assert_with_bound] = STATE(144),
    [sym_if] = STATE(144),
    [sym_do] = STATE(144),
    [sym_spec] = STATE(144),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(144),
    [sym_assert] = STATE(144),
    [sym_assert_with_bound] = STATE(144),
    [sym_if] = STATE(144),
    [sym_do] = STATE(144),
    [sym_spec] = STATE(144),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_skip] = ACTIONS(93),
    [sym_abort] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(68),
    [anon_sym_LBRACE_BANG] = ACTIONS(71),
    [aux_sym_variable_token1] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_BANG_EQ] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(96),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__statement] = STATE(22),
    [sym_assign] = STATE(134),
    [sym_assert] = STATE(134),
    [sym_assert_with_bound] = STATE(134),
    [sym_if] = STATE(134),
    [sym_do] = STATE(134),
    [sym_spec] = STATE(134),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(22),
    [sym_skip] = ACTIONS(100),
    [sym_abort] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [anon_sym_BANG_RBRACE] = ACTIONS(102),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__statement] = STATE(15),
    [sym_assign] = STATE(134),
    [sym_assert] = STATE(134),
    [sym_assert_with_bound] = STATE(134),
    [sym_if] = STATE(134),
    [sym_do] = STATE(134),
    [sym_spec] = STATE(134),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(15),
    [sym_skip] = ACTIONS(100),
    [sym_abort] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [anon_sym_BANG_RBRACE] = ACTIONS(104),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__statement] = STATE(15),
    [sym_assign] = STATE(134),
    [sym_assert] = STATE(134),
    [sym_assert_with_bound] = STATE(134),
    [sym_if] = STATE(134),
    [sym_do] = STATE(134),
    [sym_spec] = STATE(134),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(15),
    [sym_skip] = ACTIONS(100),
    [sym_abort] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_AMP_AMP] = ACTIONS(106),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_BANG_EQ] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_GT_EQ] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(110),
    [anon_sym_LT_EQ] = ACTIONS(106),
    [anon_sym_DASH_GT] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__statement] = STATE(19),
    [sym_assign] = STATE(144),
    [sym_assert] = STATE(144),
    [sym_assert_with_bound] = STATE(144),
    [sym_if] = STATE(144),
    [sym_do] = STATE(144),
    [sym_spec] = STATE(144),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_skip] = ACTIONS(11),
    [sym_abort] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_PIPE_PIPE] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_BANG_EQ] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_AMP_AMP] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_BANG_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [anon_sym_DASH_GT] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(126),
    [anon_sym_PIPE_PIPE] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_DASH_GT] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_DASH_GT] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_AMP_AMP] = ACTIONS(134),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_BANG_EQ] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_GT_EQ] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_LT_EQ] = ACTIONS(134),
    [anon_sym_DASH_GT] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(138),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_DASH_GT] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__statement] = STATE(16),
    [sym_assign] = STATE(139),
    [sym_assert] = STATE(139),
    [sym_assert_with_bound] = STATE(139),
    [sym_if] = STATE(139),
    [sym_do] = STATE(139),
    [sym_spec] = STATE(139),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(16),
    [sym_skip] = ACTIONS(88),
    [sym_abort] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_PIPE_PIPE] = ACTIONS(142),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_BANG_EQ] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(142),
    [anon_sym_DASH_GT] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__statement] = STATE(14),
    [sym_assign] = STATE(141),
    [sym_assert] = STATE(141),
    [sym_assert_with_bound] = STATE(141),
    [sym_if] = STATE(141),
    [sym_do] = STATE(141),
    [sym_spec] = STATE(141),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(14),
    [sym_skip] = ACTIONS(79),
    [sym_abort] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__statement] = STATE(23),
    [sym_assign] = STATE(134),
    [sym_assert] = STATE(134),
    [sym_assert_with_bound] = STATE(134),
    [sym_if] = STATE(134),
    [sym_do] = STATE(134),
    [sym_spec] = STATE(134),
    [sym_variable] = STATE(131),
    [aux_sym_source_file_repeat2] = STATE(23),
    [sym_skip] = ACTIONS(100),
    [sym_abort] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_LBRACE_BANG] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__expr] = STATE(80),
    [sym_op] = STATE(80),
    [sym_mul] = STATE(80),
    [sym_div] = STATE(80),
    [sym_add] = STATE(80),
    [sym_sub] = STATE(80),
    [sym__term] = STATE(80),
    [sym_variable] = STATE(80),
    [sym_constant] = STATE(80),
    [sym_op_name] = STATE(145),
    [aux_sym_op_repeat1] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym__expr] = STATE(82),
    [sym_op] = STATE(82),
    [sym_mul] = STATE(82),
    [sym_div] = STATE(82),
    [sym_add] = STATE(82),
    [sym_sub] = STATE(82),
    [sym__term] = STATE(82),
    [sym_variable] = STATE(82),
    [sym_constant] = STATE(82),
    [sym_op_name] = STATE(145),
    [aux_sym_op_repeat1] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym__expr] = STATE(75),
    [sym_op] = STATE(75),
    [sym_mul] = STATE(75),
    [sym_div] = STATE(75),
    [sym_add] = STATE(75),
    [sym_sub] = STATE(75),
    [sym__term] = STATE(75),
    [sym_variable] = STATE(75),
    [sym_constant] = STATE(75),
    [sym_op_name] = STATE(145),
    [aux_sym_op_repeat1] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym__expr] = STATE(88),
    [sym_op] = STATE(88),
    [sym_mul] = STATE(88),
    [sym_div] = STATE(88),
    [sym_add] = STATE(88),
    [sym_sub] = STATE(88),
    [sym__term] = STATE(88),
    [sym_variable] = STATE(88),
    [sym_constant] = STATE(88),
    [sym_op_name] = STATE(145),
    [aux_sym_op_repeat1] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_variable_token1] = ACTIONS(159),
    [aux_sym_constant_token1] = ACTIONS(162),
    [sym_integer] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym__expr] = STATE(78),
    [sym_op] = STATE(78),
    [sym_mul] = STATE(78),
    [sym_div] = STATE(78),
    [sym_add] = STATE(78),
    [sym_sub] = STATE(78),
    [sym__term] = STATE(78),
    [sym_variable] = STATE(78),
    [sym_constant] = STATE(78),
    [sym_op_name] = STATE(145),
    [aux_sym_op_repeat1] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym__expr] = STATE(93),
    [sym_op] = STATE(93),
    [sym_mul] = STATE(93),
    [sym_div] = STATE(93),
    [sym_add] = STATE(93),
    [sym_sub] = STATE(93),
    [sym__term] = STATE(93),
    [sym_variable] = STATE(93),
    [sym_constant] = STATE(93),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym__expr] = STATE(62),
    [sym_op] = STATE(62),
    [sym_mul] = STATE(62),
    [sym_div] = STATE(62),
    [sym_add] = STATE(62),
    [sym_sub] = STATE(62),
    [sym__term] = STATE(62),
    [sym_variable] = STATE(62),
    [sym_constant] = STATE(62),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym__expr] = STATE(89),
    [sym_op] = STATE(89),
    [sym_mul] = STATE(89),
    [sym_div] = STATE(89),
    [sym_add] = STATE(89),
    [sym_sub] = STATE(89),
    [sym__term] = STATE(89),
    [sym_variable] = STATE(89),
    [sym_constant] = STATE(89),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym__expr] = STATE(96),
    [sym_op] = STATE(96),
    [sym_mul] = STATE(96),
    [sym_div] = STATE(96),
    [sym_add] = STATE(96),
    [sym_sub] = STATE(96),
    [sym__term] = STATE(96),
    [sym_variable] = STATE(96),
    [sym_constant] = STATE(96),
    [sym_op_name] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_variable_token1] = ACTIONS(178),
    [aux_sym_constant_token1] = ACTIONS(180),
    [sym_integer] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym__declaration] = STATE(45),
    [sym_variable_declaration] = STATE(133),
    [sym_constant_declaration] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_var] = ACTIONS(186),
    [anon_sym_con] = ACTIONS(189),
    [sym_skip] = ACTIONS(192),
    [sym_abort] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_if] = ACTIONS(192),
    [anon_sym_do] = ACTIONS(192),
    [anon_sym_LBRACE_BANG] = ACTIONS(184),
    [aux_sym_variable_token1] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym__expr] = STATE(61),
    [sym_op] = STATE(61),
    [sym_mul] = STATE(61),
    [sym_div] = STATE(61),
    [sym_add] = STATE(61),
    [sym_sub] = STATE(61),
    [sym__term] = STATE(61),
    [sym_variable] = STATE(61),
    [sym_constant] = STATE(61),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym__expr] = STATE(67),
    [sym_op] = STATE(67),
    [sym_mul] = STATE(67),
    [sym_div] = STATE(67),
    [sym_add] = STATE(67),
    [sym_sub] = STATE(67),
    [sym__term] = STATE(67),
    [sym_variable] = STATE(67),
    [sym_constant] = STATE(67),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(196),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym__expr] = STATE(92),
    [sym_op] = STATE(92),
    [sym_mul] = STATE(92),
    [sym_div] = STATE(92),
    [sym_add] = STATE(92),
    [sym_sub] = STATE(92),
    [sym__term] = STATE(92),
    [sym_variable] = STATE(92),
    [sym_constant] = STATE(92),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym__expr] = STATE(65),
    [sym_op] = STATE(65),
    [sym_mul] = STATE(65),
    [sym_div] = STATE(65),
    [sym_add] = STATE(65),
    [sym_sub] = STATE(65),
    [sym__term] = STATE(65),
    [sym_variable] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(200),
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
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym__expr] = STATE(90),
    [sym_op] = STATE(90),
    [sym_mul] = STATE(90),
    [sym_div] = STATE(90),
    [sym_add] = STATE(90),
    [sym_sub] = STATE(90),
    [sym__term] = STATE(90),
    [sym_variable] = STATE(90),
    [sym_constant] = STATE(90),
    [sym_op_name] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_variable_token1] = ACTIONS(178),
    [aux_sym_constant_token1] = ACTIONS(180),
    [sym_integer] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym__expr] = STATE(87),
    [sym_op] = STATE(87),
    [sym_mul] = STATE(87),
    [sym_div] = STATE(87),
    [sym_add] = STATE(87),
    [sym_sub] = STATE(87),
    [sym__term] = STATE(87),
    [sym_variable] = STATE(87),
    [sym_constant] = STATE(87),
    [sym_op_name] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_variable_token1] = ACTIONS(178),
    [aux_sym_constant_token1] = ACTIONS(180),
    [sym_integer] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym__expr] = STATE(91),
    [sym_op] = STATE(91),
    [sym_mul] = STATE(91),
    [sym_div] = STATE(91),
    [sym_add] = STATE(91),
    [sym_sub] = STATE(91),
    [sym__term] = STATE(91),
    [sym_variable] = STATE(91),
    [sym_constant] = STATE(91),
    [sym_op_name] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_variable_token1] = ACTIONS(178),
    [aux_sym_constant_token1] = ACTIONS(180),
    [sym_integer] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym__expr] = STATE(63),
    [sym_op] = STATE(63),
    [sym_mul] = STATE(63),
    [sym_div] = STATE(63),
    [sym_add] = STATE(63),
    [sym_sub] = STATE(63),
    [sym__term] = STATE(63),
    [sym_variable] = STATE(63),
    [sym_constant] = STATE(63),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym__expr] = STATE(85),
    [sym_op] = STATE(85),
    [sym_mul] = STATE(85),
    [sym_div] = STATE(85),
    [sym_add] = STATE(85),
    [sym_sub] = STATE(85),
    [sym__term] = STATE(85),
    [sym_variable] = STATE(85),
    [sym_constant] = STATE(85),
    [sym_op_name] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(176),
    [aux_sym_variable_token1] = ACTIONS(178),
    [aux_sym_constant_token1] = ACTIONS(180),
    [sym_integer] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym__expr] = STATE(31),
    [sym_op] = STATE(31),
    [sym_mul] = STATE(31),
    [sym_div] = STATE(31),
    [sym_add] = STATE(31),
    [sym_sub] = STATE(31),
    [sym__term] = STATE(31),
    [sym_variable] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym__expr] = STATE(29),
    [sym_op] = STATE(29),
    [sym_mul] = STATE(29),
    [sym_div] = STATE(29),
    [sym_add] = STATE(29),
    [sym_sub] = STATE(29),
    [sym__term] = STATE(29),
    [sym_variable] = STATE(29),
    [sym_constant] = STATE(29),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym__expr] = STATE(28),
    [sym_op] = STATE(28),
    [sym_mul] = STATE(28),
    [sym_div] = STATE(28),
    [sym_add] = STATE(28),
    [sym_sub] = STATE(28),
    [sym__term] = STATE(28),
    [sym_variable] = STATE(28),
    [sym_constant] = STATE(28),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(218),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym__expr] = STATE(27),
    [sym_op] = STATE(27),
    [sym_mul] = STATE(27),
    [sym_div] = STATE(27),
    [sym_add] = STATE(27),
    [sym_sub] = STATE(27),
    [sym__term] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_constant] = STATE(27),
    [sym_op_name] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_variable_token1] = ACTIONS(27),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_integer] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_GT_EQ] = ACTIONS(234),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_AMP_AMP] = ACTIONS(240),
    [anon_sym_PIPE_PIPE] = ACTIONS(240),
    [anon_sym_DASH_GT] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(242),
    [anon_sym_DASH_GT] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_AMP_AMP] = ACTIONS(244),
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_DASH_GT] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_GT_EQ] = ACTIONS(234),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_PIPE_PIPE] = ACTIONS(246),
    [anon_sym_DASH_GT] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_DASH_GT] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_AMP_AMP] = ACTIONS(250),
    [anon_sym_PIPE_PIPE] = ACTIONS(250),
    [anon_sym_DASH_GT] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_var] = ACTIONS(254),
    [anon_sym_con] = ACTIONS(254),
    [sym_skip] = ACTIONS(254),
    [sym_abort] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_if] = ACTIONS(254),
    [anon_sym_do] = ACTIONS(254),
    [anon_sym_LBRACE_BANG] = ACTIONS(252),
    [aux_sym_variable_token1] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [sym_skip] = ACTIONS(256),
    [sym_abort] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_if] = ACTIONS(256),
    [anon_sym_fi] = ACTIONS(256),
    [anon_sym_do] = ACTIONS(256),
    [anon_sym_LBRACE_BANG] = ACTIONS(258),
    [aux_sym_variable_token1] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym_skip] = ACTIONS(256),
    [sym_abort] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_if] = ACTIONS(256),
    [anon_sym_do] = ACTIONS(256),
    [anon_sym_od] = ACTIONS(256),
    [anon_sym_LBRACE_BANG] = ACTIONS(258),
    [aux_sym_variable_token1] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym_skip] = ACTIONS(256),
    [sym_abort] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_if] = ACTIONS(256),
    [anon_sym_do] = ACTIONS(256),
    [anon_sym_LBRACE_BANG] = ACTIONS(258),
    [anon_sym_BANG_RBRACE] = ACTIONS(258),
    [aux_sym_variable_token1] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [sym_skip] = ACTIONS(256),
    [sym_abort] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_if] = ACTIONS(256),
    [anon_sym_do] = ACTIONS(256),
    [anon_sym_LBRACE_BANG] = ACTIONS(258),
    [aux_sym_variable_token1] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_TILDE] = ACTIONS(260),
    [aux_sym_variable_token1] = ACTIONS(260),
    [aux_sym_constant_token1] = ACTIONS(262),
    [sym_integer] = ACTIONS(260),
    [anon_sym_True] = ACTIONS(262),
    [anon_sym_False] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(264),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_DASH_GT] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(270),
    [anon_sym_DASH_GT] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_PIPE_PIPE] = ACTIONS(274),
    [anon_sym_DASH_GT] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_PIPE_PIPE] = ACTIONS(278),
    [anon_sym_DASH_GT] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(106),
  },
  [82] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_DASH_GT] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(134),
  },
  [85] = {
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(130),
  },
  [86] = {
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(96),
  },
  [87] = {
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(118),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(138),
  },
  [91] = {
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(126),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(114),
  },
  [95] = {
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(142),
  },
  [96] = {
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(298),
  },
  [97] = {
    [anon_sym_RBRACE] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [sym_variable] = STATE(116),
    [sym__variable_list] = STATE(125),
    [aux_sym__variable_list_repeat1] = STATE(102),
    [aux_sym_variable_token1] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(308),
    [aux_sym_variable_token1] = ACTIONS(308),
    [aux_sym_constant_token1] = ACTIONS(308),
    [sym_integer] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_constant] = STATE(113),
    [sym__constant_list] = STATE(126),
    [aux_sym__constant_list_repeat1] = STATE(106),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_DASH_GT] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
  },
  [102] = {
    [sym_variable] = STATE(117),
    [aux_sym__variable_list_repeat1] = STATE(103),
    [aux_sym_variable_token1] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [sym_variable] = STATE(129),
    [aux_sym__variable_list_repeat1] = STATE(103),
    [aux_sym_variable_token1] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [sym_constant] = STATE(146),
    [aux_sym__constant_list_repeat1] = STATE(105),
    [aux_sym_constant_token1] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [sym_constant] = STATE(114),
    [aux_sym__constant_list_repeat1] = STATE(105),
    [aux_sym_constant_token1] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [anon_sym_fi] = ACTIONS(320),
    [anon_sym_od] = ACTIONS(320),
    [anon_sym_PIPE] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_COLON_EQ] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_DASH_GT] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_DASH_GT] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [anon_sym_fi] = ACTIONS(328),
    [anon_sym_od] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [sym_type] = STATE(140),
    [aux_sym_constant_token1] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [anon_sym_COLON] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [anon_sym_COLON] = ACTIONS(336),
    [anon_sym_COMMA] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [sym_type] = STATE(121),
    [aux_sym_constant_token1] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [116] = {
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [anon_sym_COLON] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [anon_sym_PIPE] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(344),
  },
  [120] = {
    [anon_sym_od] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(348),
  },
  [122] = {
    [anon_sym_bnd] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(352),
  },
  [124] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(354),
  },
  [125] = {
    [anon_sym_COLON] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
  },
  [126] = {
    [anon_sym_COLON] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(360),
  },
  [128] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(362),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
  },
  [130] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(364),
  },
  [131] = {
    [anon_sym_COLON_EQ] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [aux_sym_constant_token1] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
  },
  [133] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(370),
  },
  [134] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(372),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [anon_sym_fi] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
  },
  [137] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(378),
  },
  [138] = {
    [anon_sym_COLON] = ACTIONS(380),
    [sym_comment] = ACTIONS(3),
  },
  [139] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(382),
  },
  [140] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(384),
  },
  [141] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(386),
  },
  [142] = {
    [aux_sym_variable_token1] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
  },
  [143] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(390),
  },
  [144] = {
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(392),
  },
  [145] = {
    [anon_sym_LPAREN] = ACTIONS(394),
    [sym_comment] = ACTIONS(3),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [anon_sym_LPAREN] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(98),
  [9] = {.count = 1, .reusable = false}, SHIFT(100),
  [11] = {.count = 1, .reusable = false}, SHIFT(144),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = false}, SHIFT(2),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, SHIFT(143),
  [21] = {.count = 1, .reusable = false}, SHIFT(108),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(7),
  [27] = {.count = 1, .reusable = true}, SHIFT(24),
  [29] = {.count = 1, .reusable = false}, SHIFT(20),
  [31] = {.count = 1, .reusable = true}, SHIFT(64),
  [33] = {.count = 1, .reusable = false}, SHIFT(74),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(11),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(24),
  [44] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(20),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(64),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2), SHIFT_REPEAT(74),
  [53] = {.count = 1, .reusable = true}, SHIFT(60),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(139),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [66] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(143),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(108),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [79] = {.count = 1, .reusable = false}, SHIFT(141),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_guarded_command, 3),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_guarded_command, 3),
  [85] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(134),
  [88] = {.count = 1, .reusable = false}, SHIFT(139),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(141),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(144),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [100] = {.count = 1, .reusable = false}, SHIFT(134),
  [102] = {.count = 1, .reusable = true}, SHIFT(130),
  [104] = {.count = 1, .reusable = true}, SHIFT(128),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_op_name, 1),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_op, 4),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_op, 4),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [120] = {.count = 1, .reusable = true}, SHIFT(57),
  [122] = {.count = 1, .reusable = true}, SHIFT(58),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_op, 5),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_op, 5),
  [146] = {.count = 1, .reusable = true}, SHIFT(48),
  [148] = {.count = 1, .reusable = true}, SHIFT(20),
  [150] = {.count = 1, .reusable = true}, SHIFT(80),
  [152] = {.count = 1, .reusable = true}, SHIFT(82),
  [154] = {.count = 1, .reusable = true}, SHIFT(75),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(48),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(24),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(20),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2), SHIFT_REPEAT(88),
  [168] = {.count = 1, .reusable = true}, SHIFT(78),
  [170] = {.count = 1, .reusable = true}, SHIFT(93),
  [172] = {.count = 1, .reusable = true}, SHIFT(62),
  [174] = {.count = 1, .reusable = true}, SHIFT(89),
  [176] = {.count = 1, .reusable = true}, SHIFT(41),
  [178] = {.count = 1, .reusable = true}, SHIFT(81),
  [180] = {.count = 1, .reusable = true}, SHIFT(86),
  [182] = {.count = 1, .reusable = true}, SHIFT(96),
  [184] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [186] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [189] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [192] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [194] = {.count = 1, .reusable = true}, SHIFT(61),
  [196] = {.count = 1, .reusable = true}, SHIFT(67),
  [198] = {.count = 1, .reusable = true}, SHIFT(92),
  [200] = {.count = 1, .reusable = true}, SHIFT(65),
  [202] = {.count = 1, .reusable = true}, SHIFT(66),
  [204] = {.count = 1, .reusable = true}, SHIFT(90),
  [206] = {.count = 1, .reusable = true}, SHIFT(87),
  [208] = {.count = 1, .reusable = true}, SHIFT(91),
  [210] = {.count = 1, .reusable = true}, SHIFT(63),
  [212] = {.count = 1, .reusable = true}, SHIFT(85),
  [214] = {.count = 1, .reusable = true}, SHIFT(31),
  [216] = {.count = 1, .reusable = true}, SHIFT(29),
  [218] = {.count = 1, .reusable = true}, SHIFT(28),
  [220] = {.count = 1, .reusable = true}, SHIFT(27),
  [222] = {.count = 1, .reusable = true}, SHIFT(30),
  [224] = {.count = 1, .reusable = true}, SHIFT(59),
  [226] = {.count = 1, .reusable = false}, SHIFT(56),
  [228] = {.count = 1, .reusable = true}, SHIFT(54),
  [230] = {.count = 1, .reusable = true}, SHIFT(42),
  [232] = {.count = 1, .reusable = false}, SHIFT(50),
  [234] = {.count = 1, .reusable = true}, SHIFT(49),
  [236] = {.count = 1, .reusable = false}, SHIFT(47),
  [238] = {.count = 1, .reusable = true}, SHIFT(46),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym__declaration, 2),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym__declaration, 2),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [260] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [262] = {.count = 1, .reusable = false}, REDUCE(aux_sym__guarded_command_list_repeat1, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [266] = {.count = 1, .reusable = true}, SHIFT(99),
  [268] = {.count = 1, .reusable = true}, SHIFT(26),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [272] = {.count = 1, .reusable = true}, SHIFT(10),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [276] = {.count = 1, .reusable = true}, SHIFT(94),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_neg, 2),
  [280] = {.count = 1, .reusable = true}, SHIFT(33),
  [282] = {.count = 1, .reusable = true}, SHIFT(95),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym__pred, 3),
  [286] = {.count = 1, .reusable = true}, SHIFT(55),
  [288] = {.count = 1, .reusable = true}, SHIFT(53),
  [290] = {.count = 1, .reusable = true}, SHIFT(124),
  [292] = {.count = 1, .reusable = true}, SHIFT(84),
  [294] = {.count = 1, .reusable = true}, SHIFT(52),
  [296] = {.count = 1, .reusable = false}, SHIFT(51),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [300] = {.count = 1, .reusable = true}, SHIFT(119),
  [302] = {.count = 1, .reusable = true}, SHIFT(122),
  [304] = {.count = 1, .reusable = true}, SHIFT(9),
  [306] = {.count = 1, .reusable = true}, SHIFT(108),
  [308] = {.count = 1, .reusable = true}, REDUCE(aux_sym_op_repeat1, 2),
  [310] = {.count = 1, .reusable = true}, SHIFT(35),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2), SHIFT_REPEAT(108),
  [315] = {.count = 1, .reusable = true}, SHIFT(83),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2), SHIFT_REPEAT(20),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 2),
  [322] = {.count = 1, .reusable = true}, SHIFT(73),
  [324] = {.count = 1, .reusable = true}, SHIFT(34),
  [326] = {.count = 1, .reusable = true}, SHIFT(32),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym__guarded_command_list, 1),
  [330] = {.count = 1, .reusable = true}, SHIFT(137),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 1),
  [334] = {.count = 1, .reusable = true}, SHIFT(132),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym__constant_list, 2),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 1),
  [340] = {.count = 1, .reusable = true}, SHIFT(142),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym__variable_list, 2),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_assert, 3),
  [346] = {.count = 1, .reusable = true}, SHIFT(127),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [350] = {.count = 1, .reusable = true}, SHIFT(138),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_assert_with_bound, 7),
  [356] = {.count = 1, .reusable = true}, SHIFT(112),
  [358] = {.count = 1, .reusable = true}, SHIFT(115),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 4),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_spec, 3),
  [366] = {.count = 1, .reusable = true}, SHIFT(44),
  [368] = {.count = 1, .reusable = true}, REDUCE(aux_sym__constant_list_repeat1, 2),
  [370] = {.count = 1, .reusable = true}, SHIFT(68),
  [372] = {.count = 1, .reusable = true}, SHIFT(71),
  [374] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [376] = {.count = 1, .reusable = true}, SHIFT(123),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [380] = {.count = 1, .reusable = true}, SHIFT(43),
  [382] = {.count = 1, .reusable = true}, SHIFT(69),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [386] = {.count = 1, .reusable = true}, SHIFT(70),
  [388] = {.count = 1, .reusable = true}, REDUCE(aux_sym__variable_list_repeat1, 2),
  [390] = {.count = 1, .reusable = true}, SHIFT(21),
  [392] = {.count = 1, .reusable = true}, SHIFT(72),
  [394] = {.count = 1, .reusable = true}, SHIFT(38),
  [396] = {.count = 1, .reusable = true}, SHIFT(40),
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
