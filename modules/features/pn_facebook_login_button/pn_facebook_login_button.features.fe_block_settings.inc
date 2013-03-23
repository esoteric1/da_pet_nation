<?php
/**
 * @file
 * pn_facebook_login_button.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pn_facebook_login_button_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['fboauth-login'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'login',
    'module' => 'fboauth',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
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
        'weight' => '-13',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
