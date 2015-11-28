<?php
/**
 * @file
 * wttoc_field_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function wttoc_field_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-ages-field_category_image'
  $field_instances['taxonomy_term-ages-field_category_image'] = array(
    'bundle' => 'ages',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_category_image',
    'label' => 'Category Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_required' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'dragndrop_upload_image',
      'settings' => array(
        'allow_replace' => 0,
        'droppable_area_text' => 'Drop files here to upload',
        'media_browser' => 0,
        'multiupload' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'standard_upload' => 1,
        'upload_button_text' => 'Upload',
        'upload_event' => 'auto',
      ),
      'type' => 'dragndrop_upload_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-business_type-field_category_image'
  $field_instances['taxonomy_term-business_type-field_category_image'] = array(
    'bundle' => 'business_type',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_category_image',
    'label' => 'Category Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_required' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'dragndrop_upload_image',
      'settings' => array(
        'allow_replace' => 0,
        'droppable_area_text' => 'Drop files here to upload',
        'media_browser' => 0,
        'multiupload' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'standard_upload' => 1,
        'upload_button_text' => 'Upload',
        'upload_event' => 'auto',
      ),
      'type' => 'dragndrop_upload_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-business_type-field_show_on_homepage'
  $field_instances['taxonomy_term-business_type-field_show_on_homepage'] = array(
    'bundle' => 'business_type',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_show_on_homepage',
    'label' => 'Show on homepage',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-events_categories_and_features-field_category_image'
  $field_instances['taxonomy_term-events_categories_and_features-field_category_image'] = array(
    'bundle' => 'events_categories_and_features',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_category_image',
    'label' => 'Category Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_required' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'dragndrop_upload_image',
      'settings' => array(
        'allow_replace' => 0,
        'droppable_area_text' => 'Drop files here to upload',
        'media_browser' => 0,
        'multiupload' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'standard_upload' => 1,
        'upload_button_text' => 'Upload',
        'upload_event' => 'auto',
      ),
      'type' => 'dragndrop_upload_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-events_categories_and_features-field_show_on_homepage'
  $field_instances['taxonomy_term-events_categories_and_features-field_show_on_homepage'] = array(
    'bundle' => 'events_categories_and_features',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_show_on_homepage',
    'label' => 'Show on homepage',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-social_media_profiles-field_social_icon'
  $field_instances['taxonomy_term-social_media_profiles-field_social_icon'] = array(
    'bundle' => 'social_media_profiles',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_social_icon',
    'label' => 'Social Icon',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-social_media_profiles-field_social_link'
  $field_instances['taxonomy_term-social_media_profiles-field_social_link'] = array(
    'bundle' => 'social_media_profiles',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_social_link',
    'label' => 'Social Link',
    'required' => 1,
    'settings' => array(
      'title_fetch' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category Image');
  t('Show on homepage');
  t('Social Icon');
  t('Social Link');

  return $field_instances;
}
