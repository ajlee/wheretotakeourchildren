/**
 * Select Elements, Using Jquery UI
 */
(function ($, Drupal) {
  Drupal.behaviors.wttocSelectElements = {
    attach: function (context) {
		var selectElemsArray = $('.l-page select');
		$.each(selectElemsArray, function(){
				//get the value of the placeholder text, from the corresponding label
				var attrId = $(this).attr('id');
				var findAttrLabel = $('label[for="' + attrId + '"]');
				if(typeof(findAttrLabel) != "undefined"){
					var placeHolderText = findAttrLabel.first().text();
					//hide the label, if there was a placeholder text
					findAttrLabel.hide();
				}
				else{
					var placeHolderText = "Select"
				}	
				$(this).SumoSelect({
				    placeholder: placeHolderText,
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
		});
		//these lines were using jquery ui
		//($(".l-page select").selectmenu()
		//.selectmenu("menuWidget")
		//.addClass("overflow");
    }
  };//end of behavior
  Drupal.behaviors.wttocPlaceHoldersUI = {
    attach: function (context) {
		var inputTextElemsArray = $('.l-page input[type="text"]');
		$.each(inputTextElemsArray, function(){
				//get the value of the placeholder text, from the corresponding label
				var attrId = $(this).attr('id');
				var findAttrLabel = $('label[for="' + attrId + '"]');
				if(typeof(findAttrLabel) != "undefined"){
					var placeHolderText = findAttrLabel.first().text();
					//special placeholder in some cases
					if ($(this).attr('name')=='field_start_datepicker[date]'){
						placeHolderText = "Events From";
						$('label[for="edit-field-start-datepicker"').hide();
					}
					if ($(this).attr('name')=='field_end_datepicker[date]'){
						placeHolderText = "Events Until";
						$('label[for="edit-field-end-datepicker"').hide();
					}
					//hide the label, if there was a placeholder text
					findAttrLabel.hide();
					//remove multiple spaces from the placeholder text
					placeHolderText=placeHolderText.replace(/ +(?= )/g,'');
					$(this).attr("placeholder",placeHolderText);
					//older browser placeholder compatibility
					$(this).placeholder();
				}
		});
    }
  };//end of behavior
  		
})(jQuery, Drupal);

