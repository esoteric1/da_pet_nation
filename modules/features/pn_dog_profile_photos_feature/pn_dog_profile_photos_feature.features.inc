<?php
/**
 * @file
 * pn_dog_profile_photos_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pn_dog_profile_photos_feature_ctools_plugin_api() {
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
 * Implements hook_views_api().
 */
function pn_dog_profile_photos_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pn_dog_profile_photos_feature_node_info() {
  $items = array(
    'pn_dog_photo' => array(
      'name' => t('Add a photo'),
      'base' => 'node_content',
      'description' => t('Use this content type to add photos to dog profiles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
