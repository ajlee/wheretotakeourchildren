<?php
/**
 * @file
 * wttoc_entityform_set_up.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wttoc_entityform_set_up_taxonomy_default_vocabularies() {
  return array(
    'advertiser_types' => array(
      'name' => 'Advertiser Types',
      'machine_name' => 'advertiser_types',
      'description' => 'Types of Advertiser',
      'hierarchy' => 0,
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
