<?php

/**
 * Implements hook_views_data_alter().
 */
function commerce_merchandising_views_data_alter(&$data) {
  // Define some fields based upon views_handler_field_entity in the entity
  // table so they can be re-used with other query backends.
  // @see views_handler_field_entity
  // Expose the order ID.

  $data['commerce_line_item']['atc_product_node_id'] = array(
    'title' => t('Adding Node ID', array(), array('context' => 'a drupal commerce line item')),
    'help' => t('The ID of the node which added the product to the cart.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'node',
      'base field' => 'nid',
      'label' => t('Node', array(), array('context' => 'a drupal commerce line item')),
    ),
  );


  $data['node']['atc_product_node_id'] = array(
    'title' => t('Added Node ID', array(), array('context' => 'a drupal commerce line item')),
    'help' => t('The ID of the node which added the product to the cart.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'commerce_line_item',
      'base field' => 'atc_product_node_id',
      'field' => 'nid',
      'label' => t('Node', array(), array('context' => 'a drupal commerce line item')),
    ),
  );
}
