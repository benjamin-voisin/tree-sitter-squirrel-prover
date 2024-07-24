#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_bool = 1,
  anon_sym_message = 2,
  anon_sym_index = 3,
  anon_sym_abstract = 4,
  anon_sym_name = 5,
  anon_sym_channel = 6,
  anon_sym_hash = 7,
  anon_sym_include = 8,
  anon_sym_DOT = 9,
  anon_sym_set = 10,
  anon_sym_EQ = 11,
  anon_sym_false = 12,
  anon_sym_true = 13,
  anon_sym_timeout = 14,
  anon_sym_printTRSEquations = 15,
  anon_sym_debugConstr = 16,
  anon_sym_debugCompletion = 17,
  anon_sym_debugTactics = 18,
  anon_sym_processStrictAliasMode = 19,
  anon_sym_showStrengthenedHyp = 20,
  anon_sym_autoFADup = 21,
  anon_sym_newInduction = 22,
  anon_sym_postQuantumSound = 23,
  anon_sym_checkInclude = 24,
  anon_sym_process = 25,
  anon_sym_lemma = 26,
  anon_sym_Proof = 27,
  anon_sym_Qed = 28,
  anon_sym_system = 29,
  sym_number = 30,
  sym_identifier = 31,
  sym_comment = 32,
  sym_source_file = 33,
  sym__block = 34,
  sym_include_declaration = 35,
  sym_declaration = 36,
  sym_set_declaration = 37,
  sym_set_value = 38,
  sym_set_options = 39,
  sym_process = 40,
  sym_lemma = 41,
  sym_proof = 42,
  sym_system = 43,
  aux_sym_source_file_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_bool] = "bool",
  [anon_sym_message] = "message",
  [anon_sym_index] = "index",
  [anon_sym_abstract] = "abstract",
  [anon_sym_name] = "name",
  [anon_sym_channel] = "channel",
  [anon_sym_hash] = "hash",
  [anon_sym_include] = "include",
  [anon_sym_DOT] = ".",
  [anon_sym_set] = "set",
  [anon_sym_EQ] = "=",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [anon_sym_timeout] = "timeout",
  [anon_sym_printTRSEquations] = "printTRSEquations",
  [anon_sym_debugConstr] = "debugConstr",
  [anon_sym_debugCompletion] = "debugCompletion",
  [anon_sym_debugTactics] = "debugTactics",
  [anon_sym_processStrictAliasMode] = "processStrictAliasMode",
  [anon_sym_showStrengthenedHyp] = "showStrengthenedHyp",
  [anon_sym_autoFADup] = "autoFADup",
  [anon_sym_newInduction] = "newInduction",
  [anon_sym_postQuantumSound] = "postQuantumSound",
  [anon_sym_checkInclude] = "checkInclude",
  [anon_sym_process] = "process",
  [anon_sym_lemma] = "lemma",
  [anon_sym_Proof] = "Proof",
  [anon_sym_Qed] = "Qed",
  [anon_sym_system] = "system",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_include_declaration] = "include_declaration",
  [sym_declaration] = "declaration",
  [sym_set_declaration] = "set_declaration",
  [sym_set_value] = "set_value",
  [sym_set_options] = "set_options",
  [sym_process] = "process",
  [sym_lemma] = "lemma",
  [sym_proof] = "proof",
  [sym_system] = "system",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_channel] = anon_sym_channel,
  [anon_sym_hash] = anon_sym_hash,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_timeout] = anon_sym_timeout,
  [anon_sym_printTRSEquations] = anon_sym_printTRSEquations,
  [anon_sym_debugConstr] = anon_sym_debugConstr,
  [anon_sym_debugCompletion] = anon_sym_debugCompletion,
  [anon_sym_debugTactics] = anon_sym_debugTactics,
  [anon_sym_processStrictAliasMode] = anon_sym_processStrictAliasMode,
  [anon_sym_showStrengthenedHyp] = anon_sym_showStrengthenedHyp,
  [anon_sym_autoFADup] = anon_sym_autoFADup,
  [anon_sym_newInduction] = anon_sym_newInduction,
  [anon_sym_postQuantumSound] = anon_sym_postQuantumSound,
  [anon_sym_checkInclude] = anon_sym_checkInclude,
  [anon_sym_process] = anon_sym_process,
  [anon_sym_lemma] = anon_sym_lemma,
  [anon_sym_Proof] = anon_sym_Proof,
  [anon_sym_Qed] = anon_sym_Qed,
  [anon_sym_system] = anon_sym_system,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_include_declaration] = sym_include_declaration,
  [sym_declaration] = sym_declaration,
  [sym_set_declaration] = sym_set_declaration,
  [sym_set_value] = sym_set_value,
  [sym_set_options] = sym_set_options,
  [sym_process] = sym_process,
  [sym_lemma] = sym_lemma,
  [sym_proof] = sym_proof,
  [sym_system] = sym_system,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_channel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_printTRSEquations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debugConstr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debugCompletion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debugTactics] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_processStrictAliasMode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_showStrengthenedHyp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoFADup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newInduction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postQuantumSound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checkInclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lemma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Proof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Qed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_include_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_set_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_set_value] = {
    .visible = true,
    .named = true,
  },
  [sym_set_options] = {
    .visible = true,
    .named = true,
  },
  [sym_process] = {
    .visible = true,
    .named = true,
  },
  [sym_lemma] = {
    .visible = true,
    .named = true,
  },
  [sym_proof] = {
    .visible = true,
    .named = true,
  },
  [sym_system] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(206);
      ADVANCE_MAP(
        '*', 204,
        '.', 215,
        '=', 217,
        'P', 150,
        'Q', 52,
        'a', 31,
        'b', 129,
        'c', 83,
        'd', 53,
        'f', 19,
        'h', 22,
        'i', 112,
        'l', 54,
        'm', 67,
        'n', 23,
        'p', 138,
        's', 65,
        't', 93,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(189);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == 'F') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'H') ADVANCE(202);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(140);
      END_STATE();
    case 12:
      if (lookahead == 'Q') ADVANCE(192);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'S') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(178);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(135);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(180);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(4);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(213);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 145:
      if (lookahead == 'q') ADVANCE(193);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 199:
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 200:
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 201:
      if (lookahead == 'x') ADVANCE(209);
      END_STATE();
    case 202:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 203:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 205:
      if (eof) ADVANCE(206);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == 'P') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 's') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_channel);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_hash);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_timeout);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_printTRSEquations);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_debugConstr);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_debugCompletion);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_debugTactics);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_processStrictAliasMode);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_showStrengthenedHyp);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_autoFADup);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_newInduction);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_postQuantumSound);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_checkInclude);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_process);
      if (lookahead == 'S') ADVANCE(180);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Proof);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Qed);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 205},
  [2] = {.lex_state = 205},
  [3] = {.lex_state = 205},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 205},
  [6] = {.lex_state = 205},
  [7] = {.lex_state = 205},
  [8] = {.lex_state = 205},
  [9] = {.lex_state = 205},
  [10] = {.lex_state = 205},
  [11] = {.lex_state = 205},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 203},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_channel] = ACTIONS(1),
    [anon_sym_hash] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_timeout] = ACTIONS(1),
    [anon_sym_printTRSEquations] = ACTIONS(1),
    [anon_sym_debugConstr] = ACTIONS(1),
    [anon_sym_debugCompletion] = ACTIONS(1),
    [anon_sym_debugTactics] = ACTIONS(1),
    [anon_sym_processStrictAliasMode] = ACTIONS(1),
    [anon_sym_showStrengthenedHyp] = ACTIONS(1),
    [anon_sym_autoFADup] = ACTIONS(1),
    [anon_sym_newInduction] = ACTIONS(1),
    [anon_sym_postQuantumSound] = ACTIONS(1),
    [anon_sym_checkInclude] = ACTIONS(1),
    [anon_sym_process] = ACTIONS(1),
    [anon_sym_lemma] = ACTIONS(1),
    [anon_sym_Proof] = ACTIONS(1),
    [anon_sym_Qed] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__block] = STATE(3),
    [sym_include_declaration] = STATE(9),
    [sym_declaration] = STATE(3),
    [sym_set_declaration] = STATE(9),
    [sym_process] = STATE(3),
    [sym_lemma] = STATE(3),
    [sym_proof] = STATE(3),
    [sym_system] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_process] = ACTIONS(9),
    [anon_sym_lemma] = ACTIONS(11),
    [anon_sym_Proof] = ACTIONS(13),
    [anon_sym_system] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_include,
    ACTIONS(24), 1,
      anon_sym_set,
    ACTIONS(27), 1,
      anon_sym_process,
    ACTIONS(30), 1,
      anon_sym_lemma,
    ACTIONS(33), 1,
      anon_sym_Proof,
    ACTIONS(36), 1,
      anon_sym_system,
    ACTIONS(39), 1,
      sym_comment,
    STATE(9), 2,
      sym_include_declaration,
      sym_set_declaration,
    STATE(2), 7,
      sym__block,
      sym_declaration,
      sym_process,
      sym_lemma,
      sym_proof,
      sym_system,
      aux_sym_source_file_repeat1,
  [38] = 10,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_process,
    ACTIONS(11), 1,
      anon_sym_lemma,
    ACTIONS(13), 1,
      anon_sym_Proof,
    ACTIONS(15), 1,
      anon_sym_system,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_comment,
    STATE(9), 2,
      sym_include_declaration,
      sym_set_declaration,
    STATE(2), 7,
      sym__block,
      sym_declaration,
      sym_process,
      sym_lemma,
      sym_proof,
      sym_system,
      aux_sym_source_file_repeat1,
  [76] = 2,
    STATE(14), 1,
      sym_set_options,
    ACTIONS(46), 11,
      anon_sym_timeout,
      anon_sym_printTRSEquations,
      anon_sym_debugConstr,
      anon_sym_debugCompletion,
      anon_sym_debugTactics,
      anon_sym_processStrictAliasMode,
      anon_sym_showStrengthenedHyp,
      anon_sym_autoFADup,
      anon_sym_newInduction,
      anon_sym_postQuantumSound,
      anon_sym_checkInclude,
  [93] = 1,
    ACTIONS(48), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_set,
      anon_sym_process,
      anon_sym_lemma,
      anon_sym_Proof,
      anon_sym_system,
      sym_comment,
  [104] = 1,
    ACTIONS(50), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_set,
      anon_sym_process,
      anon_sym_lemma,
      anon_sym_Proof,
      anon_sym_system,
      sym_comment,
  [115] = 1,
    ACTIONS(52), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_set,
      anon_sym_process,
      anon_sym_lemma,
      anon_sym_Proof,
      anon_sym_system,
      sym_comment,
  [126] = 1,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_set,
      anon_sym_process,
      anon_sym_lemma,
      anon_sym_Proof,
      anon_sym_system,
      sym_comment,
  [137] = 1,
    ACTIONS(56), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_set,
      anon_sym_process,
      anon_sym_lemma,
      anon_sym_Proof,
      anon_sym_system,
      sym_comment,
  [148] = 1,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_set,
      anon_sym_process,
      anon_sym_lemma,
      anon_sym_Proof,
      anon_sym_system,
      sym_comment,
  [159] = 1,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_set,
      anon_sym_process,
      anon_sym_lemma,
      anon_sym_Proof,
      anon_sym_system,
      sym_comment,
  [170] = 2,
    STATE(22), 1,
      sym_set_value,
    ACTIONS(62), 3,
      anon_sym_false,
      anon_sym_true,
      sym_number,
  [179] = 1,
    ACTIONS(64), 1,
      anon_sym_Qed,
  [183] = 1,
    ACTIONS(66), 1,
      anon_sym_EQ,
  [187] = 1,
    ACTIONS(68), 1,
      sym_identifier,
  [191] = 1,
    ACTIONS(70), 1,
      anon_sym_EQ,
  [195] = 1,
    ACTIONS(72), 1,
      anon_sym_DOT,
  [199] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [203] = 1,
    ACTIONS(76), 1,
      anon_sym_DOT,
  [207] = 1,
    ACTIONS(78), 1,
      anon_sym_DOT,
  [211] = 1,
    ACTIONS(80), 1,
      anon_sym_DOT,
  [215] = 1,
    ACTIONS(82), 1,
      anon_sym_DOT,
  [219] = 1,
    ACTIONS(84), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 148,
  [SMALL_STATE(11)] = 159,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 191,
  [SMALL_STATE(17)] = 195,
  [SMALL_STATE(18)] = 199,
  [SMALL_STATE(19)] = 203,
  [SMALL_STATE(20)] = 207,
  [SMALL_STATE(21)] = 211,
  [SMALL_STATE(22)] = 215,
  [SMALL_STATE(23)] = 219,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 5, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_declaration, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_options, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_value, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_squirrel(void) {
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
