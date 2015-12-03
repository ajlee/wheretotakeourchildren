<?php

/**
 * @file
 * Provides integration with Feeds module (http://drupal.org/project/feeds).
 */

/**
 * Implements hook_feeds_processor_targets_alter().
 */
function socialfield_feeds_processor_targets_alter(&$targets, $entity_type, $bundle_name) {
    foreach (field_info_instances($entity_type, $bundle_name) as $name => $instance) {
        $info = field_info_field($name);

        if ($info['type'] == 'social_links_field') {
            $targets[$name] = array(
                'name' => check_plain($instance['label']),
                'callback' => 'socialfield_feeds_set_target',
                'description' => t('The @label field of the node. Separate each link with a semicolon.
                 Each link is then composed by a serviceKey and a link - separated by a comma.
                 E.g. twitter,http://twitter.com/username;facebook,http://facebook.com/username'),
            );
        }
    }
}

/**
 * Callback to set target value.
 */
function socialfield_feeds_set_target($source, $entity, $target, $values){
    $field_name = $target;
    //Each Social Link is delimited by a semicolon
    $socialLinks = explode(';', $values[0]);
    //Fetch the possible options for services
    $options = array_keys(variable_get('socialfield_services'));
    $options = array_combine($options, $options);
    //Loop over the Social Links
    foreach ($socialLinks as $delta => $socialLink) {
        $socialLinkArray = explode(',',$socialLink,2);
        $service = $socialLinkArray[0];
        $url = $socialLinkArray[1];
        //Subfield service must be one of the possible options
        if(in_array($service, $options)){
            $field['und'][$delta]['service'] = $service;
            $field['und'][$delta]['url'] = $url;
            $field['und'][$delta]['weight'] = $delta;
            //Each service is allowed only once
            $options = array_diff($options, array($service));
        }
    }
    $entity->$field_name = $field;
}
