/*
 * Match Height, Using Jquery
 */
(function ($, Drupal) {
  Drupal.behaviors.wttocMatchHeights = {
    attach: function (context) {
	//Initial Match Height
        $(".view-id-businesses_events.view-display-id-page_1 .view-content .views-row").matchHeight({
                byRow: true,
                property: 'min-height',
                target: null,
                remove: false
        });
	//Update on Ajax - use a timeout to play it safe
        $( document ).ajaxStop(function() {
		if( $(".view-id-businesses_events.view-display-id-page_1 .view-content .views-row").length ){
			var timeoutMatchHeightArray = [400];
			$.each(timeoutMatchHeightArray, function(index, value){
				var timeoutID = window.setTimeout(function(){
					$.fn.matchHeight._update();
					console.log("timeoutpassed");
				}, value);
			});
		}
        });
	$('.view-id-businesses_events.view-display-id-page_1 .view-content .views-row').on("load", function(){
		console.log("loaded");
	});
    }
  };
})(jQuery, Drupal);

