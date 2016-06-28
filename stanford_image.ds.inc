<?php
/**
 * @file
 * stanford_image.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_image_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'bean|stanford_postcard|stanford_large_card';
  $ds_fieldsetting->entity_type = 'bean';
  $ds_fieldsetting->bundle = 'stanford_postcard';
  $ds_fieldsetting->view_mode = 'stanford_large_card';
  $ds_fieldsetting->settings = array(
    'title_wrapper' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'stanford_field_formatters',
      'formatter_settings' => array(
        'html_tag' => 'h2',
        'link_field' => '',
        'custom_link_to_entity' => 0,
        'custom_prefix' => '',
        'custom_suffix' => '',
        'custom_reverse' => 0,
        'custom_trim' => 0,
        'custom_strtolower' => 0,
        'custom_strtoupper' => 0,
        'custom_ucfirst' => 0,
        'custom_ucwords' => 0,
        'custom_strip_tags' => 0,
        'custom_strip_preserve' => '',
      ),
    ),
  );
  $export['bean|stanford_postcard|stanford_large_card'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_image_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_12_col_banner';
  $ds_view_mode->label = 'Banner 12 Column';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_12_col_banner'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_3_col_header';
  $ds_view_mode->label = 'Header 3 Column';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_3_col_header'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_4_col_header';
  $ds_view_mode->label = 'Header 4 Column';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_4_col_header'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_6_col_banner';
  $ds_view_mode->label = ' Banner 6 Column';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_6_col_banner'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_6_col_banner_short';
  $ds_view_mode->label = 'Banner 6 Column Short';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_6_col_banner_short'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_6_col_banner_tall';
  $ds_view_mode->label = 'Banner 6 Column Tall';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_6_col_banner_tall'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_6_col_photo_landscape';
  $ds_view_mode->label = 'Photo Landscape 6 Column';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_6_col_photo_landscape'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_8_col_banner';
  $ds_view_mode->label = 'Banner 8 Column';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['stanford_8_col_banner'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_8_col_banner_short';
  $ds_view_mode->label = 'Banner 8 Column Short';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_8_col_banner_short'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_8_col_banner_tall';
  $ds_view_mode->label = 'Banner 8 Column Tall';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_8_col_banner_tall'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_9_col_banner';
  $ds_view_mode->label = 'Banner 9 Column ';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_9_col_banner'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_9_col_banner_short';
  $ds_view_mode->label = 'Banner 9 Column Short ';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_9_col_banner_short'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_banner_850x400';
  $ds_view_mode->label = 'Banner (850x400)';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_banner_850x400'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_full_width_banner';
  $ds_view_mode->label = 'Banner Full Width';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_full_width_banner'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_full_width_banner_short';
  $ds_view_mode->label = 'Banner Full Width Short';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_full_width_banner_short'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_icon_profile';
  $ds_view_mode->label = 'Icon Profile';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_icon_profile'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_icon_scaled';
  $ds_view_mode->label = 'Icon Scaled';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_icon_scaled'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_icon_square';
  $ds_view_mode->label = 'Icon Square';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_icon_square'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_large_card';
  $ds_view_mode->label = 'Large Card';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_large_card'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_large_scaled';
  $ds_view_mode->label = 'Large Scaled';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_large_scaled'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_large_square';
  $ds_view_mode->label = 'Large Square';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_large_square'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_medium_square';
  $ds_view_mode->label = 'Medium Square';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_medium_square'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_sm_profile';
  $ds_view_mode->label = 'Small Profile';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_sm_profile'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_sm_scaled';
  $ds_view_mode->label = 'Small Scaled';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_sm_scaled'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_small_square';
  $ds_view_mode->label = 'Small Square';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_small_square'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_thumbnail_square';
  $ds_view_mode->label = 'Thumbnail Square';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_thumbnail_square'] = $ds_view_mode;

  return $export;
}
