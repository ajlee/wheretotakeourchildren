<?php
/**
 * @file
 * wttoc_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wttoc_rules_default_rules_configuration() {
  $items = array();
  $items['rules_event_default_image'] = entity_import('rules_config', '{ "rules_event_default_image" : {
      "LABEL" : "Event - Default Image",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--event" : { "bundle" : "event" },
        "node_update--event" : { "bundle" : "event" }
      },
      "IF" : [ { "data_is_empty" : { "data" : [ "node:field-image-gallery" ] } } ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-image-gallery:0" ],
            "value" : [ "node:field-category-event:0:field-category-image" ]
          }
        }
      ]
    }
  }');
  $items['rules_family_guide_default_image'] = entity_import('rules_config', '{ "rules_family_guide_default_image" : {
      "LABEL" : "Family Guide - Default Image",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--business_service_or_attraction" : { "bundle" : "business_service_or_attraction" },
        "node_update--business_service_or_attraction" : { "bundle" : "business_service_or_attraction" }
      },
      "IF" : [ { "data_is_empty" : { "data" : [ "node:field-image-gallery" ] } } ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-image-gallery:0" ],
            "value" : [ "node:field-category:0:field-category-image" ]
          }
        }
      ]
    }
  }');
  return $items;
}
