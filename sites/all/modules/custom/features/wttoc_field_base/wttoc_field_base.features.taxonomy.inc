<?php
/**
 * @file
 * wttoc_field_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wttoc_field_base_taxonomy_default_vocabularies() {
  return array(
    'business_type' => array(
      'name' => 'Business: Categories and Features',
      'machine_name' => 'business_type',
      'description' => 'Describes a business, services, or attraction category. Contains subcategories as well.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'events_categories_and_features' => array(
      'name' => 'Events: Categories and Features',
      'machine_name' => 'events_categories_and_features',
      'description' => 'Describes an event\'s category. Contains subcategories as well.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
