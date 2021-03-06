<?php
/**
 * @file
 * pd_dog_map_fix.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pd_dog_map_fix_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-friend_map-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'friend_map-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'dog-profiles*',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
