<?php

/**
 * @file
 * quiz_fields_import.features.inc
 */

/**
 * Implements hook_node_info().
 */
function quiz_fields_import_node_info() {
  $items = array(
    'quiz' => array(
      'name' => t('Quiz'),
      'base' => 'node_content',
      'description' => t('Quiz for students'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
