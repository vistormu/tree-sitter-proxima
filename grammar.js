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
      $.html
    ),

    tag: $ => seq(
      '@', $.identifier, repeat($.argument)
    ),

    // Arguments are enclosed in curly braces
    argument: $ => seq(
      '{', optional($.text), '}'
    ),

    html: $ => /<[^>]+>/,

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    escaped_char: $ => /\\./,

    comment: $ => /#[^\n]*/,

    text: $ => /[^#\\@{}<>]+/,
  },
});

