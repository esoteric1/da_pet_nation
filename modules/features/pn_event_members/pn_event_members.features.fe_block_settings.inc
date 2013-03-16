<?php
/**
 * @file
 * pn_event_members.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pn_event_members_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-event_members-block_1'] = array(
    'cache' => -1,
    'delta' => 'event_members-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'petnation' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'petnation',
        'weight' => '0',
      ),
    ),
  );

  return $export;
}
