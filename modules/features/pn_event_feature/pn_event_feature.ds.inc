<?php
/**
 * @file
 * pn_event_feature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function pn_event_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pn_event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pn_event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
        1 => 'field_geofield',
      ),
      'right' => array(
        2 => 'field_date',
        3 => 'field_location',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'field_geofield' => 'left',
      'field_date' => 'right',
      'field_location' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|pn_event|default'] = $ds_layout;

  return $export;
}
