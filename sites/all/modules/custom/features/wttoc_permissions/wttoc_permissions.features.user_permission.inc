<?php
/**
 * @file
 * wttoc_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wttoc_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access back_to_top settings'.
  $permissions['access back_to_top settings'] = array(
    'name' => 'access back_to_top settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'back_to_top',
  );

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer card data'.
  $permissions['administer card data'] = array(
    'name' => 'administer card data',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'administer checkout'.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer commerce discounts'.
  $permissions['administer commerce discounts'] = array(
    'name' => 'administer commerce discounts',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_discount',
  );

  // Exported permission: 'administer commerce_coupon entities'.
  $permissions['administer commerce_coupon entities'] = array(
    'name' => 'administer commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer commerce_recurring entities'.
  $permissions['administer commerce_recurring entities'] = array(
    'name' => 'administer commerce_recurring entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer coupon types'.
  $permissions['administer coupon types'] = array(
    'name' => 'administer coupon types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer line item types'.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer product pricing'.
  $permissions['administer product pricing'] = array(
    'name' => 'administer product pricing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product_pricing_ui',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer recaptcha'.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: 'administer role expire'.
  $permissions['administer role expire'] = array(
    'name' => 'administer role expire',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_expire',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer sagepay'.
  $permissions['administer sagepay'] = array(
    'name' => 'administer sagepay',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_sagepay',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer sharethis'.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sharethis',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear blog_importer feeds'.
  $permissions['clear blog_importer feeds'] = array(
    'name' => 'clear blog_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear events feeds'.
  $permissions['clear events feeds'] = array(
    'name' => 'clear events feeds',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear facebook_events_importer feeds'.
  $permissions['clear facebook_events_importer feeds'] = array(
    'name' => 'clear facebook_events_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear family_guide feeds'.
  $permissions['clear family_guide feeds'] = array(
    'name' => 'clear family_guide feeds',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'configure cardonfile'.
  $permissions['configure cardonfile'] = array(
    'name' => 'configure cardonfile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create any card data'.
  $permissions['create any card data'] = array(
    'name' => 'create any card data',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'create basic_page content'.
  $permissions['create basic_page content'] = array(
    'name' => 'create basic_page content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog_post content'.
  $permissions['create blog_post content'] = array(
    'name' => 'create blog_post content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create business_service_or_attraction content'.
  $permissions['create business_service_or_attraction content'] = array(
    'name' => 'create business_service_or_attraction content',
    'roles' => array(
      'Free' => 'Free',
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create commerce_coupon entities'.
  $permissions['create commerce_coupon entities'] = array(
    'name' => 'create commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_coupon entities of bundle discount_coupon'.
  $permissions['create commerce_coupon entities of bundle discount_coupon'] = array(
    'name' => 'create commerce_coupon entities of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle recurring'.
  $permissions['create commerce_product entities of bundle recurring'] = array(
    'name' => 'create commerce_product entities of bundle recurring',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_recurring entities'.
  $permissions['create commerce_recurring entities'] = array(
    'name' => 'create commerce_recurring entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'create commerce_recurring entities of bundle order'.
  $permissions['create commerce_recurring entities of bundle order'] = array(
    'name' => 'create commerce_recurring entities of bundle order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'create commerce_recurring entities of bundle product'.
  $permissions['create commerce_recurring entities of bundle product'] = array(
    'name' => 'create commerce_recurring entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Free' => 'Free',
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new service'.
  $permissions['create new service'] = array(
    'name' => 'create new service',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialfield',
  );

  // Exported permission: 'create own card data'.
  $permissions['create own card data'] = array(
    'name' => 'create own card data',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'create subscription content'.
  $permissions['create subscription content'] = array(
    'name' => 'create subscription content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'custom_editor_dashboard_use'.
  $permissions['custom_editor_dashboard_use'] = array(
    'name' => 'custom_editor_dashboard_use',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'custom_editor_dashboard',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete any basic_page content'.
  $permissions['delete any basic_page content'] = array(
    'name' => 'delete any basic_page content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog_post content'.
  $permissions['delete any blog_post content'] = array(
    'name' => 'delete any blog_post content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any business_service_or_attraction content'.
  $permissions['delete any business_service_or_attraction content'] = array(
    'name' => 'delete any business_service_or_attraction content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any card data'.
  $permissions['delete any card data'] = array(
    'name' => 'delete any card data',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service'.
  $permissions['delete any service'] = array(
    'name' => 'delete any service',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialfield',
  );

  // Exported permission: 'delete any subscription content'.
  $permissions['delete any subscription content'] = array(
    'name' => 'delete any subscription content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own basic_page content'.
  $permissions['delete own basic_page content'] = array(
    'name' => 'delete own basic_page content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog_post content'.
  $permissions['delete own blog_post content'] = array(
    'name' => 'delete own blog_post content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own business_service_or_attraction content'.
  $permissions['delete own business_service_or_attraction content'] = array(
    'name' => 'delete own business_service_or_attraction content',
    'roles' => array(
      'Free' => 'Free',
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own card data'.
  $permissions['delete own card data'] = array(
    'name' => 'delete own card data',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Free' => 'Free',
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own subscription content'.
  $permissions['delete own subscription content'] = array(
    'name' => 'delete own subscription content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ages'.
  $permissions['delete terms in ages'] = array(
    'name' => 'delete terms in ages',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in business_type'.
  $permissions['delete terms in business_type'] = array(
    'name' => 'delete terms in business_type',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in events_categories_and_features'.
  $permissions['delete terms in events_categories_and_features'] = array(
    'name' => 'delete terms in events_categories_and_features',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in post_categories'.
  $permissions['delete terms in post_categories'] = array(
    'name' => 'delete terms in post_categories',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in social_media_profiles'.
  $permissions['delete terms in social_media_profiles'] = array(
    'name' => 'delete terms in social_media_profiles',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any basic_page content'.
  $permissions['edit any basic_page content'] = array(
    'name' => 'edit any basic_page content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog_post content'.
  $permissions['edit any blog_post content'] = array(
    'name' => 'edit any blog_post content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any business_service_or_attraction content'.
  $permissions['edit any business_service_or_attraction content'] = array(
    'name' => 'edit any business_service_or_attraction content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any card data'.
  $permissions['edit any card data'] = array(
    'name' => 'edit any card data',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'edit any commerce_coupon entity'.
  $permissions['edit any commerce_coupon entity'] = array(
    'name' => 'edit any commerce_coupon entity',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit any commerce_coupon entity of bundle discount_coupon'.
  $permissions['edit any commerce_coupon entity of bundle discount_coupon'] = array(
    'name' => 'edit any commerce_coupon entity of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle recurring'.
  $permissions['edit any commerce_product entity of bundle recurring'] = array(
    'name' => 'edit any commerce_product entity of bundle recurring',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_recurring entity'.
  $permissions['edit any commerce_recurring entity'] = array(
    'name' => 'edit any commerce_recurring entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit any commerce_recurring entity of bundle order'.
  $permissions['edit any commerce_recurring entity of bundle order'] = array(
    'name' => 'edit any commerce_recurring entity of bundle order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit any commerce_recurring entity of bundle product'.
  $permissions['edit any commerce_recurring entity of bundle product'] = array(
    'name' => 'edit any commerce_recurring entity of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service'.
  $permissions['edit any service'] = array(
    'name' => 'edit any service',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialfield',
  );

  // Exported permission: 'edit any subscription content'.
  $permissions['edit any subscription content'] = array(
    'name' => 'edit any subscription content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own basic_page content'.
  $permissions['edit own basic_page content'] = array(
    'name' => 'edit own basic_page content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog_post content'.
  $permissions['edit own blog_post content'] = array(
    'name' => 'edit own blog_post content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own business_service_or_attraction content'.
  $permissions['edit own business_service_or_attraction content'] = array(
    'name' => 'edit own business_service_or_attraction content',
    'roles' => array(
      'Free' => 'Free',
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own card data'.
  $permissions['edit own card data'] = array(
    'name' => 'edit own card data',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own commerce_coupon entities'.
  $permissions['edit own commerce_coupon entities'] = array(
    'name' => 'edit own commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit own commerce_coupon entities of bundle discount_coupon'.
  $permissions['edit own commerce_coupon entities of bundle discount_coupon'] = array(
    'name' => 'edit own commerce_coupon entities of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle recurring'.
  $permissions['edit own commerce_product entities of bundle recurring'] = array(
    'name' => 'edit own commerce_product entities of bundle recurring',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_recurring entities'.
  $permissions['edit own commerce_recurring entities'] = array(
    'name' => 'edit own commerce_recurring entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit own commerce_recurring entities of bundle order'.
  $permissions['edit own commerce_recurring entities of bundle order'] = array(
    'name' => 'edit own commerce_recurring entities of bundle order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit own commerce_recurring entities of bundle product'.
  $permissions['edit own commerce_recurring entities of bundle product'] = array(
    'name' => 'edit own commerce_recurring entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Free' => 'Free',
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own subscription content'.
  $permissions['edit own subscription content'] = array(
    'name' => 'edit own subscription content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in ages'.
  $permissions['edit terms in ages'] = array(
    'name' => 'edit terms in ages',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in business_type'.
  $permissions['edit terms in business_type'] = array(
    'name' => 'edit terms in business_type',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in events_categories_and_features'.
  $permissions['edit terms in events_categories_and_features'] = array(
    'name' => 'edit terms in events_categories_and_features',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in post_categories'.
  $permissions['edit terms in post_categories'] = array(
    'name' => 'edit terms in post_categories',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in social_media_profiles'.
  $permissions['edit terms in social_media_profiles'] = array(
    'name' => 'edit terms in social_media_profiles',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'facebook_events_importer_use'.
  $permissions['facebook_events_importer_use'] = array(
    'name' => 'facebook_events_importer_use',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'facebook_events_importer',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'geocoder_service_all_handlers'.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_bing'.
  $permissions['geocoder_service_handler_bing'] = array(
    'name' => 'geocoder_service_handler_bing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_exif'.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_google'.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_gpx'.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_json'.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_kml'.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_latlon'.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_mapquest_nominatim'.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_wkt'.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yahoo'.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yandex'.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'import blog_importer feeds'.
  $permissions['import blog_importer feeds'] = array(
    'name' => 'import blog_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import events feeds'.
  $permissions['import events feeds'] = array(
    'name' => 'import events feeds',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import facebook_events_importer feeds'.
  $permissions['import facebook_events_importer feeds'] = array(
    'name' => 'import facebook_events_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import family_guide feeds'.
  $permissions['import family_guide feeds'] = array(
    'name' => 'import family_guide feeds',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'redeem any coupon'.
  $permissions['redeem any coupon'] = array(
    'name' => 'redeem any coupon',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'redeem coupons of type discount_coupon'.
  $permissions['redeem coupons of type discount_coupon'] = array(
    'name' => 'redeem coupons of type discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'sagepay abort payment'.
  $permissions['sagepay abort payment'] = array(
    'name' => 'sagepay abort payment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_sagepay',
  );

  // Exported permission: 'sagepay authorise payment'.
  $permissions['sagepay authorise payment'] = array(
    'name' => 'sagepay authorise payment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_sagepay',
  );

  // Exported permission: 'sagepay cancel payment'.
  $permissions['sagepay cancel payment'] = array(
    'name' => 'sagepay cancel payment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_sagepay',
  );

  // Exported permission: 'sagepay refund payment'.
  $permissions['sagepay refund payment'] = array(
    'name' => 'sagepay refund payment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_sagepay',
  );

  // Exported permission: 'sagepay release payment'.
  $permissions['sagepay release payment'] = array(
    'name' => 'sagepay release payment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_sagepay',
  );

  // Exported permission: 'sagepay repeat deferred payment'.
  $permissions['sagepay repeat deferred payment'] = array(
    'name' => 'sagepay repeat deferred payment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_sagepay',
  );

  // Exported permission: 'sagepay repeat payment'.
  $permissions['sagepay repeat payment'] = array(
    'name' => 'sagepay repeat payment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_sagepay',
  );

  // Exported permission: 'sagepay void payment'.
  $permissions['sagepay void payment'] = array(
    'name' => 'sagepay void payment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_sagepay',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'tamper blog_importer'.
  $permissions['tamper blog_importer'] = array(
    'name' => 'tamper blog_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper events'.
  $permissions['tamper events'] = array(
    'name' => 'tamper events',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper facebook_events_importer'.
  $permissions['tamper facebook_events_importer'] = array(
    'name' => 'tamper facebook_events_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper family_guide'.
  $permissions['tamper family_guide'] = array(
    'name' => 'tamper family_guide',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock blog_importer feeds'.
  $permissions['unlock blog_importer feeds'] = array(
    'name' => 'unlock blog_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock events feeds'.
  $permissions['unlock events feeds'] = array(
    'name' => 'unlock events feeds',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock facebook_events_importer feeds'.
  $permissions['unlock facebook_events_importer feeds'] = array(
    'name' => 'unlock facebook_events_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock family_guide feeds'.
  $permissions['unlock family_guide feeds'] = array(
    'name' => 'unlock family_guide feeds',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'upload_images_for_css_use'.
  $permissions['upload_images_for_css_use'] = array(
    'name' => 'upload_images_for_css_use',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'upload_images_for_css',
  );

  // Exported permission: 'use Rules component rules_editor_tools_feature_content'.
  $permissions['use Rules component rules_editor_tools_feature_content'] = array(
    'name' => 'use Rules component rules_editor_tools_feature_content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_editor_tools_unfeature_content'.
  $permissions['use Rules component rules_editor_tools_unfeature_content'] = array(
    'name' => 'use Rules component rules_editor_tools_unfeature_content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_feature_content_vbo_component_part_1'.
  $permissions['use Rules component rules_feature_content_vbo_component_part_1'] = array(
    'name' => 'use Rules component rules_feature_content_vbo_component_part_1',
    'roles' => array(
      'Premium' => 'Premium',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_stop_subscription'.
  $permissions['use Rules component rules_stop_subscription'] = array(
    'name' => 'use Rules component rules_stop_subscription',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_unfeature_content_by_premium_vbo_component_part_1_cloned_'.
  $permissions['use Rules component rules_unfeature_content_by_premium_vbo_component_part_1_cloned_'] = array(
    'name' => 'use Rules component rules_unfeature_content_by_premium_vbo_component_part_1_cloned_',
    'roles' => array(
      'Premium' => 'Premium',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any card data'.
  $permissions['view any card data'] = array(
    'name' => 'view any card data',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'view any commerce_coupon entity'.
  $permissions['view any commerce_coupon entity'] = array(
    'name' => 'view any commerce_coupon entity',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_coupon entity of bundle discount_coupon'.
  $permissions['view any commerce_coupon entity of bundle discount_coupon'] = array(
    'name' => 'view any commerce_coupon entity of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle recurring'.
  $permissions['view any commerce_product entity of bundle recurring'] = array(
    'name' => 'view any commerce_product entity of bundle recurring',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_recurring entity'.
  $permissions['view any commerce_recurring entity'] = array(
    'name' => 'view any commerce_recurring entity',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view any commerce_recurring entity of bundle order'.
  $permissions['view any commerce_recurring entity of bundle order'] = array(
    'name' => 'view any commerce_recurring entity of bundle order',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view any commerce_recurring entity of bundle product'.
  $permissions['view any commerce_recurring entity of bundle product'] = array(
    'name' => 'view any commerce_recurring entity of bundle product',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view own card data'.
  $permissions['view own card data'] = array(
    'name' => 'view own card data',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'view own commerce_coupon entities'.
  $permissions['view own commerce_coupon entities'] = array(
    'name' => 'view own commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_coupon entities of bundle discount_coupon'.
  $permissions['view own commerce_coupon entities of bundle discount_coupon'] = array(
    'name' => 'view own commerce_coupon entities of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle recurring'.
  $permissions['view own commerce_product entities of bundle recurring'] = array(
    'name' => 'view own commerce_product entities of bundle recurring',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_recurring entities'.
  $permissions['view own commerce_recurring entities'] = array(
    'name' => 'view own commerce_recurring entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view own commerce_recurring entities of bundle order'.
  $permissions['view own commerce_recurring entities of bundle order'] = array(
    'name' => 'view own commerce_recurring entities of bundle order',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view own commerce_recurring entities of bundle product'.
  $permissions['view own commerce_recurring entities of bundle product'] = array(
    'name' => 'view own commerce_recurring entities of bundle product',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Free' => 'Free',
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view services'.
  $permissions['view services'] = array(
    'name' => 'view services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialfield',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  return $permissions;
}
