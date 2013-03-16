<?php
/**
 * @file
 * pn_dog_profile_photos_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pn_dog_profile_photos_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dog_profile_photos';
  $view->description = 'View of dog photos that attaches to the referenced dog profile page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dog profile photos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'dog-photo';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'photo-album';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You don\'t have any photos of %1 in your album yet.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_dog_photo']['id'] = 'field_dog_photo';
  $handler->display->display_options['fields']['field_dog_photo']['table'] = 'field_data_field_dog_photo';
  $handler->display->display_options['fields']['field_dog_photo']['field'] = 'field_dog_photo';
  $handler->display->display_options['fields']['field_dog_photo']['label'] = '';
  $handler->display->display_options['fields']['field_dog_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dog_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dog_photo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Referenced Dog Profile (field_profile_reference) */
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['id'] = 'field_profile_reference_target_id';
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['table'] = 'field_data_field_profile_reference';
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['field'] = 'field_profile_reference_target_id';
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_profile_reference_target_id']['validate_options']['types'] = array(
    'dog_profile' => 'dog_profile',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pn_dog_photo' => 'pn_dog_photo',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'dog_profile',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['dog_profile_photos'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('You don\'t have any photos of %1 in your album yet.'),
    t('All'),
    t('EVA Field'),
  );
  $export['dog_profile_photos'] = $view;

  return $export;
}
