/*
 * Behaviors for Business and Events Search Results Page (abbreviated in behaviors as Besr)
 */
(function ($, Drupal) {
	//GeoCode Before Block Submission
	Drupal.behaviors.wttocBlockGeocode= {
		attach: function (context) {
			if($('body.page-search-businesses-and-events').length){
				//Selectors and Initialization Variables
				var sp = " ";
				var viewsPageSelector = '.view-id-businesses_and_events.view-display-id-page_results';
				var viewsBlockSelector = '.view-id-businesses_and_events.view-display-id-map_and_filters';
				var viewsPageFormSelector = 'form#views-exposed-form-businesses-and-events-page-results';
				var viewsBlockFormSelector = 'form#views-exposed-form-businesses-and-events-map-and-filters';
				var exposedSubmitSelector = 'input#edit-submit-businesses-and-events';
				var exposedAddressSelector = 'input#edit-field-hidden-address-geofield-latlon';
				var exposedLatLongSelector = 'input#edit-field-hidden-address-geofield-latlon-1';
				var fakeVal = $(viewsBlockFormSelector + sp + exposedSubmitSelector).val();
				var fakeClass = "bizEventsFakeBlockClass";
				var fakeBlockButtonHtml = '<div class="fakeButton '+fakeClass+'">'+fakeVal+'</div>';
				//Create Fake Button Before Actual Button & Hide Actual Button
				if(!($("."+fakeClass).length)){
					$(fakeBlockButtonHtml).insertBefore(viewsBlockFormSelector + sp + exposedSubmitSelector);
				}
				$(viewsBlockFormSelector + sp + exposedSubmitSelector).hide();
				//On Clicking The Fake Button
				$(viewsBlockFormSelector + sp + "."+ fakeClass).on("click",function(event){
					//make sure the button hasn't been clicked in the last 1000 ms
					//this prevents submitting geocode requests too often
					//this resets once a new view is returned with ajax
					var lastClicked = $(this).data("lastClicked") || 0;
	  				if (new Date() - lastClicked >= 1000) {
						$(this).data("lastClicked", new Date());
						//get the address field value
						var address = $(viewsBlockFormSelector + sp +exposedAddressSelector).val();
						//geocode it
						geocodeAsync(address, function(ret){
							if(ret !== "empty address" && ret !== "error"){
								//fill out the lat lon field with the geocoded data
								$(viewsBlockFormSelector + sp + exposedLatLongSelector).val(ret);
								$.cookie("globalPreviousAddressSubmitted", address, 7);
							}
							if(ret ==="empty address"){
								//fill out the lat lon field with the geocoded data
								$(viewsBlockFormSelector + sp + exposedLatLongSelector).val("");
								$.cookie("globalPreviousAddressSubmitted", null, 7);
							}
							//remove the address field value
							$(viewsBlockFormSelector + sp + exposedAddressSelector).attr("placeholder", address);
							$(viewsBlockFormSelector + sp + exposedAddressSelector).val("");
							//click the actual button
							$(viewsBlockFormSelector + sp + exposedSubmitSelector).click();
						});
					}
					event.preventDefault;
					return false;
				});
				//Preserve Address Field After Reloads
				$globalPreviousAddressSubmitted =  $.cookie("globalPreviousAddressSubmitted") === null  ? "" : $.cookie("globalPreviousAddressSubmitted");
				$(viewsBlockFormSelector + sp + exposedAddressSelector).val($globalPreviousAddressSubmitted);
				//Helper Functions For Geocoding Client Side
				geocodeAsync = function(address, f){
					//returns a string "empty address", "error", or "lat,lon" (where lat lon are coordinates) 
					//introduce delay to geocoding such that requests aren't sent too often
					setTimeout(function(){
						if(!(address.length)){
							f("empty address");
							return -1;
						}
						var geocoder = new google.maps.Geocoder();
						geocoder.geocode({'address': address, region: 'UK'}, function (results, status) {
							if (status == google.maps.GeocoderStatus.OK) {
								var location = results[0].geometry.location;
								var latlonFromGoogle =  location.lat() + "," + location.lng();
								f(latlonFromGoogle);
							} else {
								f("error");
							}
							return -1;
						});
					},150);
				}
			}
		}//end of attach
	};//end of behavior
	//Sync Inputs For Filters From Block To Page
	//Sync Submit From  Block To Page
	Drupal.behaviors.wttocBesrSyncInputs = {
		attach: function (context) {
			if($('body.page-search-businesses-and-events').length){
				var sp = " ";
				//var viewsPageSelector = '.view-id-businesses_and_events.view-display-id-page_results';
				var viewsExposedFormSelector = 'form#views-exposed-form-businesses-and-events-page-results';
				var viewsBlockSelector = '.view-id-businesses_and_events.view-display-id-map_and_filters';
				var sFormSelector = 'form .views-exposed-form .views-exposed-widgets';
				var exposedSubmitSelector = 'input#edit-submit-businesses-and-events';
				var fieldSyncB2PArray = ['#edit-type', '#edit-field-category','#edit-field-category-event','#edit-field-hidden-address-geofield-latlon',
				'#edit-field-hidden-address-geofield-latlon-1','input[name="field_start_datepicker[date]"]','input[name="field_end_datepicker[date]"]'];
				//On Block Submit Click
				$(viewsBlockSelector + sp + sFormSelector + sp + exposedSubmitSelector).on("click",function(){
					//sync values to page
					$.each(fieldSyncB2PArray, function(index, fieldID){
						var blockValue = $(viewsBlockSelector + sp + sFormSelector + sp + fieldID).val();
						$(viewsExposedFormSelector + sp + fieldID).val(blockValue);
					});
					//click page submit
					$(viewsExposedFormSelector + sp + exposedSubmitSelector).click();
				});
				//handle enter key submission
				var fieldsEnterSubmitArray = ['#edit-field-hidden-address-geofield-latlon'];
				var fakeButtonSelector = ".bizEventsFakeBlockClass";
				$.each(fieldsEnterSubmitArray, function(index, fieldEnterID){
					$(viewsBlockSelector + sp + sFormSelector + sp + fieldEnterID).keypress(function (event) {
						var key = event.which;
						if(key == 13){
							event.preventDefault();
							$(viewsBlockSelector + sp + sFormSelector + sp + fakeButtonSelector).click();
						}
					});
				});
			}
		}//end of attach
	};//end of behavior
	//Sync Pager Clicks Between Filters
	Drupal.behaviors.wttocBesrSyncClicks = {
		attach: function (context) {
			if($('body.page-search-businesses-and-events').length){
				var sp = " ";
				var viewsPageSelector = '.view-id-businesses_and_events.view-display-id-page_results';
				var viewsBlockSelector = '.view-id-businesses_and_events.view-display-id-map_and_filters';
				var pagerLinksSelectorArray = ['.pager-previous a', '.pager-next a']
				//Submit Search Block Pagers To Main Page
				$.each(pagerLinksSelectorArray, function(index, pagerCurrentSelector){
					$(viewsBlockSelector + sp + pagerCurrentSelector).one("click",function(event){
						$(viewsPageSelector + sp + pagerCurrentSelector).click();
					});
				});
				//Submit Search Page Pagers To Main Page
				$.each(pagerLinksSelectorArray, function(index, pagerCurrentSelector){
					$(viewsPageSelector + sp + pagerCurrentSelector).one("click",function(event){
						$(viewsBlockSelector + sp + pagerCurrentSelector).click();
					});
				});
			}
		}//end of attach
	};//end of behavior
	// 1)Prevents addresses from being sent through Ajax to Drupals geocoder
	// 2) Fix a bug from views, that prevents select fields from being sent if the URL defines them
	Drupal.behaviors.wttocBesrBeforeSubmit = {
		attach: function (context) {
			if($('form#views-exposed-form-businesses-and-events-page-results').length){
				if(typeof(Drupal)!="undefined" && typeof(Drupal.ajax)!="undefined" && typeof(Drupal.ajax.prototype)!="undefined" && typeof(Drupal.ajax.prototype.beforeSubmit)!="undefined"){
					Drupal.ajax.prototype.beforeSubmit = function (form_values, element, options) {
						var formIdBlock = "views-exposed-form-businesses-and-events-map-and-filters";
						var formIdPage = "views-exposed-form-businesses-and-events-page-results";
						//Modify Search Page & Block Submission
						if(element["context"]["id"] == formIdPage || element["context"]["id"] == formIdBlock){
							var elementIdAddress = "field_hidden_address_geofield_latlon";
							var elementMatched = ithElement = 0;
							//stop searching when the element is matched, or when the search extends past 25 elements
							while(elementMatched==0 && ithElement<25){
								if(form_values[ithElement]["name"] === elementIdAddress){
									elementMatched = true;
									//remove address value from search page & exposed form submission
									form_values[ithElement]["value"]="";
								}
								ithElement = ithElement + 1;
							}
						}
						//Fix bug with select elements in exposed filters
						options.url = "/views/ajax";
					};
				}
				//DONE ABOVE - watch during testing
				//DONE fix bug from ajax behavior: won't work when the url has arguments
				//works with custom patch to views/ajax/ajax_view.js
			}
		}//end of attach
	};//end of behavior
/*
 * Behaviors for Business and Events Search Results Exposed Form Block
 * This Exposed Form Block, appears on other pages, not on the search results page
 */	
	//GeoCode Before Exposed Form Block Submission
	Drupal.behaviors.wttocBesrExposedFormBlock= {
		attach: function (context) {
			if( !($('body.page-search-businesses-and-events').length) && $('form#views-exposed-form-businesses-and-events-page-results').length){
				//Selectors and Initialization Variables
				var sp = " ";
				var viewsExposedFormSelector = 'form#views-exposed-form-businesses-and-events-page-results';
				var exposedSubmitSelector = 'input#edit-submit-businesses-and-events';
				var exposedAddressSelector = 'input#edit-field-hidden-address-geofield-latlon';
				var exposedLatLongSelector = 'input#edit-field-hidden-address-geofield-latlon-1';
				var fakeVal = $(viewsExposedFormSelector + sp + exposedSubmitSelector).val();
				var fakeClass = "bizEventsExposedFormFake";
				var fakeBlockButtonHtml = '<div class="fakeButton '+fakeClass+'">'+fakeVal+'</div>';
				//Create Fake Button Before Actual Button & Hide Actual Button
				if(!($("."+fakeClass).length)){
					$(fakeBlockButtonHtml).insertBefore(viewsExposedFormSelector + sp + exposedSubmitSelector);
				}
				$(viewsExposedFormSelector + sp + exposedSubmitSelector).hide();
				//On Clicking The Fake Button
				$(viewsExposedFormSelector + sp + "."+ fakeClass).on("click",function(event){
					//make sure the button hasn't been clicked in the last 1000 ms
					//this prevents submitting geocode requests too often
					//this resets once a new view is returned with ajax
					var lastClicked = $(this).data("lastClicked") || 0;
	  				if (new Date() - lastClicked >= 1000) {
						$(this).data("lastClicked", new Date());
						//get the address field value
						var address = $(viewsExposedFormSelector + sp + exposedAddressSelector).val();
						//geocode it
						geocodeAsync(address, function(ret){
							if(ret !== "empty address" && ret !== "error"){
								//fill out the lat lon field with the geocoded data
								$(viewsExposedFormSelector + sp + exposedLatLongSelector).val(ret);
								$.cookie("globalPreviousAddressSubmitted", address, 7);
							}
							if(ret ==="empty address"){
								//fill out the lat lon field with the geocoded data
								$(viewsExposedFormSelector + sp + exposedLatLongSelector).val("");
								$.cookie("globalPreviousAddressSubmitted", null, 7);
							}
							//remove the address field value
							$(viewsExposedFormSelector + sp + exposedAddressSelector).attr("placeholder", address);
							$(viewsExposedFormSelector + sp + exposedAddressSelector).val("");
							//click the actual button
							$(viewsExposedFormSelector + sp + exposedSubmitSelector).click();
						});
					}
					event.preventDefault;
					return false;
				});
				//handle enter key submission
				var fieldsEnterSubmitArray = ['#edit-field-hidden-address-geofield-latlon'];
				$.each(fieldsEnterSubmitArray, function(index, fieldEnterID){
					$(viewsExposedFormSelector + sp + fieldEnterID).keypress(function (event) {
						var key = event.which;
						if(key == 13){
							event.preventDefault();
							$(viewsExposedFormSelector + sp + "." + fakeClass).click();
						}
					});
				});
				//Preserve Address Field After Reloads
				$globalPreviousAddressSubmitted = ( $.cookie("globalPreviousAddressSubmitted") == null ) ? "" : $.cookie("globalPreviousAddressSubmitted");
				$(viewsExposedFormSelector + sp + exposedAddressSelector).val($globalPreviousAddressSubmitted);
				//Helper Functions For Geocoding Client Side
				geocodeAsync = function(address, f){
					//returns a string "empty address", "error", or "lat,lon" (where lat lon are coordinates) 
					//introduce delay to geocoding such that requests aren't sent too often
					setTimeout(function(){
						if(!(address.length)){
							f("empty address");
							return -1;
						}
						var geocoder = new google.maps.Geocoder();
						geocoder.geocode({'address': address, region: 'UK'}, function (results, status) {
							if (status == google.maps.GeocoderStatus.OK) {
								var location = results[0].geometry.location;
								var latlonFromGoogle =  location.lat() + "," + location.lng();
								f(latlonFromGoogle);
							} else {
								f("error");
							}
							return -1;
						});
					},150);
				}
			}
		}//end of attach
	};//end of behavior
	// If Content Type Business Is Selected, Reset All Event Filters' Values and Display Business Filters
	// If Content Type Events Is Selected, Reset All Business Filters' Values and Display Event Filters
	// If Both Content Types Are Selected, Display Both Filters 
	// If No Content Type Is Selected, Reset All Values and Hide Both Filters
	Drupal.behaviors.wttocContentTypeDisplay = {
		attach: function (context) {
				if($('body.front').length || $('body.page-search-businesses-and-events').length){
					var sp = ' ';
					var viewsExposedFormSelector = 'form#views-exposed-form-businesses-and-events-page-results';
					var viewsBlockSelector = '.view-id-businesses_and_events.view-display-id-map_and_filters';
					var contentTypeSelect = '#edit-type';
					var optionBusiness = 'business_service_or_attraction';
					var optionEvent =  'event';
					var fieldsBusinessesWrappersArray = ['#edit-field-category-wrapper'];
					var fieldsBusinessesSelectsArray = ['select[name="field_category[]"]'];//separate these because of SumoSelect - see js/selectui.js
					var fieldsBusinessesInputsArray = [];
					var fieldsEventsWrappersArray = ['#edit-field-category-event-wrapper','#edit-field-start-datepicker-wrapper','#edit-field-end-datepicker-wrapper'];
					var fieldsEventsSelectsArray = ['select[name="field_category_event[]"]'];//separate these because of SumoSelect - see js/selectui.js
					var fieldEventsInputsArray = ['input[name="field_start_datepicker[date]"]','input[name="field_end_datepicker[date]"]'];
					//Helper functions
					function hideResetSearch(typeToHideReset,formSelector){
						if(typeToHideReset === "business"){
							$.each(fieldsBusinessesWrappersArray, function(){
								$(formSelector + sp + this).hide();
							});
							$.each(fieldsBusinessesSelectsArray, function(){
								$(formSelector + sp + this).hide();
								$(formSelector + sp + this).val("");
								//if there is a corresponding SumoSelect, reload it - see js/selectui.js
								if($(formSelector + sp + this)[0] && $(formSelector + sp + this)[0].sumo){
									$(formSelector + sp + this)[0].sumo.reload();
								}
							});
							$.each(fieldsBusinessesInputsArray, function(){
								$(formSelector + sp + this).hide();
								$(formSelector + sp + this).val("");
							});
						}
						if(typeToHideReset === "event"){
							$.each(fieldsEventsWrappersArray, function(){
								$(formSelector + sp + this).hide();
							});
							$.each(fieldsEventsSelectsArray, function(){
								$(formSelector + sp + this).hide();
								$(formSelector + sp + this).val("");
								//if there is a corresponding SumoSelect, reload it- see js/selectui.js
								if($(formSelector + sp + this)[0] && $(formSelector + sp + this)[0].sumo){
									$(formSelector + sp + this)[0].sumo.reload();
								}

							});
							$.each(fieldEventsInputsArray, function(){
								$(formSelector + sp + this).hide();
								$(formSelector + sp + this).val("");
							});
						}
					}		
					function showValuesSearch(typeToHideReset, formSelector){
						if(typeToHideReset === "business"){
							$.each(fieldsBusinessesWrappersArray, function(){
								$(formSelector + sp + this).show();
							});
							$.each(fieldsBusinessesInputsArray, function(){
								$(formSelector + sp + this).show();
							});
						}
						if(typeToHideReset === "event"){
							$.each(fieldsEventsWrappersArray, function(){
								$(formSelector + sp + this).show();
							});
							$.each(fieldEventsInputsArray, function(){
								$(formSelector + sp + this).show();
							});
						}
					}
					function businessOrEventChangeEvent(valueChangedTo, formSelector){			
						var currentVal = valueChangedTo;
						//We can't join a null, so don't try that
						if(currentVal!=null){
							switch(currentVal.join(",")){
								//Business Content Type Selected
								case optionBusiness:
									hideResetSearch("event",formSelector);
									showValuesSearch("business",formSelector);
									break;
								//Event Content Type Selected
								case optionEvent:
									hideResetSearch("business",formSelector);
									showValuesSearch("event",formSelector);
									break;
								//Both Values Selected	
								default:
									hideResetSearch("event",formSelector);
									hideResetSearch("business",formSelector);
							}
						}
						//No Values Selected
						else{
							hideResetSearch("event",formSelector);
							hideResetSearch("business",formSelector);
						}
					}// end of helper functions	
					//On Change Of Business/Event Field
					if($('body.front').length){
						var currentVal = $(viewsExposedFormSelector + sp + contentTypeSelect).val();
						businessOrEventChangeEvent(currentVal, viewsExposedFormSelector);
						$(viewsExposedFormSelector + sp + contentTypeSelect).change(function(){
							var currentVal = $(this).val();
							businessOrEventChangeEvent(currentVal, viewsExposedFormSelector);
						});	
					}
					if($('body.page-search-businesses-and-events').length){
						var currentVal = $(viewsBlockSelector + sp + contentTypeSelect).val();
						businessOrEventChangeEvent(currentVal, viewsBlockSelector);
						$(viewsBlockSelector + sp + contentTypeSelect).change(function(){
							var currentVal = $(this).val();
							businessOrEventChangeEvent(currentVal, viewsBlockSelector);
						});	
					}			
				}//end of check for homepage or search page
			}//end of attach
	};//end of behavior
})(jQuery, Drupal)


