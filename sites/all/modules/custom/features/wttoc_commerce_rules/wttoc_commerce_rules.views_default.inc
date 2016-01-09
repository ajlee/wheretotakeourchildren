<?php
/**
 * @file
 * wttoc_commerce_rules.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wttoc_commerce_rules_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'unpublish_listings_of_inactive_users';
  $view->description = '';
  $view->tag = 'wttoc';
  $view->base_table = 'search_api_index_index_businesses_and_events';
  $view->human_name = 'Tools: Unpublish Listings of Inactive Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Unpublish Listings of Inactive Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 1;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Filter criterion: Author: Last access (indexed) */
  $handler->display->display_options['filters']['author_last_access']['id'] = 'author_last_access';
  $handler->display->display_options['filters']['author_last_access']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['author_last_access']['field'] = 'author_last_access';
  $handler->display->display_options['filters']['author_last_access']['operator'] = '<';
  $handler->display->display_options['filters']['author_last_access']['value'] = '-90 days';
  $handler->display->display_options['filters']['author_last_access']['group'] = 1;
  /* Filter criterion: Author: User roles (indexed) */
  $handler->display->display_options['filters']['author_roles']['id'] = 'author_roles';
  $handler->display->display_options['filters']['author_roles']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['author_roles']['field'] = 'author_roles';
  $handler->display->display_options['filters']['author_roles']['operator'] = 'all of';
  $handler->display->display_options['filters']['author_roles']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['author_roles']['group'] = 1;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;

  /* Display: Unpublish Listings of Inactive Users */
  $handler = $view->new_display('views_rules', 'Unpublish Listings of Inactive Users', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['rules_variables'] = array(
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'node',
      'label' => 'Node ID',
      'name' => 'nid',
    ),
  );
  $export['unpublish_listings_of_inactive_users'] = $view;

  return $export;
}
