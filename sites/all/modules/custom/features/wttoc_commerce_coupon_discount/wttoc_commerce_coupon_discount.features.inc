<?php
/**
 * @file
 * wttoc_commerce_coupon_discount.features.inc
 */

/**
 * Implements hook_default_commerce_discount().
 */
function wttoc_commerce_coupon_discount_default_commerce_discount() {
  $items = array();
  $items['discount_full_order_100_percent_off'] = entity_import('commerce_discount', '{
    "name" : "discount_full_order_100_percent_off",
    "label" : "full_order_100_percent_off",
    "type" : "order_discount",
    "status" : "0",
    "component_title" : "100% Discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "100.00" } ] },
      "rdf_mapping" : []
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "none" } ] },
    "commerce_compatibility_selection" : [],
    "inline_conditions" : [],
    "commerce_discount_date" : [],
    "discount_usage_per_person" : [],
    "discount_usage_limit" : [],
    "rdf_mapping" : []
  }');
  $items['discount_initial_50_percent_off'] = entity_import('commerce_discount', '{
    "name" : "discount_initial_50_percent_off",
    "label" : "initial_50_percent_off",
    "type" : "order_discount",
    "status" : "1",
    "component_title" : "50% Discount on Six Months",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "50.00" } ] },
      "rdf_mapping" : []
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "none" } ] },
    "commerce_compatibility_selection" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_order_contains_products",
          "condition_settings" : {
            "operator" : "exactly",
            "products" : [ { "product_id" : "5" } ],
            "condition_logic_operator" : null
          },
          "condition_negate" : 0
        }
      ]
    },
    "commerce_discount_date" : [],
    "discount_usage_per_person" : [],
    "discount_usage_limit" : { "und" : [ { "value" : "50" } ] },
    "rdf_mapping" : []
  }');
  return $items;
}
