<?php
/**
 * @file
 * wttoc_recaptcha_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wttoc_recaptcha_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
}
