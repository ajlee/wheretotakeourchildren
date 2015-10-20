<?php
/**
 * @file
 * wttoc_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wttoc_content_types_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Just a basic page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'business_service_or_attraction' => array(
      'name' => t('Business'),
      'base' => 'node_content',
      'description' => t('Create a business, service, or attraction to reach the public.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
