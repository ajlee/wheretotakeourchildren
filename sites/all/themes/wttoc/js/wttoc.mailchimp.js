(function ($, Drupal) {
    Drupal.behaviors.wttocMailchimp = {
        attach: function (context) {
            if( $('.mailchimp__popup__container').length){
                // open / close functions
                function mailchimp_popup_open() {
                    $('.mailchimp__popup__container').show();
                }
                function mailchimp_popup_close() {
                    $('.mailchimp__popup__container').hide();
                }
                function mailchimp_popup_dismiss() {
                    $.cookie("globalMailchimpPopup", "dismissed", {expires: 7, path: '/'});
                }

                // hide by default
                mailchimp_popup_close();

                // close when x is clicked
                // dismiss popup for a while
                var mailchimpCloseButton = $('.mailchimp__popup__container .mailchimp_close_popup');
                mailchimpCloseButton.click(function() {
                    mailchimp_popup_close();
                    mailchimp_popup_dismiss();
                });


                // open popup if it hasn't been dismissed
                if ( $.cookie("globalMailchimpPopup") !== "dismissed") {
                    setTimeout(function() {
                        mailchimp_popup_open();
                    }, 10000);
                }

                // if popup form is filled, close and dismiss future popups
                $('.mailchimp__popup__container form')[0].addEventListener("submit", function() {
                    mailchimp_popup_close();
                    mailchimp_popup_dismiss();
                });

            }
        }
    };
})(jQuery, Drupal);

