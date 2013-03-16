<?php
/**
 * @file
 * pn_account_creation_link.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pn_account_creation_link_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-join_the_nation'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'join_the_nation',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'user*',
    'roles' => array(
      'anonymous user' => '1',
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'petnation' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'petnation',
        'weight' => '-14',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
