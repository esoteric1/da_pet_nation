<?php
/**
 * @file
 * pn_facebook.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pn_facebook_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_id';
  $strongarm->value = '140872182758463';
  $export['fboauth_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_secret';
  $strongarm->value = ' b7bf16726ce8f939555219eba93eee13';
  $export['fboauth_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_connections';
  $strongarm->value = array(
    0 => 'activities',
  );
  $export['fboauth_user_connections'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_email';
  $strongarm->value = 1;
  $export['fboauth_user_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_picture';
  $strongarm->value = TRUE;
  $export['fboauth_user_picture'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_properties';
  $strongarm->value = array(
    0 => 'about',
  );
  $export['fboauth_user_properties'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_username';
  $strongarm->value = 'username';
  $export['fboauth_user_username'] = $strongarm;

  return $export;
}
