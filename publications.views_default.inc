<?php
/**
 * @file
 * publications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function publications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_publication_type_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_publication_sector_referen_target_id_entityreference_filter' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Cover */
  $handler->display->display_options['fields']['field_cover']['id'] = 'field_cover';
  $handler->display->display_options['fields']['field_cover']['table'] = 'field_data_field_cover';
  $handler->display->display_options['fields']['field_cover']['field'] = 'field_cover';
  $handler->display->display_options['fields']['field_cover']['label'] = '';
  $handler->display->display_options['fields']['field_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<h4>[title]</h4>
[body]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Publication file */
  $handler->display->display_options['fields']['field_publication_file']['id'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['table'] = 'field_data_field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['field'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publication_file']['alter']['text'] = '<a class="download-publication" href="[field_publication_file]">Download</a>';
  $handler->display->display_options['fields']['field_publication_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publication_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_file']['type'] = 'file_url_plain';
  /* Field: Content: Publication link */
  $handler->display->display_options['fields']['field_publication_link']['id'] = 'field_publication_link';
  $handler->display->display_options['fields']['field_publication_link']['table'] = 'field_data_field_publication_link';
  $handler->display->display_options['fields']['field_publication_link']['field'] = 'field_publication_link';
  $handler->display->display_options['fields']['field_publication_link']['label'] = 'View';
  $handler->display->display_options['fields']['field_publication_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publication_link']['alter']['text'] = '<a href="[field_publication_link-url]" class="view-publication" target="_new">View publication</a>';
  $handler->display->display_options['fields']['field_publication_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publication_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_publication_link']['type'] = 'link_url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_publication_file]
[field_publication_link]';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Filter criterion: Publication type */
  $handler->display->display_options['filters']['field_publication_type_value']['id'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_value']['field'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['ui_name'] = 'Publication type';
  $handler->display->display_options['filters']['field_publication_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_value']['expose']['operator_id'] = 'field_publication_type_value_op';
  $handler->display->display_options['filters']['field_publication_type_value']['expose']['label'] = 'Publication type';
  $handler->display->display_options['filters']['field_publication_type_value']['expose']['operator'] = 'field_publication_type_value_op';
  $handler->display->display_options['filters']['field_publication_type_value']['expose']['identifier'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
  );
  /* Filter criterion: Content: Sector (field_publication_sector_referen) (reference filter) */
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['id'] = 'field_publication_sector_referen_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['table'] = 'field_data_field_publication_sector_referen';
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['field'] = 'field_publication_sector_referen_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['expose']['operator_id'] = 'field_publication_sector_referen_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['expose']['operator'] = 'field_publication_sector_referen_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['expose']['identifier'] = 'field_publication_sector_referen_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
  );
  $handler->display->display_options['filters']['field_publication_sector_referen_target_id_entityreference_filter']['reference_display'] = 'sectors:entityreference_1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pum-publications';
  $translatables['publications'] = array(
    t('Master'),
    t('Publications'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<h4>[title]</h4>
[body]'),
    t('Publication file'),
    t('<a class="download-publication" href="[field_publication_file]">Download</a>'),
    t('View'),
    t('<a href="[field_publication_link-url]" class="view-publication" target="_new">View publication</a>'),
    t('[field_publication_file]
[field_publication_link]'),
    t('Publication type'),
    t('Sector'),
    t('Page'),
  );
  $export['publications'] = $view;

  return $export;
}
