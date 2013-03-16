<?php
/**
 * @file
 * dog_profile.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function dog_profile_filter_default_formats() {
  $formats = array();

  // Exported format: Plain Detect Paragraphs.
  $formats['plain_detect_paragraphs'] = array(
    'format' => 'plain_detect_paragraphs',
    'name' => 'Plain Detect Paragraphs',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <i> <strong> <b> <ul> <ol> <li>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_html_escape' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
