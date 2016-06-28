<?php
/**
 * @file
 * stanford_image.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_image_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_caption_div|field_collection_item|field_s_image_info|stanford_large_scaled';
  $field_group->group_name = 'group_caption_div';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_large_scaled';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption Style',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption Style',
      'instance_settings' => array(
        'classes' => 'caption',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_caption_div|field_collection_item|field_s_image_info|stanford_large_scaled'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contained_styles|bean|stanford_postcard|stanford_large_card';
  $field_group->group_name = 'group_contained_styles';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'stanford_large_card';
  $field_group->parent_name = 'group_large_card_styles';
  $field_group->data = array(
    'label' => 'Contained Styles',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_postcard_body',
      1 => 'title_wrapper',
      2 => 'group_more_link_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contained Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'contained',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contained_styles|bean|stanford_postcard|stanford_large_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_styles|field_collection_item|field_s_image_info|stanford_icon_scaled';
  $field_group->group_name = 'group_image_styles';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_icon_scaled';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Styles',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image-styles field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_styles|field_collection_item|field_s_image_info|stanford_icon_scaled'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_styles|field_collection_item|field_s_image_info|stanford_sm_scaled';
  $field_group->group_name = 'group_image_styles';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_sm_scaled';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Styles',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image-styles field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_styles|field_collection_item|field_s_image_info|stanford_sm_scaled'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_card_styles|bean|stanford_postcard|stanford_large_card';
  $field_group->group_name = 'group_large_card_styles';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'stanford_large_card';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Card Styles',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_info',
      1 => 'group_contained_styles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Card Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_large_card_styles|bean|stanford_postcard|stanford_large_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_more_link_style|bean|stanford_postcard|stanford_large_card';
  $field_group->group_name = 'group_more_link_style';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'stanford_large_card';
  $field_group->parent_name = 'group_contained_styles';
  $field_group->data = array(
    'label' => 'More Link Styles',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_postcard_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'More Link Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'more-link',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_more_link_style|bean|stanford_postcard|stanford_large_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_12_col_banner';
  $field_group->group_name = 'group_s_banner_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_12_col_banner';
  $field_group->parent_name = 'group_s_image_border_style';
  $field_group->data = array(
    'label' => 'Banner Overlay',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner Overlay',
      'instance_settings' => array(
        'classes' => 'banner-overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_12_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_12_col_banner_tall';
  $field_group->group_name = 'group_s_banner_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_12_col_banner_tall';
  $field_group->parent_name = 'group_s_image_border_style';
  $field_group->data = array(
    'label' => 'Banner Overlay',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner Overlay',
      'instance_settings' => array(
        'classes' => 'banner-overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_12_col_banner_tall'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_6_col_banner';
  $field_group->group_name = 'group_s_banner_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_6_col_banner';
  $field_group->parent_name = 'group_s_image_border_style';
  $field_group->data = array(
    'label' => 'Banner Overlay',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner Overlay',
      'instance_settings' => array(
        'classes' => 'banner-overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_6_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_8_col_banner';
  $field_group->group_name = 'group_s_banner_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_8_col_banner';
  $field_group->parent_name = 'group_s_image_border_style';
  $field_group->data = array(
    'label' => 'Banner Overlay',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner Overlay',
      'instance_settings' => array(
        'classes' => 'banner-overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_8_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_9_col_banner';
  $field_group->group_name = 'group_s_banner_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_9_col_banner';
  $field_group->parent_name = 'group_s_image_border_style';
  $field_group->data = array(
    'label' => 'Banner Overlay',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner Overlay',
      'instance_settings' => array(
        'classes' => 'banner-overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_9_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_caption_style|field_collection_item|field_s_image_info|stanford_3_col_header';
  $field_group->group_name = 'group_s_caption_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_3_col_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption Style',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption Style',
      'instance_settings' => array(
        'classes' => 'caption',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_caption_style|field_collection_item|field_s_image_info|stanford_3_col_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_caption_style|field_collection_item|field_s_image_info|stanford_4_col_header';
  $field_group->group_name = 'group_s_caption_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_4_col_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption Style',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption Style',
      'instance_settings' => array(
        'classes' => 'caption',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_caption_style|field_collection_item|field_s_image_info|stanford_4_col_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_caption_style|field_collection_item|field_s_image_info|stanford_6_col_photo_landscape';
  $field_group->group_name = 'group_s_caption_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_6_col_photo_landscape';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption Style',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption Style',
      'instance_settings' => array(
        'classes' => 'group-s-caption-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_caption_style|field_collection_item|field_s_image_info|stanford_6_col_photo_landscape'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_caption_style|field_collection_item|field_s_image_info|stanford_banner_850x400';
  $field_group->group_name = 'group_s_caption_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_banner_850x400';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption Style',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-caption-style field-group-div caption',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_caption_style|field_collection_item|field_s_image_info|stanford_banner_850x400'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_credits_style|field_collection_item|field_s_image_info|stanford_3_col_header';
  $field_group->group_name = 'group_s_credits_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_3_col_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Credits Style',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_image_credits',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Credits Style',
      'instance_settings' => array(
        'classes' => 'credits',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_credits_style|field_collection_item|field_s_image_info|stanford_3_col_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_credits_style|field_collection_item|field_s_image_info|stanford_4_col_header';
  $field_group->group_name = 'group_s_credits_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_4_col_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Credits Style',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_image_credits',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Credits Style',
      'instance_settings' => array(
        'classes' => 'credits',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_credits_style|field_collection_item|field_s_image_info|stanford_4_col_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_credits_style|field_collection_item|field_s_image_info|stanford_6_col_photo_landscape';
  $field_group->group_name = 'group_s_credits_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_6_col_photo_landscape';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Credits Style',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_image_credits',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Credits Style',
      'instance_settings' => array(
        'classes' => 'group-s-credits-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_credits_style|field_collection_item|field_s_image_info|stanford_6_col_photo_landscape'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_credits_style|field_collection_item|field_s_image_info|stanford_banner_850x400';
  $field_group->group_name = 'group_s_credits_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_banner_850x400';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Credits Style',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_image_credits',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Credits Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-credits-style field-group-div credits',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_credits_style|field_collection_item|field_s_image_info|stanford_banner_850x400'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_credits_style|field_collection_item|field_s_image_info|stanford_large_scaled';
  $field_group->group_name = 'group_s_credits_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_large_scaled';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Credits Style',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_image_credits',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Credits Style',
      'instance_settings' => array(
        'classes' => 'credits',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_credits_style|field_collection_item|field_s_image_info|stanford_large_scaled'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|default';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_12_col_banner';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_12_col_banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'group_s_banner_overlay',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_12_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_12_col_banner_tall';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_12_col_banner_tall';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'group_s_banner_overlay',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_12_col_banner_tall'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_3_col_header';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_3_col_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_3_col_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_4_col_header';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_4_col_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_4_col_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_6_col_banner';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_6_col_banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'group_s_banner_overlay',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_6_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_6_col_photo_landscape';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_6_col_photo_landscape';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'group-s-image-border-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_6_col_photo_landscape'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_8_col_banner';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_8_col_banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'group_s_banner_overlay',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_8_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_9_col_banner';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_9_col_banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'group_s_banner_overlay',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_9_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_banner_850x400';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_banner_850x400';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-image-border-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_banner_850x400'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_large_scaled';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_large_scaled';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_large_scaled'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_large_square';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_large_square';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_s_image_caption',
      1 => 'field_s_image_credits',
      2 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_large_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_med_profile';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_med_profile';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_med_profile'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_medium_square';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_medium_square';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_medium_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_small_square';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_small_square';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_small_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_thumbnail_square';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_thumbnail_square';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_thumbnail_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image|field_collection_item|field_s_image_info|form';
  $field_group->group_name = 'group_s_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_caption',
      1 => 'field_s_image_credits',
      2 => 'field_s_image_image',
      3 => 'field_s_image_source_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add/Edit Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_image|field_collection_item|field_s_image_info|form'] = $field_group;

  return $export;
}
