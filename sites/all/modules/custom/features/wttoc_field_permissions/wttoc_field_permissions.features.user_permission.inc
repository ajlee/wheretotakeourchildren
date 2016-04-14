<?php
/**
 * @file
 * wttoc_field_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wttoc_field_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_email'.
  $permissions['create field_email'] = array(
    'name' => 'create field_email',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_featured_content'.
  $permissions['create field_featured_content'] = array(
    'name' => 'create field_featured_content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_image_gallery'.
  $permissions['create field_image_gallery'] = array(
    'name' => 'create field_image_gallery',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_linked_business'.
  $permissions['create field_linked_business'] = array(
    'name' => 'create field_linked_business',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_more_information'.
  $permissions['create field_more_information'] = array(
    'name' => 'create field_more_information',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_opening_hours'.
  $permissions['create field_opening_hours'] = array(
    'name' => 'create field_opening_hours',
    'roles' => array(
      'Free' => 'Free',
      'Premium' => 'Premium',
      'Regular User' => 'Regular User',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_prices_information'.
  $permissions['create field_prices_information'] = array(
    'name' => 'create field_prices_information',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_social_media_pages'.
  $permissions['create field_social_media_pages'] = array(
    'name' => 'create field_social_media_pages',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_user_image'.
  $permissions['create field_user_image'] = array(
    'name' => 'create field_user_image',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_video'.
  $permissions['create field_video'] = array(
    'name' => 'create field_video',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vouchers_information'.
  $permissions['create field_vouchers_information'] = array(
    'name' => 'create field_vouchers_information',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_email'.
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_featured_content'.
  $permissions['edit field_featured_content'] = array(
    'name' => 'edit field_featured_content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_image_gallery'.
  $permissions['edit field_image_gallery'] = array(
    'name' => 'edit field_image_gallery',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_linked_business'.
  $permissions['edit field_linked_business'] = array(
    'name' => 'edit field_linked_business',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_more_information'.
  $permissions['edit field_more_information'] = array(
    'name' => 'edit field_more_information',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_opening_hours'.
  $permissions['edit field_opening_hours'] = array(
    'name' => 'edit field_opening_hours',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_prices_information'.
  $permissions['edit field_prices_information'] = array(
    'name' => 'edit field_prices_information',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_social_media_pages'.
  $permissions['edit field_social_media_pages'] = array(
    'name' => 'edit field_social_media_pages',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_user_image'.
  $permissions['edit field_user_image'] = array(
    'name' => 'edit field_user_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_video'.
  $permissions['edit field_video'] = array(
    'name' => 'edit field_video',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vouchers_information'.
  $permissions['edit field_vouchers_information'] = array(
    'name' => 'edit field_vouchers_information',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_email'.
  $permissions['edit own field_email'] = array(
    'name' => 'edit own field_email',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_featured_content'.
  $permissions['edit own field_featured_content'] = array(
    'name' => 'edit own field_featured_content',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_image_gallery'.
  $permissions['edit own field_image_gallery'] = array(
    'name' => 'edit own field_image_gallery',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_linked_business'.
  $permissions['edit own field_linked_business'] = array(
    'name' => 'edit own field_linked_business',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_more_information'.
  $permissions['edit own field_more_information'] = array(
    'name' => 'edit own field_more_information',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_opening_hours'.
  $permissions['edit own field_opening_hours'] = array(
    'name' => 'edit own field_opening_hours',
    'roles' => array(
      'Free' => 'Free',
      'Premium' => 'Premium',
      'Regular User' => 'Regular User',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_prices_information'.
  $permissions['edit own field_prices_information'] = array(
    'name' => 'edit own field_prices_information',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_social_media_pages'.
  $permissions['edit own field_social_media_pages'] = array(
    'name' => 'edit own field_social_media_pages',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_user_image'.
  $permissions['edit own field_user_image'] = array(
    'name' => 'edit own field_user_image',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_video'.
  $permissions['edit own field_video'] = array(
    'name' => 'edit own field_video',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vouchers_information'.
  $permissions['edit own field_vouchers_information'] = array(
    'name' => 'edit own field_vouchers_information',
    'roles' => array(
      'Premium' => 'Premium',
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_email'.
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_featured_content'.
  $permissions['view field_featured_content'] = array(
    'name' => 'view field_featured_content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_image_gallery'.
  $permissions['view field_image_gallery'] = array(
    'name' => 'view field_image_gallery',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_linked_business'.
  $permissions['view field_linked_business'] = array(
    'name' => 'view field_linked_business',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_more_information'.
  $permissions['view field_more_information'] = array(
    'name' => 'view field_more_information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_opening_hours'.
  $permissions['view field_opening_hours'] = array(
    'name' => 'view field_opening_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_prices_information'.
  $permissions['view field_prices_information'] = array(
    'name' => 'view field_prices_information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_social_media_pages'.
  $permissions['view field_social_media_pages'] = array(
    'name' => 'view field_social_media_pages',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_user_image'.
  $permissions['view field_user_image'] = array(
    'name' => 'view field_user_image',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_video'.
  $permissions['view field_video'] = array(
    'name' => 'view field_video',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vouchers_information'.
  $permissions['view field_vouchers_information'] = array(
    'name' => 'view field_vouchers_information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_email'.
  $permissions['view own field_email'] = array(
    'name' => 'view own field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_featured_content'.
  $permissions['view own field_featured_content'] = array(
    'name' => 'view own field_featured_content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_image_gallery'.
  $permissions['view own field_image_gallery'] = array(
    'name' => 'view own field_image_gallery',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_linked_business'.
  $permissions['view own field_linked_business'] = array(
    'name' => 'view own field_linked_business',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_more_information'.
  $permissions['view own field_more_information'] = array(
    'name' => 'view own field_more_information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_opening_hours'.
  $permissions['view own field_opening_hours'] = array(
    'name' => 'view own field_opening_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_prices_information'.
  $permissions['view own field_prices_information'] = array(
    'name' => 'view own field_prices_information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_social_media_pages'.
  $permissions['view own field_social_media_pages'] = array(
    'name' => 'view own field_social_media_pages',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_user_image'.
  $permissions['view own field_user_image'] = array(
    'name' => 'view own field_user_image',
    'roles' => array(
      'Site Editor' => 'Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_video'.
  $permissions['view own field_video'] = array(
    'name' => 'view own field_video',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vouchers_information'.
  $permissions['view own field_vouchers_information'] = array(
    'name' => 'view own field_vouchers_information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
