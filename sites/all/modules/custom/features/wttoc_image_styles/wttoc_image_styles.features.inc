<?php
/**
 * @file
 * wttoc_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function wttoc_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: big_rectangle.
  $styles['big_rectangle'] = array(
    'label' => 'Big Rectangle (1200x400)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: big_rectangle_900_x_250.
  $styles['big_rectangle_900_x_250'] = array(
    'label' => 'Big Rectangle (900x250)',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: big_rectangle__1200x220_.
  $styles['big_rectangle__1200x220_'] = array(
    'label' => 'Big Rectangle (1200x220)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: bigrectangle_1200x260_.
  $styles['bigrectangle_1200x260_'] = array(
    'label' => 'BigRectangle (1200x260)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rectangle200x80.
  $styles['rectangle200x80'] = array(
    'label' => 'Rectangle 200x80',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rectangle_500x370.
  $styles['rectangle_500x370'] = array(
    'label' => 'Rectangle 500x370',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 370,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rectangle_700x370.
  $styles['rectangle_700x370'] = array(
    'label' => 'Rectangle 700x370',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 700,
          'height' => 370,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square500x500.
  $styles['square500x500'] = array(
    'label' => 'Square 500x500',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_100x100.
  $styles['square_100x100'] = array(
    'label' => 'Square 100x100',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_50x50.
  $styles['square_50x50'] = array(
    'label' => 'Square 50x50',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
