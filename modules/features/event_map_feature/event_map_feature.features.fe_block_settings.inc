<?php
/**
 * @file
 * event_map_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function event_map_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-event_map-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'event_map-block_1',
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
        'region' => 'content',
        'status' => '1',
        'theme' => 'petnation',
        'weight' => '-10',
      ),
    ),
    'title' => 'Events',
    'visibility' => '1',
  );

  return $export;
}
