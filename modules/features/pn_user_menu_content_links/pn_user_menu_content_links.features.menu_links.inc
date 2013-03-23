<?php
/**
 * @file
 * pn_user_menu_content_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pn_user_menu_content_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu:node/add/dog-profile
  $menu_links['user-menu:node/add/dog-profile'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/dog-profile',
    'router_path' => 'node/add/dog-profile',
    'link_title' => 'Create a Dog Profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: user-menu:node/add/pn-event
  $menu_links['user-menu:node/add/pn-event'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/pn-event',
    'router_path' => 'node/add/pn-event',
    'link_title' => 'Create an Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create a Dog Profile');
  t('Create an Event');


  return $menu_links;
}
