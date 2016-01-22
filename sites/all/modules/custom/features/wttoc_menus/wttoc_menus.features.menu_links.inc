<?php
/**
 * @file
 * wttoc_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function wttoc_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_blog:posts
  $menu_links['main-menu_blog:posts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'posts',
    'router_path' => 'posts',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => 'Blog',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_blog:posts',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:search/businesses-and-events
  $menu_links['main-menu_events:search/businesses-and-events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/businesses-and-events',
    'router_path' => 'search/businesses-and-events',
    'link_title' => 'Events',
    'options' => array(
      'query' => array(
        'type[]' => 'event',
        'sort_by' => 'search_api_aggregation_1',
      ),
      'attributes' => array(
        'title' => 'Events',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_events:search/businesses-and-events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_family-guide:search/businesses-and-events
  $menu_links['main-menu_family-guide:search/businesses-and-events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/businesses-and-events',
    'router_path' => 'search/businesses-and-events',
    'link_title' => 'Family Guide',
    'options' => array(
      'attributes' => array(
        'title' => 'Family Guide',
      ),
      'query' => array(
        'type[]' => 'business_service_or_attraction',
      ),
      'identifier' => 'main-menu_family-guide:search/businesses-and-events',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_home:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_what-to-do:search/businesses-and-events
  $menu_links['main-menu_what-to-do:search/businesses-and-events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/businesses-and-events',
    'router_path' => 'search/businesses-and-events',
    'link_title' => 'What to do?',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_what-to-do:search/businesses-and-events',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Events');
  t('Family Guide');
  t('Home');
  t('What to do?');

  return $menu_links;
}
