document.write('<style type="text/css">.l-widetop,.l-main > div, .l-main > aside{visibility:hidden;}.l-widetop{height:1px;}</style>');
document.write('<style type="text/css">.l-main{background:url("/sites/all/themes/wttoc/images/loadingNoFlash.gif");background-repeat: no-repeat;background-position: center 20px;background-size: 100px;opacity: .2;}</style>');
(function ($, Drupal) {
  Drupal.behaviors.wttocNoFlashJS = {
    attach: function (context) {
		$('.l-main').css('background','none').css('opacity','1');
		$('.l-widetop').css('height','initial').css('visibility','visible');
		$('.l-main > aside').css('visibility','visible');
		$('.l-main > div').css('visibility','visible');
    }//end of drupal attach
  };//end of drupal behavior
})(jQuery, Drupal);

