/*
 * Behaviors for Business and Events Search Results Page (abbreviated in behaviors as Besr)
 */
(function ($, Drupal) {
	//Sync Inputs Between Filters & Sync Submit
	Drupal.behaviors.wttocBesrSyncInputs = {
		attach: function (context) {
			var sp = " ";
			var viewsPageSelector = '.view-id-businesses_and_events.view-display-id-page_results';
			var viewsBlockSelector = '.view-id-businesses_and_events.view-display-id-map_and_filters';
			var sFormSelector = 'form .views-exposed-form .views-exposed-widgets';
			var exposedSubmitSelector = 'input#edit-submit-businesses-and-events';
			var fieldSyncB2PArray = ['#edit-field-category','#edit-field-category-event','#edit-field-hidden-address-geofield-latlon','#edit-field-hidden-address-geofield-latlon-1'];
			//On Block Submit Click
			$(viewsBlockSelector + sp + sFormSelector + sp + exposedSubmitSelector).on("click",function(){
				//sync values to page
				$.each(fieldSyncB2PArray, function(index, fieldID){
					var blockValue = $(viewsBlockSelector + sp + sFormSelector + sp + fieldID).val();
					$(viewsPageSelector + sp + sFormSelector + sp + fieldID).val(blockValue);
				});
				//click page submit
				$(viewsPageSelector + sp + sFormSelector + sp + exposedSubmitSelector).click();
			});
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
	};
	//Sync Pager Clicks Between Filters
	Drupal.behaviors.wttocBesrSyncClicks = {
		attach: function (context) {
			var sp = " ";
			var viewsPageSelector = '.view-id-businesses_and_events.view-display-id-page_results';
			var viewsBlockSelector = '.view-id-businesses_and_events.view-display-id-map_and_filters';
			var pagerPrevSelector = '.pager-previous a';
			var pagerNextSelector = '.pager-next a'; 
			//Submit Search Block Pagers To Main Page
			$(viewsBlockSelector + sp + pagerNextSelector).click(function(){
			//        $(viewsPageSelector + sp + pagerNextSelector).click();
			});
			$(viewsBlockSelector + sp + pagerPrevSelector).click(function(){
			//        $(viewsPageSelector + sp + pagerPrevSelector).click();
			});
		}
	};
	//GeoCode Before Block Submission
	Drupal.behaviors.wttocBlockGeocode= {
		attach: function (context) {
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
					console.log("clicked");
					$(this).data("lastClicked", new Date());
					//get the address field value
					var address = $(viewsBlockFormSelector + sp +exposedAddressSelector).val();
					//geocode it
					geocodeAsync(address, function(ret){
						//remove the address field value
						$(viewsBlockFormSelector + sp + exposedAddressSelector).val("");
						if(ret !== "empty address"){
							//fill out the lat lon field with the geocoded data
							$(viewsBlockFormSelector + sp + exposedLatLongSelector).val(ret);
						}
						//click the actual button
						$(viewsBlockFormSelector + sp + exposedSubmitSelector).click();
					});
				}
				event.preventDefault;
				return false;
			});
			//Helper Functions For Geocoding Client Side
			geocodeAsync = function(address, f){
				//returns a string "empty address", "error", or "lat,lon 
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
	};
	//Prevents addresses from being sent throguh Ajax to Drupals geocoder
	Drupal.behaviors.wttocBesrBeforeSubmit = {
		attach: function (context) {
			Drupal.ajax.prototype.beforeSubmit = function (form_values, element, options) {	
				var formIdBlock = "views-exposed-form-businesses-and-events-map-and-filters";
				var formIdPage = "views-exposed-form-businesses-and-events-page-results";
				//Modify Search Page & Block Submission
				var elementIdAddress = "field_hidden_address_geofield_latlon";
				if(element["context"]["id"] == formIdPage || element["context"]["id"] == formIdBlock){
					var elementMatched = ithElement = 0;
					while(elementMatched==0 && ithElement<15){//stop searching after 15 fields
						if(form_values[ithElement]["name"] === elementIdAddress){
							elementMatched = true;
							//remove address value from search page submission
							form_values[ithElement]["value"] ="";
						}
						ithElement = ithElement + 1;
					}
				}
			}; 
		}
	};
})(jQuery, Drupal)
