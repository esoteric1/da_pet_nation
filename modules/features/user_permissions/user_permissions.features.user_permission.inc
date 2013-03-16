<?php
/**
 * @file
 * user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
