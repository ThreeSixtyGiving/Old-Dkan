<?php
/**
 * @file
 * threesixty_giving_dataset.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function threesixty_giving_dataset_field_default_field_instances_alter(&$data) {
  if (isset($data['node-dataset-field_license'])) {
    $data['node-dataset-field_license']['default_value'][0]['value'] = 'cc-by'; /* WAS: 'notspecified' */
    $data['node-dataset-field_license']['widget']['settings']['available_options'] = 'cc-by|Creative Commons Attribution
    cc-by-sa|Creative Commons Attribution Share-Alike
    cc-zero|Creative Commons CCZero
    cc-nc|Creative Commons Non-Commercial (Any)
    gfdl|GNU Free Documentation License
    notspecified|License Not Specified
    odc-by|Open Data Commons Attribution License
    odc-odbl|Open Data Commons Open Database License (ODbL)
    odc-pddl|Open Data Commons Public Domain Dedication and Licence (PDDL)
    other-at|Other (Attribution)
    other-nc|Other (Non-Commercial)
    other-closed|Other (Not Open)
    other-open|Other (Open)
    other-pd|Other (Public Domain)
    uk-ogl|UK Open Government Licence (OGL)'; /* WAS: 'cc-by|Creative Commons Attribution
    cc-by-sa|Creative Commons Attribution Share-Alike
    cc-zero|Creative Commons CCZero
    cc-nc|Creative Commons Non-Commercial (Any)
    gfdl|GNU Free Documentation License
    notspecified|License Not Specified
    odc-by|Open Data Commons Attribution License
    odc-odbl|Open Data Commons Open Database License (ODbL)
    odc-pddl|Open Data Commons Public Domain Dedication and Licence (PDDL)
    other-at|Other (Attribution)
    other-nc|Other (Non-Commercial)
    other-closed|Other (Not Open)
    other-open|Other (Open)
    other-pd|Other (Public Domain)
    uk-ogl|UK Open Government Licence (OGL)' */
  }
}
