<?php

namespace Drupal\schema_recipe\Plugin\metatag\Tag;

use Drupal\schema_metatag\Plugin\metatag\Tag\SchemaDurationBase;

/**
 * Provides a plugin for the 'totalTime' meta tag.
 *
 * - 'id' should be a globally unique id.
 * - 'name' should match the Schema.org element name.
 * - 'group' should match the id of the group that defines the Schema.org type.
 *
 * @MetatagTag(
 *   id = "schema_recipe_total_time",
 *   label = @Translation("totalTime"),
 *   description = @Translation("Total Time (The total time required to perform instructions or a direction (including time to prepare the supplies), in ISO 8601 duration format."),
 *   name = "totalTime",
 *   group = "schema_recipe",
 *   weight = 4,
 *   type = "string",
 *   secure = FALSE,
 *   multiple = FALSE
 * )
 */
class SchemaRecipeTotalTime extends SchemaDurationBase {

  /**
   * Generate a form element for this meta tag.
   */
  public function form(array $element = []) {
    $form = parent::form($element);
    $form['#attributes']['placeholder'] = '';
    return $form;
  }

}
