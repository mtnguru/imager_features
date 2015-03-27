<?php
/**
 * @file
 * imager_dist.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function imager_dist_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_test-article:node/1
  $menu_links['main-menu_test-article:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Test Article',
    'options' => array(
      'identifier' => 'main-menu_test-article:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Test Article');


  return $menu_links;
}
