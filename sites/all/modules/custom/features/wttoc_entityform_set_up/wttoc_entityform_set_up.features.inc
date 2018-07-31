<?php
/**
 * @file
 * wttoc_entityform_set_up.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wttoc_entityform_set_up_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function wttoc_entityform_set_up_default_entityform_type() {
  $items = array();
  $items['advertiser_sign_up'] = entity_import('entityform_type', '{
    "type" : "advertiser_sign_up",
    "label" : "Advertiser sign up",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "Send",
      "submit_confirm_msg" : "Enquiry sent",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thank you for your enquiry",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EWe will be contacting you shortly.\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "8" : "8",
        "7" : "7",
        "5" : "5",
        "6" : "6",
        "3" : "3",
        "2" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EIf you are a business or event organiser and are not already signed up as an advertiser on Where to take our Children. Please complete the form below and we will get back to you.\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
