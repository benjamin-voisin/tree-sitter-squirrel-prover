module.exports = grammar({
  name: 'squirrel',

  rules: {

    source_file: $ => repeat($._block),

    _block: $ => choice(
      // A block is either e declaration, a process, a system, a lemma or a proof
      $.declaration,
      $.process,
      $.system,
      $.lemma,
      $.proof,
      $.comment,
    ),

    // Type definitions

    type_variable: $ => seq(
      '\'',
      $.identifier
    ),

    base_type: $ => choice(
      'bool',
      'message',
      'timestamp',
      'index',
      $.identifier
    ),

    explicit_type: $ => choice(
      $.type_variable,
      $.base_type,
      seq(
        $.type,
        '->',
        $.type
      ),
      seq(
        '(',
        $.type,
        repeat1(
          seq(
            '*',
            $.type,
          )
        ),
        ')'
      ),
    ),

    type: $ => choice(
      '_',
      $.explicit_type
    ),


    include_declaration: $ => seq(
      'include',
      $.identifier,
      '.'
    ),

    declaration: $ => choice(
      $.set_declaration,
      $.include_declaration,
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

    identifier: $ => /[a-zA-Z][a-zA-Z0-0]*/,

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
        choice(
          repeat1( $.infix_char),
          seq(
            /[0-9]+/,
            repeat1($.infix_char)
          ),
        ),
      )
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
        choice(
          repeat1( $.infix_char),
          seq(
            /[0-9]+/,
            repeat1($.infix_char)
          ),
        ),
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


  }
});
