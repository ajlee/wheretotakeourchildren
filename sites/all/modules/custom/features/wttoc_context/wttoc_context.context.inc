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
  $context->name = 'checkout_pages';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'subscriptions/premium-subscription' => 'subscriptions/premium-subscription',
        'cart' => 'cart',
        'checkout' => 'checkout',
        'checkout/*' => 'checkout/*',
        'checkout/*/*' => 'checkout/*/*',
        'page/advertising-and-pricing' => 'page/advertising-and-pricing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'widebottom',
          'weight' => '-35',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['checkout_pages'] = $context;

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
        'views-business_display-fg_image' => array(
          'module' => 'views',
          'delta' => 'business_display-fg_image',
          'region' => 'widetop',
          'weight' => '-9',
        ),
        'views-business_display-fg_overview' => array(
          'module' => 'views',
          'delta' => 'business_display-fg_overview',
          'region' => 'content',
          'weight' => '-29',
        ),
        'views-business_display-fg_prices' => array(
          'module' => 'views',
          'delta' => 'business_display-fg_prices',
          'region' => 'content',
          'weight' => '-28',
        ),
        'views-business_display-fg_vouchers' => array(
          'module' => 'views',
          'delta' => 'business_display-fg_vouchers',
          'region' => 'content',
          'weight' => '-27',
        ),
        'views-business_display-fg_more_info' => array(
          'module' => 'views',
          'delta' => 'business_display-fg_more_info',
          'region' => 'content',
          'weight' => '-26',
        ),
        'views-da8da0d0948ac9b6ed3896bf3109dcd3' => array(
          'module' => 'views',
          'delta' => 'da8da0d0948ac9b6ed3896bf3109dcd3',
          'region' => 'sidebar_second',
          'weight' => '-34',
        ),
        'views-business_display-fg_map' => array(
          'module' => 'views',
          'delta' => 'business_display-fg_map',
          'region' => 'sidebar_second',
          'weight' => '-33',
        ),
        'views-195991e61915a9f6e505c5f56ecab8db' => array(
          'module' => 'views',
          'delta' => '195991e61915a9f6e505c5f56ecab8db',
          'region' => 'sidebar_second',
          'weight' => '-32',
        ),
        'views-e768e4c726034a3167a98d3b47ea3c24' => array(
          'module' => 'views',
          'delta' => 'e768e4c726034a3167a98d3b47ea3c24',
          'region' => 'sidebar_second',
          'weight' => '-31',
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
        'views-events_display-e_image' => array(
          'module' => 'views',
          'delta' => 'events_display-e_image',
          'region' => 'widetop',
          'weight' => '-9',
        ),
        'views-events_display-e_overview' => array(
          'module' => 'views',
          'delta' => 'events_display-e_overview',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-events_display-e_prices' => array(
          'module' => 'views',
          'delta' => 'events_display-e_prices',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-events_display-e_vouchers' => array(
          'module' => 'views',
          'delta' => 'events_display-e_vouchers',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-events_display-e_more_info' => array(
          'module' => 'views',
          'delta' => 'events_display-e_more_info',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-events_display-e_map' => array(
          'module' => 'views',
          'delta' => 'events_display-e_map',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-35f66bb9fb85279b474668b2fc85ac61' => array(
          'module' => 'views',
          'delta' => '35f66bb9fb85279b474668b2fc85ac61',
          'region' => 'sidebar_second',
          'weight' => '-8',
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
  $context->name = 'content_type_page';
  $context->description = '';
  $context->tag = 'content_type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'basic_page' => 'basic_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bb2efc2dbf7b8075437eada170df9329' => array(
          'module' => 'views',
          'delta' => 'bb2efc2dbf7b8075437eada170df9329',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-e768e4c726034a3167a98d3b47ea3c24' => array(
          'module' => 'views',
          'delta' => 'e768e4c726034a3167a98d3b47ea3c24',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-35f66bb9fb85279b474668b2fc85ac61' => array(
          'module' => 'views',
          'delta' => '35f66bb9fb85279b474668b2fc85ac61',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('content_type');
  $export['content_type_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_type_post';
  $context->description = '';
  $context->tag = 'content_type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-182384eb67aef116ac719b65d0fcbba8' => array(
          'module' => 'views',
          'delta' => '182384eb67aef116ac719b65d0fcbba8',
          'region' => 'widetop',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-58706bf170be35d3c5264a659b28fd9f' => array(
          'module' => 'views',
          'delta' => '58706bf170be35d3c5264a659b28fd9f',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-cbe6c053fe5ece8dcda9324f80a4a914' => array(
          'module' => 'views',
          'delta' => 'cbe6c053fe5ece8dcda9324f80a4a914',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-HDmWm9cYEGcuStoZLstEOdq1Ql5WXOxo' => array(
          'module' => 'facetapi',
          'delta' => 'HDmWm9cYEGcuStoZLstEOdq1Ql5WXOxo',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-k8U3T1ETdPYpRgbAJrX5t30UCgjKumVN' => array(
          'module' => 'facetapi',
          'delta' => 'k8U3T1ETdPYpRgbAJrX5t30UCgjKumVN',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'widebottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('content_type');
  $export['content_type_post'] = $context;

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
        'commerce_cart-cart' => array(
          'module' => 'commerce_cart',
          'delta' => 'cart',
          'region' => 'widetop',
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
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-4c2750af452669f48149adba863f8fb0' => array(
          'module' => 'views',
          'delta' => '4c2750af452669f48149adba863f8fb0',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-9bc9d8ca0a25d6b82e61cd69a69f3fa4' => array(
          'module' => 'views',
          'delta' => '9bc9d8ca0a25d6b82e61cd69a69f3fa4',
          'region' => 'content',
          'weight' => '-7',
        ),
        'calendar_block_toview-whatson' => array(
          'module' => 'calendar_block_toview',
          'delta' => 'whatson',
          'region' => 'sidebar_second',
          'weight' => '-35',
        ),
        'calendar_block_toview-calendar' => array(
          'module' => 'calendar_block_toview',
          'delta' => 'calendar',
          'region' => 'sidebar_second',
          'weight' => '-34',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar_second',
          'weight' => '-33',
        ),
        'views-31f2dac756ca525bbccadd8e18cfd305' => array(
          'module' => 'views',
          'delta' => '31f2dac756ca525bbccadd8e18cfd305',
          'region' => 'sidebar_second',
          'weight' => '-32',
        ),
        'views-5c1f58618977b3132d2afde5f9635e97' => array(
          'module' => 'views',
          'delta' => '5c1f58618977b3132d2afde5f9635e97',
          'region' => 'sidebar_second',
          'weight' => '-31',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'widebottom',
          'weight' => '-10',
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
  $context->name = 'page_posts';
  $context->description = '';
  $context->tag = 'main_pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'posts' => 'posts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'highlighted',
          'weight' => '-35',
        ),
        'facetapi-HDmWm9cYEGcuStoZLstEOdq1Ql5WXOxo' => array(
          'module' => 'facetapi',
          'delta' => 'HDmWm9cYEGcuStoZLstEOdq1Ql5WXOxo',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-k8U3T1ETdPYpRgbAJrX5t30UCgjKumVN' => array(
          'module' => 'facetapi',
          'delta' => 'k8U3T1ETdPYpRgbAJrX5t30UCgjKumVN',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'widebottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('main_pages');
  $export['page_posts'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'views_page_businesses_events';
  $context->description = '';
  $context->tag = 'main_pages';
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
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '-10',
        ),
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
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'widebottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('main_pages');
  $export['views_page_businesses_events'] = $context;

  return $export;
}
