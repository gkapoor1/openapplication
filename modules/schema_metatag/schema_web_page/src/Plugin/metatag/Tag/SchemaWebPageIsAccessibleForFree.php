<?php

namespace Drupal\schema_web_page\Plugin\metatag\Tag;

use Drupal\schema_metatag\Plugin\metatag\Tag\SchemaIsAccessibleForFreeBase;

/**
 * Provides a plugin for the 'schema_web_page_is_accessible_for_free' meta tag.
 *
 * - 'id' should be a globally unique id.
 * - 'name' should match the Schema.org element name.
 * - 'group' should match the id of the group that defines the Schema.org type.
 *
 * @MetatagTag(
 *   id = "schema_web_page_is_accessible_for_free",
 *   label = @Translation("isAccessibleForFree"),
 *   description = @Translation(""),
 *   name = "isAccessibleForFree",
 *   group = "schema_web_page",
 *   weight = 4,
 *   type = "string",
 *   secure = FALSE,
 *   multiple = FALSE
 * )
 */
class SchemaWebPageIsAccessibleForFree extends SchemaIsAccessibleForFreeBase {

}
