<?php
/**
 * @file
 * pn_dog_profile_photos_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pn_dog_profile_photos_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dog_profile|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dog_profile';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'add_a_photo' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:5:"types";a:1:{s:12:"pn_dog_photo";s:12:"pn_dog_photo";}s:10:"field_name";s:23:"field_profile_reference";s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:1;s:19:"override_title_text";s:11:"Add a photo";}s:4:"type";s:16:"node_prepopulate";s:7:"subtype";s:16:"node_prepopulate";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['node|dog_profile|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pn_dog_profile_photos_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'add_a_photo';
  $ds_field->label = 'Add a photo';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['add_a_photo'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pn_dog_profile_photos_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dog_profile|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dog_profile';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_dog_picture',
        1 => 'field_special_talent',
        2 => 'dog_profile_photos_entity_view_1',
        3 => 'add_a_photo',
        4 => 'field_gender',
      ),
    ),
    'fields' => array(
      'field_dog_picture' => 'left',
      'field_special_talent' => 'left',
      'dog_profile_photos_entity_view_1' => 'left',
      'add_a_photo' => 'left',
      'field_gender' => 'left',
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
  $export['node|dog_profile|default'] = $ds_layout;

  return $export;
}
