<?php
/**
 * @file
 * publications.features.inc
 */

/**
 * Implements hook_views_api().
 */
function publications_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function publications_node_info() {
  $items = array(
    'publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
