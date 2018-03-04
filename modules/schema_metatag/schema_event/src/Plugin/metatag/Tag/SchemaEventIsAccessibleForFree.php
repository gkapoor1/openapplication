<?php

namespace Drupal\schema_event\Plugin\metatag\Tag;

use Drupal\schema_metatag\Plugin\metatag\Tag\SchemaIsAccessibleForFreeBase;

/**
 * Provides a plugin for the 'schema_event_is_accessible_for_free' meta tag.
 *
 * - 'id' should be a globally unique id.
 * - 'name' should match the Schema.org element name.
 * - 'group' should match the id of the group that defines the Schema.org type.
 *
 * @MetatagTag(
 *   id = "schema_event_is_accessible_for_free",
 *   label = @Translation("isAccessibleForFree"),
 *   description = @Translation(""),
 *   name = "isAccessibleForFree",
 *   group = "schema_event",
 *   weight = 4,
 *   type = "string",
 *   secure = FALSE,
 *   multiple = FALSE
 * )
 */
class SchemaEventIsAccessibleForFree extends SchemaIsAccessibleForFreeBase {

}
