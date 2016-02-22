(function ($, Drupal) {
    /*****************************
     ** Helper Functions & Such **
     *****************************/
        // scroll viewto selector
        // example: $('#some-div').scrollView();
    $.fn.scrollView = function () {
        return this.each(function () {
            $('html, body').animate({
                scrollTop: $(this).offset().top
            }, 50);
        });
    };
  /**
   * Toggle show/hide links for off canvas layout.
   */
  Drupal.behaviors.omegaOffCanvasLayout = {
    attach: function (context) {
      $('#off-canvas').click(function(e) {
        if (!$(this).hasClass('is-visible')) {
          $(this).addClass('is-visible');
          //Uncommenting this line means links inside #off-canvas don't have to be double clicked
          //Uncommenting this line also means that after opening the off canvas region,
          ////clicking on a link, outside of the off canvas region will close the off
          ////canvas region and take you to the link.
          //drupal.org/node/2153175#comment-8307933
          //e.preventDefault();
          e.stopPropagation();
        }
      });

      $('#off-canvas-hide').click(function(e) {
        $(this).parent().removeClass('is-visible');
        e.preventDefault();
        e.stopPropagation();
      });

      $('.l-page').click(function(e) {
        if($('#off-canvas').hasClass('is-visible') && $(e.target).closest('#off-canvas').length === 0) {
          $('#off-canvas').removeClass('is-visible');
          e.stopPropagation();
        }
      });
    }
  };

})(jQuery, Drupal);

/*
 * Slider with Unslider
 */
(function ($, Drupal) {
  Drupal.behaviors.wttocSliderUnslider = {
    attach: function (context) {
	$('.view-image-slider .views-field-field-image-gallery .field-content').unslider({
		speed: 500,
		delay: 3000,
		complete: function(){
		},
		keys: true,
		dots: true,
		fluid: true
		});
	//images haven't been loaded yet. so the height will be set to zero by the slider. undo this
	$('.view-image-slider .views-field-field-image-gallery .field-content').height('auto');
    }
  };

})(jQuery, Drupal);

/*
 * Move to Message Area on Homepage (since it's way under the fold)
 */
(function ($, Drupal) {
  Drupal.behaviors.wttocScrollMessageHomepage = {
    attach: function (context) {
        if(
            (typeof($('body.front'))!= "undefined") &&
            (typeof($('.messages--status'))!= "undefined")
        ){
            $('.messages--status').scrollView();
        }
    }
  };

})(jQuery, Drupal);
