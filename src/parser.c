#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  anon_sym_import = 1,
  anon_sym_DOT = 2,
  anon_sym_from = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_as = 7,
  sym_wildcard_import = 8,
  anon_sym_type = 9,
  anon_sym_COLON = 10,
  anon_sym_filter = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_condition = 13,
  anon_sym_enum = 14,
  anon_sym_EQ = 15,
  anon_sym_struct = 16,
  anon_sym_AT = 17,
  sym_identifier = 18,
  anon_sym_PIPE = 19,
  anon_sym_string = 20,
  anon_sym_bool = 21,
  anon_sym_unsigned = 22,
  anon_sym_integer = 23,
  anon_sym_natural = 24,
  anon_sym_COLON_EQ = 25,
  anon_sym_LT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_LT_GT = 32,
  anon_sym_in = 33,
  anon_sym_not = 34,
  anon_sym_is = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  sym_escape_sequence = 38,
  sym__not_escape_sequence = 39,
  sym_integer = 40,
  sym_float = 41,
  sym_true = 42,
  sym_false = 43,
  sym_none = 44,
  sym_comment = 45,
  sym_line_continuation = 46,
  anon_sym_RBRACK = 47,
  anon_sym_RBRACE = 48,
  sym__newline = 49,
  sym__indent = 50,
  sym__dedent = 51,
  sym_string_start = 52,
  sym__string_content = 53,
  sym_escape_interpolation = 54,
  sym_string_end = 55,
  sym_module = 56,
  sym__statement = 57,
  sym__import_statement = 58,
  sym_import_statement = 59,
  sym_import_prefix = 60,
  sym_relative_import = 61,
  sym_import_from_statement = 62,
  sym__import_list = 63,
  sym_aliased_import = 64,
  sym__compound_statement = 65,
  sym__container_definition = 66,
  sym__container_repr = 67,
  sym_type_block = 68,
  aux_sym__type_body = 69,
  sym__filter_declaration = 70,
  sym__decorated_filter_declaration = 71,
  sym__condition_declaration = 72,
  sym__decorated_condition_declaration = 73,
  sym__decorated_definition = 74,
  sym_decorator = 75,
  sym__decorator_expression = 76,
  sym_dotted_name = 77,
  sym_type = 78,
  sym_optional_type = 79,
  sym__builtin_types = 80,
  sym_primary_expression = 81,
  sym_argument_list = 82,
  sym_argument = 83,
  sym__argument_block = 84,
  sym__literal = 85,
  sym_string = 86,
  sym_concatenated_string = 87,
  sym_string_content = 88,
  aux_sym_module_repeat1 = 89,
  aux_sym_module_repeat2 = 90,
  aux_sym_import_prefix_repeat1 = 91,
  aux_sym__import_list_repeat1 = 92,
  aux_sym_dotted_name_repeat1 = 93,
  aux_sym_argument_list_repeat1 = 94,
  aux_sym_string_repeat1 = 95,
  aux_sym_concatenated_string_repeat1 = 96,
  aux_sym_string_content_repeat1 = 97,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_from] = "from",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_as] = "as",
  [sym_wildcard_import] = "wildcard_import",
  [anon_sym_type] = "type",
  [anon_sym_COLON] = ":",
  [anon_sym_filter] = "filter",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_condition] = "condition",
  [anon_sym_enum] = "enum",
  [anon_sym_EQ] = "=",
  [anon_sym_struct] = "struct",
  [anon_sym_AT] = "@",
  [sym_identifier] = "identifier",
  [anon_sym_PIPE] = "|",
  [anon_sym_string] = "string",
  [anon_sym_bool] = "bool",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_integer] = "integer",
  [anon_sym_natural] = "natural",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_in] = "in",
  [anon_sym_not] = "not",
  [anon_sym_is] = "is",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [sym_escape_sequence] = "escape_sequence",
  [sym__not_escape_sequence] = "_not_escape_sequence",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_none] = "none",
  [sym_comment] = "comment",
  [sym_line_continuation] = "line_continuation",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_string_start] = "string_start",
  [sym__string_content] = "_string_content",
  [sym_escape_interpolation] = "escape_interpolation",
  [sym_string_end] = "string_end",
  [sym_module] = "module",
  [sym__statement] = "_statement",
  [sym__import_statement] = "_import_statement",
  [sym_import_statement] = "import_statement",
  [sym_import_prefix] = "import_prefix",
  [sym_relative_import] = "relative_import",
  [sym_import_from_statement] = "import_from_statement",
  [sym__import_list] = "_import_list",
  [sym_aliased_import] = "aliased_import",
  [sym__compound_statement] = "_compound_statement",
  [sym__container_definition] = "_container_definition",
  [sym__container_repr] = "_container_repr",
  [sym_type_block] = "type_block",
  [aux_sym__type_body] = "_type_body",
  [sym__filter_declaration] = "_filter_declaration",
  [sym__decorated_filter_declaration] = "_decorated_filter_declaration",
  [sym__condition_declaration] = "_condition_declaration",
  [sym__decorated_condition_declaration] = "_decorated_condition_declaration",
  [sym__decorated_definition] = "_decorated_definition",
  [sym_decorator] = "decorator",
  [sym__decorator_expression] = "_decorator_expression",
  [sym_dotted_name] = "dotted_name",
  [sym_type] = "type",
  [sym_optional_type] = "optional_type",
  [sym__builtin_types] = "_builtin_types",
  [sym_primary_expression] = "primary_expression",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym__argument_block] = "_argument_block",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_concatenated_string] = "concatenated_string",
  [sym_string_content] = "string_content",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_module_repeat2] = "module_repeat2",
  [aux_sym_import_prefix_repeat1] = "import_prefix_repeat1",
  [aux_sym__import_list_repeat1] = "_import_list_repeat1",
  [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_concatenated_string_repeat1] = "concatenated_string_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_as] = anon_sym_as,
  [sym_wildcard_import] = sym_wildcard_import,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_AT] = anon_sym_AT,
  [sym_identifier] = sym_identifier,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_natural] = anon_sym_natural,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__not_escape_sequence] = sym__not_escape_sequence,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_none] = sym_none,
  [sym_comment] = sym_comment,
  [sym_line_continuation] = sym_line_continuation,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_string_start] = sym_string_start,
  [sym__string_content] = sym__string_content,
  [sym_escape_interpolation] = sym_escape_interpolation,
  [sym_string_end] = sym_string_end,
  [sym_module] = sym_module,
  [sym__statement] = sym__statement,
  [sym__import_statement] = sym__import_statement,
  [sym_import_statement] = sym_import_statement,
  [sym_import_prefix] = sym_import_prefix,
  [sym_relative_import] = sym_relative_import,
  [sym_import_from_statement] = sym_import_from_statement,
  [sym__import_list] = sym__import_list,
  [sym_aliased_import] = sym_aliased_import,
  [sym__compound_statement] = sym__compound_statement,
  [sym__container_definition] = sym__container_definition,
  [sym__container_repr] = sym__container_repr,
  [sym_type_block] = sym_type_block,
  [aux_sym__type_body] = aux_sym__type_body,
  [sym__filter_declaration] = sym__filter_declaration,
  [sym__decorated_filter_declaration] = sym__decorated_filter_declaration,
  [sym__condition_declaration] = sym__condition_declaration,
  [sym__decorated_condition_declaration] = sym__decorated_condition_declaration,
  [sym__decorated_definition] = sym__decorated_definition,
  [sym_decorator] = sym_decorator,
  [sym__decorator_expression] = sym__decorator_expression,
  [sym_dotted_name] = sym_dotted_name,
  [sym_type] = sym_type,
  [sym_optional_type] = sym_optional_type,
  [sym__builtin_types] = sym__builtin_types,
  [sym_primary_expression] = sym_primary_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym__argument_block] = sym__argument_block,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_concatenated_string] = sym_concatenated_string,
  [sym_string_content] = sym_string_content,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_module_repeat2] = aux_sym_module_repeat2,
  [aux_sym_import_prefix_repeat1] = aux_sym_import_prefix_repeat1,
  [aux_sym__import_list_repeat1] = aux_sym__import_list_repeat1,
  [aux_sym_dotted_name_repeat1] = aux_sym_dotted_name_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_concatenated_string_repeat1] = aux_sym_concatenated_string_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_wildcard_import] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_natural] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__not_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_string_start] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_string_end] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__import_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_relative_import] = {
    .visible = true,
    .named = true,
  },
  [sym_import_from_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__import_list] = {
    .visible = false,
    .named = true,
  },
  [sym_aliased_import] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__container_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__container_repr] = {
    .visible = false,
    .named = true,
  },
  [sym_type_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__type_body] = {
    .visible = false,
    .named = false,
  },
  [sym__filter_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__decorated_filter_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__condition_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__decorated_condition_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__decorated_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym__decorator_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_dotted_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_types] = {
    .visible = false,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__argument_block] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_concatenated_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_prefix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__import_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concatenated_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_arguments = 2,
  field_body = 3,
  field_definition = 4,
  field_function = 5,
  field_module_name = 6,
  field_name = 7,
  field_repr = 8,
  field_return = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_definition] = "definition",
  [field_function] = "function",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_repr] = "repr",
  [field_return] = "return",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 1},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 2},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 1},
  [19] = {.index = 27, .length = 4},
  [20] = {.index = 31, .length = 4},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 5},
  [23] = {.index = 42, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_definition, 0, .inherited = true},
  [1] =
    {field_name, 1, .inherited = true},
  [2] =
    {field_name, 0},
  [3] =
    {field_function, 0},
  [4] =
    {field_definition, 1},
  [5] =
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [7] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
  [9] =
    {field_arguments, 1, .inherited = true},
    {field_function, 1, .inherited = true},
  [11] =
    {field_arguments, 1},
    {field_function, 0},
  [13] =
    {field_definition, 2, .inherited = true},
  [14] =
    {field_name, 1},
  [15] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [17] =
    {field_alias, 2},
    {field_name, 0},
  [19] =
    {field_module_name, 1},
  [20] =
    {field_module_name, 1},
    {field_name, 3, .inherited = true},
  [22] =
    {field_module_name, 1},
    {field_name, 4, .inherited = true},
  [24] =
    {field_name, 0, .inherited = true},
    {field_return, 0, .inherited = true},
  [26] =
    {field_name, 0, .inherited = true},
  [27] =
    {field_body, 5},
    {field_name, 1},
    {field_name, 5, .inherited = true},
    {field_return, 5, .inherited = true},
  [31] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_return, 0, .inherited = true},
    {field_return, 1, .inherited = true},
  [35] =
    {field_name, 1, .inherited = true},
    {field_return, 1, .inherited = true},
  [37] =
    {field_body, 6},
    {field_name, 1},
    {field_name, 6, .inherited = true},
    {field_repr, 2},
    {field_return, 6, .inherited = true},
  [42] =
    {field_name, 1},
    {field_return, 4},
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
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 19,
  [46] = 46,
  [47] = 15,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 14,
  [57] = 57,
  [58] = 38,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 25,
  [66] = 20,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 21,
  [72] = 72,
  [73] = 73,
  [74] = 27,
  [75] = 75,
  [76] = 76,
  [77] = 22,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 63,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 55,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 51,
  [93] = 93,
  [94] = 32,
  [95] = 91,
  [96] = 88,
  [97] = 29,
  [98] = 34,
  [99] = 55,
  [100] = 100,
  [101] = 101,
  [102] = 64,
  [103] = 51,
  [104] = 104,
  [105] = 100,
  [106] = 89,
  [107] = 30,
  [108] = 31,
  [109] = 104,
  [110] = 110,
  [111] = 79,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 79,
  [118] = 118,
  [119] = 115,
  [120] = 116,
  [121] = 110,
  [122] = 118,
  [123] = 40,
  [124] = 36,
  [125] = 55,
  [126] = 51,
  [127] = 118,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 69,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 70,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 146,
  [150] = 145,
  [151] = 151,
  [152] = 148,
  [153] = 136,
  [154] = 154,
  [155] = 79,
  [156] = 138,
  [157] = 157,
  [158] = 136,
  [159] = 136,
  [160] = 160,
  [161] = 139,
  [162] = 139,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(97)
      if (lookahead == '\r') SKIP(97)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '<') ADVANCE(183);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == '|') ADVANCE(172);
      if (lookahead == '}') ADVANCE(218);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(216);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(195);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 73:
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == '}') ADVANCE(195);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (!eof && (lookahead == 0 ||
          lookahead == '\n')) ADVANCE(216);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 76:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 77:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      END_STATE();
    case 78:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(78)
      if (lookahead == '\r') SKIP(78)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 79:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(79)
      if (lookahead == '\r') SKIP(79)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(145);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 80:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(80)
      if (lookahead == '\r') SKIP(80)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 81:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(81)
      if (lookahead == '\r') SKIP(81)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(142);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 97:
      if (eof) ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(97)
      if (lookahead == '\r') SKIP(97)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '<') ADVANCE(183);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == '|') ADVANCE(172);
      if (lookahead == '}') ADVANCE(218);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 98:
      if (eof) ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(98)
      if (lookahead == '\r') SKIP(98)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '|') ADVANCE(172);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(99)
      if (lookahead == '\r') SKIP(99)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 't') ADVANCE(170);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_wildcard_import);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(182);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(171);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(171);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(178);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(210);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(212);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(135);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(174);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(133);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(148);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(136);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(147);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(163);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(176);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(181);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(154);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(106);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(127);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(162);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(134);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(144);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(140);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(143);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(150);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(153);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(168);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(164);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(137);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(102);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(128);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(161);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(155);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bool);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_natural);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_natural);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '>') ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (!eof && (lookahead == 0)) ADVANCE(216);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == 'U') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(6);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(7);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_none);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 98, .external_lex_state = 2},
  [2] = {.lex_state = 98, .external_lex_state = 2},
  [3] = {.lex_state = 98, .external_lex_state = 2},
  [4] = {.lex_state = 98, .external_lex_state = 2},
  [5] = {.lex_state = 98, .external_lex_state = 2},
  [6] = {.lex_state = 78, .external_lex_state = 3},
  [7] = {.lex_state = 78, .external_lex_state = 3},
  [8] = {.lex_state = 98, .external_lex_state = 4},
  [9] = {.lex_state = 98, .external_lex_state = 4},
  [10] = {.lex_state = 98, .external_lex_state = 4},
  [11] = {.lex_state = 98, .external_lex_state = 2},
  [12] = {.lex_state = 98, .external_lex_state = 2},
  [13] = {.lex_state = 79, .external_lex_state = 2},
  [14] = {.lex_state = 98, .external_lex_state = 2},
  [15] = {.lex_state = 98, .external_lex_state = 2},
  [16] = {.lex_state = 79, .external_lex_state = 2},
  [17] = {.lex_state = 79, .external_lex_state = 2},
  [18] = {.lex_state = 79, .external_lex_state = 2},
  [19] = {.lex_state = 98, .external_lex_state = 2},
  [20] = {.lex_state = 98, .external_lex_state = 2},
  [21] = {.lex_state = 98, .external_lex_state = 2},
  [22] = {.lex_state = 99, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 5},
  [24] = {.lex_state = 0, .external_lex_state = 5},
  [25] = {.lex_state = 99, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 5},
  [27] = {.lex_state = 99, .external_lex_state = 2},
  [28] = {.lex_state = 98, .external_lex_state = 6},
  [29] = {.lex_state = 98, .external_lex_state = 2},
  [30] = {.lex_state = 98, .external_lex_state = 2},
  [31] = {.lex_state = 98, .external_lex_state = 2},
  [32] = {.lex_state = 98, .external_lex_state = 2},
  [33] = {.lex_state = 98, .external_lex_state = 2},
  [34] = {.lex_state = 98, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 5},
  [36] = {.lex_state = 98, .external_lex_state = 2},
  [37] = {.lex_state = 98, .external_lex_state = 2},
  [38] = {.lex_state = 98, .external_lex_state = 2},
  [39] = {.lex_state = 80, .external_lex_state = 2},
  [40] = {.lex_state = 98, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 5},
  [42] = {.lex_state = 80, .external_lex_state = 2},
  [43] = {.lex_state = 98, .external_lex_state = 2},
  [44] = {.lex_state = 98, .external_lex_state = 2},
  [45] = {.lex_state = 98, .external_lex_state = 7},
  [46] = {.lex_state = 98, .external_lex_state = 2},
  [47] = {.lex_state = 98, .external_lex_state = 7},
  [48] = {.lex_state = 98, .external_lex_state = 2},
  [49] = {.lex_state = 98, .external_lex_state = 2},
  [50] = {.lex_state = 98, .external_lex_state = 2},
  [51] = {.lex_state = 98, .external_lex_state = 4},
  [52] = {.lex_state = 80, .external_lex_state = 8},
  [53] = {.lex_state = 98, .external_lex_state = 2},
  [54] = {.lex_state = 98, .external_lex_state = 2},
  [55] = {.lex_state = 98, .external_lex_state = 4},
  [56] = {.lex_state = 98, .external_lex_state = 7},
  [57] = {.lex_state = 80, .external_lex_state = 8},
  [58] = {.lex_state = 98, .external_lex_state = 6},
  [59] = {.lex_state = 80, .external_lex_state = 8},
  [60] = {.lex_state = 98, .external_lex_state = 2},
  [61] = {.lex_state = 98, .external_lex_state = 2},
  [62] = {.lex_state = 98, .external_lex_state = 4},
  [63] = {.lex_state = 80, .external_lex_state = 7},
  [64] = {.lex_state = 98, .external_lex_state = 2},
  [65] = {.lex_state = 80, .external_lex_state = 7},
  [66] = {.lex_state = 98, .external_lex_state = 7},
  [67] = {.lex_state = 80, .external_lex_state = 2},
  [68] = {.lex_state = 80, .external_lex_state = 6},
  [69] = {.lex_state = 98, .external_lex_state = 4},
  [70] = {.lex_state = 98, .external_lex_state = 4},
  [71] = {.lex_state = 98, .external_lex_state = 7},
  [72] = {.lex_state = 98, .external_lex_state = 4},
  [73] = {.lex_state = 98, .external_lex_state = 4},
  [74] = {.lex_state = 80, .external_lex_state = 7},
  [75] = {.lex_state = 98, .external_lex_state = 4},
  [76] = {.lex_state = 81, .external_lex_state = 2},
  [77] = {.lex_state = 80, .external_lex_state = 7},
  [78] = {.lex_state = 98, .external_lex_state = 4},
  [79] = {.lex_state = 98, .external_lex_state = 4},
  [80] = {.lex_state = 98, .external_lex_state = 4},
  [81] = {.lex_state = 80, .external_lex_state = 2},
  [82] = {.lex_state = 80, .external_lex_state = 7},
  [83] = {.lex_state = 81, .external_lex_state = 2},
  [84] = {.lex_state = 98, .external_lex_state = 4},
  [85] = {.lex_state = 98, .external_lex_state = 4},
  [86] = {.lex_state = 80, .external_lex_state = 8},
  [87] = {.lex_state = 98, .external_lex_state = 6},
  [88] = {.lex_state = 80, .external_lex_state = 2},
  [89] = {.lex_state = 98, .external_lex_state = 6},
  [90] = {.lex_state = 81, .external_lex_state = 2},
  [91] = {.lex_state = 80, .external_lex_state = 6},
  [92] = {.lex_state = 98, .external_lex_state = 7},
  [93] = {.lex_state = 98, .external_lex_state = 2},
  [94] = {.lex_state = 98, .external_lex_state = 7},
  [95] = {.lex_state = 80, .external_lex_state = 7},
  [96] = {.lex_state = 80, .external_lex_state = 2},
  [97] = {.lex_state = 98, .external_lex_state = 7},
  [98] = {.lex_state = 98, .external_lex_state = 7},
  [99] = {.lex_state = 98, .external_lex_state = 7},
  [100] = {.lex_state = 80, .external_lex_state = 7},
  [101] = {.lex_state = 80, .external_lex_state = 8},
  [102] = {.lex_state = 98, .external_lex_state = 6},
  [103] = {.lex_state = 98, .external_lex_state = 6},
  [104] = {.lex_state = 98, .external_lex_state = 6},
  [105] = {.lex_state = 80, .external_lex_state = 6},
  [106] = {.lex_state = 98, .external_lex_state = 7},
  [107] = {.lex_state = 98, .external_lex_state = 7},
  [108] = {.lex_state = 98, .external_lex_state = 7},
  [109] = {.lex_state = 98, .external_lex_state = 7},
  [110] = {.lex_state = 98, .external_lex_state = 6},
  [111] = {.lex_state = 98, .external_lex_state = 6},
  [112] = {.lex_state = 98, .external_lex_state = 2},
  [113] = {.lex_state = 80, .external_lex_state = 6},
  [114] = {.lex_state = 98, .external_lex_state = 2},
  [115] = {.lex_state = 80, .external_lex_state = 2},
  [116] = {.lex_state = 98, .external_lex_state = 2},
  [117] = {.lex_state = 98, .external_lex_state = 7},
  [118] = {.lex_state = 98, .external_lex_state = 7},
  [119] = {.lex_state = 80, .external_lex_state = 2},
  [120] = {.lex_state = 98, .external_lex_state = 2},
  [121] = {.lex_state = 98, .external_lex_state = 7},
  [122] = {.lex_state = 98, .external_lex_state = 6},
  [123] = {.lex_state = 98, .external_lex_state = 7},
  [124] = {.lex_state = 98, .external_lex_state = 7},
  [125] = {.lex_state = 98, .external_lex_state = 2},
  [126] = {.lex_state = 98, .external_lex_state = 2},
  [127] = {.lex_state = 98, .external_lex_state = 2},
  [128] = {.lex_state = 98, .external_lex_state = 9},
  [129] = {.lex_state = 98, .external_lex_state = 2},
  [130] = {.lex_state = 98, .external_lex_state = 7},
  [131] = {.lex_state = 98, .external_lex_state = 6},
  [132] = {.lex_state = 98, .external_lex_state = 9},
  [133] = {.lex_state = 98, .external_lex_state = 7},
  [134] = {.lex_state = 80, .external_lex_state = 2},
  [135] = {.lex_state = 98, .external_lex_state = 2},
  [136] = {.lex_state = 98, .external_lex_state = 2},
  [137] = {.lex_state = 98, .external_lex_state = 6},
  [138] = {.lex_state = 98, .external_lex_state = 7},
  [139] = {.lex_state = 98, .external_lex_state = 2},
  [140] = {.lex_state = 98, .external_lex_state = 2},
  [141] = {.lex_state = 98, .external_lex_state = 6},
  [142] = {.lex_state = 80, .external_lex_state = 2},
  [143] = {.lex_state = 98, .external_lex_state = 2},
  [144] = {.lex_state = 98, .external_lex_state = 2},
  [145] = {.lex_state = 80, .external_lex_state = 2},
  [146] = {.lex_state = 80, .external_lex_state = 2},
  [147] = {.lex_state = 80, .external_lex_state = 2},
  [148] = {.lex_state = 98, .external_lex_state = 6},
  [149] = {.lex_state = 80, .external_lex_state = 2},
  [150] = {.lex_state = 80, .external_lex_state = 2},
  [151] = {.lex_state = 80, .external_lex_state = 2},
  [152] = {.lex_state = 98, .external_lex_state = 6},
  [153] = {.lex_state = 98, .external_lex_state = 2},
  [154] = {.lex_state = 98, .external_lex_state = 2},
  [155] = {.lex_state = 98, .external_lex_state = 2},
  [156] = {.lex_state = 98, .external_lex_state = 7},
  [157] = {.lex_state = 98, .external_lex_state = 2},
  [158] = {.lex_state = 98, .external_lex_state = 2},
  [159] = {.lex_state = 98, .external_lex_state = 2},
  [160] = {.lex_state = 98, .external_lex_state = 2},
  [161] = {.lex_state = 98, .external_lex_state = 2},
  [162] = {.lex_state = 98, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_wildcard_import] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_natural] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__not_escape_sequence] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_escape_interpolation] = ACTIONS(1),
    [sym_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(160),
    [sym__statement] = STATE(46),
    [sym__import_statement] = STATE(46),
    [sym_import_statement] = STATE(46),
    [sym_import_from_statement] = STATE(46),
    [sym__compound_statement] = STATE(48),
    [sym__container_definition] = STATE(48),
    [sym_type_block] = STATE(48),
    [sym__decorated_definition] = STATE(50),
    [sym_decorator] = STATE(28),
    [aux_sym_module_repeat1] = STATE(28),
    [aux_sym_module_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_from,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_AT,
    STATE(3), 1,
      aux_sym_module_repeat2,
    STATE(50), 1,
      sym__decorated_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(37), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(48), 3,
      sym__compound_statement,
      sym__container_definition,
      sym_type_block,
    STATE(46), 4,
      sym__statement,
      sym__import_statement,
      sym_import_statement,
      sym_import_from_statement,
  [41] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_import,
    ACTIONS(26), 1,
      anon_sym_from,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(32), 1,
      anon_sym_AT,
    STATE(3), 1,
      aux_sym_module_repeat2,
    STATE(50), 1,
      sym__decorated_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(37), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(48), 3,
      sym__compound_statement,
      sym__container_definition,
      sym_type_block,
    STATE(46), 4,
      sym__statement,
      sym__import_statement,
      sym_import_statement,
      sym_import_from_statement,
  [82] = 11,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_from,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_module_repeat2,
    STATE(50), 1,
      sym__decorated_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(37), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(48), 3,
      sym__compound_statement,
      sym__container_definition,
      sym_type_block,
    STATE(46), 4,
      sym__statement,
      sym__import_statement,
      sym_import_statement,
      sym_import_from_statement,
  [123] = 11,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_from,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_module_repeat2,
    STATE(50), 1,
      sym__decorated_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(37), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(48), 3,
      sym__compound_statement,
      sym__container_definition,
      sym_type_block,
    STATE(46), 4,
      sym__statement,
      sym__import_statement,
      sym_import_statement,
      sym_import_from_statement,
  [164] = 8,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(59), 1,
      sym_string,
    STATE(68), 1,
      sym_primary_expression,
    STATE(148), 1,
      sym__decorator_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(113), 2,
      sym__literal,
      sym_concatenated_string,
    ACTIONS(39), 5,
      sym_identifier,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
  [195] = 8,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(59), 1,
      sym_string,
    STATE(68), 1,
      sym_primary_expression,
    STATE(152), 1,
      sym__decorator_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(113), 2,
      sym__literal,
      sym_concatenated_string,
    ACTIONS(39), 5,
      sym_identifier,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
  [226] = 11,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_filter,
    ACTIONS(47), 1,
      anon_sym_condition,
    ACTIONS(49), 1,
      sym__dedent,
    STATE(9), 1,
      aux_sym__type_body,
    STATE(62), 1,
      sym__decorated_filter_declaration,
    STATE(72), 1,
      sym__filter_declaration,
    STATE(84), 1,
      sym__decorated_condition_declaration,
    STATE(85), 1,
      sym__condition_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(33), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [262] = 11,
    ACTIONS(51), 1,
      anon_sym_filter,
    ACTIONS(54), 1,
      anon_sym_condition,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(60), 1,
      sym__dedent,
    STATE(9), 1,
      aux_sym__type_body,
    STATE(62), 1,
      sym__decorated_filter_declaration,
    STATE(72), 1,
      sym__filter_declaration,
    STATE(84), 1,
      sym__decorated_condition_declaration,
    STATE(85), 1,
      sym__condition_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(33), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [298] = 11,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_filter,
    ACTIONS(47), 1,
      anon_sym_condition,
    ACTIONS(62), 1,
      sym__dedent,
    STATE(9), 1,
      aux_sym__type_body,
    STATE(62), 1,
      sym__decorated_filter_declaration,
    STATE(72), 1,
      sym__filter_declaration,
    STATE(84), 1,
      sym__decorated_condition_declaration,
    STATE(85), 1,
      sym__condition_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(33), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [334] = 10,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_filter,
    ACTIONS(47), 1,
      anon_sym_condition,
    STATE(8), 1,
      aux_sym__type_body,
    STATE(62), 1,
      sym__decorated_filter_declaration,
    STATE(72), 1,
      sym__filter_declaration,
    STATE(84), 1,
      sym__decorated_condition_declaration,
    STATE(85), 1,
      sym__condition_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(33), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [367] = 10,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_filter,
    ACTIONS(47), 1,
      anon_sym_condition,
    STATE(10), 1,
      aux_sym__type_body,
    STATE(62), 1,
      sym__decorated_filter_declaration,
    STATE(72), 1,
      sym__filter_declaration,
    STATE(84), 1,
      sym__decorated_condition_declaration,
    STATE(85), 1,
      sym__condition_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(33), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [400] = 5,
    STATE(87), 1,
      sym_type,
    STATE(103), 1,
      sym__builtin_types,
    STATE(122), 1,
      sym_optional_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(64), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [422] = 4,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_type,
      anon_sym_AT,
  [442] = 4,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_type,
      anon_sym_AT,
  [462] = 5,
    STATE(125), 1,
      sym_type,
    STATE(126), 1,
      sym__builtin_types,
    STATE(127), 1,
      sym_optional_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(75), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [484] = 5,
    STATE(51), 1,
      sym__builtin_types,
    STATE(55), 1,
      sym_type,
    STATE(73), 1,
      sym_optional_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(77), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [506] = 5,
    STATE(92), 1,
      sym__builtin_types,
    STATE(99), 1,
      sym_type,
    STATE(118), 1,
      sym_optional_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(79), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [528] = 4,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_type,
      anon_sym_AT,
  [548] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(66), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_type,
      anon_sym_AT,
  [563] = 5,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_as,
    STATE(31), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [584] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(32), 1,
      sym_dotted_name,
    STATE(40), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    ACTIONS(91), 3,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
  [607] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(97), 1,
      sym__not_escape_sequence,
    ACTIONS(99), 1,
      sym_string_end,
    STATE(41), 1,
      aux_sym_string_content_repeat1,
    STATE(26), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(95), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [632] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(97), 1,
      sym__not_escape_sequence,
    ACTIONS(101), 1,
      sym_string_end,
    STATE(41), 1,
      aux_sym_string_content_repeat1,
    STATE(23), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(95), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [657] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(32), 1,
      sym_dotted_name,
    STATE(40), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    ACTIONS(105), 3,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
  [680] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(110), 1,
      sym__not_escape_sequence,
    ACTIONS(113), 1,
      sym_string_end,
    STATE(41), 1,
      aux_sym_string_content_repeat1,
    STATE(26), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(107), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [705] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(32), 1,
      sym_dotted_name,
    STATE(40), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    ACTIONS(91), 3,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
  [728] = 6,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(43), 2,
      sym__container_definition,
      sym_type_block,
    STATE(58), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [750] = 4,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [768] = 4,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [786] = 4,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [804] = 3,
    ACTIONS(87), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_AT,
  [820] = 7,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_filter,
    ACTIONS(47), 1,
      anon_sym_condition,
    STATE(78), 1,
      sym__condition_declaration,
    STATE(80), 1,
      sym__filter_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(38), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [844] = 4,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [862] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(133), 1,
      sym__not_escape_sequence,
    ACTIONS(136), 1,
      sym_string_end,
    STATE(35), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(130), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [883] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_AT,
  [896] = 5,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(38), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(43), 2,
      sym__container_definition,
      sym_type_block,
  [915] = 4,
    ACTIONS(142), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(38), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    ACTIONS(140), 3,
      anon_sym_type,
      anon_sym_filter,
      anon_sym_condition,
  [932] = 7,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      sym_wildcard_import,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(21), 1,
      sym_dotted_name,
    STATE(34), 1,
      sym_aliased_import,
    STATE(61), 1,
      sym__import_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [955] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_AT,
  [968] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      sym__not_escape_sequence,
    ACTIONS(155), 1,
      sym_string_end,
    STATE(35), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(151), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [989] = 6,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_import_prefix_repeat1,
    STATE(90), 1,
      sym_import_prefix,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(157), 2,
      sym_relative_import,
      sym_dotted_name,
  [1010] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1022] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1034] = 4,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(81), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [1050] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1062] = 4,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(71), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [1078] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1090] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1102] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1114] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(173), 5,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
      anon_sym_PIPE,
  [1126] = 4,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(175), 2,
      sym__newline,
      sym_identifier,
    STATE(57), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
  [1142] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1154] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1166] = 3,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(181), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1180] = 4,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(66), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [1196] = 4,
    ACTIONS(190), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(188), 2,
      sym__newline,
      sym_identifier,
    STATE(57), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
  [1212] = 4,
    ACTIONS(193), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(140), 2,
      sym__newline,
      anon_sym_type,
    STATE(58), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [1228] = 4,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(196), 2,
      sym__newline,
      sym_identifier,
    STATE(52), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
  [1244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1256] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_AT,
  [1268] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(202), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1279] = 5,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(116), 1,
      sym_argument,
    STATE(138), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1296] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(208), 4,
      anon_sym_type,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1307] = 5,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(94), 1,
      sym_dotted_name,
    STATE(123), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1324] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(66), 4,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [1335] = 5,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(71), 1,
      sym_dotted_name,
    STATE(98), 1,
      sym_aliased_import,
    STATE(130), 1,
      sym__import_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1352] = 5,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__newline,
    STATE(120), 1,
      sym_argument,
    STATE(137), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1369] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(214), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1380] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(216), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1391] = 5,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_as,
    STATE(108), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1408] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(202), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1419] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(222), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1430] = 5,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(94), 1,
      sym_dotted_name,
    STATE(123), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1447] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(224), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1458] = 4,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(83), 1,
      aux_sym_import_prefix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(226), 2,
      anon_sym_import,
      sym_identifier,
  [1473] = 5,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(94), 1,
      sym_dotted_name,
    STATE(123), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1490] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(230), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1501] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(232), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1512] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(234), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1523] = 5,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(21), 1,
      sym_dotted_name,
    STATE(34), 1,
      sym_aliased_import,
    STATE(44), 1,
      sym__import_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1540] = 5,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_argument,
    STATE(156), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1557] = 4,
    ACTIONS(240), 1,
      anon_sym_DOT,
    STATE(83), 1,
      aux_sym_import_prefix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(238), 2,
      anon_sym_import,
      sym_identifier,
  [1572] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(243), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1583] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(243), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [1594] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(245), 3,
      sym__newline,
      sym_string_start,
      sym_identifier,
  [1604] = 3,
    ACTIONS(247), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(181), 2,
      sym__newline,
      anon_sym_COMMA,
  [1616] = 4,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(94), 1,
      sym_dotted_name,
    STATE(123), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1630] = 4,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1644] = 4,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_import,
    STATE(144), 1,
      sym_dotted_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1658] = 4,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym__newline,
    STATE(110), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1672] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(173), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [1682] = 4,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_COLON,
    STATE(140), 1,
      sym__container_repr,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1696] = 3,
    ACTIONS(220), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(128), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1708] = 4,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(121), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1722] = 4,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(32), 1,
      sym_dotted_name,
    STATE(40), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1736] = 4,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1750] = 4,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1764] = 3,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(181), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1776] = 4,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1790] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 3,
      sym__newline,
      sym_string_start,
      sym_identifier,
  [1800] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(208), 3,
      sym__newline,
      anon_sym_type,
      anon_sym_AT,
  [1810] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(173), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [1820] = 4,
    ACTIONS(271), 1,
      sym__newline,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1834] = 4,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(271), 1,
      sym__newline,
    STATE(110), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1848] = 4,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1862] = 4,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1876] = 4,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1890] = 4,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1904] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(252), 2,
      sym__newline,
      anon_sym_COMMA,
  [1913] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(232), 2,
      sym__newline,
      anon_sym_COMMA,
  [1922] = 3,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym__argument_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1933] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      sym__newline,
      sym_identifier,
  [1942] = 3,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym__argument_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1953] = 3,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(121), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1964] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1975] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1984] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(294), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1993] = 3,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(110), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2004] = 3,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2015] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(252), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2024] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(294), 2,
      sym__newline,
      anon_sym_COMMA,
  [2033] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(128), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2042] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(138), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2051] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2062] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [2071] = 2,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2079] = 2,
    ACTIONS(300), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2087] = 2,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2095] = 2,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2103] = 2,
    ACTIONS(306), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2111] = 2,
    ACTIONS(308), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2119] = 2,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2127] = 2,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2135] = 2,
    ACTIONS(214), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2143] = 2,
    ACTIONS(314), 1,
      sym_none,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2151] = 2,
    ACTIONS(316), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2159] = 2,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2167] = 2,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2175] = 2,
    ACTIONS(322), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2183] = 2,
    ACTIONS(324), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2191] = 2,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2199] = 2,
    ACTIONS(216), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2207] = 2,
    ACTIONS(328), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2215] = 2,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2223] = 2,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2231] = 2,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2239] = 2,
    ACTIONS(336), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2247] = 2,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2255] = 2,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2263] = 2,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2271] = 2,
    ACTIONS(344), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2279] = 2,
    ACTIONS(346), 1,
      sym_none,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2287] = 2,
    ACTIONS(348), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2295] = 2,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2303] = 2,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2311] = 2,
    ACTIONS(352), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2319] = 2,
    ACTIONS(354), 1,
      sym_none,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2327] = 2,
    ACTIONS(356), 1,
      sym_none,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2335] = 2,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2343] = 2,
    ACTIONS(360), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2351] = 2,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 334,
  [SMALL_STATE(12)] = 367,
  [SMALL_STATE(13)] = 400,
  [SMALL_STATE(14)] = 422,
  [SMALL_STATE(15)] = 442,
  [SMALL_STATE(16)] = 462,
  [SMALL_STATE(17)] = 484,
  [SMALL_STATE(18)] = 506,
  [SMALL_STATE(19)] = 528,
  [SMALL_STATE(20)] = 548,
  [SMALL_STATE(21)] = 563,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 607,
  [SMALL_STATE(24)] = 632,
  [SMALL_STATE(25)] = 657,
  [SMALL_STATE(26)] = 680,
  [SMALL_STATE(27)] = 705,
  [SMALL_STATE(28)] = 728,
  [SMALL_STATE(29)] = 750,
  [SMALL_STATE(30)] = 768,
  [SMALL_STATE(31)] = 786,
  [SMALL_STATE(32)] = 804,
  [SMALL_STATE(33)] = 820,
  [SMALL_STATE(34)] = 844,
  [SMALL_STATE(35)] = 862,
  [SMALL_STATE(36)] = 883,
  [SMALL_STATE(37)] = 896,
  [SMALL_STATE(38)] = 915,
  [SMALL_STATE(39)] = 932,
  [SMALL_STATE(40)] = 955,
  [SMALL_STATE(41)] = 968,
  [SMALL_STATE(42)] = 989,
  [SMALL_STATE(43)] = 1010,
  [SMALL_STATE(44)] = 1022,
  [SMALL_STATE(45)] = 1034,
  [SMALL_STATE(46)] = 1050,
  [SMALL_STATE(47)] = 1062,
  [SMALL_STATE(48)] = 1078,
  [SMALL_STATE(49)] = 1090,
  [SMALL_STATE(50)] = 1102,
  [SMALL_STATE(51)] = 1114,
  [SMALL_STATE(52)] = 1126,
  [SMALL_STATE(53)] = 1142,
  [SMALL_STATE(54)] = 1154,
  [SMALL_STATE(55)] = 1166,
  [SMALL_STATE(56)] = 1180,
  [SMALL_STATE(57)] = 1196,
  [SMALL_STATE(58)] = 1212,
  [SMALL_STATE(59)] = 1228,
  [SMALL_STATE(60)] = 1244,
  [SMALL_STATE(61)] = 1256,
  [SMALL_STATE(62)] = 1268,
  [SMALL_STATE(63)] = 1279,
  [SMALL_STATE(64)] = 1296,
  [SMALL_STATE(65)] = 1307,
  [SMALL_STATE(66)] = 1324,
  [SMALL_STATE(67)] = 1335,
  [SMALL_STATE(68)] = 1352,
  [SMALL_STATE(69)] = 1369,
  [SMALL_STATE(70)] = 1380,
  [SMALL_STATE(71)] = 1391,
  [SMALL_STATE(72)] = 1408,
  [SMALL_STATE(73)] = 1419,
  [SMALL_STATE(74)] = 1430,
  [SMALL_STATE(75)] = 1447,
  [SMALL_STATE(76)] = 1458,
  [SMALL_STATE(77)] = 1473,
  [SMALL_STATE(78)] = 1490,
  [SMALL_STATE(79)] = 1501,
  [SMALL_STATE(80)] = 1512,
  [SMALL_STATE(81)] = 1523,
  [SMALL_STATE(82)] = 1540,
  [SMALL_STATE(83)] = 1557,
  [SMALL_STATE(84)] = 1572,
  [SMALL_STATE(85)] = 1583,
  [SMALL_STATE(86)] = 1594,
  [SMALL_STATE(87)] = 1604,
  [SMALL_STATE(88)] = 1616,
  [SMALL_STATE(89)] = 1630,
  [SMALL_STATE(90)] = 1644,
  [SMALL_STATE(91)] = 1658,
  [SMALL_STATE(92)] = 1672,
  [SMALL_STATE(93)] = 1682,
  [SMALL_STATE(94)] = 1696,
  [SMALL_STATE(95)] = 1708,
  [SMALL_STATE(96)] = 1722,
  [SMALL_STATE(97)] = 1736,
  [SMALL_STATE(98)] = 1750,
  [SMALL_STATE(99)] = 1764,
  [SMALL_STATE(100)] = 1776,
  [SMALL_STATE(101)] = 1790,
  [SMALL_STATE(102)] = 1800,
  [SMALL_STATE(103)] = 1810,
  [SMALL_STATE(104)] = 1820,
  [SMALL_STATE(105)] = 1834,
  [SMALL_STATE(106)] = 1848,
  [SMALL_STATE(107)] = 1862,
  [SMALL_STATE(108)] = 1876,
  [SMALL_STATE(109)] = 1890,
  [SMALL_STATE(110)] = 1904,
  [SMALL_STATE(111)] = 1913,
  [SMALL_STATE(112)] = 1922,
  [SMALL_STATE(113)] = 1933,
  [SMALL_STATE(114)] = 1942,
  [SMALL_STATE(115)] = 1953,
  [SMALL_STATE(116)] = 1964,
  [SMALL_STATE(117)] = 1975,
  [SMALL_STATE(118)] = 1984,
  [SMALL_STATE(119)] = 1993,
  [SMALL_STATE(120)] = 2004,
  [SMALL_STATE(121)] = 2015,
  [SMALL_STATE(122)] = 2024,
  [SMALL_STATE(123)] = 2033,
  [SMALL_STATE(124)] = 2042,
  [SMALL_STATE(125)] = 2051,
  [SMALL_STATE(126)] = 2062,
  [SMALL_STATE(127)] = 2071,
  [SMALL_STATE(128)] = 2079,
  [SMALL_STATE(129)] = 2087,
  [SMALL_STATE(130)] = 2095,
  [SMALL_STATE(131)] = 2103,
  [SMALL_STATE(132)] = 2111,
  [SMALL_STATE(133)] = 2119,
  [SMALL_STATE(134)] = 2127,
  [SMALL_STATE(135)] = 2135,
  [SMALL_STATE(136)] = 2143,
  [SMALL_STATE(137)] = 2151,
  [SMALL_STATE(138)] = 2159,
  [SMALL_STATE(139)] = 2167,
  [SMALL_STATE(140)] = 2175,
  [SMALL_STATE(141)] = 2183,
  [SMALL_STATE(142)] = 2191,
  [SMALL_STATE(143)] = 2199,
  [SMALL_STATE(144)] = 2207,
  [SMALL_STATE(145)] = 2215,
  [SMALL_STATE(146)] = 2223,
  [SMALL_STATE(147)] = 2231,
  [SMALL_STATE(148)] = 2239,
  [SMALL_STATE(149)] = 2247,
  [SMALL_STATE(150)] = 2255,
  [SMALL_STATE(151)] = 2263,
  [SMALL_STATE(152)] = 2271,
  [SMALL_STATE(153)] = 2279,
  [SMALL_STATE(154)] = 2287,
  [SMALL_STATE(155)] = 2295,
  [SMALL_STATE(156)] = 2303,
  [SMALL_STATE(157)] = 2311,
  [SMALL_STATE(158)] = 2319,
  [SMALL_STATE(159)] = 2327,
  [SMALL_STATE(160)] = 2335,
  [SMALL_STATE(161)] = 2343,
  [SMALL_STATE(162)] = 2351,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 6),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 6), SHIFT_REPEAT(81),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 6), SHIFT_REPEAT(42),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 6), SHIFT_REPEAT(134),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 6), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_body, 2, .production_id = 20), SHIFT_REPEAT(147),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_body, 2, .production_id = 20), SHIFT_REPEAT(151),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_body, 2, .production_id = 20), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_body, 2, .production_id = 20),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(146),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_list, 1, .production_id = 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_list, 3, .production_id = 7),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__import_list, 3, .production_id = 7),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_list, 2, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__import_list, 2, .production_id = 3),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(41),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(41),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_list_repeat1, 2, .production_id = 12),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_list_repeat1, 2, .production_id = 12), SHIFT_REPEAT(96),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_list, 2, .production_id = 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_list_repeat1, 2, .production_id = 11),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(35),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(35),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_import, 3, .production_id = 13),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorated_definition, 2, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 1, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_block, 8, .production_id = 22),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 1, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_block, 7, .production_id = 19),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from_statement, 6, .production_id = 16),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(149),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(24),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(7),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from_statement, 4, .production_id = 14),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from_statement, 4, .production_id = 15),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_body, 1, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorator_expression, 1, .production_id = 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_block, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_block, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_declaration, 5, .production_id = 23),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_declaration, 3, .production_id = 11),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_prefix, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorated_condition_declaration, 2, .production_id = 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorated_filter_declaration, 2, .production_id = 21),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_prefix_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_prefix_repeat1, 2), SHIFT_REPEAT(83),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_body, 1, .production_id = 18),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(119),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative_import, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_list_repeat1, 2, .production_id = 12), SHIFT_REPEAT(88),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(115),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_repr, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorator_expression, 2, .production_id = 9),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_import, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token_string_start = 3,
  ts_external_token__string_content = 4,
  ts_external_token_escape_interpolation = 5,
  ts_external_token_string_end = 6,
  ts_external_token_comment = 7,
  ts_external_token_RBRACK = 8,
  ts_external_token_RPAREN = 9,
  ts_external_token_RBRACE = 10,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_string_start] = sym_string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_escape_interpolation] = sym_escape_interpolation,
  [ts_external_token_string_end] = sym_string_end,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_RPAREN] = anon_sym_RPAREN,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token_escape_interpolation] = true,
    [ts_external_token_string_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RPAREN] = true,
    [ts_external_token_RBRACE] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_escape_interpolation] = true,
    [ts_external_token_string_end] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_tplspec_external_scanner_create(void);
void tree_sitter_tplspec_external_scanner_destroy(void *);
bool tree_sitter_tplspec_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_tplspec_external_scanner_serialize(void *, char *);
void tree_sitter_tplspec_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tplspec() {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_tplspec_external_scanner_create,
      tree_sitter_tplspec_external_scanner_destroy,
      tree_sitter_tplspec_external_scanner_scan,
      tree_sitter_tplspec_external_scanner_serialize,
      tree_sitter_tplspec_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
