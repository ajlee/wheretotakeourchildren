<?php
/**
 * @file
 * wttoc_entityform_set_up.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function wttoc_entityform_set_up_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'entityform-advertiser_sign_up-field_advertiser_type'.
  $field_instances['entityform-advertiser_sign_up-field_advertiser_type'] = array(
    'bundle' => 'advertiser_sign_up',
    'default_value' => array(
      0 => array(
        'tid' => 631,
      ),
    ),
    'deleted' => 0,
    'description' => 'The type of advertising on Where to take our Children you are interested in.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_advertiser_type',
    'label' => 'Type of Advertising interested in',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-advertiser_sign_up-field_company_name'.
  $field_instances['entityform-advertiser_sign_up-field_company_name'] = array(
    'bundle' => 'advertiser_sign_up',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_company_name',
    'label' => 'Name of your Business or Event',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'entityform-advertiser_sign_up-field_contact_name'.
  $field_instances['entityform-advertiser_sign_up-field_contact_name'] = array(
    'bundle' => 'advertiser_sign_up',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_contact_name',
    'label' => 'Contact Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-advertiser_sign_up-field_email'.
  $field_instances['entityform-advertiser_sign_up-field_email'] = array(
    'bundle' => 'advertiser_sign_up',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-advertiser_sign_up-field_more_info'.
  $field_instances['entityform-advertiser_sign_up-field_more_info'] = array(
    'bundle' => 'advertiser_sign_up',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_more_info',
    'label' => 'More information',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-advertiser_sign_up-field_other'.
  $field_instances['entityform-advertiser_sign_up-field_other'] = array(
    'bundle' => 'advertiser_sign_up',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_other',
    'label' => 'Other (please specify)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'entityform-advertiser_sign_up-field_phone_number'.
  $field_instances['entityform-advertiser_sign_up-field_phone_number'] = array(
    'bundle' => 'advertiser_sign_up',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone_number',
    'label' => 'Phone Number',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Name');
  t('Email');
  t('More information');
  t('Name of your Business or Event');
  t('Other (please specify)');
  t('Phone Number');
  t('The type of advertising on Where to take our Children you are interested in.');
  t('Type of Advertising interested in');

  return $field_instances;
}
