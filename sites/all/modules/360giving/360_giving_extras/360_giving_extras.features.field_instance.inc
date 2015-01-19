<?php
/**
 * @file
 * 360_giving_extras.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function 360_giving_extras_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-group-field_360_giving_prefix'
  $field_instances['node-group-field_360_giving_prefix'] = array(
    'bundle' => 'group',
    'default_value' => array(
      0 => array(
        'value' => '360G-',
      ),
    ),
    'deleted' => 0,
    'description' => 'Please choose a 360 Giving prefix for your organisation data, if this Group represents an Organisation. We recommend a format such as <code>360G-\'name of org\'</code>, e.g. <code>360G-nesta</code>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_360_giving_prefix',
    'label' => '360 Giving prefix',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('360 Giving prefix');
  t('Please choose a 360 Giving prefix for your organisation data, if this Group represents an Organisation. We recommend a format such as <code>360G-\'name of org\'</code>, e.g. <code>360G-nesta</code>.');

  return $field_instances;
}
