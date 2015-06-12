<?php
function pricelist_views_data() {
  $data['pricelist_price']['table']['group'] = t('Price');	
  $data['pricelist_price']['table']['base'] = array(
     'field' => 'id',
     'title' => t('Price'),
     'help' => t("Pricelist"),
     'weight' => -10,
   );  
   $data['pricelist_price']['id'] = array(
     'title' => t('Id'),
     'help' => t('Id.'),
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
      'handler' => 'views_handler_argument_string',
     ),
   );
   $data['pricelist_price']['cod'] = array(
     'title' => t('Cod'),
     'help' => t('Cod.'),
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
      'handler' => 'views_handler_argument_string',
     ),
   );
   $data['pricelist_price']['category'] = array(
     'title' => t('Category'),
     'help' => t('Category.'),
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
      'handler' => 'views_handler_argument_string',
     ),
   );
   $data['pricelist_price']['goods'] = array(
     'title' => t('Good'),
     'help' => t('Goods.'),
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
      'handler' => 'views_handler_argument_string',
     ),
   );
   $data['pricelist_price']['price'] = array(
     'title' => t('Price'),
     'help' => t('Price.'),
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
      'handler' => 'views_handler_argument_string',
     ),
   );
  return $data;
}
