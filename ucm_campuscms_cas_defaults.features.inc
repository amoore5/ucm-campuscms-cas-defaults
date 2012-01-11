<?php
/**
 * @file
 * ucm_campuscms_cas_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucm_campuscms_cas_defaults_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
