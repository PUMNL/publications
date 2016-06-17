<?php
/**
 * @file
 * publications.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function publications_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_publication_file' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Download',
        ),
      ),
    ),
    'field_publication_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'View',
        ),
      ),
    ),
  );
  $export['node|publication|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_publication_date' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_cover' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|publication|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function publications_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_publication_date',
        1 => 'field_cover',
        2 => 'group_info',
        3 => 'body',
        4 => 'field_publication_sector_referen',
        5 => 'field_publication_country_refere',
        6 => 'field_publication_file',
        7 => 'field_publication_link',
      ),
    ),
    'fields' => array(
      'field_publication_date' => 'ds_content',
      'field_cover' => 'ds_content',
      'group_info' => 'ds_content',
      'body' => 'ds_content',
      'field_publication_sector_referen' => 'ds_content',
      'field_publication_country_refere' => 'ds_content',
      'field_publication_file' => 'ds_content',
      'field_publication_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|publication|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cover',
        1 => 'field_publication_date',
        2 => 'title',
      ),
    ),
    'fields' => array(
      'field_cover' => 'ds_content',
      'field_publication_date' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|publication|teaser'] = $ds_layout;

  return $export;
}
