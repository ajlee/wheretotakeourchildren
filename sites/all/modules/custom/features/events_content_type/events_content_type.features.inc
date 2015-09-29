<?php
/**
 * @file
 * events_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function events_content_type_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Create an event to let the public know about it.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
