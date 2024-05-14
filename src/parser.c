#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 366
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 33

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
  anon_sym_list = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_tuple = 22,
  anon_sym_map = 23,
  anon_sym_PIPE = 24,
  anon_sym_string = 25,
  anon_sym_bool = 26,
  anon_sym_unsigned = 27,
  anon_sym_integer = 28,
  anon_sym_natural = 29,
  anon_sym_COLON_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_EQ_EQ = 33,
  anon_sym_BANG_EQ = 34,
  anon_sym_GT_EQ = 35,
  anon_sym_GT = 36,
  anon_sym_LT_GT = 37,
  anon_sym_in = 38,
  anon_sym_not = 39,
  anon_sym_is = 40,
  anon_sym_and = 41,
  anon_sym_or = 42,
  sym_escape_sequence = 43,
  sym__not_escape_sequence = 44,
  sym_integer = 45,
  sym_float = 46,
  sym_true = 47,
  sym_false = 48,
  sym_none = 49,
  sym_comment = 50,
  sym_line_continuation = 51,
  anon_sym_RBRACE = 52,
  sym__newline = 53,
  sym__indent = 54,
  sym__dedent = 55,
  sym_string_start = 56,
  sym__string_content = 57,
  sym_escape_interpolation = 58,
  sym_string_end = 59,
  sym_module = 60,
  sym__statement = 61,
  sym__import_statement = 62,
  sym_import_statement = 63,
  sym_import_prefix = 64,
  sym_relative_import = 65,
  sym_import_from_statement = 66,
  sym__import_list = 67,
  sym_aliased_import = 68,
  sym__compound_statement = 69,
  sym__container_definition = 70,
  sym__container_repr = 71,
  sym_type_block = 72,
  aux_sym__type_body = 73,
  sym__filter_declaration = 74,
  sym__decorated_filter_declaration = 75,
  sym__condition_declaration = 76,
  sym__decorated_condition_declaration = 77,
  sym_enum_block = 78,
  aux_sym__enum_body = 79,
  sym__enum_case = 80,
  sym__decorated_enum_case = 81,
  sym_struct_block = 82,
  aux_sym__struct_body = 83,
  sym__struct_field = 84,
  sym__decorated_struct_field = 85,
  sym__decorated_definition = 86,
  sym_decorator = 87,
  sym__decorator_expression = 88,
  sym_dotted_name = 89,
  sym_type = 90,
  sym__list_type = 91,
  sym__tuple_type = 92,
  sym__map_type = 93,
  sym_optional_type = 94,
  sym__builtin_types = 95,
  sym_primary_expression = 96,
  sym_argument_list = 97,
  sym_argument = 98,
  sym__argument_block = 99,
  sym__literal = 100,
  sym_string = 101,
  sym_concatenated_string = 102,
  sym_string_content = 103,
  aux_sym_module_repeat1 = 104,
  aux_sym_module_repeat2 = 105,
  aux_sym_import_prefix_repeat1 = 106,
  aux_sym__import_list_repeat1 = 107,
  aux_sym_dotted_name_repeat1 = 108,
  aux_sym__tuple_type_repeat1 = 109,
  aux_sym_argument_list_repeat1 = 110,
  aux_sym_string_repeat1 = 111,
  aux_sym_concatenated_string_repeat1 = 112,
  aux_sym_string_content_repeat1 = 113,
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
  [anon_sym_list] = "list",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_tuple] = "tuple",
  [anon_sym_map] = "map",
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
  [sym_enum_block] = "enum_block",
  [aux_sym__enum_body] = "_enum_body",
  [sym__enum_case] = "_enum_case",
  [sym__decorated_enum_case] = "_decorated_enum_case",
  [sym_struct_block] = "struct_block",
  [aux_sym__struct_body] = "_struct_body",
  [sym__struct_field] = "_struct_field",
  [sym__decorated_struct_field] = "_decorated_struct_field",
  [sym__decorated_definition] = "_decorated_definition",
  [sym_decorator] = "decorator",
  [sym__decorator_expression] = "_decorator_expression",
  [sym_dotted_name] = "dotted_name",
  [sym_type] = "type",
  [sym__list_type] = "_list_type",
  [sym__tuple_type] = "_tuple_type",
  [sym__map_type] = "_map_type",
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
  [aux_sym__tuple_type_repeat1] = "_tuple_type_repeat1",
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
  [anon_sym_list] = anon_sym_list,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_map] = anon_sym_map,
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
  [sym_enum_block] = sym_enum_block,
  [aux_sym__enum_body] = aux_sym__enum_body,
  [sym__enum_case] = sym__enum_case,
  [sym__decorated_enum_case] = sym__decorated_enum_case,
  [sym_struct_block] = sym_struct_block,
  [aux_sym__struct_body] = aux_sym__struct_body,
  [sym__struct_field] = sym__struct_field,
  [sym__decorated_struct_field] = sym__decorated_struct_field,
  [sym__decorated_definition] = sym__decorated_definition,
  [sym_decorator] = sym_decorator,
  [sym__decorator_expression] = sym__decorator_expression,
  [sym_dotted_name] = sym_dotted_name,
  [sym_type] = sym_type,
  [sym__list_type] = sym__list_type,
  [sym__tuple_type] = sym__tuple_type,
  [sym__map_type] = sym__map_type,
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
  [aux_sym__tuple_type_repeat1] = aux_sym__tuple_type_repeat1,
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
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
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
  [sym_enum_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__enum_body] = {
    .visible = false,
    .named = false,
  },
  [sym__enum_case] = {
    .visible = false,
    .named = true,
  },
  [sym__decorated_enum_case] = {
    .visible = false,
    .named = true,
  },
  [sym_struct_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__struct_body] = {
    .visible = false,
    .named = false,
  },
  [sym__struct_field] = {
    .visible = false,
    .named = true,
  },
  [sym__decorated_struct_field] = {
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
  [sym__list_type] = {
    .visible = false,
    .named = true,
  },
  [sym__tuple_type] = {
    .visible = false,
    .named = true,
  },
  [sym__map_type] = {
    .visible = false,
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
  [aux_sym__tuple_type_repeat1] = {
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
  field_enum = 5,
  field_function = 6,
  field_module_name = 7,
  field_name = 8,
  field_repr = 9,
  field_return = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_definition] = "definition",
  [field_enum] = "enum",
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
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 1},
  [21] = {.index = 29, .length = 4},
  [22] = {.index = 33, .length = 4},
  [23] = {.index = 37, .length = 2},
  [24] = {.index = 39, .length = 3},
  [25] = {.index = 42, .length = 2},
  [26] = {.index = 44, .length = 1},
  [27] = {.index = 45, .length = 2},
  [28] = {.index = 47, .length = 2},
  [29] = {.index = 49, .length = 5},
  [30] = {.index = 54, .length = 1},
  [31] = {.index = 55, .length = 4},
  [32] = {.index = 59, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_definition, 0, .inherited = true},
  [1] =
    {field_name, 1, .inherited = true},
  [2] =
    {field_name, 0},
  [3] =
    {field_enum, 0},
  [4] =
    {field_function, 0},
  [5] =
    {field_enum, 0, .inherited = true},
  [6] =
    {field_definition, 1},
  [7] =
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [9] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
  [11] =
    {field_arguments, 1, .inherited = true},
    {field_function, 1, .inherited = true},
  [13] =
    {field_arguments, 1},
    {field_function, 0},
  [15] =
    {field_definition, 2, .inherited = true},
  [16] =
    {field_name, 1},
  [17] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [19] =
    {field_alias, 2},
    {field_name, 0},
  [21] =
    {field_module_name, 1},
  [22] =
    {field_module_name, 1},
    {field_name, 3, .inherited = true},
  [24] =
    {field_module_name, 1},
    {field_name, 4, .inherited = true},
  [26] =
    {field_name, 0, .inherited = true},
    {field_return, 0, .inherited = true},
  [28] =
    {field_name, 0, .inherited = true},
  [29] =
    {field_body, 5},
    {field_name, 1},
    {field_name, 5, .inherited = true},
    {field_return, 5, .inherited = true},
  [33] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_return, 0, .inherited = true},
    {field_return, 1, .inherited = true},
  [37] =
    {field_name, 1, .inherited = true},
    {field_return, 1, .inherited = true},
  [39] =
    {field_body, 5},
    {field_enum, 5, .inherited = true},
    {field_name, 1},
  [42] =
    {field_enum, 0, .inherited = true},
    {field_enum, 1, .inherited = true},
  [44] =
    {field_enum, 1, .inherited = true},
  [45] =
    {field_body, 5},
    {field_name, 1},
  [47] =
    {field_enum, 4, .inherited = true},
    {field_name, 0},
  [49] =
    {field_body, 6},
    {field_name, 1},
    {field_name, 6, .inherited = true},
    {field_repr, 2},
    {field_return, 6, .inherited = true},
  [54] =
    {field_enum, 2, .inherited = true},
  [55] =
    {field_body, 6},
    {field_enum, 6, .inherited = true},
    {field_name, 1},
    {field_repr, 2},
  [59] =
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
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 6,
  [11] = 11,
  [12] = 6,
  [13] = 6,
  [14] = 8,
  [15] = 8,
  [16] = 6,
  [17] = 8,
  [18] = 8,
  [19] = 6,
  [20] = 20,
  [21] = 8,
  [22] = 7,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 24,
  [29] = 23,
  [30] = 24,
  [31] = 27,
  [32] = 27,
  [33] = 27,
  [34] = 34,
  [35] = 26,
  [36] = 24,
  [37] = 24,
  [38] = 26,
  [39] = 24,
  [40] = 23,
  [41] = 26,
  [42] = 23,
  [43] = 26,
  [44] = 27,
  [45] = 23,
  [46] = 26,
  [47] = 27,
  [48] = 48,
  [49] = 48,
  [50] = 48,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 58,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 58,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 75,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 75,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 80,
  [89] = 75,
  [90] = 80,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 87,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 110,
  [114] = 114,
  [115] = 112,
  [116] = 116,
  [117] = 117,
  [118] = 111,
  [119] = 119,
  [120] = 120,
  [121] = 54,
  [122] = 122,
  [123] = 110,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 57,
  [128] = 128,
  [129] = 116,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 51,
  [134] = 111,
  [135] = 135,
  [136] = 136,
  [137] = 112,
  [138] = 138,
  [139] = 139,
  [140] = 128,
  [141] = 141,
  [142] = 132,
  [143] = 122,
  [144] = 124,
  [145] = 125,
  [146] = 146,
  [147] = 126,
  [148] = 148,
  [149] = 149,
  [150] = 135,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 130,
  [156] = 156,
  [157] = 130,
  [158] = 135,
  [159] = 159,
  [160] = 160,
  [161] = 132,
  [162] = 122,
  [163] = 163,
  [164] = 164,
  [165] = 128,
  [166] = 112,
  [167] = 167,
  [168] = 126,
  [169] = 169,
  [170] = 125,
  [171] = 128,
  [172] = 124,
  [173] = 126,
  [174] = 125,
  [175] = 68,
  [176] = 87,
  [177] = 111,
  [178] = 124,
  [179] = 122,
  [180] = 66,
  [181] = 156,
  [182] = 132,
  [183] = 135,
  [184] = 130,
  [185] = 110,
  [186] = 60,
  [187] = 187,
  [188] = 146,
  [189] = 189,
  [190] = 62,
  [191] = 189,
  [192] = 192,
  [193] = 64,
  [194] = 130,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 124,
  [199] = 199,
  [200] = 122,
  [201] = 132,
  [202] = 72,
  [203] = 203,
  [204] = 73,
  [205] = 74,
  [206] = 206,
  [207] = 195,
  [208] = 70,
  [209] = 71,
  [210] = 210,
  [211] = 196,
  [212] = 212,
  [213] = 213,
  [214] = 210,
  [215] = 213,
  [216] = 216,
  [217] = 128,
  [218] = 218,
  [219] = 219,
  [220] = 152,
  [221] = 212,
  [222] = 195,
  [223] = 218,
  [224] = 219,
  [225] = 196,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 195,
  [230] = 216,
  [231] = 152,
  [232] = 196,
  [233] = 233,
  [234] = 234,
  [235] = 152,
  [236] = 125,
  [237] = 156,
  [238] = 228,
  [239] = 189,
  [240] = 195,
  [241] = 196,
  [242] = 126,
  [243] = 135,
  [244] = 244,
  [245] = 245,
  [246] = 195,
  [247] = 196,
  [248] = 125,
  [249] = 126,
  [250] = 250,
  [251] = 251,
  [252] = 228,
  [253] = 253,
  [254] = 250,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 116,
  [260] = 132,
  [261] = 122,
  [262] = 250,
  [263] = 124,
  [264] = 264,
  [265] = 265,
  [266] = 152,
  [267] = 135,
  [268] = 258,
  [269] = 250,
  [270] = 216,
  [271] = 264,
  [272] = 265,
  [273] = 130,
  [274] = 189,
  [275] = 257,
  [276] = 78,
  [277] = 77,
  [278] = 156,
  [279] = 250,
  [280] = 250,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 164,
  [293] = 290,
  [294] = 294,
  [295] = 289,
  [296] = 284,
  [297] = 297,
  [298] = 298,
  [299] = 289,
  [300] = 290,
  [301] = 301,
  [302] = 302,
  [303] = 286,
  [304] = 304,
  [305] = 305,
  [306] = 284,
  [307] = 289,
  [308] = 290,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 289,
  [314] = 284,
  [315] = 290,
  [316] = 316,
  [317] = 317,
  [318] = 290,
  [319] = 319,
  [320] = 258,
  [321] = 284,
  [322] = 322,
  [323] = 323,
  [324] = 323,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 323,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 297,
  [334] = 301,
  [335] = 335,
  [336] = 286,
  [337] = 192,
  [338] = 338,
  [339] = 291,
  [340] = 228,
  [341] = 283,
  [342] = 281,
  [343] = 319,
  [344] = 283,
  [345] = 281,
  [346] = 319,
  [347] = 283,
  [348] = 281,
  [349] = 319,
  [350] = 283,
  [351] = 281,
  [352] = 319,
  [353] = 283,
  [354] = 281,
  [355] = 319,
  [356] = 356,
  [357] = 284,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 294,
  [362] = 294,
  [363] = 294,
  [364] = 294,
  [365] = 294,
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
      if (eof) ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(109)
      if (lookahead == '\r') SKIP(109)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == '}') ADVANCE(257);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(256);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(235);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(226);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(242);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == '{') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == '}') ADVANCE(235);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (!eof && (lookahead == 0 ||
          lookahead == '\n')) ADVANCE(256);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 88:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 89:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 90:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(90)
      if (lookahead == '\r') SKIP(90)
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(166);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 91:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(91)
      if (lookahead == '\r') SKIP(91)
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == 'F') ADVANCE(141);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == 'T') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 92:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(92)
      if (lookahead == '\r') SKIP(92)
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == '|') ADVANCE(212);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 93:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(93)
      if (lookahead == '\r') SKIP(93)
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(164);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(242);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 109:
      if (eof) ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(109)
      if (lookahead == '\r') SKIP(109)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == '}') ADVANCE(257);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 110:
      if (eof) ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(110)
      if (lookahead == '\r') SKIP(110)
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '|') ADVANCE(212);
      END_STATE();
    case 111:
      if (eof) ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(111)
      if (lookahead == '\r') SKIP(111)
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == 't') ADVANCE(202);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_wildcard_import);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(222);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_enum);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(225);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_struct);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(203);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(195);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(203);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(203);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(203);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(194);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(218);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(254);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(214);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(169);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(154);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(167);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(216);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(221);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(189);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(118);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(178);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(191);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(187);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(152);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(200);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(147);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(163);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(170);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(211);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(160);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(174);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(150);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(219);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(157);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(140);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(193);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(197);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(156);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(192);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(149);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(114);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(142);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(177);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(182);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(162);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(148);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(179);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_list);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_map);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_bool);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_natural);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_natural);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (!eof && (lookahead == 0)) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(101);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(6);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(7);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(94);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(248);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_none);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 110, .external_lex_state = 2},
  [2] = {.lex_state = 110, .external_lex_state = 2},
  [3] = {.lex_state = 110, .external_lex_state = 2},
  [4] = {.lex_state = 110, .external_lex_state = 2},
  [5] = {.lex_state = 110, .external_lex_state = 2},
  [6] = {.lex_state = 90, .external_lex_state = 3},
  [7] = {.lex_state = 90, .external_lex_state = 2},
  [8] = {.lex_state = 90, .external_lex_state = 3},
  [9] = {.lex_state = 90, .external_lex_state = 2},
  [10] = {.lex_state = 90, .external_lex_state = 3},
  [11] = {.lex_state = 90, .external_lex_state = 2},
  [12] = {.lex_state = 90, .external_lex_state = 3},
  [13] = {.lex_state = 90, .external_lex_state = 3},
  [14] = {.lex_state = 90, .external_lex_state = 3},
  [15] = {.lex_state = 90, .external_lex_state = 3},
  [16] = {.lex_state = 90, .external_lex_state = 3},
  [17] = {.lex_state = 90, .external_lex_state = 3},
  [18] = {.lex_state = 90, .external_lex_state = 3},
  [19] = {.lex_state = 90, .external_lex_state = 3},
  [20] = {.lex_state = 90, .external_lex_state = 2},
  [21] = {.lex_state = 90, .external_lex_state = 3},
  [22] = {.lex_state = 90, .external_lex_state = 2},
  [23] = {.lex_state = 90, .external_lex_state = 2},
  [24] = {.lex_state = 90, .external_lex_state = 2},
  [25] = {.lex_state = 90, .external_lex_state = 2},
  [26] = {.lex_state = 90, .external_lex_state = 2},
  [27] = {.lex_state = 90, .external_lex_state = 2},
  [28] = {.lex_state = 90, .external_lex_state = 2},
  [29] = {.lex_state = 90, .external_lex_state = 2},
  [30] = {.lex_state = 90, .external_lex_state = 2},
  [31] = {.lex_state = 90, .external_lex_state = 2},
  [32] = {.lex_state = 90, .external_lex_state = 2},
  [33] = {.lex_state = 90, .external_lex_state = 2},
  [34] = {.lex_state = 90, .external_lex_state = 2},
  [35] = {.lex_state = 90, .external_lex_state = 2},
  [36] = {.lex_state = 90, .external_lex_state = 2},
  [37] = {.lex_state = 90, .external_lex_state = 2},
  [38] = {.lex_state = 90, .external_lex_state = 2},
  [39] = {.lex_state = 90, .external_lex_state = 2},
  [40] = {.lex_state = 90, .external_lex_state = 2},
  [41] = {.lex_state = 90, .external_lex_state = 2},
  [42] = {.lex_state = 90, .external_lex_state = 2},
  [43] = {.lex_state = 90, .external_lex_state = 2},
  [44] = {.lex_state = 90, .external_lex_state = 2},
  [45] = {.lex_state = 90, .external_lex_state = 2},
  [46] = {.lex_state = 90, .external_lex_state = 2},
  [47] = {.lex_state = 90, .external_lex_state = 2},
  [48] = {.lex_state = 91, .external_lex_state = 4},
  [49] = {.lex_state = 91, .external_lex_state = 4},
  [50] = {.lex_state = 91, .external_lex_state = 4},
  [51] = {.lex_state = 110, .external_lex_state = 2},
  [52] = {.lex_state = 110, .external_lex_state = 5},
  [53] = {.lex_state = 110, .external_lex_state = 6},
  [54] = {.lex_state = 110, .external_lex_state = 2},
  [55] = {.lex_state = 110, .external_lex_state = 5},
  [56] = {.lex_state = 110, .external_lex_state = 5},
  [57] = {.lex_state = 110, .external_lex_state = 2},
  [58] = {.lex_state = 91, .external_lex_state = 4},
  [59] = {.lex_state = 110, .external_lex_state = 2},
  [60] = {.lex_state = 110, .external_lex_state = 2},
  [61] = {.lex_state = 91, .external_lex_state = 4},
  [62] = {.lex_state = 111, .external_lex_state = 2},
  [63] = {.lex_state = 110, .external_lex_state = 2},
  [64] = {.lex_state = 111, .external_lex_state = 2},
  [65] = {.lex_state = 110, .external_lex_state = 2},
  [66] = {.lex_state = 111, .external_lex_state = 2},
  [67] = {.lex_state = 91, .external_lex_state = 4},
  [68] = {.lex_state = 110, .external_lex_state = 2},
  [69] = {.lex_state = 91, .external_lex_state = 4},
  [70] = {.lex_state = 110, .external_lex_state = 2},
  [71] = {.lex_state = 110, .external_lex_state = 2},
  [72] = {.lex_state = 110, .external_lex_state = 2},
  [73] = {.lex_state = 110, .external_lex_state = 2},
  [74] = {.lex_state = 110, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 7},
  [76] = {.lex_state = 92, .external_lex_state = 5},
  [77] = {.lex_state = 110, .external_lex_state = 2},
  [78] = {.lex_state = 110, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 7},
  [80] = {.lex_state = 0, .external_lex_state = 7},
  [81] = {.lex_state = 92, .external_lex_state = 5},
  [82] = {.lex_state = 0, .external_lex_state = 7},
  [83] = {.lex_state = 0, .external_lex_state = 7},
  [84] = {.lex_state = 92, .external_lex_state = 5},
  [85] = {.lex_state = 0, .external_lex_state = 7},
  [86] = {.lex_state = 92, .external_lex_state = 5},
  [87] = {.lex_state = 110, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 7},
  [89] = {.lex_state = 0, .external_lex_state = 7},
  [90] = {.lex_state = 0, .external_lex_state = 7},
  [91] = {.lex_state = 92, .external_lex_state = 5},
  [92] = {.lex_state = 92, .external_lex_state = 2},
  [93] = {.lex_state = 110, .external_lex_state = 2},
  [94] = {.lex_state = 110, .external_lex_state = 2},
  [95] = {.lex_state = 92, .external_lex_state = 2},
  [96] = {.lex_state = 110, .external_lex_state = 2},
  [97] = {.lex_state = 110, .external_lex_state = 6},
  [98] = {.lex_state = 110, .external_lex_state = 2},
  [99] = {.lex_state = 110, .external_lex_state = 2},
  [100] = {.lex_state = 110, .external_lex_state = 2},
  [101] = {.lex_state = 110, .external_lex_state = 2},
  [102] = {.lex_state = 110, .external_lex_state = 2},
  [103] = {.lex_state = 92, .external_lex_state = 2},
  [104] = {.lex_state = 110, .external_lex_state = 2},
  [105] = {.lex_state = 110, .external_lex_state = 2},
  [106] = {.lex_state = 110, .external_lex_state = 2},
  [107] = {.lex_state = 110, .external_lex_state = 2},
  [108] = {.lex_state = 110, .external_lex_state = 2},
  [109] = {.lex_state = 110, .external_lex_state = 2},
  [110] = {.lex_state = 92, .external_lex_state = 8},
  [111] = {.lex_state = 92, .external_lex_state = 9},
  [112] = {.lex_state = 92, .external_lex_state = 9},
  [113] = {.lex_state = 92, .external_lex_state = 9},
  [114] = {.lex_state = 0, .external_lex_state = 7},
  [115] = {.lex_state = 92, .external_lex_state = 8},
  [116] = {.lex_state = 110, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 7},
  [118] = {.lex_state = 92, .external_lex_state = 8},
  [119] = {.lex_state = 92, .external_lex_state = 2},
  [120] = {.lex_state = 92, .external_lex_state = 2},
  [121] = {.lex_state = 110, .external_lex_state = 10},
  [122] = {.lex_state = 110, .external_lex_state = 5},
  [123] = {.lex_state = 110, .external_lex_state = 11},
  [124] = {.lex_state = 110, .external_lex_state = 5},
  [125] = {.lex_state = 110, .external_lex_state = 5},
  [126] = {.lex_state = 110, .external_lex_state = 5},
  [127] = {.lex_state = 110, .external_lex_state = 10},
  [128] = {.lex_state = 110, .external_lex_state = 5},
  [129] = {.lex_state = 110, .external_lex_state = 6},
  [130] = {.lex_state = 110, .external_lex_state = 5},
  [131] = {.lex_state = 92, .external_lex_state = 2},
  [132] = {.lex_state = 110, .external_lex_state = 5},
  [133] = {.lex_state = 110, .external_lex_state = 10},
  [134] = {.lex_state = 110, .external_lex_state = 11},
  [135] = {.lex_state = 110, .external_lex_state = 5},
  [136] = {.lex_state = 92, .external_lex_state = 2},
  [137] = {.lex_state = 110, .external_lex_state = 11},
  [138] = {.lex_state = 110, .external_lex_state = 5},
  [139] = {.lex_state = 92, .external_lex_state = 2},
  [140] = {.lex_state = 110, .external_lex_state = 10},
  [141] = {.lex_state = 92, .external_lex_state = 6},
  [142] = {.lex_state = 92, .external_lex_state = 5},
  [143] = {.lex_state = 92, .external_lex_state = 5},
  [144] = {.lex_state = 92, .external_lex_state = 5},
  [145] = {.lex_state = 92, .external_lex_state = 5},
  [146] = {.lex_state = 92, .external_lex_state = 10},
  [147] = {.lex_state = 92, .external_lex_state = 5},
  [148] = {.lex_state = 110, .external_lex_state = 5},
  [149] = {.lex_state = 110, .external_lex_state = 5},
  [150] = {.lex_state = 92, .external_lex_state = 5},
  [151] = {.lex_state = 110, .external_lex_state = 5},
  [152] = {.lex_state = 110, .external_lex_state = 5},
  [153] = {.lex_state = 93, .external_lex_state = 2},
  [154] = {.lex_state = 93, .external_lex_state = 2},
  [155] = {.lex_state = 92, .external_lex_state = 5},
  [156] = {.lex_state = 92, .external_lex_state = 8},
  [157] = {.lex_state = 110, .external_lex_state = 10},
  [158] = {.lex_state = 110, .external_lex_state = 10},
  [159] = {.lex_state = 92, .external_lex_state = 5},
  [160] = {.lex_state = 110, .external_lex_state = 5},
  [161] = {.lex_state = 110, .external_lex_state = 6},
  [162] = {.lex_state = 110, .external_lex_state = 6},
  [163] = {.lex_state = 110, .external_lex_state = 5},
  [164] = {.lex_state = 110, .external_lex_state = 5},
  [165] = {.lex_state = 92, .external_lex_state = 5},
  [166] = {.lex_state = 110, .external_lex_state = 4},
  [167] = {.lex_state = 110, .external_lex_state = 5},
  [168] = {.lex_state = 110, .external_lex_state = 6},
  [169] = {.lex_state = 110, .external_lex_state = 5},
  [170] = {.lex_state = 110, .external_lex_state = 6},
  [171] = {.lex_state = 110, .external_lex_state = 6},
  [172] = {.lex_state = 110, .external_lex_state = 6},
  [173] = {.lex_state = 110, .external_lex_state = 10},
  [174] = {.lex_state = 110, .external_lex_state = 10},
  [175] = {.lex_state = 110, .external_lex_state = 10},
  [176] = {.lex_state = 92, .external_lex_state = 2},
  [177] = {.lex_state = 110, .external_lex_state = 4},
  [178] = {.lex_state = 110, .external_lex_state = 10},
  [179] = {.lex_state = 110, .external_lex_state = 10},
  [180] = {.lex_state = 92, .external_lex_state = 10},
  [181] = {.lex_state = 92, .external_lex_state = 9},
  [182] = {.lex_state = 110, .external_lex_state = 10},
  [183] = {.lex_state = 110, .external_lex_state = 6},
  [184] = {.lex_state = 110, .external_lex_state = 6},
  [185] = {.lex_state = 110, .external_lex_state = 4},
  [186] = {.lex_state = 110, .external_lex_state = 10},
  [187] = {.lex_state = 92, .external_lex_state = 2},
  [188] = {.lex_state = 92, .external_lex_state = 10},
  [189] = {.lex_state = 92, .external_lex_state = 9},
  [190] = {.lex_state = 92, .external_lex_state = 10},
  [191] = {.lex_state = 92, .external_lex_state = 8},
  [192] = {.lex_state = 110, .external_lex_state = 5},
  [193] = {.lex_state = 92, .external_lex_state = 10},
  [194] = {.lex_state = 110, .external_lex_state = 2},
  [195] = {.lex_state = 110, .external_lex_state = 3},
  [196] = {.lex_state = 110, .external_lex_state = 3},
  [197] = {.lex_state = 93, .external_lex_state = 2},
  [198] = {.lex_state = 110, .external_lex_state = 2},
  [199] = {.lex_state = 110, .external_lex_state = 2},
  [200] = {.lex_state = 110, .external_lex_state = 2},
  [201] = {.lex_state = 110, .external_lex_state = 2},
  [202] = {.lex_state = 110, .external_lex_state = 10},
  [203] = {.lex_state = 110, .external_lex_state = 2},
  [204] = {.lex_state = 110, .external_lex_state = 10},
  [205] = {.lex_state = 110, .external_lex_state = 10},
  [206] = {.lex_state = 110, .external_lex_state = 3},
  [207] = {.lex_state = 110, .external_lex_state = 3},
  [208] = {.lex_state = 110, .external_lex_state = 10},
  [209] = {.lex_state = 110, .external_lex_state = 10},
  [210] = {.lex_state = 92, .external_lex_state = 2},
  [211] = {.lex_state = 110, .external_lex_state = 3},
  [212] = {.lex_state = 92, .external_lex_state = 10},
  [213] = {.lex_state = 110, .external_lex_state = 10},
  [214] = {.lex_state = 92, .external_lex_state = 2},
  [215] = {.lex_state = 110, .external_lex_state = 6},
  [216] = {.lex_state = 110, .external_lex_state = 6},
  [217] = {.lex_state = 110, .external_lex_state = 2},
  [218] = {.lex_state = 92, .external_lex_state = 10},
  [219] = {.lex_state = 110, .external_lex_state = 10},
  [220] = {.lex_state = 110, .external_lex_state = 6},
  [221] = {.lex_state = 92, .external_lex_state = 6},
  [222] = {.lex_state = 110, .external_lex_state = 3},
  [223] = {.lex_state = 92, .external_lex_state = 6},
  [224] = {.lex_state = 110, .external_lex_state = 6},
  [225] = {.lex_state = 110, .external_lex_state = 3},
  [226] = {.lex_state = 92, .external_lex_state = 5},
  [227] = {.lex_state = 92, .external_lex_state = 5},
  [228] = {.lex_state = 92, .external_lex_state = 5},
  [229] = {.lex_state = 110, .external_lex_state = 3},
  [230] = {.lex_state = 110, .external_lex_state = 10},
  [231] = {.lex_state = 92, .external_lex_state = 5},
  [232] = {.lex_state = 110, .external_lex_state = 3},
  [233] = {.lex_state = 92, .external_lex_state = 5},
  [234] = {.lex_state = 92, .external_lex_state = 5},
  [235] = {.lex_state = 110, .external_lex_state = 10},
  [236] = {.lex_state = 110, .external_lex_state = 2},
  [237] = {.lex_state = 110, .external_lex_state = 11},
  [238] = {.lex_state = 92, .external_lex_state = 6},
  [239] = {.lex_state = 110, .external_lex_state = 11},
  [240] = {.lex_state = 110, .external_lex_state = 3},
  [241] = {.lex_state = 110, .external_lex_state = 3},
  [242] = {.lex_state = 110, .external_lex_state = 2},
  [243] = {.lex_state = 110, .external_lex_state = 2},
  [244] = {.lex_state = 92, .external_lex_state = 5},
  [245] = {.lex_state = 92, .external_lex_state = 5},
  [246] = {.lex_state = 110, .external_lex_state = 3},
  [247] = {.lex_state = 110, .external_lex_state = 3},
  [248] = {.lex_state = 110, .external_lex_state = 3},
  [249] = {.lex_state = 110, .external_lex_state = 3},
  [250] = {.lex_state = 110, .external_lex_state = 3},
  [251] = {.lex_state = 92, .external_lex_state = 6},
  [252] = {.lex_state = 110, .external_lex_state = 10},
  [253] = {.lex_state = 110, .external_lex_state = 3},
  [254] = {.lex_state = 110, .external_lex_state = 3},
  [255] = {.lex_state = 110, .external_lex_state = 2},
  [256] = {.lex_state = 110, .external_lex_state = 2},
  [257] = {.lex_state = 92, .external_lex_state = 2},
  [258] = {.lex_state = 110, .external_lex_state = 10},
  [259] = {.lex_state = 92, .external_lex_state = 2},
  [260] = {.lex_state = 110, .external_lex_state = 3},
  [261] = {.lex_state = 110, .external_lex_state = 3},
  [262] = {.lex_state = 110, .external_lex_state = 3},
  [263] = {.lex_state = 110, .external_lex_state = 3},
  [264] = {.lex_state = 110, .external_lex_state = 2},
  [265] = {.lex_state = 110, .external_lex_state = 6},
  [266] = {.lex_state = 110, .external_lex_state = 2},
  [267] = {.lex_state = 110, .external_lex_state = 3},
  [268] = {.lex_state = 110, .external_lex_state = 6},
  [269] = {.lex_state = 110, .external_lex_state = 3},
  [270] = {.lex_state = 110, .external_lex_state = 2},
  [271] = {.lex_state = 110, .external_lex_state = 2},
  [272] = {.lex_state = 110, .external_lex_state = 10},
  [273] = {.lex_state = 110, .external_lex_state = 3},
  [274] = {.lex_state = 110, .external_lex_state = 4},
  [275] = {.lex_state = 92, .external_lex_state = 2},
  [276] = {.lex_state = 110, .external_lex_state = 10},
  [277] = {.lex_state = 110, .external_lex_state = 10},
  [278] = {.lex_state = 110, .external_lex_state = 4},
  [279] = {.lex_state = 110, .external_lex_state = 3},
  [280] = {.lex_state = 110, .external_lex_state = 3},
  [281] = {.lex_state = 110, .external_lex_state = 2},
  [282] = {.lex_state = 110, .external_lex_state = 12},
  [283] = {.lex_state = 110, .external_lex_state = 2},
  [284] = {.lex_state = 110, .external_lex_state = 3},
  [285] = {.lex_state = 110, .external_lex_state = 12},
  [286] = {.lex_state = 110, .external_lex_state = 6},
  [287] = {.lex_state = 110, .external_lex_state = 2},
  [288] = {.lex_state = 110, .external_lex_state = 10},
  [289] = {.lex_state = 110, .external_lex_state = 2},
  [290] = {.lex_state = 110, .external_lex_state = 3},
  [291] = {.lex_state = 110, .external_lex_state = 10},
  [292] = {.lex_state = 110, .external_lex_state = 2},
  [293] = {.lex_state = 110, .external_lex_state = 3},
  [294] = {.lex_state = 110, .external_lex_state = 2},
  [295] = {.lex_state = 110, .external_lex_state = 2},
  [296] = {.lex_state = 110, .external_lex_state = 3},
  [297] = {.lex_state = 92, .external_lex_state = 2},
  [298] = {.lex_state = 110, .external_lex_state = 12},
  [299] = {.lex_state = 110, .external_lex_state = 2},
  [300] = {.lex_state = 110, .external_lex_state = 3},
  [301] = {.lex_state = 92, .external_lex_state = 2},
  [302] = {.lex_state = 110, .external_lex_state = 6},
  [303] = {.lex_state = 110, .external_lex_state = 6},
  [304] = {.lex_state = 110, .external_lex_state = 12},
  [305] = {.lex_state = 92, .external_lex_state = 2},
  [306] = {.lex_state = 110, .external_lex_state = 3},
  [307] = {.lex_state = 110, .external_lex_state = 2},
  [308] = {.lex_state = 110, .external_lex_state = 3},
  [309] = {.lex_state = 92, .external_lex_state = 2},
  [310] = {.lex_state = 110, .external_lex_state = 6},
  [311] = {.lex_state = 110, .external_lex_state = 2},
  [312] = {.lex_state = 110, .external_lex_state = 12},
  [313] = {.lex_state = 110, .external_lex_state = 2},
  [314] = {.lex_state = 110, .external_lex_state = 3},
  [315] = {.lex_state = 110, .external_lex_state = 3},
  [316] = {.lex_state = 92, .external_lex_state = 2},
  [317] = {.lex_state = 110, .external_lex_state = 10},
  [318] = {.lex_state = 110, .external_lex_state = 3},
  [319] = {.lex_state = 110, .external_lex_state = 2},
  [320] = {.lex_state = 110, .external_lex_state = 2},
  [321] = {.lex_state = 110, .external_lex_state = 3},
  [322] = {.lex_state = 110, .external_lex_state = 6},
  [323] = {.lex_state = 110, .external_lex_state = 2},
  [324] = {.lex_state = 110, .external_lex_state = 2},
  [325] = {.lex_state = 110, .external_lex_state = 6},
  [326] = {.lex_state = 110, .external_lex_state = 2},
  [327] = {.lex_state = 110, .external_lex_state = 6},
  [328] = {.lex_state = 110, .external_lex_state = 2},
  [329] = {.lex_state = 110, .external_lex_state = 2},
  [330] = {.lex_state = 110, .external_lex_state = 6},
  [331] = {.lex_state = 92, .external_lex_state = 2},
  [332] = {.lex_state = 110, .external_lex_state = 2},
  [333] = {.lex_state = 92, .external_lex_state = 2},
  [334] = {.lex_state = 92, .external_lex_state = 2},
  [335] = {.lex_state = 110, .external_lex_state = 2},
  [336] = {.lex_state = 110, .external_lex_state = 6},
  [337] = {.lex_state = 110, .external_lex_state = 2},
  [338] = {.lex_state = 110, .external_lex_state = 2},
  [339] = {.lex_state = 110, .external_lex_state = 10},
  [340] = {.lex_state = 110, .external_lex_state = 2},
  [341] = {.lex_state = 110, .external_lex_state = 2},
  [342] = {.lex_state = 110, .external_lex_state = 2},
  [343] = {.lex_state = 110, .external_lex_state = 2},
  [344] = {.lex_state = 110, .external_lex_state = 2},
  [345] = {.lex_state = 110, .external_lex_state = 2},
  [346] = {.lex_state = 110, .external_lex_state = 2},
  [347] = {.lex_state = 110, .external_lex_state = 2},
  [348] = {.lex_state = 110, .external_lex_state = 2},
  [349] = {.lex_state = 110, .external_lex_state = 2},
  [350] = {.lex_state = 110, .external_lex_state = 2},
  [351] = {.lex_state = 110, .external_lex_state = 2},
  [352] = {.lex_state = 110, .external_lex_state = 2},
  [353] = {.lex_state = 110, .external_lex_state = 2},
  [354] = {.lex_state = 110, .external_lex_state = 2},
  [355] = {.lex_state = 110, .external_lex_state = 2},
  [356] = {.lex_state = 110, .external_lex_state = 2},
  [357] = {.lex_state = 110, .external_lex_state = 3},
  [358] = {.lex_state = 110, .external_lex_state = 2},
  [359] = {.lex_state = 92, .external_lex_state = 2},
  [360] = {.lex_state = 92, .external_lex_state = 2},
  [361] = {.lex_state = 110, .external_lex_state = 2},
  [362] = {.lex_state = 110, .external_lex_state = 2},
  [363] = {.lex_state = 110, .external_lex_state = 2},
  [364] = {.lex_state = 110, .external_lex_state = 2},
  [365] = {.lex_state = 110, .external_lex_state = 2},
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
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
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
    [sym_module] = STATE(358),
    [sym__statement] = STATE(102),
    [sym__import_statement] = STATE(102),
    [sym_import_statement] = STATE(102),
    [sym_import_from_statement] = STATE(102),
    [sym__compound_statement] = STATE(104),
    [sym__container_definition] = STATE(104),
    [sym_type_block] = STATE(104),
    [sym_enum_block] = STATE(104),
    [sym_struct_block] = STATE(104),
    [sym__decorated_definition] = STATE(106),
    [sym_decorator] = STATE(53),
    [aux_sym_module_repeat1] = STATE(53),
    [aux_sym_module_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_from,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_AT,
    STATE(3), 1,
      aux_sym_module_repeat2,
    STATE(106), 1,
      sym__decorated_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(59), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(102), 4,
      sym__statement,
      sym__import_statement,
      sym_import_statement,
      sym_import_from_statement,
    STATE(104), 5,
      sym__compound_statement,
      sym__container_definition,
      sym_type_block,
      sym_enum_block,
      sym_struct_block,
  [49] = 13,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_import,
    ACTIONS(30), 1,
      anon_sym_from,
    ACTIONS(33), 1,
      anon_sym_type,
    ACTIONS(36), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_struct,
    ACTIONS(42), 1,
      anon_sym_AT,
    STATE(3), 1,
      aux_sym_module_repeat2,
    STATE(106), 1,
      sym__decorated_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(59), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(102), 4,
      sym__statement,
      sym__import_statement,
      sym_import_statement,
      sym_import_from_statement,
    STATE(104), 5,
      sym__compound_statement,
      sym__container_definition,
      sym_type_block,
      sym_enum_block,
      sym_struct_block,
  [98] = 13,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_from,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_module_repeat2,
    STATE(106), 1,
      sym__decorated_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(59), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(102), 4,
      sym__statement,
      sym__import_statement,
      sym_import_statement,
      sym_import_from_statement,
    STATE(104), 5,
      sym__compound_statement,
      sym__container_definition,
      sym_type_block,
      sym_enum_block,
      sym_struct_block,
  [147] = 13,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_from,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_module_repeat2,
    STATE(106), 1,
      sym__decorated_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(59), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(102), 4,
      sym__statement,
      sym__import_statement,
      sym_import_statement,
      sym_import_from_statement,
    STATE(104), 5,
      sym__compound_statement,
      sym__container_definition,
      sym_type_block,
      sym_enum_block,
      sym_struct_block,
  [196] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [230] = 8,
    ACTIONS(61), 1,
      anon_sym_list,
    ACTIONS(63), 1,
      anon_sym_tuple,
    ACTIONS(65), 1,
      anon_sym_map,
    STATE(217), 1,
      sym_type,
    STATE(270), 1,
      sym_optional_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(194), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(59), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [264] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [298] = 8,
    ACTIONS(71), 1,
      anon_sym_list,
    ACTIONS(73), 1,
      anon_sym_tuple,
    ACTIONS(75), 1,
      anon_sym_map,
    STATE(171), 1,
      sym_type,
    STATE(216), 1,
      sym_optional_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(184), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(69), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [332] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [366] = 8,
    ACTIONS(81), 1,
      anon_sym_list,
    ACTIONS(83), 1,
      anon_sym_tuple,
    ACTIONS(85), 1,
      anon_sym_map,
    STATE(128), 1,
      sym_type,
    STATE(167), 1,
      sym_optional_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(130), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(79), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [400] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [434] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [468] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [502] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [536] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [570] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [604] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [638] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [672] = 8,
    ACTIONS(105), 1,
      anon_sym_list,
    ACTIONS(107), 1,
      anon_sym_tuple,
    ACTIONS(109), 1,
      anon_sym_map,
    STATE(165), 1,
      sym_type,
    STATE(244), 1,
      sym_optional_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(155), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(103), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [706] = 8,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [740] = 8,
    ACTIONS(115), 1,
      anon_sym_list,
    ACTIONS(117), 1,
      anon_sym_tuple,
    ACTIONS(119), 1,
      anon_sym_map,
    STATE(140), 1,
      sym_type,
    STATE(230), 1,
      sym_optional_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(157), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(113), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [774] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(222), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [805] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(280), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [836] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(195), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [867] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(308), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [898] = 7,
    ACTIONS(61), 1,
      anon_sym_list,
    ACTIONS(63), 1,
      anon_sym_tuple,
    ACTIONS(65), 1,
      anon_sym_map,
    STATE(349), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(194), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(59), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [929] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(262), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [960] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(240), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [991] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(250), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1022] = 7,
    ACTIONS(61), 1,
      anon_sym_list,
    ACTIONS(63), 1,
      anon_sym_tuple,
    ACTIONS(65), 1,
      anon_sym_map,
    STATE(352), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(194), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(59), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1053] = 7,
    ACTIONS(61), 1,
      anon_sym_list,
    ACTIONS(63), 1,
      anon_sym_tuple,
    ACTIONS(65), 1,
      anon_sym_map,
    STATE(319), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(194), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(59), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1084] = 7,
    ACTIONS(61), 1,
      anon_sym_list,
    ACTIONS(63), 1,
      anon_sym_tuple,
    ACTIONS(65), 1,
      anon_sym_map,
    STATE(355), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(194), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(59), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1115] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1146] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(315), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1177] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(279), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1208] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(254), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1239] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(300), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1270] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(269), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1301] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(246), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1332] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(318), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1363] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(229), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1394] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(290), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1425] = 7,
    ACTIONS(61), 1,
      anon_sym_list,
    ACTIONS(63), 1,
      anon_sym_tuple,
    ACTIONS(65), 1,
      anon_sym_map,
    STATE(343), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(194), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(59), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1456] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(207), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1487] = 7,
    ACTIONS(51), 1,
      anon_sym_list,
    ACTIONS(55), 1,
      anon_sym_tuple,
    ACTIONS(57), 1,
      anon_sym_map,
    STATE(293), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(273), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(49), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1518] = 7,
    ACTIONS(61), 1,
      anon_sym_list,
    ACTIONS(63), 1,
      anon_sym_tuple,
    ACTIONS(65), 1,
      anon_sym_map,
    STATE(346), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(194), 4,
      sym__list_type,
      sym__tuple_type,
      sym__map_type,
      sym__builtin_types,
    ACTIONS(59), 6,
      sym_identifier,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_unsigned,
      anon_sym_integer,
      anon_sym_natural,
  [1549] = 9,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_float,
    ACTIONS(127), 1,
      sym_string_start,
    STATE(118), 1,
      sym_string,
    STATE(141), 1,
      sym_primary_expression,
    STATE(303), 1,
      sym__decorator_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(251), 2,
      sym__literal,
      sym_concatenated_string,
    ACTIONS(123), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
  [1582] = 9,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_float,
    ACTIONS(127), 1,
      sym_string_start,
    STATE(118), 1,
      sym_string,
    STATE(141), 1,
      sym_primary_expression,
    STATE(336), 1,
      sym__decorator_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(251), 2,
      sym__literal,
      sym_concatenated_string,
    ACTIONS(123), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
  [1615] = 9,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_float,
    ACTIONS(127), 1,
      sym_string_start,
    STATE(118), 1,
      sym_string,
    STATE(141), 1,
      sym_primary_expression,
    STATE(286), 1,
      sym__decorator_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(251), 2,
      sym__literal,
      sym_concatenated_string,
    ACTIONS(123), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
  [1648] = 4,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(129), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [1670] = 11,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      anon_sym_filter,
    ACTIONS(136), 1,
      anon_sym_condition,
    ACTIONS(138), 1,
      sym__dedent,
    STATE(56), 1,
      aux_sym__type_body,
    STATE(138), 1,
      sym__decorated_filter_declaration,
    STATE(160), 1,
      sym__decorated_condition_declaration,
    STATE(163), 1,
      sym__condition_declaration,
    STATE(169), 1,
      sym__filter_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(108), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [1706] = 8,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(140), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(97), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(94), 4,
      sym__container_definition,
      sym_type_block,
      sym_enum_block,
      sym_struct_block,
  [1736] = 4,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [1758] = 11,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      anon_sym_filter,
    ACTIONS(136), 1,
      anon_sym_condition,
    ACTIONS(146), 1,
      sym__dedent,
    STATE(56), 1,
      aux_sym__type_body,
    STATE(138), 1,
      sym__decorated_filter_declaration,
    STATE(160), 1,
      sym__decorated_condition_declaration,
    STATE(163), 1,
      sym__condition_declaration,
    STATE(169), 1,
      sym__filter_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(108), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [1794] = 11,
    ACTIONS(148), 1,
      anon_sym_filter,
    ACTIONS(151), 1,
      anon_sym_condition,
    ACTIONS(154), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      sym__dedent,
    STATE(56), 1,
      aux_sym__type_body,
    STATE(138), 1,
      sym__decorated_filter_declaration,
    STATE(160), 1,
      sym__decorated_condition_declaration,
    STATE(163), 1,
      sym__condition_declaration,
    STATE(169), 1,
      sym__filter_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(108), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [1830] = 4,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [1852] = 7,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_string_start,
    ACTIONS(163), 1,
      sym_float,
    STATE(118), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(268), 2,
      sym__literal,
      sym_concatenated_string,
    ACTIONS(161), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
  [1879] = 7,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(87), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(94), 4,
      sym__container_definition,
      sym_type_block,
      sym_enum_block,
      sym_struct_block,
  [1906] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(129), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [1923] = 7,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(177), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(320), 2,
      sym__literal,
      sym_concatenated_string,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
  [1950] = 6,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(70), 1,
      sym_dotted_name,
    STATE(77), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    ACTIONS(175), 5,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
  [1975] = 10,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      anon_sym_filter,
    ACTIONS(136), 1,
      anon_sym_condition,
    STATE(52), 1,
      aux_sym__type_body,
    STATE(138), 1,
      sym__decorated_filter_declaration,
    STATE(160), 1,
      sym__decorated_condition_declaration,
    STATE(163), 1,
      sym__condition_declaration,
    STATE(169), 1,
      sym__filter_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(108), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [2008] = 6,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(70), 1,
      sym_dotted_name,
    STATE(77), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    ACTIONS(175), 5,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
  [2033] = 10,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      anon_sym_filter,
    ACTIONS(136), 1,
      anon_sym_condition,
    STATE(55), 1,
      aux_sym__type_body,
    STATE(138), 1,
      sym__decorated_filter_declaration,
    STATE(160), 1,
      sym__decorated_condition_declaration,
    STATE(163), 1,
      sym__condition_declaration,
    STATE(169), 1,
      sym__filter_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(108), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [2066] = 6,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(70), 1,
      sym_dotted_name,
    STATE(77), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    ACTIONS(181), 5,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
  [2091] = 7,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_float,
    ACTIONS(189), 1,
      sym_string_start,
    STATE(111), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 2,
      sym__literal,
      sym_concatenated_string,
    ACTIONS(185), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
  [2118] = 5,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_as,
    STATE(74), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2141] = 7,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_float,
    ACTIONS(203), 1,
      sym_string_start,
    STATE(134), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(258), 2,
      sym__literal,
      sym_concatenated_string,
    ACTIONS(199), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
  [2168] = 3,
    ACTIONS(195), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2186] = 4,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2206] = 4,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2226] = 4,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2246] = 4,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2266] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      sym__not_escape_sequence,
    ACTIONS(222), 1,
      sym_string_end,
    STATE(117), 1,
      aux_sym_string_content_repeat1,
    STATE(90), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(218), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [2291] = 6,
    ACTIONS(224), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(230), 1,
      sym__dedent,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(131), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(76), 3,
      aux_sym__struct_body,
      sym__struct_field,
      sym__decorated_struct_field,
  [2314] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2329] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2344] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      sym__not_escape_sequence,
    ACTIONS(234), 1,
      sym_string_end,
    STATE(117), 1,
      aux_sym_string_content_repeat1,
    STATE(80), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(218), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [2369] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      sym__not_escape_sequence,
    ACTIONS(236), 1,
      sym_string_end,
    STATE(117), 1,
      aux_sym_string_content_repeat1,
    STATE(85), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(218), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [2394] = 6,
    ACTIONS(238), 1,
      anon_sym_AT,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(242), 1,
      sym__dedent,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(131), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(76), 3,
      aux_sym__struct_body,
      sym__struct_field,
      sym__decorated_struct_field,
  [2417] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      sym__not_escape_sequence,
    ACTIONS(244), 1,
      sym_string_end,
    STATE(117), 1,
      aux_sym_string_content_repeat1,
    STATE(85), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(218), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [2442] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      sym__not_escape_sequence,
    ACTIONS(246), 1,
      sym_string_end,
    STATE(117), 1,
      aux_sym_string_content_repeat1,
    STATE(82), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(218), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [2467] = 8,
    ACTIONS(238), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      sym__dedent,
    STATE(86), 1,
      aux_sym__enum_body,
    STATE(226), 1,
      sym__enum_case,
    STATE(227), 1,
      sym__decorated_enum_case,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(136), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [2494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      sym__not_escape_sequence,
    ACTIONS(258), 1,
      sym_string_end,
    STATE(117), 1,
      aux_sym_string_content_repeat1,
    STATE(85), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(252), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [2519] = 8,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(266), 1,
      sym__dedent,
    STATE(86), 1,
      aux_sym__enum_body,
    STATE(226), 1,
      sym__enum_case,
    STATE(227), 1,
      sym__decorated_enum_case,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(136), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [2546] = 4,
    ACTIONS(270), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(87), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    ACTIONS(268), 5,
      anon_sym_type,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_enum,
      anon_sym_struct,
  [2565] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      sym__not_escape_sequence,
    ACTIONS(273), 1,
      sym_string_end,
    STATE(117), 1,
      aux_sym_string_content_repeat1,
    STATE(85), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(218), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [2590] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      sym__not_escape_sequence,
    ACTIONS(275), 1,
      sym_string_end,
    STATE(117), 1,
      aux_sym_string_content_repeat1,
    STATE(88), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(218), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [2615] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      sym__not_escape_sequence,
    ACTIONS(277), 1,
      sym_string_end,
    STATE(117), 1,
      aux_sym_string_content_repeat1,
    STATE(85), 2,
      sym_string_content,
      aux_sym_string_repeat1,
    ACTIONS(218), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [2640] = 8,
    ACTIONS(238), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym__dedent,
    STATE(86), 1,
      aux_sym__enum_body,
    STATE(226), 1,
      sym__enum_case,
    STATE(227), 1,
      sym__decorated_enum_case,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(136), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [2667] = 5,
    ACTIONS(238), 1,
      anon_sym_AT,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(131), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    STATE(81), 3,
      aux_sym__struct_body,
      sym__struct_field,
      sym__decorated_struct_field,
  [2687] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2701] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2715] = 7,
    ACTIONS(238), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(91), 1,
      aux_sym__enum_body,
    STATE(226), 1,
      sym__enum_case,
    STATE(227), 1,
      sym__decorated_enum_case,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(136), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [2739] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2753] = 4,
    ACTIONS(287), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(97), 2,
      sym_decorator,
      aux_sym_module_repeat1,
    ACTIONS(268), 4,
      sym__newline,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
  [2771] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(290), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2785] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(292), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2799] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(294), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2813] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2827] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(298), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2841] = 7,
    ACTIONS(238), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym__enum_body,
    STATE(226), 1,
      sym__enum_case,
    STATE(227), 1,
      sym__decorated_enum_case,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(136), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [2865] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(300), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2879] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2893] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(304), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2907] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(306), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2921] = 7,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      anon_sym_filter,
    ACTIONS(136), 1,
      anon_sym_condition,
    STATE(149), 1,
      sym__condition_declaration,
    STATE(151), 1,
      sym__filter_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(87), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [2945] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(308), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_from,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [2959] = 4,
    ACTIONS(127), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(115), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(310), 3,
      sym__newline,
      anon_sym_COMMA,
      sym_identifier,
  [2976] = 4,
    ACTIONS(189), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(113), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(312), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [2993] = 4,
    ACTIONS(316), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(112), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(314), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [3010] = 4,
    ACTIONS(189), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(112), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(310), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [3027] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(322), 1,
      sym__not_escape_sequence,
    ACTIONS(325), 1,
      sym_string_end,
    STATE(114), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(319), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [3048] = 4,
    ACTIONS(327), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(115), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(314), 3,
      sym__newline,
      anon_sym_COMMA,
      sym_identifier,
  [3065] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(330), 6,
      anon_sym_type,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [3078] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(334), 1,
      sym__not_escape_sequence,
    ACTIONS(336), 1,
      sym_string_end,
    STATE(114), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(332), 3,
      sym__string_content,
      sym_escape_interpolation,
      sym_escape_sequence,
  [3099] = 4,
    ACTIONS(127), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(110), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(312), 3,
      sym__newline,
      anon_sym_COMMA,
      sym_identifier,
  [3116] = 6,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(154), 1,
      aux_sym_import_prefix_repeat1,
    STATE(197), 1,
      sym_import_prefix,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(356), 2,
      sym_relative_import,
      sym_dotted_name,
  [3137] = 7,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      sym_wildcard_import,
    STATE(68), 1,
      sym_dotted_name,
    STATE(72), 1,
      sym_aliased_import,
    STATE(101), 1,
      sym__import_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [3160] = 4,
    ACTIONS(346), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(142), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [3176] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(348), 5,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
      anon_sym_PIPE,
  [3188] = 4,
    ACTIONS(203), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(310), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(137), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
  [3204] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(350), 5,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
      anon_sym_PIPE,
  [3216] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(352), 5,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
      anon_sym_PIPE,
  [3228] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(354), 5,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
      anon_sym_PIPE,
  [3240] = 4,
    ACTIONS(346), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(159), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [3256] = 3,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(356), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3270] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(330), 5,
      sym__newline,
      anon_sym_type,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_AT,
  [3282] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(360), 5,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
      anon_sym_PIPE,
  [3294] = 5,
    ACTIONS(238), 1,
      anon_sym_AT,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(234), 1,
      sym__struct_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(176), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [3312] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(362), 5,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
      anon_sym_PIPE,
  [3324] = 4,
    ACTIONS(364), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(129), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [3340] = 4,
    ACTIONS(203), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(312), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(123), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
  [3356] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(367), 5,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
      anon_sym_PIPE,
  [3368] = 5,
    ACTIONS(238), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(233), 1,
      sym__enum_case,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(176), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [3386] = 4,
    ACTIONS(369), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(314), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(137), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
  [3402] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(372), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3413] = 5,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(175), 1,
      sym_dotted_name,
    STATE(202), 1,
      sym_aliased_import,
    STATE(288), 1,
      sym__import_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [3430] = 3,
    ACTIONS(376), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(356), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3443] = 5,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 1,
      sym__newline,
    STATE(264), 1,
      sym_argument,
    STATE(322), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [3460] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(362), 4,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
      anon_sym_PIPE,
  [3471] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(348), 4,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
      anon_sym_PIPE,
  [3482] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(350), 4,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
      anon_sym_PIPE,
  [3493] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(352), 4,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
      anon_sym_PIPE,
  [3504] = 5,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_argument,
    STATE(339), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [3521] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(354), 4,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
      anon_sym_PIPE,
  [3532] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(384), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3543] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(386), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3554] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(367), 4,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
      anon_sym_PIPE,
  [3565] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(388), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3576] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(390), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3587] = 4,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym_import_prefix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(392), 2,
      anon_sym_import,
      sym_identifier,
  [3602] = 4,
    ACTIONS(399), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym_import_prefix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(397), 2,
      anon_sym_import,
      sym_identifier,
  [3617] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(360), 4,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
      anon_sym_PIPE,
  [3628] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(401), 4,
      sym__newline,
      sym_string_start,
      anon_sym_COMMA,
      sym_identifier,
  [3639] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(360), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(367), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3661] = 3,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(405), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [3674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(407), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3685] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(362), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3696] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(348), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3707] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(407), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3718] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(409), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3729] = 3,
    ACTIONS(411), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(356), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [3742] = 4,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      sym_string_start,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(166), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
  [3757] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(416), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3768] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(354), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3779] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(372), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [3790] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(352), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3801] = 3,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(356), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3814] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(350), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3825] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(354), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3836] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(352), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3847] = 5,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_as,
    STATE(205), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [3864] = 4,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(424), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(176), 2,
      sym_decorator,
      aux_sym_module_repeat1,
  [3879] = 4,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(185), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
  [3894] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(350), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3905] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(348), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3916] = 5,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(208), 1,
      sym_dotted_name,
    STATE(277), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [3933] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(401), 4,
      sym__dedent,
      sym_string_start,
      anon_sym_AT,
      sym_identifier,
  [3944] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(362), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3955] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(367), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3966] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(360), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [3977] = 4,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(166), 2,
      sym_string,
      aux_sym_concatenated_string_repeat1,
  [3992] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(129), 4,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4003] = 5,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(68), 1,
      sym_dotted_name,
    STATE(72), 1,
      sym_aliased_import,
    STATE(107), 1,
      sym__import_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4020] = 5,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_argument,
    STATE(291), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4037] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(429), 4,
      sym__dedent,
      sym_string_start,
      anon_sym_AT,
      sym_identifier,
  [4048] = 5,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(208), 1,
      sym_dotted_name,
    STATE(277), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4065] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(429), 4,
      sym__newline,
      sym_string_start,
      anon_sym_COMMA,
      sym_identifier,
  [4076] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(431), 4,
      sym__dedent,
      anon_sym_filter,
      anon_sym_condition,
      anon_sym_AT,
  [4087] = 5,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(208), 1,
      sym_dotted_name,
    STATE(277), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4104] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(360), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [4114] = 4,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4128] = 4,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4142] = 4,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_import,
    STATE(332), 1,
      sym_dotted_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4156] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(350), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [4166] = 4,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_COLON,
    STATE(329), 1,
      sym__container_repr,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4180] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(348), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [4190] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(362), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [4200] = 4,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4214] = 4,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_COLON,
    STATE(326), 1,
      sym__container_repr,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4228] = 4,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4242] = 4,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4256] = 4,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4270] = 4,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4284] = 3,
    ACTIONS(422), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(205), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4296] = 4,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__import_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4310] = 4,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(70), 1,
      sym_dotted_name,
    STATE(77), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4324] = 4,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4338] = 4,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(272), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4352] = 4,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4366] = 4,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(208), 1,
      sym_dotted_name,
    STATE(277), 1,
      sym_aliased_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4380] = 4,
    ACTIONS(465), 1,
      sym__newline,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4394] = 3,
    ACTIONS(475), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(473), 2,
      sym__newline,
      anon_sym_COMMA,
  [4406] = 3,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4418] = 4,
    ACTIONS(467), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4432] = 4,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(390), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4456] = 4,
    ACTIONS(465), 1,
      sym__newline,
    ACTIONS(486), 1,
      sym_identifier,
    STATE(265), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4470] = 4,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4484] = 4,
    ACTIONS(479), 1,
      sym__newline,
    ACTIONS(486), 1,
      sym_identifier,
    STATE(265), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4498] = 4,
    ACTIONS(481), 1,
      sym__newline,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4512] = 4,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4526] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(497), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [4536] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(497), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [4546] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(499), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [4556] = 4,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4570] = 3,
    ACTIONS(505), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4582] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(390), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [4592] = 4,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4606] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(509), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [4616] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(511), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [4626] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(390), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4636] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(352), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [4646] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(401), 3,
      sym_string_start,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4656] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(499), 3,
      sym__newline,
      anon_sym_COMMA,
      sym_identifier,
  [4666] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(429), 3,
      sym_string_start,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4676] = 4,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4690] = 4,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4704] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(354), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [4714] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(367), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PIPE,
  [4724] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(519), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [4734] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(521), 3,
      sym__dedent,
      anon_sym_AT,
      sym_identifier,
  [4744] = 4,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    STATE(241), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4758] = 4,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__tuple_type_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4772] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4781] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4790] = 3,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4801] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(533), 2,
      sym__newline,
      sym_identifier,
  [4810] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(499), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4819] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4828] = 3,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4839] = 3,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym__argument_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4850] = 3,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym__argument_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4861] = 3,
    ACTIONS(486), 1,
      sym_identifier,
    STATE(265), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4872] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(543), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4881] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_AT,
      sym_identifier,
  [4890] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4899] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4908] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4919] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4928] = 3,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4939] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(481), 2,
      sym__newline,
      anon_sym_COMMA,
  [4948] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4957] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4966] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(543), 2,
      sym__newline,
      anon_sym_COMMA,
  [4975] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4986] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [4997] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5008] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(481), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5017] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5026] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(429), 2,
      sym_string_start,
      anon_sym_COMMA,
  [5035] = 3,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(272), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5046] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5055] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(205), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5064] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(401), 2,
      sym_string_start,
      anon_sym_COMMA,
  [5073] = 3,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5084] = 3,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5095] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5103] = 2,
    ACTIONS(569), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5111] = 2,
    ACTIONS(571), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5119] = 2,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5127] = 2,
    ACTIONS(575), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5135] = 2,
    ACTIONS(577), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5143] = 2,
    ACTIONS(579), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5151] = 2,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5159] = 2,
    ACTIONS(583), 1,
      sym_none,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5167] = 2,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5175] = 2,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5183] = 2,
    ACTIONS(409), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5191] = 2,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5199] = 2,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5207] = 2,
    ACTIONS(593), 1,
      sym_none,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5215] = 2,
    ACTIONS(595), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5223] = 2,
    ACTIONS(597), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5231] = 2,
    ACTIONS(599), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5239] = 2,
    ACTIONS(601), 1,
      sym_none,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5247] = 2,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5255] = 2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5263] = 2,
    ACTIONS(607), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5271] = 2,
    ACTIONS(609), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5279] = 2,
    ACTIONS(611), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5287] = 2,
    ACTIONS(613), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5295] = 2,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5303] = 2,
    ACTIONS(617), 1,
      sym_none,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5311] = 2,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5319] = 2,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5327] = 2,
    ACTIONS(623), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5335] = 2,
    ACTIONS(625), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5343] = 2,
    ACTIONS(627), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5351] = 2,
    ACTIONS(629), 1,
      sym_none,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5359] = 2,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5367] = 2,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5375] = 2,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5383] = 2,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5391] = 2,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5399] = 2,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5407] = 2,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5415] = 2,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5423] = 2,
    ACTIONS(645), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5431] = 2,
    ACTIONS(647), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5439] = 2,
    ACTIONS(649), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5447] = 2,
    ACTIONS(651), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5455] = 2,
    ACTIONS(653), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5463] = 2,
    ACTIONS(655), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5471] = 2,
    ACTIONS(657), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5479] = 2,
    ACTIONS(659), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5487] = 2,
    ACTIONS(661), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5495] = 2,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5503] = 2,
    ACTIONS(665), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5511] = 2,
    ACTIONS(667), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5519] = 2,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5527] = 2,
    ACTIONS(671), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5535] = 2,
    ACTIONS(673), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5543] = 2,
    ACTIONS(431), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5551] = 2,
    ACTIONS(675), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5559] = 2,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5567] = 2,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5575] = 2,
    ACTIONS(679), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5583] = 2,
    ACTIONS(681), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5591] = 2,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5599] = 2,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5607] = 2,
    ACTIONS(687), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5615] = 2,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5623] = 2,
    ACTIONS(691), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5631] = 2,
    ACTIONS(693), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5639] = 2,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5647] = 2,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5655] = 2,
    ACTIONS(699), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5663] = 2,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5671] = 2,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5679] = 2,
    ACTIONS(705), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5687] = 2,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5695] = 2,
    ACTIONS(709), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5703] = 2,
    ACTIONS(711), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5711] = 2,
    ACTIONS(713), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5719] = 2,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5727] = 2,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5735] = 2,
    ACTIONS(719), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5743] = 2,
    ACTIONS(721), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5751] = 2,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5759] = 2,
    ACTIONS(725), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [5767] = 2,
    ACTIONS(727), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 298,
  [SMALL_STATE(10)] = 332,
  [SMALL_STATE(11)] = 366,
  [SMALL_STATE(12)] = 400,
  [SMALL_STATE(13)] = 434,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 536,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 604,
  [SMALL_STATE(19)] = 638,
  [SMALL_STATE(20)] = 672,
  [SMALL_STATE(21)] = 706,
  [SMALL_STATE(22)] = 740,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 805,
  [SMALL_STATE(25)] = 836,
  [SMALL_STATE(26)] = 867,
  [SMALL_STATE(27)] = 898,
  [SMALL_STATE(28)] = 929,
  [SMALL_STATE(29)] = 960,
  [SMALL_STATE(30)] = 991,
  [SMALL_STATE(31)] = 1022,
  [SMALL_STATE(32)] = 1053,
  [SMALL_STATE(33)] = 1084,
  [SMALL_STATE(34)] = 1115,
  [SMALL_STATE(35)] = 1146,
  [SMALL_STATE(36)] = 1177,
  [SMALL_STATE(37)] = 1208,
  [SMALL_STATE(38)] = 1239,
  [SMALL_STATE(39)] = 1270,
  [SMALL_STATE(40)] = 1301,
  [SMALL_STATE(41)] = 1332,
  [SMALL_STATE(42)] = 1363,
  [SMALL_STATE(43)] = 1394,
  [SMALL_STATE(44)] = 1425,
  [SMALL_STATE(45)] = 1456,
  [SMALL_STATE(46)] = 1487,
  [SMALL_STATE(47)] = 1518,
  [SMALL_STATE(48)] = 1549,
  [SMALL_STATE(49)] = 1582,
  [SMALL_STATE(50)] = 1615,
  [SMALL_STATE(51)] = 1648,
  [SMALL_STATE(52)] = 1670,
  [SMALL_STATE(53)] = 1706,
  [SMALL_STATE(54)] = 1736,
  [SMALL_STATE(55)] = 1758,
  [SMALL_STATE(56)] = 1794,
  [SMALL_STATE(57)] = 1830,
  [SMALL_STATE(58)] = 1852,
  [SMALL_STATE(59)] = 1879,
  [SMALL_STATE(60)] = 1906,
  [SMALL_STATE(61)] = 1923,
  [SMALL_STATE(62)] = 1950,
  [SMALL_STATE(63)] = 1975,
  [SMALL_STATE(64)] = 2008,
  [SMALL_STATE(65)] = 2033,
  [SMALL_STATE(66)] = 2066,
  [SMALL_STATE(67)] = 2091,
  [SMALL_STATE(68)] = 2118,
  [SMALL_STATE(69)] = 2141,
  [SMALL_STATE(70)] = 2168,
  [SMALL_STATE(71)] = 2186,
  [SMALL_STATE(72)] = 2206,
  [SMALL_STATE(73)] = 2226,
  [SMALL_STATE(74)] = 2246,
  [SMALL_STATE(75)] = 2266,
  [SMALL_STATE(76)] = 2291,
  [SMALL_STATE(77)] = 2314,
  [SMALL_STATE(78)] = 2329,
  [SMALL_STATE(79)] = 2344,
  [SMALL_STATE(80)] = 2369,
  [SMALL_STATE(81)] = 2394,
  [SMALL_STATE(82)] = 2417,
  [SMALL_STATE(83)] = 2442,
  [SMALL_STATE(84)] = 2467,
  [SMALL_STATE(85)] = 2494,
  [SMALL_STATE(86)] = 2519,
  [SMALL_STATE(87)] = 2546,
  [SMALL_STATE(88)] = 2565,
  [SMALL_STATE(89)] = 2590,
  [SMALL_STATE(90)] = 2615,
  [SMALL_STATE(91)] = 2640,
  [SMALL_STATE(92)] = 2667,
  [SMALL_STATE(93)] = 2687,
  [SMALL_STATE(94)] = 2701,
  [SMALL_STATE(95)] = 2715,
  [SMALL_STATE(96)] = 2739,
  [SMALL_STATE(97)] = 2753,
  [SMALL_STATE(98)] = 2771,
  [SMALL_STATE(99)] = 2785,
  [SMALL_STATE(100)] = 2799,
  [SMALL_STATE(101)] = 2813,
  [SMALL_STATE(102)] = 2827,
  [SMALL_STATE(103)] = 2841,
  [SMALL_STATE(104)] = 2865,
  [SMALL_STATE(105)] = 2879,
  [SMALL_STATE(106)] = 2893,
  [SMALL_STATE(107)] = 2907,
  [SMALL_STATE(108)] = 2921,
  [SMALL_STATE(109)] = 2945,
  [SMALL_STATE(110)] = 2959,
  [SMALL_STATE(111)] = 2976,
  [SMALL_STATE(112)] = 2993,
  [SMALL_STATE(113)] = 3010,
  [SMALL_STATE(114)] = 3027,
  [SMALL_STATE(115)] = 3048,
  [SMALL_STATE(116)] = 3065,
  [SMALL_STATE(117)] = 3078,
  [SMALL_STATE(118)] = 3099,
  [SMALL_STATE(119)] = 3116,
  [SMALL_STATE(120)] = 3137,
  [SMALL_STATE(121)] = 3160,
  [SMALL_STATE(122)] = 3176,
  [SMALL_STATE(123)] = 3188,
  [SMALL_STATE(124)] = 3204,
  [SMALL_STATE(125)] = 3216,
  [SMALL_STATE(126)] = 3228,
  [SMALL_STATE(127)] = 3240,
  [SMALL_STATE(128)] = 3256,
  [SMALL_STATE(129)] = 3270,
  [SMALL_STATE(130)] = 3282,
  [SMALL_STATE(131)] = 3294,
  [SMALL_STATE(132)] = 3312,
  [SMALL_STATE(133)] = 3324,
  [SMALL_STATE(134)] = 3340,
  [SMALL_STATE(135)] = 3356,
  [SMALL_STATE(136)] = 3368,
  [SMALL_STATE(137)] = 3386,
  [SMALL_STATE(138)] = 3402,
  [SMALL_STATE(139)] = 3413,
  [SMALL_STATE(140)] = 3430,
  [SMALL_STATE(141)] = 3443,
  [SMALL_STATE(142)] = 3460,
  [SMALL_STATE(143)] = 3471,
  [SMALL_STATE(144)] = 3482,
  [SMALL_STATE(145)] = 3493,
  [SMALL_STATE(146)] = 3504,
  [SMALL_STATE(147)] = 3521,
  [SMALL_STATE(148)] = 3532,
  [SMALL_STATE(149)] = 3543,
  [SMALL_STATE(150)] = 3554,
  [SMALL_STATE(151)] = 3565,
  [SMALL_STATE(152)] = 3576,
  [SMALL_STATE(153)] = 3587,
  [SMALL_STATE(154)] = 3602,
  [SMALL_STATE(155)] = 3617,
  [SMALL_STATE(156)] = 3628,
  [SMALL_STATE(157)] = 3639,
  [SMALL_STATE(158)] = 3650,
  [SMALL_STATE(159)] = 3661,
  [SMALL_STATE(160)] = 3674,
  [SMALL_STATE(161)] = 3685,
  [SMALL_STATE(162)] = 3696,
  [SMALL_STATE(163)] = 3707,
  [SMALL_STATE(164)] = 3718,
  [SMALL_STATE(165)] = 3729,
  [SMALL_STATE(166)] = 3742,
  [SMALL_STATE(167)] = 3757,
  [SMALL_STATE(168)] = 3768,
  [SMALL_STATE(169)] = 3779,
  [SMALL_STATE(170)] = 3790,
  [SMALL_STATE(171)] = 3801,
  [SMALL_STATE(172)] = 3814,
  [SMALL_STATE(173)] = 3825,
  [SMALL_STATE(174)] = 3836,
  [SMALL_STATE(175)] = 3847,
  [SMALL_STATE(176)] = 3864,
  [SMALL_STATE(177)] = 3879,
  [SMALL_STATE(178)] = 3894,
  [SMALL_STATE(179)] = 3905,
  [SMALL_STATE(180)] = 3916,
  [SMALL_STATE(181)] = 3933,
  [SMALL_STATE(182)] = 3944,
  [SMALL_STATE(183)] = 3955,
  [SMALL_STATE(184)] = 3966,
  [SMALL_STATE(185)] = 3977,
  [SMALL_STATE(186)] = 3992,
  [SMALL_STATE(187)] = 4003,
  [SMALL_STATE(188)] = 4020,
  [SMALL_STATE(189)] = 4037,
  [SMALL_STATE(190)] = 4048,
  [SMALL_STATE(191)] = 4065,
  [SMALL_STATE(192)] = 4076,
  [SMALL_STATE(193)] = 4087,
  [SMALL_STATE(194)] = 4104,
  [SMALL_STATE(195)] = 4114,
  [SMALL_STATE(196)] = 4128,
  [SMALL_STATE(197)] = 4142,
  [SMALL_STATE(198)] = 4156,
  [SMALL_STATE(199)] = 4166,
  [SMALL_STATE(200)] = 4180,
  [SMALL_STATE(201)] = 4190,
  [SMALL_STATE(202)] = 4200,
  [SMALL_STATE(203)] = 4214,
  [SMALL_STATE(204)] = 4228,
  [SMALL_STATE(205)] = 4242,
  [SMALL_STATE(206)] = 4256,
  [SMALL_STATE(207)] = 4270,
  [SMALL_STATE(208)] = 4284,
  [SMALL_STATE(209)] = 4296,
  [SMALL_STATE(210)] = 4310,
  [SMALL_STATE(211)] = 4324,
  [SMALL_STATE(212)] = 4338,
  [SMALL_STATE(213)] = 4352,
  [SMALL_STATE(214)] = 4366,
  [SMALL_STATE(215)] = 4380,
  [SMALL_STATE(216)] = 4394,
  [SMALL_STATE(217)] = 4406,
  [SMALL_STATE(218)] = 4418,
  [SMALL_STATE(219)] = 4432,
  [SMALL_STATE(220)] = 4446,
  [SMALL_STATE(221)] = 4456,
  [SMALL_STATE(222)] = 4470,
  [SMALL_STATE(223)] = 4484,
  [SMALL_STATE(224)] = 4498,
  [SMALL_STATE(225)] = 4512,
  [SMALL_STATE(226)] = 4526,
  [SMALL_STATE(227)] = 4536,
  [SMALL_STATE(228)] = 4546,
  [SMALL_STATE(229)] = 4556,
  [SMALL_STATE(230)] = 4570,
  [SMALL_STATE(231)] = 4582,
  [SMALL_STATE(232)] = 4592,
  [SMALL_STATE(233)] = 4606,
  [SMALL_STATE(234)] = 4616,
  [SMALL_STATE(235)] = 4626,
  [SMALL_STATE(236)] = 4636,
  [SMALL_STATE(237)] = 4646,
  [SMALL_STATE(238)] = 4656,
  [SMALL_STATE(239)] = 4666,
  [SMALL_STATE(240)] = 4676,
  [SMALL_STATE(241)] = 4690,
  [SMALL_STATE(242)] = 4704,
  [SMALL_STATE(243)] = 4714,
  [SMALL_STATE(244)] = 4724,
  [SMALL_STATE(245)] = 4734,
  [SMALL_STATE(246)] = 4744,
  [SMALL_STATE(247)] = 4758,
  [SMALL_STATE(248)] = 4772,
  [SMALL_STATE(249)] = 4781,
  [SMALL_STATE(250)] = 4790,
  [SMALL_STATE(251)] = 4801,
  [SMALL_STATE(252)] = 4810,
  [SMALL_STATE(253)] = 4819,
  [SMALL_STATE(254)] = 4828,
  [SMALL_STATE(255)] = 4839,
  [SMALL_STATE(256)] = 4850,
  [SMALL_STATE(257)] = 4861,
  [SMALL_STATE(258)] = 4872,
  [SMALL_STATE(259)] = 4881,
  [SMALL_STATE(260)] = 4890,
  [SMALL_STATE(261)] = 4899,
  [SMALL_STATE(262)] = 4908,
  [SMALL_STATE(263)] = 4919,
  [SMALL_STATE(264)] = 4928,
  [SMALL_STATE(265)] = 4939,
  [SMALL_STATE(266)] = 4948,
  [SMALL_STATE(267)] = 4957,
  [SMALL_STATE(268)] = 4966,
  [SMALL_STATE(269)] = 4975,
  [SMALL_STATE(270)] = 4986,
  [SMALL_STATE(271)] = 4997,
  [SMALL_STATE(272)] = 5008,
  [SMALL_STATE(273)] = 5017,
  [SMALL_STATE(274)] = 5026,
  [SMALL_STATE(275)] = 5035,
  [SMALL_STATE(276)] = 5046,
  [SMALL_STATE(277)] = 5055,
  [SMALL_STATE(278)] = 5064,
  [SMALL_STATE(279)] = 5073,
  [SMALL_STATE(280)] = 5084,
  [SMALL_STATE(281)] = 5095,
  [SMALL_STATE(282)] = 5103,
  [SMALL_STATE(283)] = 5111,
  [SMALL_STATE(284)] = 5119,
  [SMALL_STATE(285)] = 5127,
  [SMALL_STATE(286)] = 5135,
  [SMALL_STATE(287)] = 5143,
  [SMALL_STATE(288)] = 5151,
  [SMALL_STATE(289)] = 5159,
  [SMALL_STATE(290)] = 5167,
  [SMALL_STATE(291)] = 5175,
  [SMALL_STATE(292)] = 5183,
  [SMALL_STATE(293)] = 5191,
  [SMALL_STATE(294)] = 5199,
  [SMALL_STATE(295)] = 5207,
  [SMALL_STATE(296)] = 5215,
  [SMALL_STATE(297)] = 5223,
  [SMALL_STATE(298)] = 5231,
  [SMALL_STATE(299)] = 5239,
  [SMALL_STATE(300)] = 5247,
  [SMALL_STATE(301)] = 5255,
  [SMALL_STATE(302)] = 5263,
  [SMALL_STATE(303)] = 5271,
  [SMALL_STATE(304)] = 5279,
  [SMALL_STATE(305)] = 5287,
  [SMALL_STATE(306)] = 5295,
  [SMALL_STATE(307)] = 5303,
  [SMALL_STATE(308)] = 5311,
  [SMALL_STATE(309)] = 5319,
  [SMALL_STATE(310)] = 5327,
  [SMALL_STATE(311)] = 5335,
  [SMALL_STATE(312)] = 5343,
  [SMALL_STATE(313)] = 5351,
  [SMALL_STATE(314)] = 5359,
  [SMALL_STATE(315)] = 5367,
  [SMALL_STATE(316)] = 5375,
  [SMALL_STATE(317)] = 5383,
  [SMALL_STATE(318)] = 5391,
  [SMALL_STATE(319)] = 5399,
  [SMALL_STATE(320)] = 5407,
  [SMALL_STATE(321)] = 5415,
  [SMALL_STATE(322)] = 5423,
  [SMALL_STATE(323)] = 5431,
  [SMALL_STATE(324)] = 5439,
  [SMALL_STATE(325)] = 5447,
  [SMALL_STATE(326)] = 5455,
  [SMALL_STATE(327)] = 5463,
  [SMALL_STATE(328)] = 5471,
  [SMALL_STATE(329)] = 5479,
  [SMALL_STATE(330)] = 5487,
  [SMALL_STATE(331)] = 5495,
  [SMALL_STATE(332)] = 5503,
  [SMALL_STATE(333)] = 5511,
  [SMALL_STATE(334)] = 5519,
  [SMALL_STATE(335)] = 5527,
  [SMALL_STATE(336)] = 5535,
  [SMALL_STATE(337)] = 5543,
  [SMALL_STATE(338)] = 5551,
  [SMALL_STATE(339)] = 5559,
  [SMALL_STATE(340)] = 5567,
  [SMALL_STATE(341)] = 5575,
  [SMALL_STATE(342)] = 5583,
  [SMALL_STATE(343)] = 5591,
  [SMALL_STATE(344)] = 5599,
  [SMALL_STATE(345)] = 5607,
  [SMALL_STATE(346)] = 5615,
  [SMALL_STATE(347)] = 5623,
  [SMALL_STATE(348)] = 5631,
  [SMALL_STATE(349)] = 5639,
  [SMALL_STATE(350)] = 5647,
  [SMALL_STATE(351)] = 5655,
  [SMALL_STATE(352)] = 5663,
  [SMALL_STATE(353)] = 5671,
  [SMALL_STATE(354)] = 5679,
  [SMALL_STATE(355)] = 5687,
  [SMALL_STATE(356)] = 5695,
  [SMALL_STATE(357)] = 5703,
  [SMALL_STATE(358)] = 5711,
  [SMALL_STATE(359)] = 5719,
  [SMALL_STATE(360)] = 5727,
  [SMALL_STATE(361)] = 5735,
  [SMALL_STATE(362)] = 5743,
  [SMALL_STATE(363)] = 5751,
  [SMALL_STATE(364)] = 5759,
  [SMALL_STATE(365)] = 5767,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 8),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 8), SHIFT_REPEAT(187),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 8), SHIFT_REPEAT(119),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 8), SHIFT_REPEAT(316),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 8), SHIFT_REPEAT(360),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 8), SHIFT_REPEAT(359),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2, .production_id = 8), SHIFT_REPEAT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 12),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(334),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_body, 2, .production_id = 22), SHIFT_REPEAT(305),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_body, 2, .production_id = 22), SHIFT_REPEAT(309),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_body, 2, .production_id = 22), SHIFT_REPEAT(48),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_body, 2, .production_id = 22),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_list, 3, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__import_list, 3, .production_id = 9),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_list, 2, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__import_list, 2, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_list, 1, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_list_repeat1, 2, .production_id = 13),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_list_repeat1, 2, .production_id = 14),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(210),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_list, 2, .production_id = 9),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__struct_body, 2), SHIFT_REPEAT(50),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__struct_body, 2), SHIFT_REPEAT(311),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__struct_body, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_import, 3, .production_id = 15),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(117),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(117),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__enum_body, 2, .production_id = 25), SHIFT_REPEAT(50),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__enum_body, 2, .production_id = 25), SHIFT_REPEAT(159),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_body, 2, .production_id = 25),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(48),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_block, 8, .production_id = 29),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorated_definition, 2, .production_id = 7),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_block, 7, .production_id = 21),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(49),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 7, .production_id = 24),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 8, .production_id = 31),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from_statement, 6, .production_id = 18),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from_statement, 4, .production_id = 17),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 1, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_block, 7, .production_id = 27),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 1, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from_statement, 4, .production_id = 16),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(89),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(114),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(114),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(79),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3, .production_id = 10),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__map_type, 6),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type, 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__map_type, 7),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(301),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_type, 4),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(83),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_body, 1, .production_id = 19),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorator_expression, 1, .production_id = 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_declaration, 3, .production_id = 13),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorated_condition_declaration, 2, .production_id = 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorated_filter_declaration, 2, .production_id = 23),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_prefix_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_prefix_repeat1, 2), SHIFT_REPEAT(153),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_prefix, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_case, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_body, 1, .production_id = 20),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_block, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(75),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_declaration, 5, .production_id = 32),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(50),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_block, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative_import, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_type_repeat1, 2), SHIFT_REPEAT(34),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_type_repeat1, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(214),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(275),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(257),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_body, 1, .production_id = 6),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorated_enum_case, 2, .production_id = 26),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorated_struct_field, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__struct_field, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_case, 3, .production_id = 30),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, .production_id = 6),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 5, .production_id = 28),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_repr, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorator_expression, 2, .production_id = 11),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_import, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [713] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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

static const bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [4] = {
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_escape_interpolation] = true,
    [ts_external_token_string_end] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [11] = {
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [12] = {
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
