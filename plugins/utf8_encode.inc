<?php

/**
 * @file
 * Apply UTF-8 Encoding.
 */

$plugin = array(
  'form' => 'feeds_tamper_utf8_encode_form',
  'callback' => 'feeds_tamper_utf8_encode_callback',
  'name' => 'UTF-8 Encode',
  'multi' => 'loop',
  'category' => 'Other',
);

function feeds_tamper_utf8_encode_form($importer, $element_key, $settings) {
  $form = array();
  $form['html'] = array(
    '#markup' => t('Apply UTF-8 encoding to field'),
  );
  return $form;
}

function feeds_tamper_utf8_encode_callback($result, $item_key, $element_key, &$field, $settings, $source) {
  $field = utf8_encode($field);
}
