<?php
/**
 * @file
 * publications.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function publications_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|publication|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'info',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_publication_file',
      2 => 'field_publication_link',
      3 => 'field_publication_country_refere',
      4 => 'field_publication_sector_referen',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info|node|publication|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('info');

  return $field_groups;
}
