<?php
/**
 * @file
 * pn_group_join_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pn_group_join_message_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pn_group_join_message_node_info() {
  $items = array(
    'group_join_message' => array(
      'name' => t('Group Join Message'),
      'base' => 'node_content',
      'description' => t('A message to advertize the joining of a group'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
