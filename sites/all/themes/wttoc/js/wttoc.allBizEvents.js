/*
 * Behaviors for Business and Events Search Results Page (abbreviated in behaviors as Besr)
 */
(function ($, Drupal) {
	Drupal.behaviors.wttocPageStyles = {
		attach: function (context){
			if($('body.page-search-businesses-and-events').length){
				var searchResultsHeader = "<h1 class='searchResultsHeader'>Search Results</h1>";
				var iconGridHTML = "<div class='buttonGrid'><i class='demo-icon icon-th'></i></div>";
				var iconListHTML = "<div class='buttonList'><i class='demo-icon icon-th-list'></i></div>";
				var containerGridList = "<div class='containerGridList'>"+ iconGridHTML + iconListHTML + "</div>";
				var switchGridListHtml = "<div class='switchGL'>" + searchResultsHeader +  containerGridList + "</div>";
				var viewsPageSelector = '.view-id-businesses_and_events.view-display-id-page_results';
				$(viewsPageSelector).prepend(switchGridListHtml);
				globalGridOrList = $.cookie("globalGridOrList");
				switch(globalGridOrList){
					case "grid":
						$('.buttonGrid').addClass('activeGridList');
						$('.buttonList').removeClass('activeGridList');
						$(viewsPageSelector).removeClass('listingResults').addClass('gridResults');
						$( document ).trigger('ajaxStop');//see also matchheight.js
						$.cookie("globalGridOrList", "grid", {expires: 7, path: '/'});
						break;
					case "list":
						$('.buttonGrid').removeClass('activeGridList');
						$('.buttonList').addClass('activeGridList');
						$(viewsPageSelector).removeClass('gridResults').addClass('listingResults');
						$( document ).trigger('ajaxStop');//see also matchheight.js
						$.cookie("globalGridOrList", "list", {expires: 7, path: '/'});
						break;
					default:
						$('.buttonGrid').addClass('activeGridList');
						$('.buttonList').removeClass('activeGridList');
						$(viewsPageSelector).removeClass('listingResults').addClass('gridResults');
						$( document ).trigger('ajaxStop');//see also matchheight.js
						$.cookie("globalGridOrList", "grid", {expires: 7, path: '/'});
				}
				$('.buttonGrid').click(function(){
					$('.buttonGrid').addClass('activeGridList');
					$('.buttonList').removeClass('activeGridList');
					$(viewsPageSelector).removeClass('listingResults').addClass('gridResults');
					$( document ).trigger('ajaxStop');//see also matchheight.js
					$.cookie("globalGridOrList", "grid", {expires: 7, path: '/'});
				});
				$('.buttonList').click(function(){
					$('.buttonGrid').removeClass('activeGridList');
					$('.buttonList').addClass('activeGridList');
					$(viewsPageSelector).removeClass('gridResults').addClass('listingResults');
					$( document ).trigger('ajaxStop');//see also matchheight.js
					$.cookie("globalGridOrList", "list", {expires: 7, path: '/'});
				});

			}
		}
	}
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
								$.cookie("globalPreviousAddress", address, {expires: 7, path: '/'});
							}
							if(ret ==="empty address"){
								//fill out the lat lon field with the geocoded data
								$(viewsBlockFormSelector + sp + exposedLatLongSelector).val("");
								$.cookie("globalPreviousAddress", "", {expires: 7, path: '/'});
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
				$globalPreviousAddress =  $.cookie("globalPreviousAddress") === ""  ? "" : $.cookie("globalPreviousAddress");
				$(viewsBlockFormSelector + sp + exposedAddressSelector).val($globalPreviousAddress);
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
				'#edit-field-hidden-address-geofield-latlon-1','#edit-field-ages','input[name="field_start_datepicker[date]"]','input[name="field_end_datepicker[date]"]',
				'input[name="title"]', '#edit-sort-by'];
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
								$.cookie("globalPreviousAddress", address, {expires: 7, path: '/'});
							}
							if(ret ==="empty address"){
								//fill out the lat lon field with the geocoded data
								$(viewsExposedFormSelector + sp + exposedLatLongSelector).val("");
								$.cookie("globalPreviousAddress", "", {expires: 7, path: '/'});
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
				$globalPreviousAddress = ( $.cookie("globalPreviousAddress") == "" ) ? "" : $.cookie("globalPreviousAddress");
				$(viewsExposedFormSelector + sp + exposedAddressSelector).val($globalPreviousAddress);
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
					var sortByEventDate ='li[data-val="search_api_aggregation_1"]';
					var noSortOption ='li[data-val="changed"]';
					//Helper functions
					//Hide and unset either the business, or event select/inputs of a form (considering that we're using SumoSelect- see js/selectui.js).
					function hideResetSearch(typeToHideReset,formSelector){
						if(typeToHideReset === "business"){
							$.each(fieldsBusinessesWrappersArray, function(){
								$(formSelector + sp + this).hide();
							});
							$.each(fieldsBusinessesSelectsArray, function(){
								$(formSelector + sp + this).hide();
								$(formSelector + sp + this).val("");
								//if there is a corresponding SumoSelect, reload it
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
								//if there is a corresponding SumoSelect, reload it
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
					//Show either the business, or event select/inputs of a form (considering that we're using SumoSelect- see js/selectui.js).
					function showValuesSearch(typeToHideReset, formSelector){
						if(typeToHideReset === "business"){
							$.each(fieldsBusinessesWrappersArray, function(){
								$(formSelector + sp + this).show();
								sumoSelectResetHierarchy(this);
							});
							$.each(fieldsBusinessesInputsArray, function(){
								$(formSelector + sp + this).show();
							});
						}
						if(typeToHideReset === "event"){
							$.each(fieldsEventsWrappersArray, function(){
								$(formSelector + sp + this).show();
								sumoSelectResetHierarchy(this);
							});
							$.each(fieldEventsInputsArray, function(){
								$(formSelector + sp + this).show();
							});
						}
					}
					//The function that should execute, when the business/event value changes
					function businessOrEventChangeEvent(valueChangedTo, formSelector, isInitialLoad){
						var currentVal = valueChangedTo;
						//We can't join a null, so don't try that
						if(currentVal!=null){
							switch(currentVal.join(",")){
								//Business Content Type Selected
								case optionBusiness:
									hideResetSearch("event",formSelector);
									showValuesSearch("business",formSelector);
									//modify sort options
									$(formSelector + sp + sortByEventDate).hide();
									if($(formSelector + sp + sortByEventDate).hasClass('selected')){
										$(formSelector + sp + noSortOption).click();
									}
									break;
								//Event Content Type Selected
								case optionEvent:
									hideResetSearch("business",formSelector);
									showValuesSearch("event",formSelector);
									//modify sort options
									$(formSelector + sp + sortByEventDate).show();
									//on any further changes (not on the initial page load)
									//if the event type  was selected, switch the default sorting to event
									if(isInitialLoad === false) {
										$(formSelector + sp + sortByEventDate).click();
									}
									break;
								//Both Values Selected	
								default:
									hideResetSearch("event",formSelector);
									hideResetSearch("business",formSelector);
									//modify sort options
									$(formSelector + sp + sortByEventDate).hide();
									if($(formSelector + sp + sortByEventDate).hasClass('selected')){
										$(formSelector + sp + noSortOption).click();
									}
							}
						}
						//No Values Selected
						else{
							hideResetSearch("event",formSelector);
							hideResetSearch("business",formSelector);
							//modify sort options
							$(formSelector + sp + sortByEventDate).hide();
							if($(formSelector + sp + sortByEventDate).hasClass('selected')){
								$(formSelector + sp + noSortOption).click();
							}
						}
					}
					//use hierarchy (based on dashes) inside a particular sumoselect
					function sumoSelectResetHierarchy(wrapperSelector){ 
						var listElements = $(wrapperSelector + ' .SumoSelect ul li');
						//1) hide all children elements (not top level) initially, unless they're selected
						$.each(listElements, function(index, value){	
							var liStartingDashes = startingDashes($(value).text());
							//exception: very first children shouldn't be hidden
							if(liStartingDashes>0){
								//exception: selected elements shouldn't be hidden
								if( !($(value).hasClass("selected")) ){
									$(value).hide();
								}
								// and give elements an indent, depending on the hierarchy
								$(value).css("margin-left",(10 * liStartingDashes) + "px");
							};
						});
						//2 show all children of selected categories
						$.each(listElements, function(index, value){
							if($(value).hasClass("selected")){	
								var parentElementDashes = startingDashes($(value).text());
								var currentElement = $(value);
								//keep searching until we run into an element in the same level as the clicked element
								while( (parentElementDashes ) < startingDashes(currentElement.next().text()) ){
									//only show those that are direct children
									if( (parentElementDashes + 1) === startingDashes(currentElement.next().text()) ){
										currentElement.next().show();
									}
									currentElement = currentElement.next();
								}
							}
						});						
					
						//3) select(tick) and show all parent elements, of selected children
						$.each(listElements, function(index, value){
							//only execute this for selected elements
							if($(value).hasClass("selected")){	
								var childElementDashes = startingDashes($(value).text());
								//only execute this for child elements, not first level elements, since first level elements don't have parents
								if(childElementDashes !== 0){
									//find parents with levels between 0 and childElementDashes -1 
									for(i=childElementDashes-1; i>=0; i--){
										//if the previous element is a parent, select it (by clicking) and show it
										var currentElement = $(value);
										while(startingDashes(currentElement.text()) !== i 
											&& startingDashes(currentElement.text()) !== 0 
										){
											var tempI = i;
											if( startingDashes(currentElement.prev().text()) === i){
												currentElement.prev().show();
												if(!(currentElement.prev().hasClass("selected")) ){
													currentElement.prev().click();
												}	
											}
											currentElement = currentElement.prev();
											i = tempI;
										}
									}
								}
							}
						});
						$(wrapperSelector + ' .SumoSelect ul li').click(function(){
							//4) show direct children elements, when an item is selected
							if($(this).hasClass("selected")){
								var parentElementDashes = startingDashes($(this).text());
								var currentElement = $(this);
								//keep searching until we run into an element in the same level as the clicked element
								while( (parentElementDashes ) < startingDashes(currentElement.next().text()) ){
									//only show those that are direct children
									if( (parentElementDashes + 1) === startingDashes(currentElement.next().text()) ){
										currentElement.next().show();
									}
									currentElement = currentElement.next();
								}
							}
							//5) when an item is unselected
							// hide all its children elements and unselect those children (by clicking, if they're selected)
							else{
								var parentElementDashes = startingDashes($(this).text());
								var currentElement = $(this);
								while( parentElementDashes < startingDashes(currentElement.next().text()) ){
									currentElement.next().hide();
									if(currentElement.next().hasClass("selected")){
										currentElement.next().click();
									}
									currentElement = currentElement.next();
								}
							}
						});
					}
					//calculate the number of starting dashes in a string
					function startingDashes(string){
						var numberOfDashes = 0;
						var stringLength = string.length;
						var index = 0;
						var keepSearching = true;
						while(index<stringLength && keepSearching){
							if(string.slice(index,index+1) === '-'){
								numberOfDashes++;
							}
							else{
								keepSearching = false;
							}
							index++;
						}
						return numberOfDashes;   
					}	
					// end of helper functions	
					//On Change Of Business/Event Field
					if($('body.front').length){
						var currentVal = $(viewsExposedFormSelector + sp + contentTypeSelect).val();
						businessOrEventChangeEvent(currentVal, viewsExposedFormSelector, true);
						$(viewsExposedFormSelector + sp + contentTypeSelect).change(function(){
							var currentVal = $(this).val();
							businessOrEventChangeEvent(currentVal, viewsExposedFormSelector, false);
						});	
					}
					if($('body.page-search-businesses-and-events').length){
						var currentVal = $(viewsBlockSelector + sp + contentTypeSelect).val();
						businessOrEventChangeEvent(currentVal, viewsBlockSelector, true);
						$(viewsBlockSelector + sp + contentTypeSelect).change(function(){
							var currentVal = $(this).val();
							businessOrEventChangeEvent(currentVal, viewsBlockSelector, false);
						});	
					}				
				}//end of check for homepage or search page
		}//end of attach
	};//end of behavior
})(jQuery, Drupal)


