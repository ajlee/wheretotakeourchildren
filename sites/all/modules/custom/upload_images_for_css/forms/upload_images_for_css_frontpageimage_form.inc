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
        '#description' => t('Select an image to upload - jpg, jpeg, png, gif. <br> 1. Use images at least twice as wide, as they are tall. <br> 2. If possible, the ideal size is 5000x700 px'),
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
        //file was being deleted after a while - the following lines are hackish behavior to patch this error
        //if this is to be patched the Drupal way, look at https://api.drupal.org/api/drupal/includes!file.inc/function/file_save_upload/7.x
        $fileName = $file->filename;
        $publicFolderSystemPath = file_stream_wrapper_get_instance_by_uri('public://')->realpath();
        if (!file_exists($publicFolderSystemPath.'/upload_images_for_css/unmanagedByDrupal')){
            mkdir($publicFolderSystemPath.'/upload_images_for_css/unmanagedByDrupal');
        }
        $unmanagedFilePath = file_unmanaged_copy($fpath, "public://upload_images_for_css/unmanagedByDrupal/".$fileName, FILE_EXISTS_RENAME);
        variable_set("upload_images_for_css_frontpageimage", $unmanagedFilePath);
        //end hackish patch
        //variable_set("upload_images_for_css_frontpageimage", $fpath);
        //file_save_upload('background_image');
    }
    if(isset($form_state['values']['reset_image']) && !empty($form_state['values']['reset_image'])) {
        variable_set("upload_images_for_css_frontpageimage", "");
    }

}
