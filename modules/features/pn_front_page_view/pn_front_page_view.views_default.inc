<?php
/**
 * @file
 * pn_front_page_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pn_front_page_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_content_view';
  $view->description = 'view of latest site content for front page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'new content view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The State of the Nation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '← previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next →';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'front-page-news-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'front-page';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'nothing' => 'nothing',
    'type' => 'type',
    'field_profile_reference' => 'field_profile_reference',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_class'] = 'username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'added a new ';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'joiner-text';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_class'] = 'content-link';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Content: Referenced Dog Profile */
  $handler->display->display_options['fields']['field_profile_reference']['id'] = 'field_profile_reference';
  $handler->display->display_options['fields']['field_profile_reference']['table'] = 'field_data_field_profile_reference';
  $handler->display->display_options['fields']['field_profile_reference']['field'] = 'field_profile_reference';
  $handler->display->display_options['fields']['field_profile_reference']['label'] = 'for';
  $handler->display->display_options['fields']['field_profile_reference']['alter']['path'] = 'content/[field_profile_reference]';
  $handler->display->display_options['fields']['field_profile_reference']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_profile_reference']['element_class'] = 'referenced-dog-profile';
  $handler->display->display_options['fields']['field_profile_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_reference']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile_reference']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_class'] = 'front-page-news-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'event-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_dog_photo']['id'] = 'field_dog_photo';
  $handler->display->display_options['fields']['field_dog_photo']['table'] = 'field_data_field_dog_photo';
  $handler->display->display_options['fields']['field_dog_photo']['field'] = 'field_dog_photo';
  $handler->display->display_options['fields']['field_dog_photo']['label'] = '';
  $handler->display->display_options['fields']['field_dog_photo']['element_class'] = 'dog-photo';
  $handler->display->display_options['fields']['field_dog_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dog_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dog_photo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dog_photo']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_dog_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dog_photo']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_dog_picture']['id'] = 'field_dog_picture';
  $handler->display->display_options['fields']['field_dog_picture']['table'] = 'field_data_field_dog_picture';
  $handler->display->display_options['fields']['field_dog_picture']['field'] = 'field_dog_picture';
  $handler->display->display_options['fields']['field_dog_picture']['label'] = '';
  $handler->display->display_options['fields']['field_dog_picture']['element_class'] = 'profile-picture';
  $handler->display->display_options['fields']['field_dog_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dog_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dog_picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dog_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_dog_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dog_picture']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<span class="label">When</span> <span>[field_date]</span>';
  $handler->display->display_options['fields']['field_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['element_class'] = 'event-date';
  $handler->display->display_options['fields']['field_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'event-description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
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
  /* Field: Breed Gender Talent block */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Breed Gender Talent block';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_breed]
[field_gender]
[field_special_talent]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'profile_stats';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = TRUE;
  /* Field: Event Wrapper */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Event Wrapper';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_date]
[body]';
  $handler->display->display_options['fields']['nothing_3']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_class'] = 'event_wrapper';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'content-title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'new-content';
  $translatables['new_content_view'] = array(
    t('Master'),
    t('The State of the Nation'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('← previous'),
    t('next →'),
    t('author'),
    t('added a new '),
    t('for'),
    t('<span class="label">When</span> <span>[field_date]</span>'),
    t('<span class="label">Breed</span> <span>[field_breed]</span><br/>'),
    t('<span class="label">Gender</span> <span>[field_gender]</span><br/>'),
    t('<span class="label">Special Talent</span> <span>[field_special_talent]</span><br/>'),
    t('[field_breed]
[field_gender]
[field_special_talent]'),
    t('[field_date]
[body]'),
    t('Page'),
  );
  $export['new_content_view'] = $view;

  return $export;
}
