<?php
/**
 * @file
 * stanford_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_image_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_image_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function stanford_image_image_default_styles() {
  $styles = array();

  // Exported image style: button-card.
  $styles['button-card'] = array(
    'label' => 'button-card',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 151,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large-card.
  $styles['large-card'] = array(
    'label' => 'large-card',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 207,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small-card.
  $styles['small-card'] = array(
    'label' => 'small-card',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 151,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
