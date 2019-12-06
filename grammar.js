
// numbers and literals
// const number = /0x[0-9a-fA-F]+|[0-9]+/;
const integer = /\-?(0x[0-9a-fA-F]+|[0-9]+)/;
// const exponent = /[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+)/;
// const float = /(\-?(0x[0-9a-fA-F]+|[0-9]+)\.(0x[0-9a-fA-F]+|[0-9]+)([eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))?)|((0x[0-9a-fA-F]+|[0-9]+)[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))/;

const lowerName = /[a-z][\\_\\-\\'a-zA-Z0-9]*/;
const upperName = /[A-Z][\\_\\-\\'a-zA-Z0-9]*/;

module.exports = grammar({
  name: 'GCL',

  rules: {

    source_file: $ => seq(
      repeat($._declaration),
      repeat($._statement),
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declarations
    ////////////////////////////////////////////////////////////////////////

    _declaration: $ => choice(
      $.variable_declaration,
      $.constant_declaration,
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

    _statement: $ => choice(
      $.skip,
      $.abort,
      $.assign,
      $.assert,
      $.if,
      $.do,
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

    ////////////////////////////////////////////////////////////////////////
    // Expressions
    ////////////////////////////////////////////////////////////////////////

    // expressions
    _expr: $ => choice(
        prec(999, seq( '(', $._expr, ')')),
        $.mul,
        $.div,
        $.add,
        $.sub,
        $._term,
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
        $.eq,
        $.neq,
        $.gt,
        $.gte,
        $.lt,
        $.lte,
    ),

    eq:  $ => prec.left(800, seq($._expr, '=', $._expr)),
    neq: $ => prec.left(800, seq($._expr, '!=', $._expr)),
    gt:  $ => prec.left(800, seq($._expr, '>', $._expr)),
    gte: $ => prec.left(800, seq($._expr, '>=', $._expr)),
    lt:  $ => prec.left(800, seq($._expr, '<', $._expr)),
    lte: $ => prec.left(800, seq($._expr, '<=', $._expr)),

    ////////////////////////////////////////////////////////////////////////
    // Components
    ////////////////////////////////////////////////////////////////////////

    variable: $ => lowerName,
    constant: $ => upperName,
    type: $ => upperName,

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

  }
});

// left-associative
function sepBy(delimeter, rule) {
    return seq(repeat(seq(rule, delimeter)), rule)
}
