const PREC = {
    or: 10,
    and: 11,
    not: 12,
};

module.exports = grammar({
    name: 'tplspec',

    extras: $ => [
        $.comment,
        /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
        $.line_continuation,
    ],
    
    externals: $ => [
        $._newline,
        $._indent,
        $._dedent,
        $.string_start,
        $._string_content,
        $.escape_interpolation,
        $.string_end,

        // Mark comments as external tokens so that the external scanner is always
        // invoked, even if no external token is expected. This allows for better
        // error recovery, because the external scanner can maintain the overall
        // structure by returning dedent tokens whenever a dedent occurs, even
        // if no dedent is expected.
        $.comment,

        // Allow the external scanner to check for the validity of closing brackets
        // so that it can avoid returning dedent tokens between brackets.
        ']',
        ')',
        '}',
    ],

    rules: {
        module: $ => seq(
            optional($.inner_doc_block),
            repeat($._module_decorator),
            repeat($._statement),
        ),

        _statement: $ => choice(
            $._import_statement,
            $.decorated_import_statement,
            $._compound_statement,
        ),

        /**********************************************************************/
        /* BEGIN import                                                       */
        /**********************************************************************/
        _import_statement: $ => choice(
            $.import_statement,
            $.import_from_statement,
        ),

        decorated_import_statement: $ => seq(
            repeat1($.decorator),
            $._import_statement,
        ),

        import_statement: $ => seq(
            'import',
            $._import_list,
        ),

        import_prefix: _ => repeat1('.'),

        relative_import: $ => seq(
            $.import_prefix,
            optional($.dotted_name)
        ),

        import_from_statement: $ => seq(
            'from',
            field('module_name', choice(
                $.relative_import,
                $.dotted_name,
            )),
            'import',
            choice(
                $.wildcard_import,
                $._import_list,
                seq('(', $._import_list, ')'),
            ),
        ),

        _import_list: $ => seq(
            commaSep1(field('name', choice(
                $.dotted_name,
                $.aliased_import,
            ))),
            optional(','),
        ),

        aliased_import: $ => seq(
            field('name', $.dotted_name),
            'as',
            field('alias', $.identifier),
        ),

        wildcard_import: _ => '*',
        /**********************************************************************/
        /* END import                                                         */
        /**********************************************************************/

        /**********************************************************************/
        /* BEGIN blocks                                                       */
        /**********************************************************************/
        _compound_statement: $ => choice(
            $.container_definition,
            $.decorated_definition,
        ),

        container_definition: $ => seq(
            optional($.doc_block),
            $._container_definition,
        ),

        _container_definition: $ => choice(
            $.type_block,
            $.enum_block,
            $.struct_block,
        ),
        
        decorated_definition: $ => seq(
            optional($.doc_block),
            repeat1($.decorator),
            field('definition', $._container_definition),
        ),

        _container_repr: $ => seq(
            '(',
            $.type,
            ')',
        ),
        
        // TYPE
        type_block: $ => seq(
            'type',
            field('name', $.identifier),
            optional(field('repr', $._container_repr)),
            ':',
            $._newline,
            $._indent,
            optional($.inner_doc_block),
            $._type_body,
            $._dedent,
        ),

        _type_body: $ => repeat1(choice(
            $.type_child,
            $.decorated_type_child,
        )),

        type_child: $ => seq(
            optional($.doc_block),
            $._type_child
        ),

        _type_child: $ => choice(
            $.filter_declaration,
            $.condition_declaration,
        ),

        decorated_type_child: $ => seq(
            optional($.doc_block),
            repeat1($.decorator),
            $._type_child,
        ),

        filter_declaration: $ => seq(
            'filter',
            field('name', $.identifier),
            $._parameter_block,
            '->',
            field('return', $._maybe_inline_variant),
        ),

        condition_declaration: $ => seq(
            'condition',
            field('name', $.identifier),
            $._parameter_block,
        ),

        // ENUM
        enum_block: $ => seq(
            'enum',
            field('name', $.identifier),
            optional(field('repr', $._container_repr)),
            ':',
            $._newline,
            $._indent,
            optional($.inner_doc_block),
            $._enum_body,
            $._dedent,
        ),

        _enum_body: $ => repeat1(choice(
            $.enum_child,
            $.decorated_enum_child,
        )),

        enum_child: $ => seq(
            optional($.doc_block),
            $._enum_child
        ),

        _enum_child: $ => choice(
            $.enum_case,
            $.filter_declaration,
            $.condition_declaration,
        ),

        decorated_enum_child: $ => seq(
            optional($.doc_block),
            repeat1($.decorator),
            $._enum_child,
        ),

        enum_case: $ => seq(
            field("case", $.identifier),
            optional(seq(
                '=',
                field("value", $.literal),
            )),
        ),

        decorated_enum_case: $ => seq(
            repeat1($.decorator),
            $.enum_case,
        ),

        // STRUCT
        struct_block : $ => seq(
            'struct',
            field('name', $.identifier),
            ':',
            $._newline,
            $._indent,
            optional($.inner_doc_block),
            $._struct_body,
            $._dedent,
        ),

        _struct_body: $ => repeat1(choice(
            $.struct_child,
            $.decorated_struct_child,
        )),

        struct_child: $ => seq(
            optional($.doc_block),
            $._struct_child
        ),

        _struct_child: $ => choice(
            $.struct_field,
            $.filter_declaration,
            $.condition_declaration,
        ),

        decorated_struct_child: $ => seq(
            optional($.doc_block),
            repeat1($.decorator),
            $._struct_child,
        ),

        struct_field: $ => seq(
            $.identifier,
            ':',
            $._maybe_inline_variant,
        ),

        decorated_struct_field: $ => seq(
            repeat1($.decorator),
            $.struct_field,
        ),
        /**********************************************************************/
        /* END blocks                                                         */
        /**********************************************************************/

        /**********************************************************************/
        /* BEGIN doc blocks                                                   */
        /**********************************************************************/
        doc_block: $ => seq(
            field("summary", $._doc_line),
            optional(
                seq(
                    $._doc_blank,
                    repeat1($._doc_line),
                ),
            ),
        ),

        inner_doc_block: $ => seq(
            field("summary", $._inner_doc_line),
            optional(
                seq(
                    $._inner_doc_blank,
                    repeat1($._inner_doc_line),
                ),
            ),
        ),

        _doc_blank: $ => seq("##", $._newline),
        _doc_line: $ => seq("##", optional(" "), $.doc_data, $._newline),

        _inner_doc_blank: $ => seq("#!", $._newline),
        _inner_doc_line: $ => seq("#!", optional(" "), $.doc_data, $._newline),

        doc_data: _ => /.*/,
        /**********************************************************************/
        /* END doc blocks                                                     */
        /**********************************************************************/

        /**********************************************************************/
        /* BEGIN decorated                                                    */
        /**********************************************************************/
        _module_decorator: $ => seq(
            field("module_decorator", $.decorator),
            $._newline,
        ),

        decorator: $ => seq(
            '@',
            choice(
                $.call,
                $.dotted_name,
            ),
            $._newline,
        ),
        /**********************************************************************/
        /* END decorated                                                      */
        /**********************************************************************/

        /**********************************************************************/
        /* BEGIN common                                                       */
        /**********************************************************************/
        dotted_name: $ => prec(1, sep1($.identifier, '.')),

        identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

        type: $ => choice(
            $.identifier,
            $.builtin_types,
            $.list_type,
            $.tuple_type,
            $.map_type,
        ),

        list_type: $ => seq(
            'list',
            '[',
            $._maybe_inline_variant,
            ']'
        ),

        tuple_type: $ => seq(
            'tuple',
            '[',
            seq(
                commaSep1($._maybe_inline_variant),
                optional(','),
            ),
            ']',
        ),

        map_type: $ => seq(
            'map',
            '[',
            seq(
                $._maybe_inline_variant,
                ',',
                $._maybe_inline_variant,
            ),
            ']',
        ),

        inline_variant: $ => sep1($.type, '|'),

        _maybe_inline_variant: $ => choice(
            prec(1, $.type),
            $.inline_variant,
        ),

        builtin_types: _ => choice(
            'String',
            'Boolean',
            'Unsigned',
            'Integer',
            'Natural',
            'None',
        ),

        primary_expression: $ => $.literal,

        expression: $ => choice(
            $.comparison_operator,
            $.not_operator,
            $.boolean_operator,
            $.named_expression,
            $.call,
        ),

        call: $ => seq(
            field('name', $.dotted_name),
            $._argument_block,
        ),

        _argument_block: $ => seq(
            '(',
            $.argument_list,
            ')',
        ),

        argument_list: $ => prec.right(seq(
            commaSep1($.argument),
            optional(','),
        )),

        argument: $ => choice(
            $.expression,
            $.literal,
        ),

        named_expression: $ => seq(
            field('name', $.identifier),
            ':=',
            field('value', $.expression),
        ),

        comparison_operator: $ => seq(
            $.primary_expression,
            repeat1(seq(
                field('operators', choice(
                    '<',
                    '<=',
                    '==',
                    '!=',
                    '>=',
                    '>',
                    '<>',
                    'in',
                    alias(seq('not', 'in'), 'not in'),
                    'is',
                    alias(seq('is', 'not'), 'is not'),
                )),
                $.primary_expression,
            )),
        ),

        boolean_operator: $ => choice(
            prec.left(PREC.and, seq(
                field('left', $.expression),
                field('operator', 'and'),
                field('right', $.expression),
            )),
            prec.left(PREC.or, seq(
                field('left', $.expression),
                field('operator', 'or'),
                field('right', $.expression),
            )),
        ),

        not_operator: $ => prec(PREC.not, seq(
            'not',
            field('argument', $.expression),
        )),

        parameter: $ => seq(
            field('name', $.identifier),
            ':',
            $._maybe_inline_variant,
            optional(seq(
                '=',
                $.literal,
            )),
        ),

        parameter_list: $ => prec.right(seq(
            commaSep1($.parameter),
            optional(','),
        )),

        _parameter_block: $ => seq(
            '(',
            optional($.parameter_list),
            ')',
        ),

        /**********************************************************************/
        /* END common                                                         */
        /**********************************************************************/

        /**********************************************************************/
        /* BEGIN literals                                                     */
        /**********************************************************************/

        literal: $ => choice(
            $.string,
            $.concatenated_string,
            $.integer,
            $.float,
            $.true,
            $.false,
            $.none,
            $.dotted_name,
        ),

        string: $ => seq(
            $.string_start,
            $.string_content,
            $.string_end,
        ),

        concatenated_string: $ => seq(
            $.string,
            repeat1($.string),
        ),

        string_content : $ => prec.right(repeat1(choice(
            $.escape_interpolation,
            $.escape_sequence,
            $._not_escape_sequence,
            $._string_content,
        ))),

        escape_sequence: _ => token.immediate(prec(1, seq(
            '\\',
            choice(
                /u[a-fA-F\d]{4}/,
                /U[a-fA-F\d]{8}/,
                /x[a-fA-F\d]{2}/,
                /\d{3}/,
                /\r?\n/,
                /['"abfrntv\\]/,
                /N\{[^}]+\}/,
            ),
        ))),

        _not_escape_sequence: _ => token.immediate('\\'),

        integer: _ => token(choice(
            seq(
                choice('0x', '0X'),
                repeat1(/_?[A-Fa-f0-9]+/),
                optional(/[Ll]/),
            ),
            seq(
                choice('0o', '0O'),
                repeat1(/_?[0-7]+/),
                optional(/[Ll]/),
            ),
            seq(
                choice('0b', '0B'),
                repeat1(/_?[0-1]+/),
                optional(/[Ll]/),
            ),
            seq(
                repeat1(/[0-9]+_?/),
                choice(
                    optional(/[Ll]/), // long numbers
                    optional(/[jJ]/), // complex numbers
                ),
            ),
        )),

        float: _ => {
            const digits = repeat1(/[0-9]+_?/);
            const exponent = seq(/[eE][\+-]?/, digits);

            return token(seq(
                choice(
                    seq(digits, '.', optional(digits), optional(exponent)),
                    seq(optional(digits), '.', digits, optional(exponent)),
                    seq(digits, exponent),
                ),
                optional(/[jJ]/),
            ));
        },

        true: _ => 'True',
        false: _ => 'False',
        none: _ => 'None',

        comment: _ => token(seq('#', /([^#!].*)?\n/)),

        line_continuation: _ => token(seq('\\', choice(seq(optional('\r'), '\n'), '\0'))),

        /**********************************************************************/
        /* END literals                                                       */
        /**********************************************************************/
    }
});

module.exports.PREC = PREC;

/**
   * Creates a rule to match one or more of the rules separated by a comma
   *
   * @param {RuleOrLiteral} rule
   *
   * @return {SeqRule}
   *
   */
function commaSep1(rule) {
    return sep1(rule, ',');
}

/**
   * Creates a rule to match one or more occurrences of `rule` separated by `sep`
   *
   * @param {RuleOrLiteral} rule
   *
   * @param {RuleOrLiteral} separator
   *
   * @return {SeqRule}
   *
   */
function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}
