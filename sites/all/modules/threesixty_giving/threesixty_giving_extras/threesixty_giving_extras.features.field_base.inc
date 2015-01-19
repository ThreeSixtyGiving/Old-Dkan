<?php
/**
 * @file
 * threesixty_giving_extras.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function threesixty_giving_extras_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_threesixty_giving_prefix'
  $field_bases['field_threesixty_giving_prefix'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_threesixty_giving_prefix',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
