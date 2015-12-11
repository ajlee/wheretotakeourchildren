<?php
/**
 * @file
 * wttoc_commerce_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wttoc_commerce_rules_default_rules_configuration() {
  $items = array();
  $items['rules_extend_role_component_for_line_item'] = entity_import('rules_config', '{ "rules_extend_role_component_for_line_item" : {
      "LABEL" : "Extend Role First Time - Component for Line Item",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "interval", "role_expire" ],
      "USES VARIABLES" : { "line_item" : { "label" : "Line Item", "type" : "commerce_line_item" } },
      "IF" : [
        { "data_is" : { "data" : [ "line-item:type" ], "value" : "product" } },
        { "data_is" : { "data" : [ "line-item:commerce-product:type" ], "value" : "recurring" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cinteger\\u003E" },
            "PROVIDE" : { "variable_added" : { "role_list_format" : "Role In List Format" } }
          }
        },
        { "list_add" : {
            "list" : [ "role-list-format" ],
            "item" : [ "line-item:commerce-product:field-role-reference" ],
            "unique" : "1"
          }
        },
        { "interval_apply" : {
            "USING" : {
              "interval" : "1",
              "period" : [ "line-item:commerce-product:commerce-recurring-ini-period:period" ],
              "date" : "now"
            },
            "PROVIDE" : { "date" : { "extend_date" : "Extend Role To This Date" } }
          }
        },
        { "user_add_role" : {
            "account" : [ "line-item:order:owner" ],
            "roles" : [ "role-list-format" ]
          }
        },
        { "role_expire_rules_action_set_role_expire" : {
            "user" : [ "line-item:order:owner" ],
            "role" : [ "line-item:commerce-product:field-role-reference" ],
            "timestamp" : [ "extend-date" ]
          }
        }
      ]
    }
  }');
  $items['rules_extend_role_duration'] = entity_import('rules_config', '{ "rules_extend_role_duration" : {
      "LABEL" : "Extend Role Duration - First Time",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "rules", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "recurring" : "recurring" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "commerce-order:commerce-line-items" ] },
            "ITEM" : { "line_item" : "Current line item" },
            "DO" : [
              { "component_rules_extend_role_component_for_line_item" : { "line_item" : [ "line_item" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_extend_role_duration_free_order'] = entity_import('rules_config', '{ "rules_extend_role_duration_free_order" : {
      "LABEL" : "Extend Role Duration - Free Order",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "recurring" : "recurring" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "commerce-order:commerce-line-items" ] },
            "ITEM" : { "line_item" : "Current line item" },
            "DO" : [
              { "component_rules_extend_role_component_for_line_item" : { "line_item" : [ "line_item" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_extend_role_duration_recurring_charge'] = entity_import('rules_config', '{ "rules_extend_role_duration_recurring_charge" : {
      "LABEL" : "Extend Role Duration - Recurring Charge",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_cardonfile" ],
      "ON" : { "commerce_cardonfile_charge_success" : [] },
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "order:commerce-line-items" ] },
            "ITEM" : { "line_item" : "Line Item" },
            "DO" : [
              { "component_rules_extend_rolerecurring_component_line_item" : { "line_item" : [ "line_item" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_extend_rolerecurring_component_line_item'] = entity_import('rules_config', '{ "rules_extend_rolerecurring_component_line_item" : {
      "LABEL" : "Extend Role Recurring - Component for Line Item",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "interval", "role_expire" ],
      "USES VARIABLES" : { "line_item" : { "label" : "Line Item", "type" : "commerce_line_item" } },
      "IF" : [
        { "data_is" : { "data" : [ "line-item:type" ], "value" : "product" } },
        { "data_is" : { "data" : [ "line-item:commerce-product:type" ], "value" : "recurring" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cinteger\\u003E" },
            "PROVIDE" : { "variable_added" : { "role_list_format" : "Role List Format" } }
          }
        },
        { "list_add" : {
            "list" : [ "role-list-format" ],
            "item" : [ "line-item:commerce-product:field-role-reference" ],
            "unique" : "1"
          }
        },
        { "interval_apply" : {
            "USING" : {
              "interval" : "1",
              "period" : [ "line-item:commerce-product:commerce-recurring-rec-period:period" ],
              "date" : "now"
            },
            "PROVIDE" : { "date" : { "extend_date" : "Extend Role To This Date" } }
          }
        },
        { "user_add_role" : {
            "account" : [ "line-item:order:owner" ],
            "roles" : [ "role-list-format" ]
          }
        },
        { "role_expire_rules_action_set_role_expire" : {
            "user" : [ "line-item:order:owner" ],
            "role" : [ "line-item:commerce-product:field-role-reference" ],
            "timestamp" : [ "extend-date" ]
          }
        }
      ]
    }
  }');
  $items['rules_stop_recurring_entity'] = entity_import('rules_config', '{ "rules_stop_recurring_entity" : {
      "LABEL" : "Stop Recurring Entity",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "recurring_entity" : { "label" : "Recurring Entity", "type" : "commerce_recurring" } },
      "IF" : [
        { "data_is" : { "data" : [ "recurring-entity:status" ], "value" : "1" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "recurring-entity:status" ], "value" : "0" } }
      ]
    }
  }');
  return $items;
}
