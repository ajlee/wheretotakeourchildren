<?php
/**
 * @file
 * wttoc_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function wttoc_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'blog_importer';
  $feeds_importer->config = array(
    'name' => 'Blog Importer',
    'description' => 'Blog Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '38',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'post_content',
            'target' => 'field_body',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'post_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'post_date',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'blog_post',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['blog_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'events';
  $feeds_importer->config = array(
    'name' => 'Events',
    'description' => 'Import Events',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'general_info',
            'target' => 'field_general_information',
            'format' => 'filtered_html',
          ),
          3 => array(
            'source' => 'price_info',
            'target' => 'field_prices_information',
            'format' => 'filtered_html',
          ),
          4 => array(
            'source' => 'voucher_info',
            'target' => 'field_vouchers_information',
            'format' => 'filtered_html',
          ),
          5 => array(
            'source' => 'more_info',
            'target' => 'field_more_information',
            'format' => 'filtered_html',
          ),
          6 => array(
            'source' => 'category',
            'target' => 'field_category',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          7 => array(
            'source' => 'ages',
            'target' => 'field_ages',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'address_country',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'address_line_1',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'address_line_2',
            'target' => 'field_address:premise',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'address_town',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'address_postcode',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'address_county',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'social_media_pages',
            'target' => 'field_social_media_pages',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'website_url',
            'target' => 'url',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'phone_number',
            'target' => 'field_phone_number',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'event_start_date',
            'target' => 'field_date_of_event:start',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'event_end_date',
            'target' => 'field_date_of_event:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['events'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'family_guide';
  $feeds_importer->config = array(
    'name' => 'Family Guide',
    'description' => 'Family Guide',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'general_info',
            'target' => 'field_general_information',
            'format' => 'filtered_html',
          ),
          3 => array(
            'source' => 'price_info',
            'target' => 'field_prices_information',
            'format' => 'filtered_html',
          ),
          4 => array(
            'source' => 'voucher_info',
            'target' => 'field_vouchers_information',
            'format' => 'filtered_html',
          ),
          5 => array(
            'source' => 'more_info',
            'target' => 'field_more_information',
            'format' => 'filtered_html',
          ),
          6 => array(
            'source' => 'category',
            'target' => 'field_category',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          7 => array(
            'source' => 'ages',
            'target' => 'field_ages',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'address_country',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'address_line_1',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'address_line_2',
            'target' => 'field_address:premise',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'address_town',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'address_postcode',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'address_county',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'social_media_pages',
            'target' => 'field_social_media_pages',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'website_url',
            'target' => 'url',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'phone_number',
            'target' => 'field_phone_number',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'opening_day',
            'target' => 'field_opening_hours:day',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'opening_day_hour_start',
            'target' => 'field_opening_hours:hours:start',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'opening_day_hour_end',
            'target' => 'field_opening_hours:hours:end',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'business_service_or_attraction',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['family_guide'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'news_importer';
  $feeds_importer->config = array(
    'name' => 'News Importer',
    'description' => 'News Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '38',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'post_content',
            'target' => 'field_body',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'post_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'post_date',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'blog_post',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['news_importer'] = $feeds_importer;

  return $export;
}
