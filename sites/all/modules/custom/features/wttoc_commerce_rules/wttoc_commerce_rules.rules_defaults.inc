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
  $items['rules_change_order_status_according_to_card_response'] = entity_import('rules_config', '{ "rules_change_order_status_according_to_card_response" : {
      "LABEL" : "Change Order Status According To Card Response",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
      "REQUIRES" : [ "commerce_payment", "rules", "commerce_order" ],
      "USES VARIABLES" : {
        "card_response" : {
          "label" : "card_response",
          "type" : "commerce_cardonfile_charge_card_response"
        },
        "order" : { "label" : "order", "type" : "commerce_order" }
      },
      "IF" : [
        { "commerce_payment_order_balance_comparison" : { "commerce_order" : [ "order" ], "value" : "0.01" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "order:commerce-line-items" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "component_rules_extend_rolerecurring_component_line_item" : { "line_item" : [ "list-item" ] } }
            ]
          }
        },
        { "commerce_order_update_status" : { "commerce_order" : [ "order" ], "order_status" : "cardonfile_charged" } }
      ]
    }
  }');
  $items['rules_de_feature_listings_of_expired_premium_users'] = entity_import('rules_config', '{ "rules_de_feature_listings_of_expired_premium_users" : {
      "LABEL" : "De-Feature Listings of Expired Premium Users",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
      "REQUIRES" : [ "views_rules", "rules" ],
      "ON" : { "cron" : [] },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "rules_tools_de_feature_listings_of_expired_users",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "nid" : { "current_node" : "Node" } },
            "DO" : [
              { "component_rules_de_feature_listings_of_expired_premium_users_component" : { "node_fetched" : [ "current-node" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_de_feature_listings_of_expired_premium_users_component'] = entity_import('rules_config', '{ "rules_de_feature_listings_of_expired_premium_users_component" : {
      "LABEL" : "De-Feature Listings of Expired Premium Users - Component",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node_fetched" : { "label" : "node_fetched", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node-fetched" ],
            "type" : "node",
            "bundle" : { "value" : {
                "event" : "event",
                "business_service_or_attraction" : "business_service_or_attraction"
              }
            }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node-fetched:field-featured-content" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_extend_role_component_for_line_item'] = entity_import('rules_config', '{ "rules_extend_role_component_for_line_item" : {
      "LABEL" : "Extend Role First Time - Component for Line Item",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
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
        { "data_convert" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "line-item:commerce-product:commerce-recurring-ini-period:interval" ]
            },
            "PROVIDE" : { "conversion_result" : { "interval_multiplier" : "interval_multiplier" } }
          }
        },
        { "interval_apply" : {
            "USING" : {
              "interval" : [ "interval-multiplier" ],
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
      "TAGS" : [ "WTTOC Commerce" ],
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
      "TAGS" : [ "WTTOC Commerce" ],
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
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
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
      "TAGS" : [ "WTTOC Commerce" ],
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
        { "data_convert" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "line-item:commerce-product:commerce-recurring-rec-period:interval" ]
            },
            "PROVIDE" : { "conversion_result" : { "interval_multiplier" : "interval_multiplier" } }
          }
        },
        { "interval_apply" : {
            "USING" : {
              "interval" : [ "interval-multiplier" ],
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
  $items['rules_feature_content_by_premium_vbo_component_part_3'] = entity_import('rules_config', '{ "rules_feature_content_by_premium_vbo_component_part_3" : {
      "LABEL" : "Feature Content By Premium - VBO Component - Part 2 Complement",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Featured Content", "WTTOC" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "nodes_currently_featured" : { "label" : "Nodes Currently Featured", "type" : "integer" },
        "node_to_feature" : { "label" : "Node To Feature", "type" : "node" }
      },
      "IF" : [
        { "data_is" : {
            "data" : [ "nodes-currently-featured" ],
            "op" : "\\u003E",
            "value" : "3"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "[node-to-feature:title] was not featured. This would exceed your limit!",
            "type" : "error"
          }
        }
      ]
    }
  }');
  $items['rules_feature_content_vbo_component_part_1'] = entity_import('rules_config', '{ "rules_feature_content_vbo_component_part_1" : {
      "LABEL" : "Feature Content By Premium - VBO Component - Part 1",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Featured Content", "WTTOC" ],
      "REQUIRES" : [ "rules", "views_rules", "custom_rules_bonus" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node_to_feature" : { "label" : "node_to_feature", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node-to-feature" ],
            "type" : "node",
            "bundle" : { "value" : {
                "event" : "event",
                "business_service_or_attraction" : "business_service_or_attraction"
              }
            }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode\\u003E", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "authors_featured_nodes" : " Author\\u0027s Featured Nodes" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "rules_tools_author_s_featured_nodes",
            "DISPLAY" : "views_rules_1",
            "USING" : { "uid_integer" : [ "site:current-user:uid" ] },
            "ROW VARIABLES" : { "node_fetched" : { "node_fetched" : "Content: Node Fetched" } },
            "DO" : [
              { "list_add" : {
                  "list" : [ "authors-featured-nodes" ],
                  "item" : [ "node-fetched" ],
                  "unique" : "1"
                }
              }
            ]
          }
        },
        { "crb_list_length" : {
            "USING" : { "list" : [ "authors-featured-nodes" ] },
            "PROVIDE" : { "list_length" : { "nodes_currently_featured" : "Nodes Currently Featured" } }
          }
        },
        { "component_rules_feature_content_vbo_component_part_2" : {
            "nodes_currently_featured" : [ "nodes_currently_featured" ],
            "node_to_feature" : [ "node_to_feature" ]
          }
        },
        { "component_rules_feature_content_by_premium_vbo_component_part_3" : {
            "nodes_currently_featured" : [ "nodes_currently_featured" ],
            "node_to_feature" : [ "node_to_feature" ]
          }
        }
      ]
    }
  }');
  $items['rules_feature_content_vbo_component_part_2'] = entity_import('rules_config', '{ "rules_feature_content_vbo_component_part_2" : {
      "LABEL" : "Feature Content By Premium - VBO Component - Part 2",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Featured Content", "WTTOC" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "nodes_currently_featured" : { "label" : "Nodes Currently Featured", "type" : "integer" },
        "node_to_feature" : { "label" : "Node To Feature", "type" : "node" }
      },
      "IF" : [
        { "data_is" : {
            "data" : [ "nodes-currently-featured" ],
            "op" : "\\u003C",
            "value" : "4"
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "node-to-feature" ],
            "type" : "node",
            "bundle" : { "value" : {
                "event" : "event",
                "business_service_or_attraction" : "business_service_or_attraction"
              }
            }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node-to-feature:field-featured-content" ], "value" : "1" } },
        { "drupal_message" : { "message" : "[node-to-feature:title] was Featured" } }
      ]
    }
  }');
  $items['rules_new_user_gets_a_free_account'] = entity_import('rules_config', '{ "rules_new_user_gets_a_free_account" : {
      "LABEL" : "New User Gets a Free Account",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "8" : "8", "5" : "5", "6" : "6", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } }
      ]
    }
  }');
  $items['rules_premium_role_removed_gives_free_role'] = entity_import('rules_config', '{ "rules_premium_role_removed_gives_free_role" : {
      "LABEL" : "Premium Role Removed, Gives Free Role",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account-unchanged" ],
            "roles" : { "value" : { "5" : "5" } }
          }
        },
        { "NOT user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } }
      ]
    }
  }');
  $items['rules_premium_role_removes_free_role'] = entity_import('rules_config', '{ "rules_premium_role_removes_free_role" : {
      "LABEL" : "Premium Role Given, Removes Free Role",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account-unchanged" ],
            "roles" : { "value" : { "5" : "5" } }
          }
        },
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ],
      "DO" : [
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } }
      ]
    }
  }');
  $items['rules_stop_recurring_entity'] = entity_import('rules_config', '{ "rules_stop_recurring_entity" : {
      "LABEL" : "Stop Recurring Entity - Component",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
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
  $items['rules_stop_subscription'] = entity_import('rules_config', '{ "rules_stop_subscription" : {
      "LABEL" : "Stop Subscription - Component",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "commerce_recurring_entity" : { "label" : "commerce_recurring_entity", "type" : "commerce_recurring" } },
      "DO" : [
        { "data_set" : { "data" : [ "commerce-recurring-entity:status" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_unfeature_content_by_premium_vbo_component_part_1_cloned_'] = entity_import('rules_config', '{ "rules_unfeature_content_by_premium_vbo_component_part_1_cloned_" : {
      "LABEL" : "Unfeature Content By Premium - VBO Component",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Featured Content", "WTTOC" ],
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node_to_unfeature" : { "label" : "node_to_unfeature", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node_to_unfeature" ],
            "type" : "node",
            "bundle" : { "value" : {
                "event" : "event",
                "business_service_or_attraction" : "business_service_or_attraction"
              }
            }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node_to_unfeature:field-featured-content" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_unpublish_content_of_inactive_free_accounts'] = entity_import('rules_config', '{ "rules_unpublish_content_of_inactive_free_accounts" : {
      "LABEL" : "Unpublish Content of Inactive FREE Accounts",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC Commerce" ],
      "REQUIRES" : [ "views_rules", "rules" ],
      "ON" : { "cron" : [] },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "unpublish_listings_of_inactive_users",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "nid" : { "current_node" : "Current Node" } },
            "DO" : [ { "node_unpublish" : { "node" : [ "current-node" ] } } ]
          }
        }
      ]
    }
  }');
  return $items;
}
