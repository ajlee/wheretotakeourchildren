<?php

/**
 * @file
 * Contains a pre-process hook for 'html'.
 */

/**
 * Implements hook_preprocess_html().
 */

function wttoc_preprocess_html(&$variables) {
  // Add information about the number of sidebars.
  if(!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['attributes_array']['class'][] = 'two-sidebars';
  }
  elseif(!empty($variables['page']['sidebar_first'])) {
    $variables['attributes_array']['class'][] = 'one-sidebar sidebar-first';
  }
  elseif(!empty($variables['page']['sidebar_second'])) {
    $variables['attributes_array']['class'][] = 'one-sidebar sidebar-second';
  }
  else {
    $variables['attributes_array']['class'][] = 'no-sidebars';
  }
  //Add Information about header
  if(!empty($variables['page']['header'])){
    $variables['attributes_array']['class'][] = 'hasHeaderRegion';
  }
  else{
    $variables['attributes_array']['class'][] = 'noHeaderRegion';
  }
}
