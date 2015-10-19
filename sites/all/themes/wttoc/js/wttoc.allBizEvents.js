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
							//remove the address field value
							$(viewsBlockFormSelector + sp + exposedAddressSelector).val("");
							if(ret !== "empty address" && ret !== "error"){
								//fill out the lat lon field with the geocoded data
								$(viewsBlockFormSelector + sp + exposedLatLongSelector).val(ret);
								$globalPreviousAddressSubmitted = address;
							}
							if(ret ==="empty address"){
								//fill out the lat lon field with the geocoded data
								$(viewsBlockFormSelector + sp + exposedLatLongSelector).val("");
								$globalPreviousAddressSubmitted = "";
							}
							//click the actual button
							$(viewsBlockFormSelector + sp + exposedSubmitSelector).click();
						});
					}
					event.preventDefault;
					return false;
				});
				//Preserve Address Field After Reloads
				$globalPreviousAddressSubmitted = typeof($globalPreviousAddressSubmitted)=="undefined" ? "" : $globalPreviousAddressSubmitted  ;
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
				var fieldSyncB2PArray = ['#edit-field-category','#edit-field-category-event','#edit-field-hidden-address-geofield-latlon','#edit-field-hidden-address-geofield-latlon-1'];
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
	// 1)Prevents addresses from being sent throguh Ajax to Drupals geocoder
	// 2) Fix a bug from views, that prevents entity reference fields from being sent if the URL defines them
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
									//remove address value from search page submission
									form_values[ithElement]["value"]="";
								}
								ithElement = ithElement + 1;
							}
						}
						//Fix bug with select elements in exposed filters
						options.url = "/views/ajax";
						console.log(form_values,element,options);
					};
				}
				//DONE ABOVE - watch during testing
				//DONE todo overwrite all select values in prototype.beforeSubmit to take values from the form
				//otherwise ajax behavior won't work when the url has arguments
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
							//remove the address field value
							$(viewsExposedFormSelector + sp + exposedAddressSelector).val("");
							if(ret !== "empty address" && ret !== "error"){
								//fill out the lat lon field with the geocoded data
								$(viewsExposedFormSelector + sp + exposedLatLongSelector).val(ret);
								$globalPreviousAddressSubmitted = address;
							}
							if(ret ==="empty address"){
								//fill out the lat lon field with the geocoded data
								$(viewsExposedFormSelector + sp + exposedLatLongSelector).val("");
								$globalPreviousAddressSubmitted = "";
							}
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
				$globalPreviousAddressSubmitted = typeof($globalPreviousAddressSubmitted)=="undefined" ? "" : $globalPreviousAddressSubmitted  ;
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
})(jQuery, Drupal)


