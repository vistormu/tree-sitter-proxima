#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_AT = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_html = 4,
  sym_identifier = 5,
  sym_escaped_char = 6,
  sym_comment = 7,
  sym_text = 8,
  sym_document = 9,
  sym__element = 10,
  sym_tag = 11,
  sym_argument = 12,
  aux_sym_document_repeat1 = 13,
  aux_sym_tag_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_html] = "html",
  [sym_identifier] = "identifier",
  [sym_escaped_char] = "escaped_char",
  [sym_comment] = "comment",
  [sym_text] = "text",
  [sym_document] = "document",
  [sym__element] = "_element",
  [sym_tag] = "tag",
  [sym_argument] = "argument",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_html] = sym_html,
  [sym_identifier] = sym_identifier,
  [sym_escaped_char] = sym_escaped_char,
  [sym_comment] = sym_comment,
  [sym_text] = sym_text,
  [sym_document] = sym_document,
  [sym__element] = sym__element,
  [sym_tag] = sym_tag,
  [sym_argument] = sym_argument,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
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
  [sym_html] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(9);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(14);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_html);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_html] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_escaped_char] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(11),
    [sym__element] = STATE(2),
    [sym_tag] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym_html] = ACTIONS(9),
    [sym_escaped_char] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
  },
  [2] = {
    [sym__element] = STATE(4),
    [sym_tag] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(7),
    [sym_html] = ACTIONS(17),
    [sym_escaped_char] = ACTIONS(17),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(19),
  },
  [3] = {
    [sym_argument] = STATE(5),
    [aux_sym_tag_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_html] = ACTIONS(23),
    [sym_escaped_char] = ACTIONS(23),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(21),
  },
  [4] = {
    [sym__element] = STATE(4),
    [sym_tag] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [sym_html] = ACTIONS(32),
    [sym_escaped_char] = ACTIONS(32),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(35),
  },
  [5] = {
    [sym_argument] = STATE(6),
    [aux_sym_tag_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_html] = ACTIONS(40),
    [sym_escaped_char] = ACTIONS(40),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(38),
  },
  [6] = {
    [sym_argument] = STATE(6),
    [aux_sym_tag_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_AT] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(46),
    [sym_html] = ACTIONS(44),
    [sym_escaped_char] = ACTIONS(44),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(42),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(51), 4,
      anon_sym_AT,
      anon_sym_LBRACE,
      sym_html,
      sym_escaped_char,
  [14] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(55), 4,
      anon_sym_AT,
      anon_sym_LBRACE,
      sym_html,
      sym_escaped_char,
  [28] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_text,
  [38] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_identifier,
  [45] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [52] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 14,
  [SMALL_STATE(9)] = 28,
  [SMALL_STATE(10)] = 38,
  [SMALL_STATE(11)] = 45,
  [SMALL_STATE(12)] = 52,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_proxima(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
