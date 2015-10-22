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
		//jquery ui might not be neededin the end
		'/js/bowerimports/jquery.event.swipe/js/jquery.event.swipe.js',
		'/js/otherimports/unslider/unslider.min.js',
		'/js/bowerimports/matchHeight/jquery.matchHeight-min.js',
		'/js/bowerimports/Readmore.js/readmore.min.js',
		'/js/bowerimports/sumoselect/jquery.sumoselect.min.js',
		'/js/bowerimports/jquery-placeholder/jquery.placeholder.min.js',
                );
        for($i=0; $i<count($loadedJSinTheme); $i++){
                drupal_add_js(drupal_get_path('theme', 'wttoc') . $loadedJSinTheme[$i],
                        array('type' => 'file', 'scope' => 'footer', 'every_page' => TRUE, 'weight' => (5 + $i))
                );
		$lastweight=5+$i;
        }
	//LOAD EXTERNAL JAVASCRIPT
	$loadedJSexternal = array(
		'https://maps.googleapis.com/maps/api/js',
		);
        for($i=0; $i<count($loadedJSexternal); $i++){
                drupal_add_js($loadedJSexternal[$i],
                        array('type' => 'external', 'scope' => 'footer', 'every_page' => TRUE, 'weight' => ($lastweight + $i))
                );
        }

	//LOAD CSS IN THEME
        $loadedCSSinTheme = array(
                '/sass/bowerimports/jquery-ui/themes/smoothness/jquery-ui.min.css',
                );
        for($i=0; $i<count($loadedCSSinTheme); $i++){
                drupal_add_css(drupal_get_path('theme', 'wttoc') . $loadedCSSinTheme[$i],
                        array('type' => 'file', 'every_page' => TRUE, 'group' => CSS_THEME, 'weight' => (5 + $i))
                );
        }
}

