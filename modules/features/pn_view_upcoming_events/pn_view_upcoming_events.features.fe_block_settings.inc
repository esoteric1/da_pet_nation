<?php
/**
 * @file
 * pn_view_upcoming_events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pn_view_upcoming_events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-upcoming_events-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'upcoming_events-block_1',
    'module' => 'views',
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
      'petnation' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'petnation',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
