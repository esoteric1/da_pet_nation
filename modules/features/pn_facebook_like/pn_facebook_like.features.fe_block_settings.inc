<?php
/**
 * @file
 * pn_facebook_like.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pn_facebook_like_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['fb_likebox-0'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '0',
    'module' => 'fb_likebox',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
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
