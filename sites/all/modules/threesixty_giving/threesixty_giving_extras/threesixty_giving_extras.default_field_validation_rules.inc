<?php
/**
 * @file
 * threesixty_giving_extras.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function threesixty_giving_extras_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = '360 Giving Organisation prefix validation';
  $rule->name = 'threesixty_giving_org_prefix_validation';
  $rule->field_name = 'field_threesixty_giving_prefix';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'group';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'global',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      4 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Please ensure your prefix is a unique value';
  $export['threesixty_giving_org_prefix_validation'] = $rule;

  return $export;
}
