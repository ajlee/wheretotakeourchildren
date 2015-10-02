<?php

/**
 * Implements hook_preprocess_page().
 */


function wttoc_preprocess_page(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
        //LOAD JS IN THEME
	$loadedJSinTheme = array(
                '/js/bowerimports/jquery-ui/ui/minified/core.min.js',
                '/js/bowerimports/jquery-ui/ui/minified/widget.min.js',
                '/js/bowerimports/jquery-ui/ui/minified/position.min.js',
                '/js/bowerimports/jquery-ui/ui/minified/menu.min.js',
                '/js/bowerimports/jquery-ui/ui/minified/selectmenu.min.js',
                );
        for($i=0; $i<count($loadedJSinTheme); $i++){
                drupal_add_js(drupal_get_path('theme', 'wttoc') . $loadedJSinTheme[$i],
                        array('type' => 'file', 'scope' => 'footer', 'every_page' => TRUE, 'weight' => (5 + $i), 'type' => 'file')
                );
        }
	//LOAD CSS IN THEME
        $loadedCSSinTheme = array(
                '/sass/bowerimports/jquery-ui/themes/excite-bike/jquery-ui.min.css',
                );
        for($i=0; $i<count($loadedCSSinTheme); $i++){
                drupal_add_css(drupal_get_path('theme', 'wttoc') . $loadedCSSinTheme[$i],
                        array('type' => 'file', 'every_page' => TRUE, 'group' => CSS_THEME, 'weight' => (5 + $i))
                );
        }
}

