<?php
/**
 * @file
 * wttoc_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wttoc_roles_user_default_roles() {
  $roles = array();

  // Exported role: Free.
  $roles['Free'] = array(
    'name' => 'Free',
    'weight' => 4,
  );

  // Exported role: Premium.
  $roles['Premium'] = array(
    'name' => 'Premium',
    'weight' => 5,
  );

  // Exported role: Regular User.
  $roles['Regular User'] = array(
    'name' => 'Regular User',
    'weight' => 3,
  );

  // Exported role: Site Editor.
  $roles['Site Editor'] = array(
    'name' => 'Site Editor',
    'weight' => 6,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 7,
  );

  return $roles;
}
