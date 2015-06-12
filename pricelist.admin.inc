<?php
function pricelist_admin_settings() {
  $form = array();
  $form['display'] = array(
     '#type' => 'fieldset',
     '#title' => t('Display options'),
   );  
  $form['display']['pricelist_row_on_page_view'] = array(
     '#type' => 'textfield',
     '#title' => t('Nubmer of rows on page for view.'),
     '#default_value' => variable_get('pricelist_row_on_page_view', 50),
	 );
  $form['display']['pricelist_row_on_page_edit'] = array(
     '#type' => 'textfield',
     '#title' => t('Nubmer of rows on page for view.'),
     '#default_value' => variable_get('pricelist_row_on_page_edit', 100),
	 );
  return system_settings_form($form);
}   
