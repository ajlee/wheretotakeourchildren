(function ($, Drupal) {
    Drupal.behaviors.wttocEditorDashboard = {
        attach: function (context) {
            $(".ced-container__inner  >.ced-item  >.ced-item__inner >.ced-item__title").click(function(){
                $(this).siblings(".ced-item__children").toggle();
            })
        }//end of drupal attach
    };//end of drupal behavior
})(jQuery, Drupal);

