<?php

/**
 * @file
 * Contains definations for Drush commands and callbacks.
 */

/**
 * Implements hook_drush_command().
 */
function drush_useful_drush_command() {

  $commands['useful-developer-install'] = [
    'description' => 'Install all the important development modules such as Devel, Admin Toolbar etc.',
    'aliases' => ['idev'],
  ];

  $commands['useful-developer-uninstall'] = [
    'description' => 'Uninstall development modules such as Devel, Admin Toolbar etc.',
    'aliases' => ['udev'],
  ];

  $commands['useful-seo-install'] = [
    'description' => 'Install all the modules related to SEO of the website.',
    'aliases' => ['iseo'],
  ];

  $commands['useful-seo-uninstall'] = [
    'description' => 'Uninstall all the modules related to SEO of the website.',
    'aliases' => ['useo'],
  ];

  $commands['useful-optimize-install'] = [
    'description' => 'Install optimization modules such as Redis, Advance aggregation, Fast 404 etc.',
    'aliases' => ['iopt'],
  ];

  $commands['useful-optimize-uninstall'] = [
    'description' => 'Uninstall optimization modules such as Redis, Advance aggregation, Fast 404 etc.',
    'aliases' => ['uopt'],
  ];

  $commands['useful-migration-install'] = [
    'description' => 'Install Migration Modules such as migrate , migrate_plus , migrate_tools etc.',
    'aliases' => ['imig'],
  ];

  $commands['useful-migration-uninstall'] = [
    'description' => 'uninstall Migration Modules such as migrate , migrate_plus , migrate_tools etc.',
    'aliases' => ['umig'],
  ];

  $commands['useful-decoupled-install'] = [
    'description' => 'Install Migration Modules such as   RestAPI, REST UI, jsonAPI ,basic_Auth,',
    'aliases' => ['idcoup'],
  ];

  $commands['useful-decoupled-uninstall'] = [
    'description' => 'Uninstall Migration Modules such as  RestAPI, REST UI, jsonAPI ,basic_Auth',
    'aliases' => ['udcoup'],
  ];

  $commands['useful-security-install'] = [
    'description' => 'Install Security related modules such as captcha,paranoia etc.',
    'aliases' => ['isec'],
  ];

  $commands['useful-security-uninstall'] = [
    'description' => 'Uninstall Security related modules such as captcha,paranoia etc.',
    'aliases' => ['usec'],
  ];

  $commands['useful-search-install'] = [
    'description' => 'Install Search enhancing modules such as Search API, Search API DB, Facets etc.',
    'aliases' => ['isrch'],
  ];

  $commands['useful-search-uninstall'] = [
    'description' => 'Uninstall search modules such as Search API, Search API DB, Facets etc.',
    'aliases' => ['usrch'],
  ];

  $commands['useful-social-install'] = [
    'description' => 'Install social sharing modules like  AddToAny , sharethis etc',
    'aliases' => ['isoc'],
  ];

  $commands['useful-social-uninstall'] = [
    'description' => 'Uninstall social sharing modules like  AddToAny , sharethis etc',
    'aliases' => ['usoc'],
  ];

  $commands['useful-education-install'] = [
    'description' => 'Install  modules  like faq,tour_ui',
    'aliases' => ['iedu'],
  ];

  $commands['useful-education-uninstall'] = [
    'description' => 'Uninstall  modules like faq,tour_ui',
    'aliases' => ['uedu'],
  ];

  $commands['useful-advertise-install'] = [
    'description' => 'Install  modules  like  google_adsense, dfp, mailchip, simpleads etc.',
    'aliases' => ['iadv'],
  ];

  $commands['useful-advertise-uninstall'] = [
    'description' => 'Uninstall  modules  like  google_adsense, dfp, mailchip, simpleads etc.',
    'aliases' => ['uadv'],
  ];

  $commands['useful-contentdisplay-install'] = [
    'description' => 'Install  modules  like views_slideshow, views_accordion',
    'aliases' => ['icd'],
  ];

  $commands['useful-contentdisplay-uninstall'] = [
    'description' => 'Uninstall  modules  like views_slideshow, views_accordion',
    'aliases' => ['ucd'],
  ];

  $commands['useful-importexport-install'] = [
    'description' => 'Install  modules  like views_data_export, contentimport , backup_db, printable',
    'aliases' => ['iimex'],
  ];

  $commands['useful-importexport-uninstall'] = [
    'description' => 'Uninstall  modules  like views_data_export, contentimport , backup_db, printable',
    'aliases' => ['uimex'],
  ];

  return $commands;
}

