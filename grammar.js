module.exports = grammar({
    name: 'tplspec',

    rules: {
        module: $ => repeat($._statement),

        _statement: $ => choice(
            $._import_statement,
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

        /**********************************************************************/
        /* BEGIN common                                                       */
        /**********************************************************************/
        dotted_name: $ => prec(1, sep1($.identifier, '.')),

        identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
        /**********************************************************************/
        /* END common                                                         */
        /**********************************************************************/
    }
});

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
