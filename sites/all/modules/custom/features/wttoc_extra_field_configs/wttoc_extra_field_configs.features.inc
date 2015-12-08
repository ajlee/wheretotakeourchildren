<?php
/**
 * @file
 * wttoc_extra_field_configs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wttoc_extra_field_configs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}
