<?php
/**
 * @file
 * pn_account_creation_link.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pn_account_creation_link_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Create account link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'join_the_nation';
  $fe_block_boxes->body = '<a class ="call-to-action" href="/user/register">Join the Nation</a>';

  $export['join_the_nation'] = $fe_block_boxes;

  return $export;
}
