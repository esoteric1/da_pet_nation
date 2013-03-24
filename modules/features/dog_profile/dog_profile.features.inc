<?php
/**
 * @file
 * dog_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dog_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dog_profile_node_info() {
  $items = array(
    'dog_profile' => array(
      'name' => t('Dog Profile'),
      'base' => 'node_content',
      'description' => t('An opportunty to highlight your dog and reach out to others with similar interests'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
