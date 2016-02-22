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
  $items['rules_delete_user_override'] = entity_import('rules_config', '{ "rules_delete_user_override" : {
      "LABEL" : "Delete User Override",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC" ],
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "user_to_delete" : { "label" : "user_to_delete", "type" : "user" } },
      "IF" : [
        { "data_is" : { "data" : [ "user-to-delete:uid" ], "op" : "\\u003E", "value" : "1" } },
        { "NOT user_has_role" : {
            "account" : [ "user-to-delete" ],
            "roles" : { "value" : { "6" : "6", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "entity_delete" : { "data" : [ "user-to-delete" ] } } ]
    }
  }');
  $items['rules_editor_tools_feature_content'] = entity_import('rules_config', '{ "rules_editor_tools_feature_content" : {
      "LABEL" : "Editor Tools: Feature Content - Component",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Editor Tools", "WTTOC" ],
      "REQUIRES" : [ "rules" ],
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
        { "data_set" : { "data" : [ "node-to-feature:field-featured-content" ], "value" : "1" } }
      ]
    }
  }');
  $items['rules_editor_tools_unfeature_content'] = entity_import('rules_config', '{ "rules_editor_tools_unfeature_content" : {
      "LABEL" : "Editor Tools: Unfeature Content - Component",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Editor Tools", "WTTOC" ],
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node_to_unfeature" : { "label" : "node_to_unfeature", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node-to-unfeature" ],
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
        { "data_set" : { "data" : [ "node-to-unfeature:field-featured-content" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_event_default_image'] = entity_import('rules_config', '{ "rules_event_default_image" : {
      "LABEL" : "Event - Default Image",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC" ],
      "REQUIRES" : [ "rules", "custom_rules_bonus" ],
      "ON" : {
        "node_insert--event" : { "bundle" : "event" },
        "node_update--event" : { "bundle" : "event" }
      },
      "IF" : [ { "data_is_empty" : { "data" : [ "node:field-image-gallery" ] } } ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "list\\u003Ctaxonomy_term\\u003E",
              "value" : [ "node:field-category-event" ]
            },
            "PROVIDE" : { "variable_added" : { "category_terms_list" : "List of Category Terms" } }
          }
        },
        { "crb_list_length" : {
            "USING" : { "list" : [ "category-terms-list" ] },
            "PROVIDE" : { "list_length" : { "categories_count" : "Number of Categories" } }
          }
        },
        { "crb_random_int" : {
            "USING" : {
              "int_min" : "0",
              "int_max" : { "select" : "categories-count", "num_offset" : { "value" : "-1" } }
            },
            "PROVIDE" : { "random_int" : { "random_category_key" : "Random Category Key" } }
          }
        },
        { "crb_get_term_item_with_key" : {
            "USING" : {
              "terms_list" : [ "category-terms-list" ],
              "list_item_key" : [ "random-category-key" ]
            },
            "PROVIDE" : { "list_term_item" : { "random_term" : "Term Returned" } }
          }
        },
        { "component_rules_set_image_on_node_from_term" : { "term_used" : [ "random-term" ], "node_being_edited" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_family_guide_default_image'] = entity_import('rules_config', '{ "rules_family_guide_default_image" : {
      "LABEL" : "Family Guide - Default Image",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC" ],
      "REQUIRES" : [ "rules", "custom_rules_bonus" ],
      "ON" : {
        "node_insert--business_service_or_attraction" : { "bundle" : "business_service_or_attraction" },
        "node_update--business_service_or_attraction" : { "bundle" : "business_service_or_attraction" }
      },
      "IF" : [ { "data_is_empty" : { "data" : [ "node:field-image-gallery" ] } } ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "list\\u003Ctaxonomy_term\\u003E",
              "value" : [ "node:field-category" ]
            },
            "PROVIDE" : { "variable_added" : { "category_terms_list" : "List of Category Terms" } }
          }
        },
        { "crb_list_length" : {
            "USING" : { "list" : [ "category-terms-list" ] },
            "PROVIDE" : { "list_length" : { "categories_count" : "Number of Categories" } }
          }
        },
        { "crb_random_int" : {
            "USING" : {
              "int_min" : "0",
              "int_max" : { "select" : "categories-count", "num_offset" : { "value" : "-1" } }
            },
            "PROVIDE" : { "random_int" : { "random_category_key" : "Random Category Key " } }
          }
        },
        { "crb_get_term_item_with_key" : {
            "USING" : {
              "terms_list" : [ "category-terms-list" ],
              "list_item_key" : [ "random-category-key" ]
            },
            "PROVIDE" : { "list_term_item" : { "random_term" : "Term Returned" } }
          }
        },
        { "component_rules_set_image_on_node_from_term" : { "term_used" : [ "random-term" ], "node_being_edited" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_promote_category_to_homepage'] = entity_import('rules_config', '{ "rules_promote_category_to_homepage" : {
      "LABEL" : "Promote Category To Homepage",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Editor Tools", "WTTOC" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "term_to_feature_or_unfeature" : { "label" : "term_to_feature_or_unfeature", "type" : "taxonomy_term" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "term-to-feature-or-unfeature" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : {
                "business_type" : "business_type",
                "events_categories_and_features" : "events_categories_and_features"
              }
            }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "term-to-feature-or-unfeature:field-show-on-homepage" ],
            "value" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_set_image_on_node_from_term'] = entity_import('rules_config', '{ "rules_set_image_on_node_from_term" : {
      "LABEL" : "Set Image On Node From Term - Component",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "WTTOC" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "term_used" : { "label" : "Term Being Used", "type" : "taxonomy_term" },
        "node_being_edited" : { "label" : "Node Being Edited", "type" : "node" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "term-used" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : {
                "business_type" : "business_type",
                "events_categories_and_features" : "events_categories_and_features"
              }
            }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "node-being-edited" ],
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
        { "data_set" : {
            "data" : [ "node-being-edited:field-image-gallery:0" ],
            "value" : [ "term-used:field-category-image" ]
          }
        }
      ]
    }
  }');
  $items['rules_unpromote_category_to_homepage'] = entity_import('rules_config', '{ "rules_unpromote_category_to_homepage" : {
      "LABEL" : "Unpromote Category To Homepage",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Editor Tools", "WTTOC" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "term_to_feature_or_unfeature" : { "label" : "term_to_feature_or_unfeature", "type" : "taxonomy_term" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "term-to-feature-or-unfeature" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : {
                "business_type" : "business_type",
                "events_categories_and_features" : "events_categories_and_features"
              }
            }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "term-to-feature-or-unfeature:field-show-on-homepage" ],
            "value" : "0"
          }
        }
      ]
    }
  }');
  return $items;
}
