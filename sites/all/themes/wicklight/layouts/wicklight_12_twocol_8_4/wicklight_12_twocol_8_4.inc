<?php

/**
 * Implements hook_panels_layouts().
 */
function omega_wicklight_12_twocol_8_4_panels_layouts() {
  $items['wicklight_12_twocol_8_4'] = array(
    'title' => t('Two Column 8-4'),
    'category' => t('Custom'),
    'icon' => 'wicklight_12_twocol_8_4.png',
    'theme' => 'wicklight_12_twocol_8_4',
    'admin css' => 'wicklight_panels_admin_12.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side')
    ),
  );

  return $items;
}
