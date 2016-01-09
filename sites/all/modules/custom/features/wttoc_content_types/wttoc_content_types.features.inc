<?php
/**
 * @file
 * wttoc_content_types.features.inc
 */

/**
 * Implements hook_views_api().
 */
function wttoc_content_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

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
    'blog_post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Create a post. You can give them a type: news or blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'business_service_or_attraction' => array(
      'name' => t('Family Guide'),
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
