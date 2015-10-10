/**
* Readmore, using jQuery greater than 1.9.1
*/
(function ($, Drupal) {
  Drupal.behaviors.wttocReadMore = {
    attach: function (context) {
	$('.view-business-display .wttocFieldEnclose').readmore({
		speed: 500, //in ms
		collapsedHeight: 100, //in px
		moreLink: '<a href="#" title="Read More">Read more</a>',
		lessLink: '<a href="#" title="Read Less">Read less</a>',
	});
    }
  };

})(jQuery, Drupal)
