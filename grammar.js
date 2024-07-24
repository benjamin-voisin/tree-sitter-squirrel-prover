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

    identifier: $ => /[a-zA-Z]+/,

    comment: $ => /(\*.+\*)/,


  }
});
