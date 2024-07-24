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


    type_primitive: $ => choice(
      'bool',
      'message',
      'index'
    ),

    declaration_primitive: $ => choice(
      'abstract',
      'name',
      'channel',
      'hash'
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
