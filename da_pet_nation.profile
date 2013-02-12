<?php
/**
 * @file
 * Enables modules and site configuration for Drupal Academy Pet Nation 
 * site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function da_pet_nation_form_install_configure_form_alter(&$form, $form_state) {
  // Setup translation function reference 
  $t = get_t();

  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $t('Pet Nation');
}
