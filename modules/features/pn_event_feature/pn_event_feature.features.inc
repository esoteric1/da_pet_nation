<?php
/**
 * @file
 * pn_event_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pn_event_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pn_event_feature_node_info() {
  $items = array(
    'pn_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An Event'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
