<?php
/**
 * @file
 * pn_friend_map_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pn_friend_map_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-friend_map-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'friend_map-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
      'petnation' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'petnation',
        'weight' => '-12',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
