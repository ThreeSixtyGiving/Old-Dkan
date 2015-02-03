<?php
/**
 * @file
 * threesixty_giving_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function threesixty_giving_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer node limits'.
  $permissions['administer node limits'] = array(
    'name' => 'administer node limits',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node_limit',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(),
    'module' => 'honeypot',
  );

  // Exported permission: 'override node limits'.
  $permissions['override node limits'] = array(
    'name' => 'override node limits',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node_limit',
  );

  return $permissions;
}
