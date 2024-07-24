module.exports = grammar({
  name: 'squirrel',

  rules: {

    source_file: $ => repeat($._block),

    _block: $ => choice(
      // A block is either e declaration, a process, a system, a lemma or a proof
      $.declaration,
      $.command,
      $.process,
      $.system,
      $.lemma,
      $.proof,
      $.comment,
    ),

    // Type definitions

    type_variable: $ => seq(
      '\'',
      $.ident
    ),

    tvar_params: $ => repeat1($.type_variable),

    base_type: $ => choice(
      'bool',
      'message',
      'timestamp',
      'index',
      $.ident
    ),

    explicit_type: $ => choice(
      $.type_variable,
      $.base_type,
      prec.left(seq(
        $.type,
        '->',
        $.type
      )),
      seq(
        $.type,
        prec.left(repeat1(
          prec.left(seq(
            '*',
            $.type,
          ))
        ),
        )),
    ),

    type: $ => choice(
      '_',
      $.explicit_type
    ),

    // Terms

    term: $ => prec(100, choice(
      prec.left(1,seq($.term, repeat1($.term))),
      prec.left(2,seq( $.term, $.infix_op, $.term)),
      prec.left(3,seq( $.ident, optional($.term))),
      prec.left(4,seq( $.term, '#', $.natural)),
      $.macro_application,
      prec.left(5,seq(
        'if',
        $.term,
        'then',
        $.term,
        optional(seq('else', $.term))
      )),
      $.term_with_binders,
      $.sterm,
    )),

    macro_application: $ => prec(10, seq(
      $.ident,
      repeat1($.term),
      '@',
      $.term
    )),

    term_with_binders: $ => choice(
      prec.left(seq('fun', $.binders, '=>', $.term)),
      prec.left(seq($.quantif, $.binders, ',', $.term)),
      prec.left(seq(
        'find',
        $.binders,
        'such that',
        $.term,
        'in',
        $.term,
        optional(seq('else', $.term))
      )),
    ),

    quantif: $ => choice('forall', 'exists'),

    binder: $ => prec.left(choice(
      $.var_or_hole,
      seq(
        $.var_or_hole,
        repeat(seq(',', $.var_or_hole)),
        ':',
        $.type,
        optional(seq('[',repeat1($.tag),']')),
        repeat(seq(
          $.var_or_hole,
          repeat(seq(',', $.var_or_hole)),
          ':',
          $.type,
          optional(seq('[',repeat1($.tag),']')),
        )),
      ),
    )),

    var_or_hole: $ => choice($.variable, '_'),

    variable: $ => $.ident,

    tag: $ => choice('const', 'glob', 'adv'),

    binders: $ => repeat1($.binder),

    sterm: $ => prec(50, choice(
      '_',
      $.ident,
      $.diff_term,
      prec.left(seq("(", $.term, repeat(seq(',', $.term))))
    )),

    diff_term: $ => seq(
      'diff',
      '(',
      $.term,
      repeat1( seq(',', $.term)),
      ')'
    ),

    // Declarations

    declaration: $ => seq(
      choice(
        $.name_declaration,
        $.abstract_declaration,
        $.op_declaration,
      ),
      optional(
        $.dot
      )
    ),

    name_declaration: $ => seq(
      'name',
      $.ident,
      ':',
      $.type,
    ),

    abstract_declaration: $ => seq(
      'abstract',
      $.fun_id,
      optional(
        seq(
          '[',
          $.tvar_params,
          ']'
        )
      ),
      ':',
      $.type
    ),

    operator_id: $ => choice(
      $.ident,
      seq( '(', $.infix_op, ')')
    ),

    op_declaration: $ => seq(
      'op',
      $.operator_id,
      optional(seq('[', $.tvar_params, ']')),
      $.binders,
      optional(seq(':', $.type)),
      '=',
      $.term
    ),


    // Commands

    command: $ => choice(
    ),

    set_declaration: $ => seq(
      'set',
      $.set_options,
      '=',
      $.set_value,
      '.',
    ),

    set_value: $ => choice(
      'false',
      'true',
      $.number
    ),

    set_options: $ => choice(
      'timeout',
      'printTRSEquations',
      'debugConstr',
      'debugCompletion',
      'debugTactics',
      'processStrictAliasMode',
      'showStrengthenedHyp',
      'autoFADup',
      'newInduction',
      'postQuantumSound',
      'checkInclude'
    ),

    process: $ => seq(
      'process',
      '.'
    ),

    lemma: $ => seq(
      'lemma',
      '.'
    ),

    proof: $ => seq(
      'Proof',
      'Qed'
    ),

    system: $ => seq(
      'system',
      '.'
    ),

    number: $ => /\d+/,

    natural: $ => /[0-9]+/,

    ident: $ => /[a-zA-Z][a-zA-Z0-0']*/,

    comment: $ => /(\*.+\*)/,

    infix_char: $ => choice(
      '^',
      '+',
      '-',
      '*',
      '|',
      '&',
      '~',
      '<',
      '>'
    ),

    left_infix_op: $ => seq(
      '^',
      repeat(
        prec.left(choice(
          repeat1( $.infix_char),
          seq(
            /[0-9]+/,
            repeat1($.infix_char)
          ),
        ),
      ))
    ),

    right_infix_op: $ => repeat1(
      seq(
        choice(
          '+',
          '-',
          '*',
          '|',
          '&',
          '~',
        ),
        prec.right(choice(
          repeat1( $.infix_char),
          seq(
            /[0-9]+/,
            repeat1($.infix_char)
          ),
        )),
      )
    ),

    infix_op: $ => choice(
      '&&',
      '||',
      'xor',
      '=>',
      '<=>',
      $.left_infix_op,
      $.right_infix_op,
    ),


    fun_id: $ => choice(
      $.ident,
      seq(
        '(',
        $.infix_op,
        ')'
      )
    ),

    dot: $ => /\./,
  }
});
