<?php
/**
 * @file
 * pn_facebook_like.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pn_facebook_like_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_likebox_colorscheme';
  $strongarm->value = 'light';
  $export['fb_likebox_colorscheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_likebox_header';
  $strongarm->value = 'false';
  $export['fb_likebox_header'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_likebox_height';
  $strongarm->value = '556';
  $export['fb_likebox_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_likebox_scrolling';
  $strongarm->value = 'no';
  $export['fb_likebox_scrolling'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_likebox_show_faces';
  $strongarm->value = 'true';
  $export['fb_likebox_show_faces'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_likebox_stream';
  $strongarm->value = 'false';
  $export['fb_likebox_stream'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_likebox_url';
  $strongarm->value = 'https://www.facebook.com/pages/PetNation/496364857087254';
  $export['fb_likebox_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_likebox_width';
  $strongarm->value = '292';
  $export['fb_likebox_width'] = $strongarm;

  return $export;
}
