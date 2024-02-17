module.exports = grammar({
  name: 'proxima',

  // Define the tokens used in your language
  extras: $ => [
    /\s/, // Whitespace is not significant
  ],

  // The entry point rule
  rules: {
    // The document consists of multiple tags or text elements
    document: $ => repeat($._element),

    // An element can be a tag or a text node
    _element: $ => choice($.tag, $.text),

    // Define how a tag looks
    tag: $ => seq(
      '@', $.identifier, repeat($.argument)
    ),

    // Arguments are enclosed in curly braces
    argument: $ => seq(
      '{', optional($.text), '}'
    ),

    // Identifiers for tags
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    // Define text nodes (simplistic)
    text: $ => /[^@{}]+/,
  }
});

