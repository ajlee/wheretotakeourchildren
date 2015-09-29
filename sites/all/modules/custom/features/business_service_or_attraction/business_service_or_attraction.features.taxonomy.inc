<?php
/**
 * @file
 * business_service_or_attraction.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function business_service_or_attraction_taxonomy_default_vocabularies() {
  return array(
    'business_type' => array(
      'name' => 'Category',
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
  );
}
