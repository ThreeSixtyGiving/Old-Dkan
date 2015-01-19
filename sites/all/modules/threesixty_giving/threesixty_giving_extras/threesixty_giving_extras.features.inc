<?php
/**
 * @file
 * threesixty_giving_extras.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function threesixty_giving_extras_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}
