<?php
/**
 * @file
 * threesixty_giving_extras.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function threesixty_giving_extras_default_rules_configuration() {
  $items = array();
  $items['rules_tsg_new_organisation_group_is_created'] = entity_import('rules_config', '{ "rules_tsg_new_organisation_group_is_created" : {
      "LABEL" : "TSG New organisation group is created",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "group" : "group" } } } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "support@threesixtygiving.org",
            "subject" : "[[site:name]] New organisation created: [node:title]",
            "message" : "[node:url]",
            "from" : [ "node:author:mail" ],
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
