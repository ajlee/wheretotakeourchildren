/**
* Select Elements, Using Jquery UI
*/
(function ($, Drupal) {
  Drupal.behaviors.wttocSelectElements = {
    attach: function (context) {
		$(".l-page select").SumoSelect({
		    placeholder: 'Select Options',
		    csvDispCount: 2,
		    captionFormat: '{0} Selected',
		    floatWidth: 400,
		    forceCustomRendering: false,
		    nativeOnDevice: ['Android', 'BlackBerry', 'iPhone', 'iPad', 'iPod', 'Opera Mini', 'IEMobile', 'Silk'],
		    outputAsCSV : false,
		    csvSepChar : ',', 
		    okCancelInMulti: false, 
		    triggerChangeCombined : true,
		    selectAll: false,
		    selectAlltext: 'Select All'
		});
		//these lines were using jquery ui
		//($(".l-page select").selectmenu()
		//.selectmenu("menuWidget")
		//.addClass("overflow");
    }
  };

})(jQuery, Drupal);

