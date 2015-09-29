<?php
/**
 * @file
 * business_service_or_attraction.features.inc
 */

/**
 * Implements hook_node_info().
 */
function business_service_or_attraction_node_info() {
  $items = array(
    'business_service_or_attraction' => array(
      'name' => t('Business, Service, or Attraction'),
      'base' => 'node_content',
      'description' => t('Create a business, service, or attraction to reach the public.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
