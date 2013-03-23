<?php
/**
 * @file
 * pn_site_manager.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pn_site_manager_user_default_roles() {
  $roles = array();

  // Exported role: site manager.
  $roles['site manager'] = array(
    'name' => 'site manager',
    'weight' => '2',
  );

  return $roles;
}
