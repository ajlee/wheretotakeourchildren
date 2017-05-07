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
  $view->name = 'rules_tools_author_s_featured_nodes';
  $view->description = '';
  $view->tag = 'wttoc';
  $view->base_table = 'node';
  $view->human_name = 'Rules Tools: Author\'s Featured Nodes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'business_service_or_attraction' => 'business_service_or_attraction',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured Event (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_featured_content_value_1']['group'] = 2;
  /* Filter criterion: Content: Featured Event (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 2;

  /* Display: Author's Featured Nodes */
  $handler = $view->new_display('views_rules', 'Author\'s Featured Nodes', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['rules_parameter'] = array(
    'uid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Integer: Author uid',
      'name' => 'uid_integer',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'node',
      'label' => 'Content: Node Fetched',
      'name' => 'node_fetched',
    ),
  );
  $export['rules_tools_author_s_featured_nodes'] = $view;

  $view = new view();
  $view->name = 'rules_tools_de_feature_listings_of_expired_users';
  $view->description = '';
  $view->tag = 'wttoc';
  $view->base_table = 'search_api_index_index_businesses_and_events';
  $view->human_name = 'Rules Tools: De-Feature Listings of Expired Premium Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'De-Feature Listings of Expired Premium Users';
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
  /* Filter criterion: Author: User roles (indexed) */
  $handler->display->display_options['filters']['author_roles']['id'] = 'author_roles';
  $handler->display->display_options['filters']['author_roles']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['author_roles']['field'] = 'author_roles';
  $handler->display->display_options['filters']['author_roles']['operator'] = 'all of';
  $handler->display->display_options['filters']['author_roles']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['author_roles']['group'] = 1;
  /* Filter criterion: Indexed Content: Featured Family Guide */
  $handler->display->display_options['filters']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['filters']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['filters']['field_featured_content']['value'] = array(
    1 => '1',
  );

  /* Display: De-Feature Listings of Expired Premium Users */
  $handler = $view->new_display('views_rules', 'De-Feature Listings of Expired Premium Users', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['rules_variables'] = array(
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'node',
      'label' => 'Node ID',
      'name' => 'nid',
    ),
  );
  $export['rules_tools_de_feature_listings_of_expired_users'] = $view;

  $view = new view();
  $view->name = 'unpublish_listings_of_inactive_users';
  $view->description = '';
  $view->tag = 'wttoc';
  $view->base_table = 'search_api_index_index_businesses_and_events';
  $view->human_name = 'Rules Tools: Unpublish Listings of Inactive Users';
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
