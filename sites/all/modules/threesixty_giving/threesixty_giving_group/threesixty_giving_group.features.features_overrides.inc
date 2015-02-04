<?php
/**
 * @file
 * threesixty_giving_group.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function threesixty_giving_group_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_tab_about|node|group|default.data|children|2"] = 'field_360_giving_prefix';
  $overrides["field_group.group_tab_about|node|group|form.data|children|2"] = 'field_threesixty_giving_prefix';
  $overrides["field_group.group_tabs|node|group|default.data|children|0"] = 'group_tab_about';
  $overrides["field_group.group_tabs|node|group|default.data|children|1"] = 'group_tab_datasets';
  $overrides["field_group.group_tabs|node|group|form.data|children|0"] = 'group_tab_about';
  $overrides["field_group.group_tabs|node|group|form.data|children|1"]["DELETED"] = TRUE;
  $overrides["field_group.group_tabs|node|group|form.data|children|2"]["DELETED"] = TRUE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-group-body.display|default|weight"] = 2;
  $overrides["field_instance.node-group-body.widget|weight"] = 7;

  // Exported overrides for: menu_links
  $overrides["menu_links.main-menu_groups:groups.customized"] = 1;
  $overrides["menu_links.main-menu_groups:groups.link_title"] = 'Organisations';

  // Exported overrides for: node
  $overrides["node.group.description"] = 'Organisations allow you to group together datasets for an organisation.
  
  Organisation also enable you to assign roles and authorisation to members - i.e. individuals can be given the right to publish datasets from a particular organisation.';
  $overrides["node.group.name"] = 'Organisation';
  $overrides["node.group.title_label"] = 'Name';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__group.value|extra_fields|form|path"] = array(
    'weight' => 30,
  );

  // Exported overrides for: views_view
  $overrides["views_view.groups_page.display|default|display_options|title"] = 'Organisations';

 return $overrides;
}
