<?php
/**
 * @file
 * wttoc_content_types.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function wttoc_content_types_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_more_information'
  $field_bases['field_more_information'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_more_information',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
