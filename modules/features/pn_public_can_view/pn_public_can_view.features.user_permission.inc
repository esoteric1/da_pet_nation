<?php
/**
 * @file
 * pn_public_can_view.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pn_public_can_view_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
