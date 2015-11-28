<?php
/**
 * @file
 * wttoc_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function wttoc_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_type_business';
  $context->description = '';
  $context->tag = 'content_type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'business_service_or_attraction' => 'business_service_or_attraction',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-image_slider-block' => array(
          'module' => 'views',
          'delta' => 'image_slider-block',
          'region' => 'widetop',
          'weight' => '-10',
        ),
        'views-business_display-block' => array(
          'module' => 'views',
          'delta' => 'business_display-block',
          'region' => 'content',
          'weight' => '-15',
        ),
        'views-business_display-block_3' => array(
          'module' => 'views',
          'delta' => 'business_display-block_3',
          'region' => 'content',
          'weight' => '-14',
        ),
        'views-business_display-block_1' => array(
          'module' => 'views',
          'delta' => 'business_display-block_1',
          'region' => 'content',
          'weight' => '-13',
        ),
        'views-business_display-block_2' => array(
          'module' => 'views',
          'delta' => 'business_display-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('content_type');
  $export['content_type_business'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_type_business_and_events';
  $context->description = '';
  $context->tag = 'content_type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'business_service_or_attraction' => 'business_service_or_attraction',
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-image_slider-block' => array(
          'module' => 'views',
          'delta' => 'image_slider-block',
          'region' => 'widetop',
          'weight' => '-10',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'underlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('content_type');
  $export['content_type_business_and_events'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_type_event';
  $context->description = '';
  $context->tag = 'content_type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-image_slider-block' => array(
          'module' => 'views',
          'delta' => 'image_slider-block',
          'region' => 'widetop',
          'weight' => '-10',
        ),
        'views-events_display-block' => array(
          'module' => 'views',
          'delta' => 'events_display-block',
          'region' => 'content',
          'weight' => '-17',
        ),
        'views-events_display-block_3' => array(
          'module' => 'views',
          'delta' => 'events_display-block_3',
          'region' => 'content',
          'weight' => '-16',
        ),
        'views-events_display-block_1' => array(
          'module' => 'views',
          'delta' => 'events_display-block_1',
          'region' => 'content',
          'weight' => '-15',
        ),
        'views-events_display-block_2' => array(
          'module' => 'views',
          'delta' => 'events_display-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('content_type');
  $export['content_type_event'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'everywhere';
  $context->description = '';
  $context->tag = 'everywhere';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'superheader',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-0bbcbe58991b99238c98835b8d9d1e89' => array(
          'module' => 'views',
          'delta' => '0bbcbe58991b99238c98835b8d9d1e89',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-footer-links' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('everywhere');
  $export['everywhere'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'everywhere2';
  $context->description = '';
  $context->tag = 'everywhere';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('everywhere');
  $export['everywhere2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not_node';
  $context->description = '';
  $context->tag = 'everywhere';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'basic_page' => 'basic_page',
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node' => '~node',
        '~node/*' => '~node/*',
        '~node/*/*' => '~node/*/*',
        '~node/*/*/*' => '~node/*/*/*',
        '<front>' => '<front>',
        '*' => '*',
        '*/*' => '*/*',
        '*/*/*' => '*/*/*',
        '*/*/*/*' => '*/*/*/*',
        '*/*/*/*/*' => '*/*/*/*/*',
        '*/*/*/*/*/*' => '*/*/*/*/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-0bbcbe58991b99238c98835b8d9d1e89' => array(
          'module' => 'views',
          'delta' => '0bbcbe58991b99238c98835b8d9d1e89',
          'region' => 'widebottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('everywhere');
  $export['not_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_contact';
  $context->description = '';
  $context->tag = 'main_pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/88' => 'node/88',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'formblock-contact_site' => array(
          'module' => 'formblock',
          'delta' => 'contact_site',
          'region' => 'underlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('main_pages');
  $export['page_contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_homepage';
  $context->description = '';
  $context->tag = 'main_pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-d400f6dac6873ec2ddd895ba96987fce' => array(
          'module' => 'views',
          'delta' => 'd400f6dac6873ec2ddd895ba96987fce',
          'region' => 'widetop',
          'weight' => '-10',
        ),
        'views-1ea9486ceb6c01756421c03c0c8cc067' => array(
          'module' => 'views',
          'delta' => '1ea9486ceb6c01756421c03c0c8cc067',
          'region' => 'widetop',
          'weight' => '-9',
        ),
        'views-d336072e15ef9d7cf7595da1f2eae2c8' => array(
          'module' => 'views',
          'delta' => 'd336072e15ef9d7cf7595da1f2eae2c8',
          'region' => 'content',
          'weight' => '-21',
        ),
        'views-4c2750af452669f48149adba863f8fb0' => array(
          'module' => 'views',
          'delta' => '4c2750af452669f48149adba863f8fb0',
          'region' => 'content',
          'weight' => '-20',
        ),
        'views-9bc9d8ca0a25d6b82e61cd69a69f3fa4' => array(
          'module' => 'views',
          'delta' => '9bc9d8ca0a25d6b82e61cd69a69f3fa4',
          'region' => 'content',
          'weight' => '-19',
        ),
        'calendar_block_toview-whatson' => array(
          'module' => 'calendar_block_toview',
          'delta' => 'whatson',
          'region' => 'sidebar_second',
          'weight' => '-25',
        ),
        'calendar_block_toview-calendar' => array(
          'module' => 'calendar_block_toview',
          'delta' => 'calendar',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'views-31f2dac756ca525bbccadd8e18cfd305' => array(
          'module' => 'views',
          'delta' => '31f2dac756ca525bbccadd8e18cfd305',
          'region' => 'sidebar_second',
          'weight' => '-23',
        ),
        'views-5c1f58618977b3132d2afde5f9635e97' => array(
          'module' => 'views',
          'delta' => '5c1f58618977b3132d2afde5f9635e97',
          'region' => 'sidebar_second',
          'weight' => '-21',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('main_pages');
  $export['page_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'views_page_businesses_events';
  $context->description = '';
  $context->tag = 'views';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'businesses_and_events:page_results' => 'businesses_and_events:page_results',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-d400f6dac6873ec2ddd895ba96987fce' => array(
          'module' => 'views',
          'delta' => 'd400f6dac6873ec2ddd895ba96987fce',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-af90360638c7d20f57c8909dd0acc14b' => array(
          'module' => 'views',
          'delta' => 'af90360638c7d20f57c8909dd0acc14b',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('views');
  $export['views_page_businesses_events'] = $context;

  return $export;
}
