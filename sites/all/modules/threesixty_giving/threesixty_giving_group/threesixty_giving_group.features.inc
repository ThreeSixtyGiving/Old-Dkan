<?php
/**
 * @file
 * threesixty_giving_group.features.inc
 */

/**
 * Implements hook_field_group_info_alter().
 */
function threesixty_giving_group_field_group_info_alter(&$data) {
  if (isset($data['group_tab_about|node|group|default'])) {
    $data['group_tab_about|node|group|default']->data['children'][2] = 'field_360_giving_prefix'; /* WAS: '' */
  }
  if (isset($data['group_tab_about|node|group|form'])) {
    $data['group_tab_about|node|group|form']->data['children'][2] = 'field_threesixty_giving_prefix'; /* WAS: '' */
  }
  if (isset($data['group_tabs|node|group|default'])) {
    $data['group_tabs|node|group|default']->data['children'][0] = 'group_tab_about'; /* WAS: 'group_tab_datasets' */
    $data['group_tabs|node|group|default']->data['children'][1] = 'group_tab_datasets'; /* WAS: 'group_tab_about' */
  }
  if (isset($data['group_tabs|node|group|form'])) {
    $data['group_tabs|node|group|form']->data['children'][0] = 'group_tab_about'; /* WAS: 'group_tab_datasets' */
    unset($data['group_tabs|node|group|form']->data['children'][1]);
    unset($data['group_tabs|node|group|form']->data['children'][2]);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function threesixty_giving_group_field_default_field_instances_alter(&$data) {
  if (isset($data['node-group-body'])) {
    $data['node-group-body']['display']['default']['weight'] = 2; /* WAS: 1 */
    $data['node-group-body']['widget']['weight'] = 7; /* WAS: 6 */
  }
}

/**
 * Implements hook_menu_default_menu_links_alter().
 */
function threesixty_giving_group_menu_default_menu_links_alter(&$data) {
  if (isset($data['main-menu_groups:groups'])) {
    $data['main-menu_groups:groups']['customized'] = 1; /* WAS: 0 */
    $data['main-menu_groups:groups']['link_title'] = 'Organisations'; /* WAS: 'Groups' */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function threesixty_giving_group_node_info_alter(&$data) {
  if (isset($data['group'])) {
    $data['group']['description'] = 'Organisations allow you to group together datasets for an organisation.
    
    Organisation also enable you to assign roles and authorisation to members - i.e. individuals can be given the right to publish datasets from a particular organisation.'; /* WAS: 'Groups allow you to group together datasets under a organisation (for example, the Department of Health) or topic (e.g. Transport, Health) so make it easier for users to browse datasets by theme.
    
    Groups also enable you to assign roles and authorisation to members of the group - i.e. individuals can be given the right to publish datasets from a particular organisation.' */
    $data['group']['name'] = 'Organisation'; /* WAS: 'Group' */
    $data['group']['title_label'] = 'Name'; /* WAS: 'Title' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function threesixty_giving_group_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__group'])) {
    $data['field_bundle_settings_node__group']->value['extra_fields']['form']['path'] = array(
      'weight' => 30,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function threesixty_giving_group_views_default_views_alter(&$data) {
  if (isset($data['groups_page'])) {
    $data['groups_page']->display['default']->display_options['title'] = 'Organisations'; /* WAS: 'Groups' */
  }
}
