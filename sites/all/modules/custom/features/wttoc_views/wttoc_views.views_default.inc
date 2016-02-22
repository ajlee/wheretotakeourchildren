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

  /* Display: Overview */
  $handler = $view->new_display('block', 'Overview', 'fg_overview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overview';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'fg_overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: General Information */
  $handler->display->display_options['fields']['field_general_information']['id'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['table'] = 'field_data_field_general_information';
  $handler->display->display_options['fields']['field_general_information']['field'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['label'] = '';
  $handler->display->display_options['fields']['field_general_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['alter']['text'] = '<i class="icon icon-edit"><span class="element-invisible">general information</span></i><h3>General Information</h3><div class="wttocFieldEnclose">[field_general_information]</div>';
  $handler->display->display_options['fields']['field_general_information']['element_label_colon'] = FALSE;
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_gallery']['alter']['text'] = '<i class="icon icon-camera"><span class="element-invisible">Photos</span></i><h3>Photos</h3><div class="wttocFieldNoEnclose">[field_image_gallery]</div>';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['type'] = 'galleryformatter_default';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'slide_style' => 'galleryformatter_slide',
    'thumb_style' => 'galleryformatter_thumb',
    'style' => 'Greenarrows',
    'link_to_full' => 1,
    'link_to_full_style' => '0',
    'modal' => 'colorbox',
    'linking_method' => 'onclick_full',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video']['alter']['text'] = '<i class="icon icon-videocam"><span class="element-invisible">Video</span></i><h3>Video</h3><div class="wttocFieldNoEnclose">[field_video]</div>';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'video_style' => 'normal',
  );

  /* Display: More Information */
  $handler = $view->new_display('block', 'More Information', 'fg_more_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More Info';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'fg_more_info';
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
  /* Field: Content: Ages */
  $handler->display->display_options['fields']['field_ages']['id'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['table'] = 'field_data_field_ages';
  $handler->display->display_options['fields']['field_ages']['field'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['label'] = '';
  $handler->display->display_options['fields']['field_ages']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ages']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ages']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ages']['delta_offset'] = '0';
  /* Field: Content: Ages */
  $handler->display->display_options['fields']['field_ages_1']['id'] = 'field_ages_1';
  $handler->display->display_options['fields']['field_ages_1']['table'] = 'field_data_field_ages';
  $handler->display->display_options['fields']['field_ages_1']['field'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages_1']['label'] = '';
  $handler->display->display_options['fields']['field_ages_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ages_1']['alter']['text'] = '<i class="icon icon-hourglass"><span class="element-invisible">Ages</span></i><h3>Ages</h3><div class="wttocFieldEnclose">[field_ages]</div>';
  $handler->display->display_options['fields']['field_ages_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ages_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ages_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ages_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ages_1']['delta_offset'] = '0';

  /* Display: Family Guide Map */
  $handler = $view->new_display('block', 'Family Guide Map', 'fg_map');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Map';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'fg_map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_hidden_address_geofield';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_address';
  $handler->display->display_options['style_options']['map'] = 'google-high-res';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '9';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '4';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '16';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<b>[title]</b>';
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

  /* Display: Image Heading */
  $handler = $view->new_display('block', 'Image Heading', 'fg_image');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'fg_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'big_rectangle',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="titb_title">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '<div class="titb_address">[field_address]</div>';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number']['alter']['text'] = '<div class="titb_phone">[field_phone_number]</div>';
  $handler->display->display_options['fields']['field_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'title' => '',
  );
  /* Field: Content: Event Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = ' <div class="titb_website">[field_website]</div>';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 1,
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<div class="titb_email">[field_email]</div>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="textInTopBox"><div class="titb_Left">[title][field_address]</div><div class="titb_Right">[field_phone_number][field_website][field_email]</div></div> ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Prices */
  $handler = $view->new_display('block', 'Prices', 'fg_prices');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Prices';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'fg_prices';
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
  $handler->display->display_options['fields']['field_prices_information']['alter']['text'] = '<i class="icon icon-pound"><span class="element-invisible">prices</span></i><h3>Prices</h3><div class="wttocFieldEnclose">[field_prices_information]</div>';
  $handler->display->display_options['fields']['field_prices_information']['element_label_colon'] = FALSE;

  /* Display: Vouchers */
  $handler = $view->new_display('block', 'Vouchers', 'fg_vouchers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Special Offers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'fg_vouchers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Vouchers Information */
  $handler->display->display_options['fields']['field_vouchers_information']['id'] = 'field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['table'] = 'field_data_field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['field'] = 'field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['label'] = '';
  $handler->display->display_options['fields']['field_vouchers_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vouchers_information']['alter']['text'] = '<i class="icon icon-tag"><span class="element-invisible">vouchers</span></i><h3>Vouchers</h3><div class="wttocFieldEnclose">[field_vouchers_information]</div>';
  $handler->display->display_options['fields']['field_vouchers_information']['element_label_colon'] = FALSE;

  /* Display: Opening Hours */
  $handler = $view->new_display('block', 'Opening Hours', 'fg_opening_hours');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opening Hours';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'fg_opening_hours';
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
  $handler->display->display_options['fields']['field_opening_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opening_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_opening_hours']['settings'] = array(
    'showclosed' => 'all',
    'date_first_day' => '0',
    'daysformat' => 'long',
    'hoursformat' => '0',
    'compress' => 0,
    'grouped' => 0,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'hide',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
  );
  $handler->display->display_options['fields']['field_opening_hours']['delta_offset'] = '0';
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
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'rowContentType-[type_1]';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* Field: Indexed Content: Featured Family Guide */
  $handler->display->display_options['fields']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['label'] = '';
  $handler->display->display_options['fields']['field_featured_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_featured_content']['empty_zero'] = TRUE;
  /* Field: Indexed Content: Node ID */
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
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Image Gallery */
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
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Linked Business */
  $handler->display->display_options['fields']['field_linked_business']['id'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_linked_business']['field'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['label'] = '';
  $handler->display->display_options['fields']['field_linked_business']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linked_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linked_business']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_linked_business']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_linked_business']['bypass_access'] = 0;
  /* Field: Indexed Content: Address */
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
  /* Field: Indexed Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event_1']['id'] = 'field_date_of_event_1';
  $handler->display->display_options['fields']['field_date_of_event_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event_1']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event_1']['alter']['text'] = 'This event has multiple dates';
  $handler->display->display_options['fields']['field_date_of_event_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event_1']['settings'] = array(
    'format_type' => 'wttoc_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_reversed'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event_1']['separator'] = '';
  /* Field: Indexed Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event']['id'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event']['alter']['text'] = 'Multiple Dates';
  $handler->display->display_options['fields']['field_date_of_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event']['empty'] = '[field_date_of_event_1]';
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
  $handler->display->display_options['fields']['field_date_of_event']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_date_of_event']['delta_reversed'] = TRUE;
  /* Field: Indexed Content: General Information */
  $handler->display->display_options['fields']['field_general_information']['id'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_general_information']['field'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['label'] = '';
  $handler->display->display_options['fields']['field_general_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_general_information']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Content: Family Guide: Categories and Features */
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
  /* Field: Indexed Content: Events: Categories and Features */
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
  /* Field: Indexed Content: Content type */
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
  /* Sort criterion: Indexed Content: Featured Family Guide */
  $handler->display->display_options['sorts']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Sort by Recent';
  /* Sort criterion: Indexed Content: Start Date - First Value */
  $handler->display->display_options['sorts']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_aggregation_1']['expose']['label'] = 'Sort by Event Date';
  /* Sort criterion: Hidden Address Geofield: LatLong Pair (indexed) */
  $handler->display->display_options['sorts']['field_hidden_address_geofield_latlon']['id'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['sorts']['field_hidden_address_geofield_latlon']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_hidden_address_geofield_latlon']['field'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['sorts']['field_hidden_address_geofield_latlon']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_hidden_address_geofield_latlon']['expose']['label'] = 'Sort by Distance';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Content: Content type */
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
  /* Filter criterion: Indexed Content: Family Guide: Categories and Features */
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
  /* Filter criterion: Indexed Content: Events: Categories and Features */
  $handler->display->display_options['filters']['field_category_event']['id'] = 'field_category_event';
  $handler->display->display_options['filters']['field_category_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_category_event']['field'] = 'field_category_event';
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
  /* Filter criterion: Indexed Content: Ages */
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
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['operator'] = '-';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['group'] = 1;
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['operator_id'] = 'field_hidden_address_geofield_latlon_op';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['operator'] = 'field_hidden_address_geofield_latlon_op';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['identifier'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
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
19.3 12 mi
32.18 20 mi';
  /* Filter criterion: Hidden Address Geofield: LatLong Pair (indexed) */
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['id'] = 'field_hidden_address_geofield_latlon_1';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['field'] = 'field_hidden_address_geofield_latlon';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['operator'] = '24.13';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['group'] = 1;
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['operator_id'] = 'field_hidden_address_geofield_latlon_1_op';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['label'] = 'within 15 miles of LatLon';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['operator'] = 'field_hidden_address_geofield_latlon_1_op';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['identifier'] = 'field_hidden_address_geofield_latlon_1';
  $handler->display->display_options['filters']['field_hidden_address_geofield_latlon_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
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
19.3 12 mi
24.13 15 mi
32.18 20 mi';
  /* Filter criterion: Indexed Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search By Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Date of Event: End date (indexed) */
  $handler->display->display_options['filters']['field_date_of_event_value2_1']['id'] = 'field_date_of_event_value2_1';
  $handler->display->display_options['filters']['field_date_of_event_value2_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_date_of_event_value2_1']['field'] = 'field_date_of_event_value2';
  $handler->display->display_options['filters']['field_date_of_event_value2_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_of_event_value2_1']['value'] = 'now - 1 hour';
  $handler->display->display_options['filters']['field_date_of_event_value2_1']['group'] = 2;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'business_service_or_attraction' => 'business_service_or_attraction',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;

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
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No results for this search!</h3>
<ul><li>Make sure to check for mispellings</li><li>Note that finished events will not show up</li></ul>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Search | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
    ),
  );
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
  /* Field: Indexed Content: Hidden Address Geofield */
  $handler->display->display_options['fields']['field_hidden_address_geofield']['id'] = 'field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['field'] = 'field_hidden_address_geofield';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hidden_address_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_hidden_address_geofield']['settings'] = array(
    'data' => 'centroid',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Indexed Content: Image Gallery */
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
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Node ID */
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

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Family Guide and Events';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'url';
  $handler->display->display_options['row_options']['description_field'] = 'field_general_information';
  $handler->display->display_options['row_options']['creator_field'] = 'type_1';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'feed_nid',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: General Information */
  $handler->display->display_options['fields']['field_general_information']['id'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_general_information']['field'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['label'] = '';
  $handler->display->display_options['fields']['field_general_information']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_1']['format_name'] = 0;
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Content: Feed NID */
  $handler->display->display_options['fields']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['label'] = '';
  $handler->display->display_options['fields']['feed_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['feed_nid']['separator'] = '';
  $handler->display->display_options['fields']['feed_nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['label'] = '';
  $handler->display->display_options['fields']['author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['author']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Content: Content type */
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
  $handler->display->display_options['path'] = 'rss/guide-and-events.xml';
  $handler->display->display_options['sitename_title'] = 0;
  $export['businesses_and_events'] = $view;

  $view = new view();
  $view->name = 'content_type_basic_page_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Type: Basic Page Display';
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
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
    'basic_page' => 'basic_page',
  );

  /* Display: Main Content */
  $handler = $view->new_display('block', 'Main Content', 'pages_main');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pages_main';
  $export['content_type_basic_page_display'] = $view;

  $view = new view();
  $view->name = 'content_type_posts_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Type: Posts Display';
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  /* Field: User: User Image */
  $handler->display->display_options['fields']['field_user_image']['id'] = 'field_user_image';
  $handler->display->display_options['fields']['field_user_image']['table'] = 'field_data_field_user_image';
  $handler->display->display_options['fields']['field_user_image']['field'] = 'field_user_image';
  $handler->display->display_options['fields']['field_user_image']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_image']['label'] = '';
  $handler->display->display_options['fields']['field_user_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_image']['settings'] = array(
    'image_style' => 'square_100x100',
    'image_link' => '',
  );
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: User: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_company_name']['label'] = '';
  $handler->display->display_options['fields']['field_company_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_name']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Written by [name] on [created_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['type'] = 'galleryformatter_default';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'slide_style' => 'galleryformatter_slide',
    'thumb_style' => 'galleryformatter_thumb',
    'style' => 'Greenarrows',
    'link_to_full' => 1,
    'link_to_full_style' => '0',
    'modal' => 'colorbox',
    'linking_method' => 'onclick_full',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Field: Content: Post Categories */
  $handler->display->display_options['fields']['field_post_categories']['id'] = 'field_post_categories';
  $handler->display->display_options['fields']['field_post_categories']['table'] = 'field_data_field_post_categories';
  $handler->display->display_options['fields']['field_post_categories']['field'] = 'field_post_categories';
  $handler->display->display_options['fields']['field_post_categories']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_post_categories']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_post_categories']['alter']['path'] = 'posts?f[]=field_post_categories%3A[field_post_categories-tid]';
  $handler->display->display_options['fields']['field_post_categories']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_post_categories']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_post_categories']['separator'] = ' ';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="blogBoxLeft">[field_user_image]</div><div class="blogBoxRight"><div class="bbr_writteprev">Written by</div><div class="bbr_written">[name]</div><div class="bbr_title">[field_title]</div><div class="bbr_company">[field_company_name]</div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'blog_post' => 'blog_post',
  );

  /* Display: Main Content */
  $handler = $view->new_display('block', 'Main Content', 'posts_main');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'posts_main';

  /* Display: Back to Posts */
  $handler = $view->new_display('block', 'Back to Posts', 'post_back_to_posts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'post_back_to_posts';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href ="/posts"> Back to Posts</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $export['content_type_posts_display'] = $view;

  $view = new view();
  $view->name = 'delete_terms_admin';
  $view->description = '';
  $view->tag = 'wttoc';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Tools: Delete terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Delete terms - Admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Bulk operations: Taxonomy term */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ages' => 'ages',
    'events_categories_and_features' => 'events_categories_and_features',
    'business_type' => 'business_type',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/tools/delete-terms';
  $export['delete_terms_admin'] = $view;

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

  /* Display: Overview */
  $handler = $view->new_display('block', 'Overview', 'e_overview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overview';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'e_overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: General Information */
  $handler->display->display_options['fields']['field_general_information']['id'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['table'] = 'field_data_field_general_information';
  $handler->display->display_options['fields']['field_general_information']['field'] = 'field_general_information';
  $handler->display->display_options['fields']['field_general_information']['label'] = '';
  $handler->display->display_options['fields']['field_general_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_general_information']['alter']['text'] = '<i class="icon icon-edit"><span class="element-invisible">general information</span></i><h3>General Information</h3><div class="wttocFieldEnclose">[field_general_information]</div>';
  $handler->display->display_options['fields']['field_general_information']['element_label_colon'] = FALSE;
  /* Field: Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event']['id'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['table'] = 'field_data_field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_date_of_event']['delta_offset'] = '0';
  /* Field: Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event_1']['id'] = 'field_date_of_event_1';
  $handler->display->display_options['fields']['field_date_of_event_1']['table'] = 'field_data_field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event_1']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event_1']['alter']['text'] = '<i class="icon icon-calendar"><span class="element-invisible">Event Dates</span></i><h3>Event Date</h3><div class="wttocFieldEnclose">[field_date_of_event] </div>';
  $handler->display->display_options['fields']['field_date_of_event_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event_1']['settings'] = array(
    'format_type' => 'wttoc_short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date_of_event_1']['separator'] = '';
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_gallery']['alter']['text'] = '<i class="icon icon-camera"><span class="element-invisible">Photos</span></i><h3>Photos</h3><div class="wttocFieldNoEnclose">[field_image_gallery]</div>';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['type'] = 'galleryformatter_default';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'slide_style' => 'galleryformatter_slide',
    'thumb_style' => 'galleryformatter_thumb',
    'style' => 'Greenarrows',
    'link_to_full' => 1,
    'link_to_full_style' => '0',
    'modal' => 'colorbox',
    'linking_method' => 'onclick_full',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video']['alter']['text'] = '<i class="icon icon-videocam"><span class="element-invisible">Video</span></i><h3>Video</h3><div class="wttocFieldNoEnclose">[field_video]</div>';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Linked Business */
  $handler->display->display_options['fields']['field_linked_business']['id'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['table'] = 'field_data_field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['field'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['label'] = '';
  $handler->display->display_options['fields']['field_linked_business']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linked_business']['alter']['text'] = '<i class="icon icon-building-filled"><span class="element-invisible">Linked Business</span></i><h3>Linked Business</h3><div class="wttocFieldEnclose">[field_linked_business]</div>';
  $handler->display->display_options['fields']['field_linked_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linked_business']['settings'] = array(
    'link' => 1,
  );

  /* Display: More Information */
  $handler = $view->new_display('block', 'More Information', 'e_more_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More Info';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'e_more_info';
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
  /* Field: Content: Ages */
  $handler->display->display_options['fields']['field_ages']['id'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['table'] = 'field_data_field_ages';
  $handler->display->display_options['fields']['field_ages']['field'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['label'] = '';
  $handler->display->display_options['fields']['field_ages']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ages']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ages']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ages']['delta_offset'] = '0';
  /* Field: Content: Ages */
  $handler->display->display_options['fields']['field_ages_1']['id'] = 'field_ages_1';
  $handler->display->display_options['fields']['field_ages_1']['table'] = 'field_data_field_ages';
  $handler->display->display_options['fields']['field_ages_1']['field'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages_1']['label'] = '';
  $handler->display->display_options['fields']['field_ages_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ages_1']['alter']['text'] = '<i class="icon icon-hourglass"><span class="element-invisible">Ages</span></i><h3>Ages</h3><div class="wttocFieldEnclose">[field_ages]</div>';
  $handler->display->display_options['fields']['field_ages_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ages_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ages_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ages_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ages_1']['delta_offset'] = '0';

  /* Display: Event Map */
  $handler = $view->new_display('block', 'Event Map', 'e_map');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Map';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'e_map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_hidden_address_geofield';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_address';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '9';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '4';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '16';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<b>[title]</b>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Image Heading */
  $handler = $view->new_display('block', 'Image Heading', 'e_image');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'e_image';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'big_rectangle',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="titb_title">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Linked Business */
  $handler->display->display_options['fields']['field_linked_business']['id'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['table'] = 'field_data_field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['field'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['label'] = '';
  $handler->display->display_options['fields']['field_linked_business']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linked_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linked_business']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '<div class="titb_address">[field_linked_business] [field_address]</div>';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number']['alter']['text'] = '<div class="titb_phone">[field_phone_number]</div>';
  $handler->display->display_options['fields']['field_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'title' => '',
  );
  /* Field: Content: Event Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = ' <div class="titb_website">[field_website]</div>';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<div class="titb_email">[field_email]</div>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="textInTopBox"><div class="titb_Left">[title][field_address]</div><div class="titb_Right">[field_phone_number][field_website][field_email]</div></div> ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Prices */
  $handler = $view->new_display('block', 'Prices', 'e_prices');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Prices';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'e_prices';
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
  $handler->display->display_options['fields']['field_prices_information']['alter']['text'] = '<i class="icon icon-pound"><span class="element-invisible">prices</span></i><h3>Prices</h3><div class="wttocFieldEnclose">[field_prices_information]</div>';
  $handler->display->display_options['fields']['field_prices_information']['element_label_colon'] = FALSE;

  /* Display: Vouchers */
  $handler = $view->new_display('block', 'Vouchers', 'e_vouchers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Special Offer';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'e_vouchers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Vouchers Information */
  $handler->display->display_options['fields']['field_vouchers_information']['id'] = 'field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['table'] = 'field_data_field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['field'] = 'field_vouchers_information';
  $handler->display->display_options['fields']['field_vouchers_information']['label'] = '';
  $handler->display->display_options['fields']['field_vouchers_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vouchers_information']['alter']['text'] = '<i class="icon icon-tag"><span class="element-invisible">vouchers</span></i><h3>Vouchers</h3><div class="wttocFieldEnclose">[field_vouchers_information]</div>';
  $handler->display->display_options['fields']['field_vouchers_information']['element_label_colon'] = FALSE;
  $export['events_display'] = $view;

  $view = new view();
  $view->name = 'homepage_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Tools: Editor Homepage Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'name_1' => 'name_1',
    'field_show_on_homepage' => 'field_show_on_homepage',
    'field_category_image' => 'field_category_image',
  );
  $handler->display->display_options['style_options']['default'] = 'field_show_on_homepage';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_show_on_homepage' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Taxonomy term */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_promote_category_to_homepage' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_unpromote_category_to_homepage' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] - [edit_term]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Which Category?';
  /* Field: Taxonomy term: Show on homepage */
  $handler->display->display_options['fields']['field_show_on_homepage']['id'] = 'field_show_on_homepage';
  $handler->display->display_options['fields']['field_show_on_homepage']['table'] = 'field_data_field_show_on_homepage';
  $handler->display->display_options['fields']['field_show_on_homepage']['field'] = 'field_show_on_homepage';
  $handler->display->display_options['fields']['field_show_on_homepage']['empty_zero'] = TRUE;
  /* Field: Taxonomy term: Category Image */
  $handler->display->display_options['fields']['field_category_image']['id'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['table'] = 'field_data_field_category_image';
  $handler->display->display_options['fields']['field_category_image']['field'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_category_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'events_categories_and_features' => 'events_categories_and_features',
    'business_type' => 'business_type',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['description'] = 'contains this value';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['filters']['vid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['label'] = 'Which Category?';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
  $handler->display->display_options['filters']['vid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['vid']['expose']['reduce'] = TRUE;
  /* Filter criterion: Taxonomy term: Show on homepage (field_show_on_homepage) */
  $handler->display->display_options['filters']['field_show_on_homepage_value']['id'] = 'field_show_on_homepage_value';
  $handler->display->display_options['filters']['field_show_on_homepage_value']['table'] = 'field_data_field_show_on_homepage';
  $handler->display->display_options['filters']['field_show_on_homepage_value']['field'] = 'field_show_on_homepage_value';
  $handler->display->display_options['filters']['field_show_on_homepage_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_show_on_homepage_value']['expose']['operator_id'] = 'field_show_on_homepage_value_op';
  $handler->display->display_options['filters']['field_show_on_homepage_value']['expose']['label'] = 'Show on homepage?';
  $handler->display->display_options['filters']['field_show_on_homepage_value']['expose']['operator'] = 'field_show_on_homepage_value_op';
  $handler->display->display_options['filters']['field_show_on_homepage_value']['expose']['identifier'] = 'field_show_on_homepage_value';
  $handler->display->display_options['filters']['field_show_on_homepage_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Homepage Categories */
  $handler = $view->new_display('page', 'Homepage Categories', 'page');
  $handler->display->display_options['path'] = 'admin/tools/homepage-categories';
  $export['homepage_categories'] = $view;

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
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
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
  $handler->display->display_options['fields']['field_category_image']['alter']['text'] = '<a href="/search/businesses-and-events?type%5B%5D=event&field_category_event%5B%5D=[tid]&sort_by=search_api_aggregation_1" title="Go to this category">[field_category_image]</a>';
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
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="/search/businesses-and-events?type%5B%5D=event&field_category_event%5B%5D=[tid]&sort_by=search_api_aggregation_1" title="Go to this category">[name]</a>';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
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
  $handler->display->display_options['css_class'] = 'pages_blognews_blog';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h2>No results for this search.</h2>';
  /* Field: Indexed Content: Image Gallery */
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
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['text'] = '[field_body]';
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '280';
  $handler->display->display_options['fields']['field_body']['alter']['more_link_text'] = 'read more';
  $handler->display->display_options['fields']['field_body']['alter']['more_link_path'] = '[url]';
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['type'] = 'text_plain';
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'Read More';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'M';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created_1']['link_to_entity'] = 0;
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Content: Post Categories */
  $handler->display->display_options['fields']['field_post_categories']['id'] = 'field_post_categories';
  $handler->display->display_options['fields']['field_post_categories']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['field_post_categories']['field'] = 'field_post_categories';
  $handler->display->display_options['fields']['field_post_categories']['label'] = '';
  $handler->display->display_options['fields']['field_post_categories']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_post_categories']['alter']['text'] = 'postClass[field_post_categories] ';
  $handler->display->display_options['fields']['field_post_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_categories']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_post_categories']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_post_categories']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postMonthDay"><div class="pmd_month">[created_1]</div><div class="pmd_day">[created]</div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Posts Page */
  $handler = $view->new_display('page', 'Posts Page', 'page_posts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pages_blognews_posts';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Blog | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'posts';

  /* Display: Facets Trigger Block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets Trigger Block', 'page_posts_facet_trigger_block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page_posts_facet_trigger_block';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Pages: Blogs & News - Facets Trigger Block';
  $handler->display->display_options['linked_path'] = 'posts';
  $handler->display->display_options['facet_field'] = 'nid';
  $handler->display->display_options['hide_block'] = 1;

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'url';
  $handler->display->display_options['row_options']['description_field'] = 'field_body';
  $handler->display->display_options['row_options']['creator_field'] = 'author';
  $handler->display->display_options['row_options']['date_field'] = 'created_1';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['text'] = '[field_body]';
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '280';
  $handler->display->display_options['fields']['field_body']['alter']['more_link_text'] = 'read more';
  $handler->display->display_options['fields']['field_body']['alter']['more_link_path'] = '[url]';
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'M';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created_1']['link_to_entity'] = 0;
  /* Field: Indexed Content: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['label'] = '';
  $handler->display->display_options['fields']['author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['author']['bypass_access'] = 0;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'rss/blog.xml';
  $handler->display->display_options['sitename_title'] = 0;
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
  /* Field: Indexed Content: Image Gallery */
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
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Body */
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
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'today time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'wttoc_short';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Content: Date created */
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
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="blognews_seeall"><a href="/posts?f[0]=field_post_categories%3A205">See all</a></div>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Date created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value'] = 'now';
  /* Filter criterion: Indexed Content: Post Categories */
  $handler->display->display_options['filters']['field_post_categories']['id'] = 'field_post_categories';
  $handler->display->display_options['filters']['field_post_categories']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['field_post_categories']['field'] = 'field_post_categories';
  $handler->display->display_options['filters']['field_post_categories']['value'] = array(
    205 => '205',
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
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="blognews_seeall"><a href="/posts?f[0]=field_post_categories%3A206">See all</a></div>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Date created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value'] = 'now';
  /* Filter criterion: Indexed Content: Post Categories */
  $handler->display->display_options['filters']['field_post_categories']['id'] = 'field_post_categories';
  $handler->display->display_options['filters']['field_post_categories']['table'] = 'search_api_index_posts_blogs_and_news';
  $handler->display->display_options['filters']['field_post_categories']['field'] = 'field_post_categories';
  $handler->display->display_options['filters']['field_post_categories']['value'] = array(
    206 => '206',
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
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'rowContentType-[type]';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Image Gallery */
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
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Indexed Content: Content type */
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
<div class="image-container">[field_image_gallery]</div>
<div class="type-container [type]"><div class="type-container-inner">[type_1]</div></div> 
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Address */
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
  /* Field: Indexed Content: Date of Event */
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
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type_2']['id'] = 'type_2';
  $handler->display->display_options['fields']['type_2']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_2']['field'] = 'type';
  $handler->display->display_options['fields']['type_2']['label'] = '';
  $handler->display->display_options['fields']['type_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_2']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_2']['format_name'] = 0;
  /* Sort criterion: Indexed Content: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Indexed Content: Content type */
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

  /* Display: Biz Only - On Biz */
  $handler = $view->new_display('block', 'Biz Only - On Biz', 'smallblocks_businesses');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Picks';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'smallblocks_businesses';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Featured Family Guide */
  $handler->display->display_options['sorts']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_service_or_attraction' => 'business_service_or_attraction',
  );

  /* Display: Evs Only - on Event */
  $handler = $view->new_display('block', 'Evs Only - on Event', 'smallblocks_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Picks';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'smallblocks_events';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Image Gallery */
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
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Indexed Content: Content type */
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
<div class="image-container">[field_image_gallery]</div>
<div class="type-container [type]"><div class="type-container-inner">[type_1]</div></div> 
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Linked Business */
  $handler->display->display_options['fields']['field_linked_business']['id'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_linked_business']['field'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['label'] = '';
  $handler->display->display_options['fields']['field_linked_business']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linked_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linked_business']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_linked_business']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_linked_business']['bypass_access'] = 0;
  /* Field: Indexed Content: Address */
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
  /* Field: Indexed Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event_1']['id'] = 'field_date_of_event_1';
  $handler->display->display_options['fields']['field_date_of_event_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event_1']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event_1']['settings'] = array(
    'format_type' => 'wttoc_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_offset'] = '0';
  /* Field: Indexed Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event']['id'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event']['alter']['text'] = '<span>Multiple Dates</span>';
  $handler->display->display_options['fields']['field_date_of_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event']['empty'] = '[field_date_of_event_1]';
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
  $handler->display->display_options['fields']['field_date_of_event']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_date_of_event']['delta_reversed'] = TRUE;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type_2']['id'] = 'type_2';
  $handler->display->display_options['fields']['type_2']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_2']['field'] = 'type';
  $handler->display->display_options['fields']['type_2']['label'] = '';
  $handler->display->display_options['fields']['type_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_2']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_2']['format_name'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Featured Family Guide */
  $handler->display->display_options['sorts']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Start Date - First Value */
  $handler->display->display_options['sorts']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  /* Sort criterion: Indexed Content: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Date of Event: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_of_event_value']['id'] = 'field_date_of_event_value';
  $handler->display->display_options['filters']['field_date_of_event_value']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_date_of_event_value']['field'] = 'field_date_of_event_value';
  $handler->display->display_options['filters']['field_date_of_event_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_of_event_value']['value'] = 'now';

  /* Display: Feat Biz - Home */
  $handler = $view->new_display('block', 'Feat Biz - Home', 'small_blocks_feat_biz');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Family Guide Picks';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'small_blocks_feat_biz';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Featured Family Guide */
  $handler->display->display_options['sorts']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_service_or_attraction' => 'business_service_or_attraction',
  );

  /* Display: Feat Evs - Home */
  $handler = $view->new_display('block', 'Feat Evs - Home', 'small_blocks_feat_evs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Event Picks';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'small_blocks_feat_evs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Image Gallery */
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
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Indexed Content: Content type */
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
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Linked Business */
  $handler->display->display_options['fields']['field_linked_business']['id'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_linked_business']['field'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['label'] = '';
  $handler->display->display_options['fields']['field_linked_business']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linked_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linked_business']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_linked_business']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_linked_business']['bypass_access'] = 0;
  /* Field: Indexed Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_linked_business] [field_address]';
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
  /* Field: Indexed Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event_1']['id'] = 'field_date_of_event_1';
  $handler->display->display_options['fields']['field_date_of_event_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event_1']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event_1']['settings'] = array(
    'format_type' => 'wttoc_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_offset'] = '0';
  /* Field: Indexed Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event']['id'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event']['alter']['text'] = '<span>Multiple Dates</span>';
  $handler->display->display_options['fields']['field_date_of_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event']['empty'] = '[field_date_of_event_1]';
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
  $handler->display->display_options['fields']['field_date_of_event']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_date_of_event']['delta_reversed'] = TRUE;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type_2']['id'] = 'type_2';
  $handler->display->display_options['fields']['type_2']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_2']['field'] = 'type';
  $handler->display->display_options['fields']['type_2']['label'] = '';
  $handler->display->display_options['fields']['type_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_2']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_2']['format_name'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Featured Family Guide */
  $handler->display->display_options['sorts']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Start Date - First Value */
  $handler->display->display_options['sorts']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  /* Sort criterion: Indexed Content: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Date of Event: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_of_event_value']['id'] = 'field_date_of_event_value';
  $handler->display->display_options['filters']['field_date_of_event_value']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_date_of_event_value']['field'] = 'field_date_of_event_value';
  $handler->display->display_options['filters']['field_date_of_event_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_of_event_value']['value'] = 'now';

  /* Display: Evs Only - On Business */
  $handler = $view->new_display('block', 'Evs Only - On Business', 'small_blocks_biz_evs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Venue Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'small_blocks_biz_evs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Image Gallery */
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
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Indexed Content: Content type */
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
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Linked Business */
  $handler->display->display_options['fields']['field_linked_business']['id'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_linked_business']['field'] = 'field_linked_business';
  $handler->display->display_options['fields']['field_linked_business']['label'] = '';
  $handler->display->display_options['fields']['field_linked_business']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linked_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linked_business']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_linked_business']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_linked_business']['bypass_access'] = 0;
  /* Field: Indexed Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_linked_business] [field_address]';
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
  /* Field: Indexed Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event_1']['id'] = 'field_date_of_event_1';
  $handler->display->display_options['fields']['field_date_of_event_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event_1']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event_1']['settings'] = array(
    'format_type' => 'wttoc_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date_of_event_1']['delta_offset'] = '0';
  /* Field: Indexed Content: Date of Event */
  $handler->display->display_options['fields']['field_date_of_event']['id'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['field_date_of_event']['field'] = 'field_date_of_event';
  $handler->display->display_options['fields']['field_date_of_event']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_event']['alter']['text'] = '<span>Multiple Dates</span>';
  $handler->display->display_options['fields']['field_date_of_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_event']['empty'] = '[field_date_of_event_1]';
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
  $handler->display->display_options['fields']['field_date_of_event']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_date_of_event']['delta_reversed'] = TRUE;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type_2']['id'] = 'type_2';
  $handler->display->display_options['fields']['type_2']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['fields']['type_2']['field'] = 'type';
  $handler->display->display_options['fields']['type_2']['label'] = '';
  $handler->display->display_options['fields']['type_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_2']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_2']['format_name'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Featured Family Guide */
  $handler->display->display_options['sorts']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Start Date - First Value */
  $handler->display->display_options['sorts']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  /* Sort criterion: Indexed Content: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Linked Business */
  $handler->display->display_options['arguments']['field_linked_business']['id'] = 'field_linked_business';
  $handler->display->display_options['arguments']['field_linked_business']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['arguments']['field_linked_business']['field'] = 'field_linked_business';
  $handler->display->display_options['arguments']['field_linked_business']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_linked_business']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_linked_business']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_linked_business']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_linked_business']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Date of Event: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_of_event_value']['id'] = 'field_date_of_event_value';
  $handler->display->display_options['filters']['field_date_of_event_value']['table'] = 'search_api_index_index_businesses_and_events';
  $handler->display->display_options['filters']['field_date_of_event_value']['field'] = 'field_date_of_event_value';
  $handler->display->display_options['filters']['field_date_of_event_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_of_event_value']['value'] = 'now';
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

  $view = new view();
  $view->name = 'tools_admin_content';
  $view->description = 'Find and manage content.';
  $view->tag = 'wttoc';
  $view->base_table = 'node';
  $view->human_name = 'Tools: Editor Admin Content';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['css_class'] = 'admin-views-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
    'field_featured_content' => 'field_featured_content',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '&nbsp;',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '&emsp;',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_featured_content' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No content available.';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'forums' => 0,
    'tags' => 0,
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change author',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'rules_component::rules_editor_tools_feature_content' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_editor_tools_unfeature_content' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Featured Event */
  $handler->display->display_options['fields']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['label'] = 'Featured / Top Pick';
  $handler->display->display_options['fields']['field_featured_content']['empty'] = 'Not Featured';
  $handler->display->display_options['fields']['field_featured_content']['empty_zero'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'basic_page' => 'basic_page',
    'event' => 'event',
    'business_service_or_attraction' => 'business_service_or_attraction',
    'blog_post' => 'blog_post',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_page' => 'basic_page',
    'event' => 'event',
    'business_service_or_attraction' => 'business_service_or_attraction',
    'blog_post' => 'blog_post',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/tools/admin-content';
  $export['tools_admin_content'] = $view;

  $view = new view();
  $view->name = 'tools_admin_users';
  $view->description = '';
  $view->tag = 'wttoc';
  $view->base_table = 'users';
  $view->human_name = 'Tools: Admin Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tools: Admin Users';
  $handler->display->display_options['css_class'] = 'admin_tools_users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'mail' => 'mail',
    'name' => 'name',
    'status' => 'status',
    'rid' => 'rid',
    'access' => 'access',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_delete_user_override' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete User and Content',
    ),
  );
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = ' [name]<br>[mail]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'long';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '2';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name ';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['filters']['rid_1']['group'] = 1;
  $handler->display->display_options['filters']['rid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid_1']['expose']['operator_id'] = 'rid_1_op';
  $handler->display->display_options['filters']['rid_1']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid_1']['expose']['operator'] = 'rid_1_op';
  $handler->display->display_options['filters']['rid_1']['expose']['identifier'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['rid_1']['expose']['reduce'] = TRUE;

  /* Display: Tools: Editor Users */
  $handler = $view->new_display('page', 'Tools: Editor Users', 'admin_tools_users');
  $handler->display->display_options['path'] = 'admin/tools/users';
  $export['tools_admin_users'] = $view;

  $view = new view();
  $view->name = 'tools_editor_orders';
  $view->description = 'Display a list of orders for the store admin.';
  $view->tag = 'wttoc';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Tools: Editor Orders';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Orders';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any commerce_order entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'order_number' => 'order_number',
    'changed' => 'changed',
    'commerce_customer_address' => 'commerce_customer_address',
    'name' => 'name',
    'commerce_order_total' => 'commerce_order_total',
    'status' => 'status',
    'operations' => 'operations',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'order_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_customer_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Commerce Order: Empty text */
  $handler->display->display_options['empty']['empty_text']['id'] = 'empty_text';
  $handler->display->display_options['empty']['empty_text']['table'] = 'commerce_order';
  $handler->display->display_options['empty']['empty_text']['field'] = 'empty_text';
  $handler->display->display_options['empty']['empty_text']['add_path'] = 'admin/commerce/orders/add';
  /* Relationship: Commerce Order: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  /* Field: Commerce Order: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Commerce Customer profile: Address */
  $handler->display->display_options['fields']['commerce_customer_address']['id'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['field'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address']['label'] = 'Name';
  $handler->display->display_options['fields']['commerce_customer_address']['empty'] = '-';
  $handler->display->display_options['fields']['commerce_customer_address']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['commerce_customer_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: Commerce Order: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['label'] = 'Operations';
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'User Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Commerce Order: Order number */
  $handler->display->display_options['filters']['order_number']['id'] = 'order_number';
  $handler->display->display_options['filters']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['order_number']['field'] = 'order_number';
  $handler->display->display_options['filters']['order_number']['exposed'] = TRUE;
  $handler->display->display_options['filters']['order_number']['expose']['operator_id'] = 'order_number_op';
  $handler->display->display_options['filters']['order_number']['expose']['label'] = 'Order number';
  $handler->display->display_options['filters']['order_number']['expose']['operator'] = 'order_number_op';
  $handler->display->display_options['filters']['order_number']['expose']['identifier'] = 'order_number';
  $handler->display->display_options['filters']['order_number']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Admin page */
  $handler = $view->new_display('page', 'Admin page', 'admin_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/tools/commerce/orders/list';
  $handler->display->display_options['menu']['title'] = 'Orders';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Orders';
  $handler->display->display_options['tab_options']['description'] = 'Manage orders in the store.';
  $handler->display->display_options['tab_options']['weight'] = '';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Shopping carts */
  $handler = $view->new_display('page', 'Shopping carts', 'shopping_carts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shopping carts';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'There are currently no shopping cart orders.';
  $handler->display->display_options['empty']['text']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['path'] = 'admin/tools/commerce/carts/list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Shopping carts';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['tools_editor_orders'] = $view;

  $view = new view();
  $view->name = 'tools_editor_recurring_entities';
  $view->description = '';
  $view->tag = 'wttoc';
  $view->base_table = 'commerce_recurring';
  $view->human_name = 'Tools: Editor Recurring Entities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recurring Subscriptions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'name' => 'name',
    'type' => 'type',
    'start_date' => 'start_date',
    'due_date' => 'due_date',
    'end_date' => 'end_date',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'id';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'due_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'end_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no recurring entities.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Commerce recurring entity: Creator ID */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_recurring';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Commerce recurring entity */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'commerce_recurring';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_stop_subscription' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Stop Subscription',
    ),
  );
  /* Field: Commerce recurring entity: Commerce recurring ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'commerce_recurring';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'Id';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Customer';
  /* Field: Commerce recurring entity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_recurring';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Commerce recurring entity: Commerce recurring start date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'commerce_recurring';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['label'] = 'Start date';
  $handler->display->display_options['fields']['start_date']['date_format'] = 'short';
  /* Field: Commerce recurring entity: Commerce recurring due date */
  $handler->display->display_options['fields']['due_date']['id'] = 'due_date';
  $handler->display->display_options['fields']['due_date']['table'] = 'commerce_recurring';
  $handler->display->display_options['fields']['due_date']['field'] = 'due_date';
  $handler->display->display_options['fields']['due_date']['label'] = 'Due date';
  $handler->display->display_options['fields']['due_date']['date_format'] = 'raw time hence';
  /* Field: Commerce recurring entity: Commerce recurring end date */
  $handler->display->display_options['fields']['end_date']['id'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['table'] = 'commerce_recurring';
  $handler->display->display_options['fields']['end_date']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['label'] = 'End date';
  $handler->display->display_options['fields']['end_date']['date_format'] = 'raw time hence';
  /* Field: Commerce recurring entity: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_recurring';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'admin_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/tools/recurring';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Recurring entities';
  $handler->display->display_options['tab_options']['description'] = 'Manage recurring entities in the store';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $export['tools_editor_recurring_entities'] = $view;

  $view = new view();
  $view->name = 'user_tools_my_content';
  $view->description = 'Find and manage content.';
  $view->tag = 'wttoc';
  $view->base_table = 'node';
  $view->human_name = 'User Tools: My Content';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['css_class'] = 'admin-views-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
    'field_featured_content' => 'field_featured_content',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '&nbsp;',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '&emsp;',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_featured_content' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Note: <b>Premium Users</b> are allowed to feature up to 4 listings. </h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No content available.';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'forums' => 0,
    'tags' => 0,
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'rules_component::rules_feature_content_vbo_component_part_1' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Feature Content as Top Pick',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'rules_component::rules_unfeature_content_by_premium_vbo_component_part_1_cloned_' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unfeature Content as Top Pick',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Featured Event */
  $handler->display->display_options['fields']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['label'] = 'Featured / Top Pick';
  $handler->display->display_options['fields']['field_featured_content']['empty'] = 'Not Featured';
  $handler->display->display_options['fields']['field_featured_content']['empty_zero'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'current_user_or_role';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'access denied';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
    'business_service_or_attraction' => 'business_service_or_attraction',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'business_service_or_attraction' => 'business_service_or_attraction',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;

  /* Display: Manage Listings */
  $handler = $view->new_display('page', 'Manage Listings', 'page_1');
  $handler->display->display_options['path'] = 'user/%/my-content';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Manage Listings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'User';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['user_tools_my_content'] = $view;

  return $export;
}
