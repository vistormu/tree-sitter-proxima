#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_AT = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  sym_text = 5,
  sym_document = 6,
  sym__element = 7,
  sym_tag = 8,
  sym_argument = 9,
  aux_sym_document_repeat1 = 10,
  aux_sym_tag_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
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
  [sym_identifier] = sym_identifier,
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
  [sym_identifier] = {
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
      if (eof) ADVANCE(2);
      if (lookahead == '@') ADVANCE(3);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (eof) ADVANCE(2);
      if (lookahead == '@') ADVANCE(3);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
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
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(11),
    [sym__element] = STATE(2),
    [sym_tag] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_text,
    STATE(4), 3,
      sym__element,
      sym_tag,
      aux_sym_document_repeat1,
  [15] = 4,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(5), 2,
      sym_argument,
      aux_sym_tag_repeat1,
  [30] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(24), 1,
      sym_text,
    STATE(4), 3,
      sym__element,
      sym_tag,
      aux_sym_document_repeat1,
  [45] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(6), 2,
      sym_argument,
      aux_sym_tag_repeat1,
  [60] = 4,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(6), 2,
      sym_argument,
      aux_sym_tag_repeat1,
  [75] = 2,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(40), 2,
      anon_sym_AT,
      anon_sym_LBRACE,
  [84] = 2,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(44), 2,
      anon_sym_AT,
      anon_sym_LBRACE,
  [93] = 2,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      sym_text,
  [100] = 1,
    ACTIONS(50), 1,
      sym_identifier,
  [104] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [108] = 1,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 104,
  [SMALL_STATE(12)] = 108,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [52] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
