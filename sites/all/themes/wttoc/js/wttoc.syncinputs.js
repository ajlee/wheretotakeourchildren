/*
 * Sync Inputs With Jquery 
 */
(function ($, Drupal) {
  Drupal.behaviors.wttocSyncInputs = {
    attach: function (context) {
	//Search Block Field To Main Page Sync
	$("#views-exposed-form-businesses-events-block-2 input#edit-title").keyup(function(){
		$("#views-exposed-form-businesses-events-page-1 input#edit-title").val($(this).val());
	});
	//Search Block Submit To Main Page Click Submit
        $("#views-exposed-form-businesses-events-block-2 input#edit-submit-businesses-events").click(function(){
                $("#views-exposed-form-businesses-events-page-1 input#edit-submit-businesses-events").click();
        });
	//Main Page Pager To Search Block Submit
	$(".view-id-businesses_events.view-display-id-page_1 .pager-next a").click(function(){
		$("#block-views-businesses-events-block-2 .pager-next a").click();
	});
        $(".view-id-businesses_events.view-display-id-page_1 .pager-previous a").click(function(){
                $("#block-views-businesses-events-block-2 .pager-previous a").click();
        });
    }
  };

})(jQuery, Drupal)


