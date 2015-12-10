<?php
/**
 * @file
 * wttoc_commerce_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wttoc_commerce_content_types_node_info() {
  $items = array(
    'subscription' => array(
      'name' => t('Subscription'),
      'base' => 'node_content',
      'description' => t('Subscription'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
