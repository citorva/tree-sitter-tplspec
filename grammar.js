const PREC = {
    or: 10,
    and: 11,
    not: 12,
};

module.exports = grammar({
    name: 'tplspec',
    
    externals: $ => [
        $._newline,
        $._indent,
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
        module: $ => repeat($._statement),

        _statement: $ => choice(
            $._import_statement,
            $._compound_statement,
        ),

        /**********************************************************************/
        /* BEGIN import                                                       */
        /**********************************************************************/
        _import_statement: $ => choice(
            $.import_statement,
            $.import_from_statement,
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

        _compound_statement: $ => choice(
            $._container_definition,
            $.decorated_definition,
        ),

        /**********************************************************************/
        /* BEGIN decorated                                                    */
        /**********************************************************************/
        decorated_definition: $ => seq(
            repeat1($.decorator),
            field('definition', $._container_definition),
        ),

        decorator: $ => seq(
            '@',
            $.decorator_expression,
            $._newline,
        ),

        decorator_expression: $ => seq(
            field('function', $.primary_expression),
            optional(field('arguments', $.argument_list)),
        ),
        /**********************************************************************/
        /* END decorated                                                      */
        /**********************************************************************/

        _container_definition: _ => '',

        /**********************************************************************/
        /* BEGIN common                                                       */
        /**********************************************************************/
        dotted_name: $ => prec(1, sep1($.identifier, '.')),

        identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

        primary_expression: $ => choice(
            $.identifier,
            $.string,
            $.concatenated_string,
            $.integer,
            $.float,
            $.true,
            $.false,
            $.none,
        ),

        argument_list: $ => seq(
            '(',
            optional(commaSep1($.expression)),
            optional(','),
            ')',
        ),

        expression: $ => choice(
            $.comparison_operator,
            $.not_operator,
            $.boolean_operator,
            $.named_expression,
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

        expression_list: $ => prec.right(seq(
            $.expression,
            choice(
                ',',
                seq(
                    repeat1(seq(
                        ',',
                        $.expression,
                    )),
                    optional(','),
                ),
            ),
        )),

        /**********************************************************************/
        /* END common                                                         */
        /**********************************************************************/

        /**********************************************************************/
        /* BEGIN literals                                                     */
        /**********************************************************************/

        string: $ => seq(
            $.string_start,
            repeat($.string_content),
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

        escape_sequence: $ => token.immediate(prec(1, seq(
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

        comment: _ => token(seq('#', /.*/)),

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
