<?php
/**
 * @file
 * pn_text_format_p.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pn_text_format_p_filter_default_formats() {
  $formats = array();

  // Exported format: Plain Detect Paragraphs.
  $formats['plain_detect_paragraphs'] = array(
    'format' => 'plain_detect_paragraphs',
    'name' => 'Plain Detect Paragraphs',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
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

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '-8',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
