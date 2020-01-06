
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
      $._type
    ),

    constant_declaration: $ => seq(
      'con',
      $._constant_list,
      ':',
      $._type
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
      $._variable_list,
      ':=',
      $._expr_list,
    ),

    assert: $ => seq(
      '{',
      $._expr,
      '}',
    ),

    assert_with_bound: $ => seq(
      '{',
      $._expr,
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
      $.app,
      // numerical
      $.mul,
      $.div,
      $.add,
      $.sub,
      // logical
      $.imp,
      $.or,
      $.and,
      $.neg,
      // relational
      $.eq,
      $.neq,
      $.gt,
      $.gte,
      $.lt,
      $.lte,

      // terms
      $._term,
    ),

    // function application
    app: $ => prec.left(999, seq($._expr, $._expr)),

    // numerical
    mul: $ => prec.left(810, seq($._expr, '*', $._expr)),
    div: $ => prec.left(810, seq($._expr, '/', $._expr)),
    add: $ => prec.left(809, seq($._expr, '+', $._expr)),
    sub: $ => prec.left(809, seq($._expr, '-', $._expr)),
    // logical
    imp: $ => prec.right(801, seq($._expr, '=>', $._expr)),
    or:  $ => prec.left(802, seq($._expr, '||', $._expr)),
    and: $ => prec.left(803, seq($._expr, '&&', $._expr)),
    neg: $ => prec.right(804, seq('~', $._expr)),
    // relational
    eq:  $ => prec.left(805, seq($._expr, '=', $._expr)),
    neq: $ => prec.left(805, seq($._expr, '/=', $._expr)),
    gt:  $ => prec.left(805, seq($._expr, '>', $._expr)),
    gte: $ => prec.left(805, seq($._expr, '>=', $._expr)),
    lt:  $ => prec.left(805, seq($._expr, '<', $._expr)),
    lte: $ => prec.left(805, seq($._expr, '<=', $._expr)),

    _term: $ => choice(
        prec(998, seq( '(', $._expr, ')')),
        $.integer,
        $.variable,
        $.constant,
        $.boolean,
    ),

    ////////////////////////////////////////////////////////////////////////
    // Types
    ////////////////////////////////////////////////////////////////////////

    // types
    _type: $ => choice(
      prec(999, seq( '(', $._type, ')')),
      $.type_func,
      $.type_array,

      // type terms
      $._type_term,
    ),

    type_func: $ => prec.right(800, seq($._type, '->', $._type)),
    type_array: $ => prec.right(801, seq(
      'array',
      $.interval,
      'of',
      $._type,
    )),

    interval: $ => seq(
      choice('[', '('),
      $._expr,
      '..',
      $._expr,
      choice(']', ')'),
    ),

    type: $ => upperName,

    _type_term: $ => choice(
        prec(998, seq( '(', $._type, ')')),
        $.type,
    ),

    ////////////////////////////////////////////////////////////////////////
    // Components
    ////////////////////////////////////////////////////////////////////////

    variable: $ => lowerName,
    constant: $ => upperName,
    op_name: $ => lowerName,

    integer: $ => integer,
    boolean: $ => choice('True', 'False'),

    _variable_list: $ => sepBy(',', $.variable),
    _constant_list: $ => sepBy(',', $.constant),
    _expr_list: $ => sepBy(',', $._expr),

    guarded_command: $ => seq(
      $._expr,
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