/**
 * Drush command logic for command useful-developer-install.
 */
function drush_drush_useful_useful_developer_install() {
  drush_invoke('pm-enable', ['devel', 'admin_toolbar']);
  drush_invoke('pm-enable', ['webprofiler', 'devel_generate', 'kint', 'admin_toolbar_tools']);
}

/**
 * Drush command logic for command useful-developer-uninstall.
 */
function drush_drush_useful_useful_developer_uninstall() {
  drush_invoke('pm-uninstall', ['webprofiler', 'devel_generate', 'kint', 'admin_toolbar_tools']);
  drush_invoke('pm-uninstall', ['devel', 'admin_toolbar']);
}

/**
 * Drush command logic for useful-seo-install.
 */
function drush_drush_useful_useful_seo_install() {
  drush_invoke('pm-enable', ['metatag', 'pathauto', 'simple_sitemap', 'google_analytics', 'redirect', 'schema_metatag', 'yoast_seo']);
  drush_invoke('pm-enable', ['metatag_views']);
}

/**
 * Drush command logic for useful-seo-install.
 */
function drush_drush_useful_useful_seo_uninstall() {
  drush_invoke('pm-uninstall', ['metatag_views']);
  drush_invoke('pm-uninstall', ['metatag', 'pathauto', 'simple_sitemap', 'google_analytics', 'redirect', 'schema_metatag', 'yoast_seo']);
}

/**
 * Drush command logic for useful-optimization-install.
 */
function drush_drush_useful_useful_optimize_install() {
  drush_invoke('pm-enable', ['advagg', 'redis', 'fast_404']);
  drush_invoke('pm-enable', ['advagg_old_ie_compatibility', 'advagg_css_minify', ' advagg_cdn', 'advagg_bundler', 'advagg_mod', 'advagg_ext_minify', 'advagg_validator', ' advagg_js_minify']);
}

/**
 * Drush commands logic for useful-optimization-uninstall.
 */
function drush_drush_useful_useful_optimize_uninstall() {
  drush_invoke('pm-uninstall', ['advagg_old_ie_compatibility', 'advagg_css_minify', ' advagg_cdn', 'advagg_bundler', 'advagg_mod', 'advagg_ext_minify', 'advagg_validator', ' advagg_js_minify']);
  drush_invoke('pm-uninstall', ['advagg', 'redis', 'fast_404']);
}

/**
 * Drush command logic for useful-migrate-install.
 */
function drush_drush_useful_useful_migration_install() {
  drush_invoke('pm-enable', ['migrate_plus', 'migrate_tools']);
  drush_invoke('pm-enable', ['migrate', 'migrate_drupal', 'migrate_drupal_ui', 'migrate_example_advanced_setup', 'migrate_example_advanced', 'migrate_example_setup', 'migrate_example']);
}

/**
 * Drush commands logic for useful-migrate-uninstall.
 */
function drush_drush_useful_useful_migration_uninstall() {
  drush_invoke('pm-uninstall', ['migrate_plus', 'migrate_tools']);
  drush_invoke('pm-uninstall', ['migrate', 'migrate_drupal', 'migrate_drupal_ui', 'migrate_example_advanced_setup', 'migrate_example_advanced', 'migrate_example_setup', 'migrate_example']);
}

/**
 * Drush command logic for useful-decoupled-install.
 */
function drush_drush_useful_useful_decoupled_install() {
  drush_invoke('pm-enable', ['restui', 'jsonapi', 'basic_auth', 'rest']);
}

