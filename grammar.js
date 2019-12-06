
// numbers and literals
// const number = /0x[0-9a-fA-F]+|[0-9]+/;
const integer = /\-?(0x[0-9a-fA-F]+|[0-9]+)/;
// const exponent = /[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+)/;
// const float = /(\-?(0x[0-9a-fA-F]+|[0-9]+)\.(0x[0-9a-fA-F]+|[0-9]+)([eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))?)|((0x[0-9a-fA-F]+|[0-9]+)[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))/;

const lowerName = /[a-z][\\_\\-\\'a-zA-Z0-9]*/;
const upperName = /[A-Z][\\_\\-\\'a-zA-Z0-9]*/;

module.exports = grammar({
  name: 'GCL',


  extras: $ => [
    $.comment,
    /\s|\\n/,
  ],

  externals: $ => [
    $._newline,
  ],


  rules: {

    source_file: $ => seq(
      repeat($._declaration),
      repeat($._statement),
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declarations
    ////////////////////////////////////////////////////////////////////////

    _declaration: $ => seq(
      choice(
      $.variable_declaration,
      $.constant_declaration,
      ),
      $._newline
    ),

    variable_declaration: $ => seq(
      'var',
      $._variable_list,
      ':',
      $.type
    ),

    constant_declaration: $ => seq(
      'con',
      $._constant_list,
      ':',
      $.type
    ),

    ////////////////////////////////////////////////////////////////////////
    // Statements
    ////////////////////////////////////////////////////////////////////////

    _statement: $ => seq(
      choice(
        $.skip,
        $.abort,
        $.assign,
        $.assert,
        $.assert_with_bound,
        $.if,
        $.do,
        $.spec,
      ),
      $._newline
    ),

    skip: $ => 'skip',

    abort: $ => 'abort',

    assign: $ => seq(
      $.variable,
      ':=',
      $._expr,
    ),

    assert: $ => seq(
      '{',
      $._pred,
      '}',
    ),

    assert_with_bound: $ => seq(
      '{',
      $._pred,
      ',',
      'bnd',
      ':',
      $._expr,
      '}',
    ),

    if: $ => seq(
      'if',
      $._guarded_command_list,
      'fi',
    ),

    do: $ => seq(
      'do',
      $._guarded_command_list,
      'od',
    ),

    spec: $ => seq(
      '{!',
      $._newline,
      repeat($._statement),
      '!}',
    ),

    ////////////////////////////////////////////////////////////////////////
    // Expressions
    ////////////////////////////////////////////////////////////////////////

    // expressions
    _expr: $ => choice(
        prec(999, seq( '(', $._expr, ')')),
        $.op,
        $.mul,
        $.div,
        $.add,
        $.sub,
        $._term,
    ),

    op: $ => seq(
      $.op_name,
      '(',
      sepBy(',', $._expr),
      ')'
    ),

    // left associative
    mul: $ => prec.left(802, seq($._expr, '*', $._expr)),
    div: $ => prec.left(802, seq($._expr, '/', $._expr)),
    add: $ => prec.left(801, seq($._expr, '+', $._expr)),
    sub: $ => prec.left(801, seq($._expr, '-', $._expr)),

    _term: $ => choice(
        prec(998, seq( '(', $._expr, ')')),
        $.integer,
        $.variable,
        $.constant,
    ),

    ////////////////////////////////////////////////////////////////////////
    // Predicates
    ////////////////////////////////////////////////////////////////////////

    _pred: $ => choice(
        prec(999, seq( '(', $._pred, ')')),
        $.boolean,
        $.neg,
        $.and,
        $.or,
        $.eq,
        $.neq,
        $.gt,
        $.gte,
        $.lt,
        $.lte,
    ),

    neg: $ => prec.left(803, seq('~', $._pred)),
    and:  $ => prec.left(802, seq($._pred, '&&', $._pred)),
    or:  $ => prec.left(801, seq($._pred, '||', $._pred)),

    eq:  $ => prec.left(810, seq($._expr, '=', $._expr)),
    neq: $ => prec.left(810, seq($._expr, '!=', $._expr)),
    gt:  $ => prec.left(810, seq($._expr, '>', $._expr)),
    gte: $ => prec.left(810, seq($._expr, '>=', $._expr)),
    lt:  $ => prec.left(810, seq($._expr, '<', $._expr)),
    lte: $ => prec.left(810, seq($._expr, '<=', $._expr)),

    ////////////////////////////////////////////////////////////////////////
    // Components
    ////////////////////////////////////////////////////////////////////////

    variable: $ => lowerName,
    constant: $ => upperName,
    type: $ => upperName,
    op_name: $ => lowerName,

    integer: $ => integer,
    boolean: $ => choice('True', 'False'),

    _variable_list: $ => sepBy(',', $.variable),
    _constant_list: $ => sepBy(',', $.constant),

    guarded_command: $ => seq(
      $._pred,
      '->',
      repeat1($._statement),
    ),

    _guarded_command_list: $ => sepBy('|', $.guarded_command),

    ////////////////////////////////////////////////////////////////////////
    // Comment
    ////////////////////////////////////////////////////////////////////////

    comment: $ => token(choice(
        prec(100, seq('--', /.*/)),
    )),

  }
});

// left-associative
function sepBy(delimeter, rule) {
    return seq(repeat(seq(rule, delimeter)), rule)
}
