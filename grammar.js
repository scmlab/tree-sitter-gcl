
// numbers and literals
const number = /0x[0-9a-fA-F]+|[0-9]+/;
const integer = /\-?(0x[0-9a-fA-F]+|[0-9]+)/;
// const exponent = /[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+)/;
// const float = /(\-?(0x[0-9a-fA-F]+|[0-9]+)\.(0x[0-9a-fA-F]+|[0-9]+)([eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))?)|((0x[0-9a-fA-F]+|[0-9]+)[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))/;

const lowerName = /[a-z][\\_\\-\\'a-zA-Z0-9]*/;
const upperName = /[A-Z][\\_\\-\\'a-zA-Z0-9]*/;

module.exports = grammar({
  name: 'GCL',

  rules: {

    source_file: $ => seq(
      repeat($._declaration)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declarations
    ////////////////////////////////////////////////////////////////////////

    _declaration: $ => choice(
      $.variable_declaration,
      // $.constant_declaration,
    ),

    variable_declaration: $ => seq(
      'var',
      $._variable_list,
      ':',
      $.type
    ),

    ////////////////////////////////////////////////////////////////////////
    // Statements
    ////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////
    // Components
    ////////////////////////////////////////////////////////////////////////

    variable: $ => lowerName,
    type: $ => upperName,
    _variable_list: $ => sepBy(',', $.variable),


  }
});

// left-associative
function sepBy(delimeter, rule) {
    return seq(repeat(seq(rule, delimeter)), rule)
}
