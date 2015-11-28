<?php
/**
 * @file
 * wttoc_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wttoc_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Type: Family Guide Display';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: General Information */
  $handler->display->display_options['fields']['field_general_information']['id'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['table'] = 'field_data_field_general_information';
  $handler->display->display_options['fields']['field_general_information']['field'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['label'] = '';
  $handler->display->display_options['fields']['field_general_information']['element_label_colon'] = FALSE;
  /* Field: Content: Opening Hours */
  $handler->display->display_options['fields']['field_opening_hours']['id'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['table'] = 'field_data_field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['field'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_opening_hours']['settings'] = array(
    'showclosed' => 'open',
    'date_first_day' => '0',
    'daysformat' => 'long',
    'hoursformat' => '0',
    'compress' => 0,
    'grouped' => 1,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'before',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
  );
  $handler->display->display_options['fields']['field_opening_hours']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_service_or_attraction' => 'business_service_or_attraction',
  );

  /* Display: General Information */
  $handler = $view->new_display('block', 'General Information', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'General';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: General Information */
  $handler->display->display_options['fields']['field_general_information']['id'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['table'] = 'field_data_field_general_information';
  $handler->display->display_options['fields']['field_general_information']['field'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['label'] = '';
  $handler->display->display_options['fields']['field_general_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['alter']['text'] = '<i class="icon icon-edit"><span class="element-invisible">general information</span></i><h3>General Information</h3><div class="wttocFieldEnclose">[field_general_information]</div>';
  $handler->display->display_options['fields']['field_general_information']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '<i class="icon icon-location"><span class="element-invisible">address</span></i><h3>Address</h3><div class="wttocFieldEnclose">[field_address]</div>';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );

  /* Display: More Information */
  $handler = $view->new_display('block', 'More Information', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: More Information */
  $handler->display->display_options['fields']['field_more_information']['id'] = 'field_more_information';
  $handler->display->display_options['fields']['field_more_information']['table'] = 'field_data_field_more_information';
  $handler->display->display_options['fields']['field_more_information']['field'] = 'field_more_information';
  $handler->display->display_options['fields']['field_more_information']['label'] = '';
  $handler->display->display_options['fields']['field_more_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_more_information']['alter']['text'] = '<i class="icon icon-article-alt"><span class="element-invisible">more information</span></i><h3>More Information</h3><div class="wttocFieldEnclose">[field_more_information]</div>';
  $handler->display->display_options['fields']['field_more_information']['element_label_colon'] = FALSE;
  /* Field: Content: Family Guide: Categories and Features */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_category']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  /* Field: Content: Family Guide: Categories and Features */
  $handler->display->display_options['fields']['field_category_1']['id'] = 'field_category_1';
  $handler->display->display_options['fields']['field_category_1']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category_1']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category_1']['label'] = '';
  $handler->display->display_options['fields']['field_category_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category_1']['alter']['text'] = '<i class="icon icon-th"><span class="element-invisible">categories</span></i><h3>Categories</h3><div class="wttocFieldEnclose">[field_category]</div>';
  $handler->display->display_options['fields']['field_category_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_category_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_category_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category_1']['multi_type'] = 'ul';

  /* Display: Family Guide Map */
  $handler = $view->new_display('block', 'Family Guide Map', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_hidden_address_geofield';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_address';
  $handler->display->display_options['style_options']['map'] = 'google-high-res';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '9';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '4';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '16';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Hidden Address Geofield */
  $handler->display->display_options['fields']['field_hidden_address_geofield']['id'] = 'field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['table'] = 'field_data_field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['field'] = 'field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hidden_address_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Family Guide Details */
  $handler = $view->new_display('block', 'Family Guide Details', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Business Details';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Opening Hours */
  $handler->display->display_options['fields']['field_opening_hours']['id'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['table'] = 'field_data_field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['field'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['label'] = '';
  $handler->display->display_options['fields']['field_opening_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_opening_hours']['alter']['text'] = '<i class="icon icon-clock"><span class="element-invisible">opening hours</span></i><h3>Opening Hours</h3><div class="wttocFieldEnclose">[field_opening_hours]</div>';
  $handler->display->display_options['fields']['field_opening_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opening_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_opening_hours']['settings'] = array(
    'showclosed' => 'open',
    'date_first_day' => '0',
    'daysformat' => 'long',
    'hoursformat' => '0',
    'compress' => 0,
    'grouped' => 1,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'before',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
  );
  $handler->display->display_options['fields']['field_opening_hours']['delta_offset'] = '0';
  /* Field: Content: Prices Information */
  $handler->display->display_options['fields']['field_prices_information']['id'] = 'field_prices_information';
  $handler->display->display_options['fields']['field_prices_information']['table'] = 'field_data_field_prices_information';
  $handler->display->display_options['fields']['field_prices_information']['field'] = 'field_prices_information';
  $handler->display->display_options['fields']['field_prices_information']['label'] = '';
  $handler->display->display_options['fields']['field_prices_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prices_information']['alter']['text'] = '<i class="icon icon-dollar"><span class="element-invisible">prices</span></i><h3>Prices</h3><div class="wttocFieldEnclose">[field_prices_information]</div>';
  $handler->display->display_options['fields']['field_prices_information']['element_label_colon'] = FALSE;
  /* Field: Content: Vouchers Information */
  $handler->display->display_options['fields']['field_vouchers_information']['id'] = 'field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['table'] = 'field_data_field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['field'] = 'field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['label'] = '';
  $handler->display->display_options['fields']['field_vouchers_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vouchers_information']['alter']['text'] = '<i class="icon icon-tag"><span class="element-invisible">vouchers</span></i><h3>Vouchers</h3><div class="wttocFieldEnclose">[field_vouchers_information]</div>';
  $handler->display->display_options['fields']['field_vouchers_information']['element_label_colon'] = FALSE;
  $export['business_display'] = $view;

  $view = new view();
  $view->name = 'businesses_and_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_index_businesses_and_events';
  $view->human_name = 'Page: Family Guide and Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'rowContentType-[type_1]';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* Field: Indexed Node: Featured Family Guide */
  $handler->display->display_options['fields']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['label'] = '';
  $handler->display->display_options['fields']['field_featured_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_featured_content']['empty_zero'] = TRUE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div id="resultNid[nid]"></div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_gallery']['alter']['text'] = '<a href="[url]" title="Go to content">[field_image_gallery]</a>';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'rectangle_500x370',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Linked Business */
  $handler->display->display_options['fields']['field_linked_business']['id'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_linked_business']['field'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['label'] = '';
  $handler->display->display_options['fields']['field_linked_business']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linked_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linked_business']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_linked_business']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_linked_business']['bypass_access'] = 0;
  /* Field: Indexed Node: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_linked_business] [field_address] ';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
      'address-hide-street' => 'address-hide-street',
      'address-hide-country' => 'address-hide-country',
    ),
  );
  /* Field: Indexed Node: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event']['id'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event']['settings'] = array(
    'format_type' => 'wttoc_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date_of_event']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date_of_event']['delta_reversed'] = TRUE;
  /* Field: Indexed Node: General Information */
  $handler->display->display_options['fields']['field_general_information']['id'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_general_information']['field'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['label'] = '';
  $handler->display->display_options['fields']['field_general_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_general_information']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Node: Family Guide: Categories and Features */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Indexed Node: Events: Categories and Features */
  $handler->display->display_options['fields']['field_category_event']['id'] = 'field_category_event';
  $handler->display->display_options['fields']['field_category_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_category_event']['field'] = 'field_category_event';
  $handler->display->display_options['fields']['field_category_event']['label'] = '';
  $handler->display->display_options['fields']['field_category_event']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_category_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_event']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_category_event']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category_event']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category_event']['bypass_access'] = 0;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_1']['format_name'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="buttonReadMoreListing" href="[url]">Read More</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Node: Featured Family Guide */
  $handler->display->display_options['sorts']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'business_service_or_attraction' => 'business_service_or_attraction',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Guide or Events';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  /* Filter criterion: Indexed Node: Family Guide: Categories and Features */
  $handler->display->display_options['filters']['field_category']['id'] = 'field_category';
  $handler->display->display_options['filters']['field_category']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_category']['field'] = 'field_category';
  $handler->display->display_options['filters']['field_category']['operator'] = 'all of';
  $handler->display->display_options['filters']['field_category']['value'] = array();
  $handler->display->display_options['filters']['field_category']['group'] = 1;
  $handler->display->display_options['filters']['field_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category']['expose']['operator_id'] = 'field_category_op';
  $handler->display->display_options['filters']['field_category']['expose']['label'] = 'Guide Categories';
  $handler->display->display_options['filters']['field_category']['expose']['operator'] = 'field_category_op';
  $handler->display->display_options['filters']['field_category']['expose']['identifier'] = 'field_category';
  $handler->display->display_options['filters']['field_category']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_category']['group_info']['label'] = 'Business: Categories and Features';
  $handler->display->display_options['filters']['field_category']['group_info']['identifier'] = 'field_category';
  $handler->display->display_options['filters']['field_category']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_category']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Indexed Node: Events: Categories and Features */
  $handler->display->display_options['filters']['field_category_event']['id'] = 'field_category_event';
  $handler->display->display_options['filters']['field_category_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_category_event']['field'] = 'field_category_event';
  $handler->display->display_options['filters']['field_category_event']['operator'] = 'all of';
  $handler->display->display_options['filters']['field_category_event']['value'] = array();
  $handler->display->display_options['filters']['field_category_event']['group'] = 1;
  $handler->display->display_options['filters']['field_category_event']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_event']['expose']['operator_id'] = 'field_category_event_op';
  $handler->display->display_options['filters']['field_category_event']['expose']['label'] = 'Event Categories';
  $handler->display->display_options['filters']['field_category_event']['expose']['operator'] = 'field_category_event_op';
  $handler->display->display_options['filters']['field_category_event']['expose']['identifier'] = 'field_category_event';
  $handler->display->display_options['filters']['field_category_event']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_event']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_event']['expose']['reduce'] = 0;
  /* Filter criterion: Date of Event: End date (indexed) */
  $handler->display->display_options['filters']['field_date_of_event_value2']['id'] = 'field_date_of_event_value2';
  $handler->display->display_options['filters']['field_date_of_event_value2']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_date_of_event_value2']['field'] = 'field_date_of_event_value2';
  $handler->display->display_options['filters']['field_date_of_event_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_of_event_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_date_of_event_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_of_event_value2']['expose']['operator_id'] = 'field_date_of_event_value2_op';
  $handler->display->display_options['filters']['field_date_of_event_value2']['expose']['label'] = 'Events From';
  $handler->display->display_options['filters']['field_date_of_event_value2']['expose']['operator'] = 'field_date_of_event_value2_op';
  $handler->display->display_options['filters']['field_date_of_event_value2']['expose']['identifier'] = 'field_start_datepicker';
  $handler->display->display_options['filters']['field_date_of_event_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_of_event_value2']['widget_type'] = 'date_popup';
  /* Filter criterion: Date of Event: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_of_event_value']['id'] = 'field_date_of_event_value';
  $handler->display->display_options['filters']['field_date_of_event_value']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_date_of_event_value']['field'] = 'field_date_of_event_value';
  $handler->display->display_options['filters']['field_date_of_event_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_of_event_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_of_event_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_of_event_value']['expose']['operator_id'] = 'field_date_of_event_value_op';
  $handler->display->display_options['filters']['field_date_of_event_value']['expose']['label'] = 'Events Until';
  $handler->display->display_options['filters']['field_date_of_event_value']['expose']['operator'] = 'field_date_of_event_value_op';
  $handler->display->display_options['filters']['field_date_of_event_value']['expose']['identifier'] = 'field_end_datepicker';
  $handler->display->display_options['filters']['field_date_of_event_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_of_event_value']['widget_type'] = 'date_popup';
  /* Filter criterion: Indexed Node: Ages */
  $handler->display->display_options['filters']['field_ages']['id'] = 'field_ages';
  $handler->display->display_options['filters']['field_ages']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_ages']['field'] = 'field_ages';
  $handler->display->display_options['filters']['field_ages']['value'] = array();
  $handler->display->display_options['filters']['field_ages']['group'] = 1;
  $handler->display->display_options['filters']['field_ages']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ages']['expose']['operator_id'] = 'field_ages_op';
  $handler->display->display_options['filters']['field_ages']['expose']['label'] = 'Ages';
  $handler->display->display_options['filters']['field_ages']['expose']['operator'] = 'field_ages_op';
  $handler->display->display_options['filters']['field_ages']['expose']['identifier'] = 'field_ages';
  $handler->display->display_options['filters']['field_ages']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ages']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ages']['expose']['reduce'] = 0;
  /* Filter criterion: Hidden Address Geofield: LatLong Pair (indexed) */
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['id'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['field'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['operator'] = '32.18';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['group'] = 1;
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['operator_id'] = 'field_hidden_address_geofield_latlon_op';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['operator'] = 'field_hidden_address_geofield_latlon_op';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['identifier'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['plugin'] = 'geocoder';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['plugin-geocoder'] = array(
    'geocoder_handler' => 'google',
    'geocoder_handler_options' => array(
      'geometry_type' => 'point',
      'all_results' => 0,
      'reject_results' => array(
        'APPROXIMATE' => 0,
        'GEOMETRIC_CENTER' => 0,
        'RANGE_INTERPOLATED' => 0,
        'ROOFTOP' => 0,
      ),
      'biasing' => array(
        'bounds' => '',
        'region' => 'GB',
        'components' => '',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['radius_options'] = '- -
5 5 km
10 10 km
16.09 10 mi
32.18 20 mi';
  /* Filter criterion: Hidden Address Geofield: LatLong Pair (indexed) */
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['id'] = 'field_hidden_address_geofield_latlon_1';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['field'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['operator'] = '32.18';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['group'] = 1;
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['operator_id'] = 'field_hidden_address_geofield_latlon_1_op';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['label'] = 'within 20 miles of LatLon';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['operator'] = 'field_hidden_address_geofield_latlon_1_op';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['identifier'] = 'field_hidden_address_geofield_latlon_1';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['plugin'] = 'raw';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['plugin-geocoder'] = array(
    'geocoder_handler' => 'latlon',
  );
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['radius_options'] = '- -
5 5 km
10 10 km
16.09 10 mi
32.18 20 mi';

  /* Display: Page Search Results */
  $handler = $view->new_display('page', 'Page Search Results', 'page_results');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'v_page_search_results';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No results for this search</h3>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['path'] = 'search/businesses-and-events';

  /* Display: Map and Filters */
  $handler = $view->new_display('block', 'Map and Filters', 'map_and_filters');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_hidden_address_geofield';
  $handler->display->display_options['style_options']['name_field'] = 'nid';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['height'] = '250';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '1';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '16';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Hidden Address Geofield */
  $handler->display->display_options['fields']['field_hidden_address_geofield']['id'] = 'field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['field'] = 'field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hidden_address_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hidden_address_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Indexed Node: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'square_50x50',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="#resultNid[nid]" title="Move screen to [title]">[field_image_gallery]<br><span>[title]</span></a>

';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Hidden Address Geofield: LatLong Pair (indexed) */
  $handler->display->display_options['fields']['field_hidden_address_geofield_latlon']['id'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['fields']['field_hidden_address_geofield_latlon']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_hidden_address_geofield_latlon']['field'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['fields']['field_hidden_address_geofield_latlon']['label'] = '';
  $handler->display->display_options['fields']['field_hidden_address_geofield_latlon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hidden_address_geofield_latlon']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_hidden_address_geofield_latlon']['show_distance_to_point'] = TRUE;
  $handler->display->display_options['fields']['field_hidden_address_geofield_latlon']['conversion_factor'] = '1';
  $handler->display->display_options['fields']['field_hidden_address_geofield_latlon']['precision'] = '0';
  $export['businesses_and_events'] = $view;

  $view = new view();
  $view->name = 'events_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Type: Events Display';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: General Information */
  $handler->display->display_options['fields']['field_general_information']['id'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['table'] = 'field_data_field_general_information';
  $handler->display->display_options['fields']['field_general_information']['field'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['label'] = '';
  $handler->display->display_options['fields']['field_general_information']['element_label_colon'] = FALSE;
  /* Field: Content: Opening Hours */
  $handler->display->display_options['fields']['field_opening_hours']['id'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['table'] = 'field_data_field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['field'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_opening_hours']['settings'] = array(
    'showclosed' => 'open',
    'date_first_day' => '0',
    'daysformat' => 'long',
    'hoursformat' => '0',
    'compress' => 0,
    'grouped' => 1,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'before',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
  );
  $handler->display->display_options['fields']['field_opening_hours']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: General Information */
  $handler = $view->new_display('block', 'General Information', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'General';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: General Information */
  $handler->display->display_options['fields']['field_general_information']['id'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['table'] = 'field_data_field_general_information';
  $handler->display->display_options['fields']['field_general_information']['field'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['label'] = '';
  $handler->display->display_options['fields']['field_general_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['alter']['text'] = '<i class="icon icon-edit"><span class="element-invisible">general information</span></i><h3>General Information</h3><div class="wttocFieldEnclose">[field_general_information]</div>';
  $handler->display->display_options['fields']['field_general_information']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '<i class="icon icon-location"><span class="element-invisible">address</span></i><h3>Address</h3><div class="wttocFieldEnclose">[field_address]</div>';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Event Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<i class="icon icon-link-ext"><span class="element-invisible">Website</span></i><h3>Website</h3><div class="wttocFieldEnclose">[field_website] </div>';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 1,
  );
  /* Field: Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event_1']['id'] = 'field_date_of_event_1';
  $handler->display->display_options['fields']['field_date_of_event_1']['table'] = 'field_data_field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event_1']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date_of_event_1']['separator'] = '';
  /* Field: Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event']['id'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['table'] = 'field_data_field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event']['alter']['text'] = '<i class="icon icon-calendar"><span class="element-invisible">date</span></i><h3>Date</h3><div class="wttocFieldEnclose">[field_date_of_event_1] </div>';
  $handler->display->display_options['fields']['field_date_of_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date_of_event']['delta_offset'] = '0';

  /* Display: More Information */
  $handler = $view->new_display('block', 'More Information', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: More Information */
  $handler->display->display_options['fields']['field_more_information']['id'] = 'field_more_information';
  $handler->display->display_options['fields']['field_more_information']['table'] = 'field_data_field_more_information';
  $handler->display->display_options['fields']['field_more_information']['field'] = 'field_more_information';
  $handler->display->display_options['fields']['field_more_information']['label'] = '';
  $handler->display->display_options['fields']['field_more_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_more_information']['alter']['text'] = '<i class="icon icon-article-alt"><span class="element-invisible">more information</span></i><h3>More Information</h3><div class="wttocFieldEnclose">[field_more_information]</div>';
  $handler->display->display_options['fields']['field_more_information']['element_label_colon'] = FALSE;
  /* Field: Content: Events: Categories and Features */
  $handler->display->display_options['fields']['field_category_event']['id'] = 'field_category_event';
  $handler->display->display_options['fields']['field_category_event']['table'] = 'field_data_field_category_event';
  $handler->display->display_options['fields']['field_category_event']['field'] = 'field_category_event';
  $handler->display->display_options['fields']['field_category_event']['label'] = '';
  $handler->display->display_options['fields']['field_category_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_event']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_category_event']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category_event']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category_event']['multi_type'] = 'ul';
  /* Field: Content: Events: Categories and Features */
  $handler->display->display_options['fields']['field_category_event_1']['id'] = 'field_category_event_1';
  $handler->display->display_options['fields']['field_category_event_1']['table'] = 'field_data_field_category_event';
  $handler->display->display_options['fields']['field_category_event_1']['field'] = 'field_category_event';
  $handler->display->display_options['fields']['field_category_event_1']['label'] = '';
  $handler->display->display_options['fields']['field_category_event_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category_event_1']['alter']['text'] = '<i class="icon icon-th"><span class="element-invisible">categories</span></i><h3>Categories</h3><div class="wttocFieldEnclose">[field_category_event]</div>';
  $handler->display->display_options['fields']['field_category_event_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_event_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_category_event_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category_event_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_category_event_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category_event_1']['multi_type'] = 'ul';

  /* Display: Event Map */
  $handler = $view->new_display('block', 'Event Map', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_hidden_address_geofield';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_address';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '9';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '4';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '16';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Hidden Address Geofield */
  $handler->display->display_options['fields']['field_hidden_address_geofield']['id'] = 'field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['table'] = 'field_data_field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['field'] = 'field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hidden_address_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Event Details */
  $handler = $view->new_display('block', 'Event Details', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Details';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Prices Information */
  $handler->display->display_options['fields']['field_prices_information']['id'] = 'field_prices_information';
  $handler->display->display_options['fields']['field_prices_information']['table'] = 'field_data_field_prices_information';
  $handler->display->display_options['fields']['field_prices_information']['field'] = 'field_prices_information';
  $handler->display->display_options['fields']['field_prices_information']['label'] = '';
  $handler->display->display_options['fields']['field_prices_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prices_information']['alter']['text'] = '<i class="icon icon-dollar"><span class="element-invisible">prices</span></i><h3>Prices</h3><div class="wttocFieldEnclose">[field_prices_information]</div>';
  $handler->display->display_options['fields']['field_prices_information']['element_label_colon'] = FALSE;
  /* Field: Content: Vouchers Information */
  $handler->display->display_options['fields']['field_vouchers_information']['id'] = 'field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['table'] = 'field_data_field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['field'] = 'field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['label'] = '';
  $handler->display->display_options['fields']['field_vouchers_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vouchers_information']['alter']['text'] = '<i class="icon icon-tag"><span class="element-invisible">vouchers</span></i><h3>Vouchers</h3><div class="wttocFieldEnclose">[field_vouchers_information]</div>';
  $handler->display->display_options['fields']['field_vouchers_information']['element_label_colon'] = FALSE;
  /* Field: Content: Linked Business */
  $handler->display->display_options['fields']['field_linked_business']['id'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['table'] = 'field_data_field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['field'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['label'] = '';
  $handler->display->display_options['fields']['field_linked_business']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linked_business']['alter']['text'] = '<i class="icon icon-building-filled"><span class="element-invisible">linked business</span></i><h3>Linked Business</h3><div class="wttocFieldEnclose">[field_linked_business]</div>';
  $handler->display->display_options['fields']['field_linked_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linked_business']['settings'] = array(
    'link' => 1,
  );
  $export['events_display'] = $view;

  $view = new view();
  $view->name = 'image_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events and Family Guide: Image Slider';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'big_rectangle__1200x220_',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_gallery']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_service_or_attraction' => 'business_service_or_attraction',
    'event' => 'event',
  );

  /* Display: Slider */
  $handler = $view->new_display('block', 'Slider', 'block');
  $export['image_slider'] = $view;

  $view = new view();
  $view->name = 'listings_business_and_event_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_business_and_events_categories';
  $view->human_name = 'Listings: Family Guide and Event Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Business Categories';
  $handler->display->display_options['css_class'] = 'homepage_business_categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Indexed Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['link_to_entity'] = 0;
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="/search/businesses-and-events?field_category_event%5B%5D=[tid]" title="Go to this category">[name]</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;

  /* Display: Homepage Events Categories */
  $handler = $view->new_display('block', 'Homepage Events Categories', 'homepage_event_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What\'s On';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'homepage_events_categories';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['link_to_entity'] = 0;
  /* Field: Indexed Taxonomy term: Category Image */
  $handler->display->display_options['fields']['field_category_image']['id'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['fields']['field_category_image']['field'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_category_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category_image']['alter']['text'] = '<a href="/search/businesses-and-events?type%5B%5D=event&field_category_event%5B%5D=[tid]" title="Go to this category">[field_category_image]</a>';
  $handler->display->display_options['fields']['field_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_category_image']['settings'] = array(
    'image_style' => 'rectangle__462x350_',
    'image_link' => '',
  );
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="/search/businesses-and-events?type%5B%5D=event&field_category_event%5B%5D=[tid]" title="Go to this category">[name]</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Vocabulary: Machine name (indexed) */
  $handler->display->display_options['filters']['vocabulary_machine_name']['id'] = 'vocabulary_machine_name';
  $handler->display->display_options['filters']['vocabulary_machine_name']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['filters']['vocabulary_machine_name']['field'] = 'vocabulary_machine_name';
  $handler->display->display_options['filters']['vocabulary_machine_name']['value'] = 'events_categories_and_features';
  /* Filter criterion: Indexed Taxonomy term: Show on homepage */
  $handler->display->display_options['filters']['field_show_on_homepage']['id'] = 'field_show_on_homepage';
  $handler->display->display_options['filters']['field_show_on_homepage']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['filters']['field_show_on_homepage']['field'] = 'field_show_on_homepage';
  $handler->display->display_options['filters']['field_show_on_homepage']['value'] = array(
    1 => '1',
  );

  /* Display: Homepage Business Categories */
  $handler = $view->new_display('block', 'Homepage Business Categories', 'homepage_business_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Family Guide';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'homepage_business_categories';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['link_to_entity'] = 0;
  /* Field: Indexed Taxonomy term: Category Image */
  $handler->display->display_options['fields']['field_category_image']['id'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['fields']['field_category_image']['field'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_category_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category_image']['alter']['text'] = '<a href="/search/businesses-and-events?type%5B%5D=business_service_or_attraction&field_category%5B%5D=[tid]" title="Go to this category">[field_category_image]</a> ';
  $handler->display->display_options['fields']['field_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_category_image']['settings'] = array(
    'image_style' => 'rectangle__462x350_',
    'image_link' => '',
  );
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="/search/businesses-and-events?type%5B%5D=business_service_or_attraction&field_category%5B%5D=[tid]" title="Go to this category">[name]</a> ';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Vocabulary: Machine name (indexed) */
  $handler->display->display_options['filters']['vocabulary_machine_name']['id'] = 'vocabulary_machine_name';
  $handler->display->display_options['filters']['vocabulary_machine_name']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['filters']['vocabulary_machine_name']['field'] = 'vocabulary_machine_name';
  $handler->display->display_options['filters']['vocabulary_machine_name']['value'] = 'business_type';
  /* Filter criterion: Indexed Taxonomy term: Show on homepage */
  $handler->display->display_options['filters']['field_show_on_homepage']['id'] = 'field_show_on_homepage';
  $handler->display->display_options['filters']['field_show_on_homepage']['table'] = 'search_api_index_business_and_events_categories';
  $handler->display->display_options['filters']['field_show_on_homepage']['field'] = 'field_show_on_homepage';
  $handler->display->display_options['filters']['field_show_on_homepage']['value'] = array(
    1 => '1',
  );
  $export['listings_business_and_event_categories'] = $view;

  $view = new view();
  $view->name = 'pages_blogs_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_posts_blogs_and_news';
  $view->human_name = 'Pages: Blogs & News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['css_class'] = 'pages_blognews_blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'rectangle_500x370',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '280';
  $handler->display->display_options['fields']['field_body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['more_link_text'] = 'read more';
  $handler->display->display_options['fields']['field_body']['alter']['more_link_path'] = '[url]';
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['type'] = 'text_plain';
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Post Type */
  $handler->display->display_options['fields']['field_post_type']['id'] = 'field_post_type';
  $handler->display->display_options['fields']['field_post_type']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['field_post_type']['field'] = 'field_post_type';
  $handler->display->display_options['fields']['field_post_type']['label'] = '';
  $handler->display->display_options['fields']['field_post_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_post_type']['alter']['text'] = 'in [field_post_type]';
  $handler->display->display_options['fields']['field_post_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_post_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_post_type']['bypass_access'] = 0;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Post Type */
  $handler->display->display_options['filters']['field_post_type']['id'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['field_post_type']['field'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['value'] = array(
    193 => '193',
  );

  /* Display: Blog Page */
  $handler = $view->new_display('page', 'Blog Page', 'page_blog');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pages_blognews_blog';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Post Type */
  $handler->display->display_options['filters']['field_post_type']['id'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['field_post_type']['field'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['value'] = array(
    193 => '193',
  );
  $handler->display->display_options['path'] = 'blog';

  /* Display: News Page */
  $handler = $view->new_display('page', 'News Page', 'page_news');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pages_blognews_news';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Post Type */
  $handler->display->display_options['filters']['field_post_type']['id'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['field_post_type']['field'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['value'] = array(
    194 => '194',
  );
  $handler->display->display_options['path'] = 'news';
  $export['pages_blogs_news'] = $view;

  $view = new view();
  $view->name = 'small_blocks_blogs_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_posts_blogs_and_news';
  $view->human_name = 'Small Blocks: Blogs & News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blogs & News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blognews_type_tid-[field_post_type_tid] ';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Field: Indexed Node: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'square_100x100',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['field_body']['alter']['more_link_path'] = '[url]';
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['type'] = 'text_plain';
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'today time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'wttoc_short';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Post Type: Term ID (indexed) */
  $handler->display->display_options['fields']['field_post_type_tid']['id'] = 'field_post_type_tid';
  $handler->display->display_options['fields']['field_post_type_tid']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['field_post_type_tid']['field'] = 'field_post_type_tid';
  $handler->display->display_options['fields']['field_post_type_tid']['label'] = '';
  $handler->display->display_options['fields']['field_post_type_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_post_type_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_type_tid']['separator'] = '';
  $handler->display->display_options['fields']['field_post_type_tid']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Date created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value'] = 'now';

  /* Display: Blog */
  $handler = $view->new_display('block', 'Blog', 'small_block_bn_blogs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Suffolk Kids Blog';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'small_block_bn_blogs';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="blognews_seeall"><a href="/blog">See all</a></div>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Date created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value'] = 'now';
  /* Filter criterion: Indexed Node: Post Type */
  $handler->display->display_options['filters']['field_post_type']['id'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['field_post_type']['field'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['value'] = array(
    193 => '193',
  );

  /* Display: News */
  $handler = $view->new_display('block', 'News', 'small_block_bn_news');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Suffolk Kids News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'small_block_bn_news';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'See all';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="blognews_seeall"><a href="/news">See all</a></div>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Date created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value'] = 'now';
  /* Filter criterion: Indexed Node: Post Type */
  $handler->display->display_options['filters']['field_post_type']['id'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['field_post_type']['field'] = 'field_post_type';
  $handler->display->display_options['filters']['field_post_type']['value'] = array(
    194 => '194',
  );
  $export['small_blocks_blogs_news'] = $view;

  $view = new view();
  $view->name = 'small_blocks_businesses_and_or_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_index_businesses_and_events';
  $view->human_name = 'Small Blocks: Family Guide and/or Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Small Blocks: Businesses and/or Events';
  $handler->display->display_options['css_class'] = 'smallblocks_busineses_n_events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'rowContentType-[type]';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'rectangle__462x350_',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_1']['format_name'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="teaser__first-wrapper">
<div class="verified-container [field_verified_content_1]"><div class="verified-container-inner">[field_verified_content]</div></div>
<div class="image-container">[field_image_gallery]</div>
<div class="type-container [type]"><div class="type-container-inner">[type_1]</div></div> 
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
      'address-hide-street' => 'address-hide-street',
      'address-hide-country' => 'address-hide-country',
    ),
  );
  /* Field: Indexed Node: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event']['id'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event']['settings'] = array(
    'format_type' => 'wttoc_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date_of_event']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date_of_event']['delta_reversed'] = TRUE;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type_2']['id'] = 'type_2';
  $handler->display->display_options['fields']['type_2']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_2']['field'] = 'type';
  $handler->display->display_options['fields']['type_2']['label'] = '';
  $handler->display->display_options['fields']['type_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_2']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_2']['format_name'] = 0;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_service_or_attraction' => 'business_service_or_attraction',
    'event' => 'event',
  );

  /* Display: Biz N Evs */
  $handler = $view->new_display('block', 'Biz N Evs', 'smallblocks_busineses_n_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Businesses and Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'smallblocks_busineses_n_events';

  /* Display: Biz Only */
  $handler = $view->new_display('block', 'Biz Only', 'smallblocks_businesses');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Businesses';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'smallblocks_businesses';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_service_or_attraction' => 'business_service_or_attraction',
  );

  /* Display: Evs Only */
  $handler = $view->new_display('block', 'Evs Only', 'smallblocks_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'smallblocks_events';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Feat Biz */
  $handler = $view->new_display('block', 'Feat Biz', 'small_blocks_feat_biz');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Picks';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'small_blocks_feat_biz';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Featured Family Guide */
  $handler->display->display_options['sorts']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_service_or_attraction' => 'business_service_or_attraction',
  );

  /* Display: Feat Evs */
  $handler = $view->new_display('block', 'Feat Evs', 'small_blocks_feat_evs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'small_blocks_feat_evs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'rectangle__187x150',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_1']['format_name'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="teaser__first-wrapper">
<div class="verified-container [field_verified_content_1]"><div class="verified-container-inner">[field_verified_content]</div></div>
<div class="image-container">[field_image_gallery]</div>
<div class="type-container [type]"><div class="type-container-inner">[type_1]</div></div> 
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
      'address-hide-street' => 'address-hide-street',
      'address-hide-country' => 'address-hide-country',
    ),
  );
  /* Field: Indexed Node: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event']['id'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event']['settings'] = array(
    'format_type' => 'wttoc_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date_of_event']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date_of_event']['delta_reversed'] = TRUE;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type_2']['id'] = 'type_2';
  $handler->display->display_options['fields']['type_2']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_2']['field'] = 'type';
  $handler->display->display_options['fields']['type_2']['label'] = '';
  $handler->display->display_options['fields']['type_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_2']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_2']['format_name'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Featured Family Guide */
  $handler->display->display_options['sorts']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $export['small_blocks_businesses_and_or_events'] = $view;

  $view = new view();
  $view->name = 'social_media_icons';
  $view->description = 'Depends on CSS from Social Field Module';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Social Media Icons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Follow Us On:';
  $handler->display->display_options['css_class'] = 'social-links-block-wttoc';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Icon Key */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['ui_name'] = 'Icon Key';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['type'] = 'list_key';
  /* Field: Icon Service Name */
  $handler->display->display_options['fields']['field_social_icon_1']['id'] = 'field_social_icon_1';
  $handler->display->display_options['fields']['field_social_icon_1']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon_1']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon_1']['ui_name'] = 'Icon Service Name';
  $handler->display->display_options['fields']['field_social_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_social_icon_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Social Link */
  $handler->display->display_options['fields']['field_social_link']['id'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['table'] = 'field_data_field_social_link';
  $handler->display->display_options['fields']['field_social_link']['field'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['label'] = '';
  $handler->display->display_options['fields']['field_social_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_social_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_social_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="field-item [field_social_icon_1]"><a href="[field_social_link]" target="_blank"><i class="icon [field_social_icon]"><span class="element-invisible">[name]</span></i></a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'social_media_profiles' => 'social_media_profiles',
  );

  /* Display: Social Media Icons */
  $handler = $view->new_display('block', 'Social Media Icons', 'sl_block_wttoc');
  $export['social_media_icons'] = $view;

  return $export;
}
