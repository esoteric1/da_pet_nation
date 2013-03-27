<?php
/**
 * @file
 * pn_dog_profiles_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pn_dog_profiles_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pn_dog_profiles_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dog profiles list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The Citizens of Pet Nation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'front-page-news-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'front-page';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_dog_picture']['id'] = 'field_dog_picture';
  $handler->display->display_options['fields']['field_dog_picture']['table'] = 'field_data_field_dog_picture';
  $handler->display->display_options['fields']['field_dog_picture']['field'] = 'field_dog_picture';
  $handler->display->display_options['fields']['field_dog_picture']['label'] = '';
  $handler->display->display_options['fields']['field_dog_picture']['element_class'] = 'profile-picture';
  $handler->display->display_options['fields']['field_dog_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dog_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dog_picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dog_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dog_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="profile-title">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'profile-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Breed */
  $handler->display->display_options['fields']['field_breed']['id'] = 'field_breed';
  $handler->display->display_options['fields']['field_breed']['table'] = 'field_data_field_breed';
  $handler->display->display_options['fields']['field_breed']['field'] = 'field_breed';
  $handler->display->display_options['fields']['field_breed']['label'] = '';
  $handler->display->display_options['fields']['field_breed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_breed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_breed']['alter']['text'] = '<span class="label">Breed</span> <span>[field_breed]</span><br/>';
  $handler->display->display_options['fields']['field_breed']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_breed']['element_class'] = 'breed';
  $handler->display->display_options['fields']['field_breed']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_breed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_breed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_breed']['hide_empty'] = TRUE;
  /* Field: Content: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['label'] = '';
  $handler->display->display_options['fields']['field_gender']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gender']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gender']['alter']['text'] = '<span class="label">Gender</span> <span>[field_gender]</span><br/>';
  $handler->display->display_options['fields']['field_gender']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_gender']['element_class'] = 'gender';
  $handler->display->display_options['fields']['field_gender']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_gender']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gender']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gender']['hide_empty'] = TRUE;
  /* Field: Content: Special Talent */
  $handler->display->display_options['fields']['field_special_talent']['id'] = 'field_special_talent';
  $handler->display->display_options['fields']['field_special_talent']['table'] = 'field_data_field_special_talent';
  $handler->display->display_options['fields']['field_special_talent']['field'] = 'field_special_talent';
  $handler->display->display_options['fields']['field_special_talent']['label'] = '';
  $handler->display->display_options['fields']['field_special_talent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_special_talent']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_special_talent']['alter']['text'] = '<span class="label">Special Talent</span> <span>[field_special_talent]</span><br/>';
  $handler->display->display_options['fields']['field_special_talent']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_special_talent']['element_class'] = 'special-talent';
  $handler->display->display_options['fields']['field_special_talent']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_special_talent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_special_talent']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_special_talent']['hide_empty'] = TRUE;
  /* Field: Name Breed Gender Talent block */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Name Breed Gender Talent block';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]
[field_breed]
[field_gender]
[field_special_talent]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'profile_stats';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'dog_profile' => 'dog_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'dog-profiles';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dog Profiles';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['pn_dog_profiles_list'] = array(
    t('Master'),
    t('The Citizens of Pet Nation'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<h3 class="profile-title">[title]</h3>'),
    t('<span class="label">Breed</span> <span>[field_breed]</span><br/>'),
    t('<span class="label">Gender</span> <span>[field_gender]</span><br/>'),
    t('<span class="label">Special Talent</span> <span>[field_special_talent]</span><br/>'),
    t('[title]
[field_breed]
[field_gender]
[field_special_talent]'),
    t('Page'),
  );
  $export['pn_dog_profiles_list'] = $view;

  return $export;
}
