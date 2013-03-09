<?php
/**
 * @file
 * dog_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dog_profile_taxonomy_default_vocabularies() {
  return array(
    'breed' => array(
      'name' => 'Breed',
      'machine_name' => 'breed',
      'description' => 'Vocabulary of dog breeds',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'dog_park' => array(
      'name' => 'Dog Park',
      'machine_name' => 'dog_park',
      'description' => 'Your Favourite Dog Park',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
