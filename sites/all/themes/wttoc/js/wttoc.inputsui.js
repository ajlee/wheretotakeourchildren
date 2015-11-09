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
				//SumoSelect to make it look nice - using the placeholder text as a placeholder	
				$(this).SumoSelect({
				    placeholder: placeHolderText,
				    csvDispCount: 2,
				    captionFormat: '{0} Selected',
				    floatWidth: 400,
				    forceCustomRendering: false,
				    //nativeOnDevice: ['Android', 'BlackBerry', 'iPhone', 'iPad', 'iPod', 'Opera Mini', 'IEMobile', 'Silk'],
				    nativeOnDevice: [],
				    outputAsCSV : false,
				    csvSepChar : ',', 
				    okCancelInMulti: false, 
				    triggerChangeCombined : true,
				    selectAll: false,
				    selectAlltext: 'Select All'
				});
		});
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
					//***in some older browsers (older ie) this technique adds a text instead of a placeholder to the input
					//*** this text then shows up when we use jquery's .val("") to set the input's value to null
					//*** when jquery uses .val("") to set the inputs value to null
					//*** hence, we skip those fields here
					if(attrId != "edit-field-hidden-address-geofield-latlon" && attrId != "edit-field-hidden-address-geofield-latlon-1"){
						$(this).placeholder();
					}
				}
		});
    }
  };//end of behavior
  
  		
})(jQuery, Drupal);