/**
 * Drush commands logic for useful-decoupled-uninstall.
 */
function drush_drush_useful_useful_decoupled_uninstall() {
  drush_invoke('pm-uninstall', ['restui', 'jsonapi', 'basic_auth', 'rest']);
}

/**
 * Drush command logic for useful-security-install.
 */
function drush_drush_useful_useful_security_install() {
  drush_invoke('pm-enable', ['captcha', 'recaptcha', 'paranoia', 'tfa', 'password_strength']);
  drush_invoke('pm-enable', ['image_captcha']);
}

/**
 * Drush commands logic for useful-security-uninstall.
 */
function drush_drush_useful_useful_security_uninstall() {
  drush_invoke('pm-uninstall', ['image_captcha']);
  drush_invoke('pm-uninstall', ['captcha', 'recaptcha', 'paranoia', 'tfa', 'password_strength']);
}

/**
 * Drush command logic for useful-search-install.
 */
function drush_drush_useful_useful_search_install() {
  drush_invoke('pm-enable', ['search_api', 'facets']);
  drush_invoke('pm-enable', ['search_api_glossary', 'search_api_sorts']);
  drush_invoke('pm-enable', ['search_api_views_taxonomy', 'search_api_db_defaults', 'search_api_db']);
}

/**
 * Drush commands logic for useful-search-uninstall.
 */
function drush_drush_useful_useful_search_uninstall() {
  drush_invoke('pm-uninstall', ['search_api_views_taxonomy', 'search_api_db_defaults', 'search_api_db']);
  drush_invoke('pm-uninstall', ['search_api_glossary', 'search_api_sorts']);
  drush_invoke('pm-uninstall', ['search_api', 'facets']);
}

/**
 * Drush command logic for useful-social-install.
 */
function drush_drush_useful_useful_social_install() {
  drush_invoke('pm-enable', ['addtoany', 'sharethis']);
}

/**
 * Drush commands logic for useful-social-uninstall.
 */
function drush_drush_useful_useful_social_uninstall() {
  drush_invoke('pm-uninstall', ['sharethis', 'addtoany']);
}

/**
 * Drush command logic for useful-education-install.
 */
function drush_drush_useful_useful_education_install() {
  drush_invoke('pm-enable', ['faq', 'tour_ui']);
}

/**
 * Drush commands logic for useful-education-uninstall.
 */
function drush_drush_useful_useful_education_uninstall() {
  drush_invoke('pm-uninstall', ['faq', 'tour_ui']);
}

/**
 * Drush command logic for useful-advertise-install.
 */
function drush_drush_useful_useful_advertise_install() {
  drush_invoke('pm-enable', ['ctools']);
  drush_invoke('pm-enable', ['mailchimp', 'adsense', 'dfp', 'simpleads']);
}

/**
 * Drush commands logic for useful-advertise-uninstall.
 */
function drush_drush_useful_useful_advertise_uninstall() {
  drush_invoke('pm-uninstall', ['ctools']);
  drush_invoke('pm-uninstall', ['mailchimp', 'adsense', 'dfp', 'simpleads']);

}

/**
 * Drush command logic for useful-contentdisplay-install.
 */
function drush_drush_useful_useful_contentdisplay_install() {
  drush_invoke('pm-enable', ['views_slideshow', 'views_accordion']);
}

/**
 * Drush commands logic for useful-contentdisplay-uninstall.
 */
function drush_drush_useful_useful_contentdisplay_uninstall() {
  drush_invoke('pm-uninstall', ['views_slideshow', 'views_accordion']);
}

/**
 * Drush command logic for useful-import export-install.
 */
function drush_drush_useful_useful_importexport_install() {
  drush_invoke('pm-enable', ['contentimport ', 'printable']);
}

/**
 * Drush commands logic for useful-import export-uninstall.
 */
function drush_drush_useful_useful_importexport_uninstall() {
  drush_invoke('pm-uninstall', ['contentimport ', 'printable']);
}
