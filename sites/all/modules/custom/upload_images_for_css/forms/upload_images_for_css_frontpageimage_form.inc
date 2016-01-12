<?php

/**
 * Page form callbacks:
 *
 * @see upload_images_for_css_menu()
 */
function upload_images_for_css_frontpageimage_form($form, &$form_state){
    $form['background_image'] = array(
        '#type' => 'managed_file',
        '#title' => t('Choose a background image'),
        '#description' => t('Select an image to upload - jpg, jpeg, png, gif'),
        '#required' => FALSE,
        '#upload_validators' => array('file_validate_extensions' => array('jpeg jpg png gif')),
        '#upload_location' => 'public://upload_images_for_css/',
    );
    $form['reset_image'] = array(
        '#type' => 'checkbox',
        '#title' => t('Reset'),
        '#description' => t('Nevermind, reset to default image.'),
        '#required' => FALSE,
    );
    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit'),
    );
    return $form;
}
/**
 * Form submit callback:
 *
 * @see upload_images_for_css_frontpageimage_form()
 */
function upload_images_for_css_frontpageimage_form_submit($form, &$form_state){
    if(isset($form_state['values']['background_image']) && !empty($form_state['values']['background_image'])){
        $file = file_load($form_state['values']['background_image']);
        $fpath = $file->uri;
        variable_set("upload_images_for_css_frontpageimage", $fpath);
    }
    if(isset($form_state['values']['reset_image']) && !empty($form_state['values']['reset_image'])) {
        variable_set("upload_images_for_css_frontpageimage", "");
    }

}
