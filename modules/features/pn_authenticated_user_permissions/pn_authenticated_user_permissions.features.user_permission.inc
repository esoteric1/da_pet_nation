<?php
/**
 * @file
 * pn_authenticated_user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pn_authenticated_user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: create dog_profile content.
  $permissions['create dog_profile content'] = array(
    'name' => 'create dog_profile content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create pn_dog_photo content.
  $permissions['create pn_dog_photo content'] = array(
    'name' => 'create pn_dog_photo content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create pn_event content.
  $permissions['create pn_event content'] = array(
    'name' => 'create pn_event content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own dog_profile content.
  $permissions['delete own dog_profile content'] = array(
    'name' => 'delete own dog_profile content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pn_dog_photo content.
  $permissions['delete own pn_dog_photo content'] = array(
    'name' => 'delete own pn_dog_photo content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pn_event content.
  $permissions['delete own pn_event content'] = array(
    'name' => 'delete own pn_event content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own dog_profile content.
  $permissions['edit own dog_profile content'] = array(
    'name' => 'edit own dog_profile content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pn_dog_photo content.
  $permissions['edit own pn_dog_photo content'] = array(
    'name' => 'edit own pn_dog_photo content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pn_event content.
  $permissions['edit own pn_event content'] = array(
    'name' => 'edit own pn_event content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
