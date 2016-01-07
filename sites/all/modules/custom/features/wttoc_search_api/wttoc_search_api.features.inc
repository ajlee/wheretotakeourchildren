<?php
/**
 * @file
 * wttoc_search_api.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wttoc_search_api_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function wttoc_search_api_default_search_api_index() {
  $items = array();
  $items['business_and_events_categories'] = entity_import('search_api_index', '{
    "name" : "Index Business and Events Categories",
    "machine_name" : "business_and_events_categories",
    "description" : "Business and Events Categories Search Index",
    "server" : "wheretodrupal",
    "item_type" : "taxonomy_term",
    "options" : {
      "datasource" : { "bundles" : [ "business_type", "events_categories_and_features" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "description" : { "type" : "text", "boost" : "0.3" },
        "field_category_image:alt" : { "type" : "string" },
        "field_category_image:file" : { "type" : "integer", "entity_type" : "file" },
        "field_category_image:title" : { "type" : "string" },
        "field_show_on_homepage" : { "type" : "boolean" },
        "name" : { "type" : "text" },
        "node_count" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "tid" : { "type" : "integer" },
        "vocabulary" : { "type" : "integer", "entity_type" : "taxonomy_vocabulary" },
        "vocabulary:machine_name" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "mode" : "Taxonomy term page" }
        },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "name" : true, "description" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "name" : true, "description" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "name" : true, "description" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "name" : true, "description" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['index_businesses_and_events'] = entity_import('search_api_index', '{
    "name" : "Index Businesses and Events",
    "machine_name" : "index_businesses_and_events",
    "description" : null,
    "server" : "wheretodrupal",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "business_service_or_attraction", "event" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "author:last_access" : { "type" : "date" },
        "author:roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_ages" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_category_event" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_date_of_event:duration" : { "type" : "list\\u003Cduration\\u003E" },
        "field_date_of_event:value" : { "type" : "list\\u003Cdate\\u003E" },
        "field_date_of_event:value2" : { "type" : "list\\u003Cdate\\u003E" },
        "field_featured_content" : { "type" : "boolean" },
        "field_hidden_address_geofield:geom" : { "type" : "text" },
        "field_hidden_address_geofield:latlon" : { "type" : "string", "real_type" : "location" },
        "field_image_gallery:alt" : { "type" : "list\\u003Cstring\\u003E" },
        "field_image_gallery:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_image_gallery:title" : { "type" : "list\\u003Cstring\\u003E" },
        "field_linked_business" : { "type" : "integer", "entity_type" : "node" },
        "field_opening_hours:day" : { "type" : "list\\u003Cdate\\u003E" },
        "field_opening_hours:endhours" : { "type" : "list\\u003Cdate\\u003E" },
        "field_opening_hours:starthours" : { "type" : "list\\u003Cdate\\u003E" },
        "field_phone_number" : { "type" : "text" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "author" : true,
              "field_category" : true,
              "field_category_event" : true,
              "field_linked_business" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_hidden_address_geofield:geom" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_hidden_address_geofield:geom" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_hidden_address_geofield:geom" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['posts_blogs_and_news'] = entity_import('search_api_index', '{
    "name" : "Index Posts: Blogs and News",
    "machine_name" : "posts_blogs_and_news",
    "description" : null,
    "server" : "wheretodrupal",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "blog_post", "news_post" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "edit_url" : { "type" : "uri" },
        "field_body:format" : { "type" : "string" },
        "field_body:value" : { "type" : "text" },
        "field_image_gallery:alt" : { "type" : "list\\u003Cstring\\u003E" },
        "field_image_gallery:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_image_gallery:title" : { "type" : "list\\u003Cstring\\u003E" },
        "field_post_categories" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_post_categories:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_post_categories:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "nid" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "3.0" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "vid" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "field_body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_body:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['user_index'] = entity_import('search_api_index', '{
    "name" : "User Index",
    "machine_name" : "user_index",
    "description" : "User Index",
    "server" : "wheretodrupal",
    "item_type" : "user",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "created" : { "type" : "date" },
        "edit_url" : { "type" : "uri" },
        "feed_nid" : { "type" : "integer" },
        "feed_node" : { "type" : "integer", "entity_type" : "node" },
        "field_company_name" : { "type" : "text" },
        "field_title" : { "type" : "text" },
        "last_access" : { "type" : "date" },
        "last_login" : { "type" : "date" },
        "mail" : { "type" : "text" },
        "name" : { "type" : "text" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "status" : { "type" : "integer" },
        "theme" : { "type" : "text" },
        "uid" : { "type" : "integer" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_role_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "roles" : [] }
        },
        "search_api_alter_user_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "name" : true,
              "mail" : true,
              "theme" : true,
              "field_title" : true,
              "field_company_name" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "name" : true,
              "mail" : true,
              "theme" : true,
              "field_title" : true,
              "field_company_name" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "name" : true,
              "mail" : true,
              "theme" : true,
              "field_title" : true,
              "field_company_name" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "name" : true,
              "mail" : true,
              "theme" : true,
              "field_title" : true,
              "field_company_name" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function wttoc_search_api_default_search_api_server() {
  $items = array();
  $items['wheretodrupal'] = entity_import('search_api_server', '{
    "name" : "wheretodrupal",
    "machine_name" : "wheretodrupal",
    "description" : "This is the Drupal Solr server for the Where To Take Our Children website.",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "127.0.0.1",
      "port" : "8983",
      "path" : "\\/solr\\/wheretodrupal",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "5",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
