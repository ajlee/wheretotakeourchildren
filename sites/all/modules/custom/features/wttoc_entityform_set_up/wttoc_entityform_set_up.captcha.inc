<?php
/**
 * @file
 * wttoc_entityform_set_up.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function wttoc_entityform_set_up_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'advertiser_sign_up';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['advertiser_sign_up'] = $captcha;

  return $export;
}
