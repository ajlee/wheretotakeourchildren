<?php
/**
 * @file
 * wttoc_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function wttoc_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'events-address_country-default_value';
  $feeds_tamper->importer = 'events';
  $feeds_tamper->source = 'address_country';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'GB',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['events-address_country-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'events-ages-explode';
  $feeds_tamper->importer = 'events';
  $feeds_tamper->source = 'ages';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['events-ages-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'events-category-explode';
  $feeds_tamper->importer = 'events';
  $feeds_tamper->source = 'category';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['events-category-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'events-event_end_date-strtotime';
  $feeds_tamper->importer = 'events';
  $feeds_tamper->source = 'event_end_date';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['events-event_end_date-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'events-event_start_date-strtotime';
  $feeds_tamper->importer = 'events';
  $feeds_tamper->source = 'event_start_date';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['events-event_start_date-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'facebook_events_importer-fb_id_2tamper-rewrite';
  $feeds_tamper->importer = 'facebook_events_importer';
  $feeds_tamper->source = 'fb_id_2tamper';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'facebook,https://www.facebook.com/events/[fb_id_2tamper];',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['facebook_events_importer-fb_id_2tamper-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'facebook_events_importer-fb_id_2tamper_b-rewrite';
  $feeds_tamper->importer = 'facebook_events_importer';
  $feeds_tamper->source = 'fb_id_2tamper_b';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'https://www.facebook.com/events/[fb_id_2tamper_b]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['facebook_events_importer-fb_id_2tamper_b-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'facebook_events_importer-fb_place_location_country-default_value';
  $feeds_tamper->importer = 'facebook_events_importer';
  $feeds_tamper->source = 'fb_place_location_country';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'GB',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['facebook_events_importer-fb_place_location_country-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'family_guide-address_country-default_value';
  $feeds_tamper->importer = 'family_guide';
  $feeds_tamper->source = 'address_country';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'GB',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['family_guide-address_country-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'family_guide-ages-explode';
  $feeds_tamper->importer = 'family_guide';
  $feeds_tamper->source = 'ages';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['family_guide-ages-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'family_guide-category-explode';
  $feeds_tamper->importer = 'family_guide';
  $feeds_tamper->source = 'category';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['family_guide-category-explode'] = $feeds_tamper;

  return $export;
}
