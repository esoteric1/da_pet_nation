<?php
/**
 * @file
 * pn_log_in_link.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pn_log_in_link_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:user/login
  $menu_links['main-menu:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log In',
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
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Log In');


  return $menu_links;
}
