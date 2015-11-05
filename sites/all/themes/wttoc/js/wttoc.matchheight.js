/*
 * Match Height, Using Jquery
 */
(function ($, Drupal) {
  Drupal.behaviors.wttocMatchHeights = {
    attach: function (context) {
		var arrEqualHeight = [".view-id-small_blocks_businesses_and_or_events .view-content .views-row", ".view-id-businesses_and_events.view-display-id-page_results .view-content .views-row", ".view-id-small_blocks_blogs_news .view-content .views-row"]
		$.each(arrEqualHeight, function(key, element){
			//Initial Match Height
			$(element).matchHeight({
					byRow: true,
					property: 'min-height',
					target: null,
					remove: false
			});
		});
		$( document ).ajaxStop(function() {
			$.each(arrEqualHeight, function(key, element){
				//Update on Ajax - use a timeout to play it safe
				if( $(element).length ){
					var timeoutMatchHeightArray = [400];
					$.each(timeoutMatchHeightArray, function(index, value){
						var timeoutID = window.setTimeout(function(){
							$.fn.matchHeight._update();
						}, value);
					});
				}
			});
		});
	}
  };
})(jQuery, Drupal);

