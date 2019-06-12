<?php

/**
 * @file
 * quiz_fields_import.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function quiz_fields_import_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_quiz_fc_answers'.
  $field_bases['field_quiz_fc_answers'] = array(
    'active' => 1,
    'cardinality' => 4,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_fc_answers',
    'indexes' => array(
      'answer' => array(
        0 => array(
          0 => 'answer',
          1 => 255,
        ),
      ),
      'correct' => array(
        0 => 'correct',
      ),
    ),
    'locked' => 0,
    'module' => 'field_quiz',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_quiz',
  );

  // Exported field_base: 'field_quiz_fc_question'.
  $field_bases['field_quiz_fc_question'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_fc_question',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 200,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_quiz_q_a'.
  $field_bases['field_quiz_q_a'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_q_a',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
