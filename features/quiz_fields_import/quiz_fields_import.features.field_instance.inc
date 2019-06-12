<?php

/**
 * @file
 * quiz_fields_import.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function quiz_fields_import_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_quiz_q_a-field_quiz_fc_answers'.
  $field_instances['field_collection_item-field_quiz_q_a-field_quiz_fc_answers'] = array(
    'bundle' => 'field_quiz_q_a',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_quiz',
        'settings' => array(),
        'type' => 'field_quiz_formatter_quiz',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_quiz_fc_answers',
    'label' => 'Choose one answer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_quiz',
      'settings' => array(),
      'type' => 'field_quiz_widget_quiz',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_quiz_q_a-field_quiz_fc_question'.
  $field_instances['field_collection_item-field_quiz_q_a-field_quiz_fc_question'] = array(
    'bundle' => 'field_quiz_q_a',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_quiz_fc_question',
    'label' => 'Question',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-quiz-field_quiz_q_a'.
  $field_instances['node-quiz-field_quiz_q_a'] = array(
    'bundle' => 'quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'translate' => 'Translate',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_q_a',
    'label' => 'Q & A',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose one answer');
  t('Q & A');
  t('Question');

  return $field_instances;
}
