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
  $handler->display->display_options['title'] = 'Dog profile photos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_dog_photo']['id'] = 'field_dog_photo';
  $handler->display->display_options['fields']['field_dog_photo']['table'] = 'field_data_field_dog_photo';
  $handler->display->display_options['fields']['field_dog_photo']['field'] = 'field_dog_photo';
  $handler->display->display_options['fields']['field_dog_photo']['label'] = '';
  $handler->display->display_options['fields']['field_dog_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dog_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dog_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $translatables['dog_profile_photos'] = array(
    t('Master'),
    t('Dog profile photos'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('EVA Field'),
  );
  $export['dog_profile_photos'] = $view;

  return $export;
}
