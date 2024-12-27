module.exports = grammar({
  name: 'proxima',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    document: $ => repeat($._element),

    _element: $ => choice(
      $.tag,
      $.escaped_char,
      $.text,
    ),

    tag: $ => seq(
      $.tag_at,
      $.identifier,
      repeat($.argument)
    ),

    // Arguments are enclosed in curly braces
    argument: $ => seq(
      '{',
      optional($.arg_name),
      repeat($._element),
      '}'
    ),

    arg_name: $ => seq(
      '<',
      /[a-zA-Z_][a-zA-Z0-9_.-]*/,
      '>'
    ),

    tag_at : $ => '@',

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_.-]*/,

    escaped_char: $ => /\\./,

    comment: $ => /#[^\n]*/,

    text: $ => /[^#\\@{}<>]+/,
  },
});

