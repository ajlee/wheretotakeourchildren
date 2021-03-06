/*
 * Tab Blocks
 * 
 */

(function ($, Drupal) {
  Drupal.behaviors.wttocTabBlock = {
    attach: function (context) {
	if( $('body.node-type-business-service-or-attraction').length || $('body.node-type-event').length){
		//Container Selector: The block container, to contain block selectors. 
		//Block Selector: These blocks will have their title converted  
		//Block Title Selector: Each block title will have its text converted into a tab link
		var containerSelector = '.mcc--inner';
		var blockSelector = '.block';
		var blockTitleSelector = ".block__title";
		//The tab links will be placed right before the first block, that fit the block selector
		//Container Selector must be directly above block selector.
		//Block Selector must be directly above block title selector.
		//Initialize some values
		var countBlocks = $(containerSelector + " " + blockSelector).size();
		var parentOfBlocks = $(containerSelector + " " + blockSelector).parent();
		var firstBlock = parentOfBlocks.children(blockSelector + ':eq(0)');
		//we need to make sure this is not executed on ajax requests.
		//the colorbox module loads images through ajax, so tabs keep being added
		//this is the simplest solution since we don't load complete nodes through ajax
		if(typeof(tabBlocksJSExecuted)==="undefined"){
			// Go through all blocks
			for (i = 0; i < countBlocks; i++) {
				var ip1 = i + 1;
				var currentBlockSelector = blockSelector + ':eq(' + i + ')';
				var currentTitleBlock = parentOfBlocks.children(currentBlockSelector).find(blockTitleSelector);
				//Give the block an ID
				parentOfBlocks.children(currentBlockSelector).attr('id', 'tabBlock' + ip1).addClass('tabBlockJSBlock');
				//Create a tab and give it a link to its block id along with some classes
				var doesBlockHaveContent = parentOfBlocks.children(currentBlockSelector).find(".view-content .views-row-1 > div");
				if(doesBlockHaveContent.length > 0){
					var classList = parentOfBlocks.children(currentBlockSelector).attr('class').split(/\s+/);
					classesToPutInTabString = "tabJS";
					$.each(classList, function (index, item) {
						var classToAdd = "tabJS_" + item;
						classesToPutInTabString = classesToPutInTabString + " " + classToAdd;
					});
					firstBlock.before('<div class="' + classesToPutInTabString + '"> <a href="#tabBlock' + ip1 + '" title="Toggle to tab ' + ip1 + '">' + currentTitleBlock.text() + '</a></div>');
				}
				//Hide block titles
				parentOfBlocks.children(currentBlockSelector).find(blockTitleSelector).hide();
			}
			tabBlocksJSExecuted = true;
		}
		//Only Show First Tab Content Initially 
		//Hide/Show Using Height:0 and visibility hidden
		//Such that other jquery plugins can still calculate heights inside hidden Tabs e.g. using .outerHeight()
		$(containerSelector + " " + blockSelector).not(containerSelector + " " + blockSelector + ':eq(0)').css("visibility","hidden").css("height","0");
		$('.tabJS:eq(0) a').parent('.tabJS').addClass('active');
		$(containerSelector + " " + blockSelector).not(containerSelector + " " + blockSelector + ':eq(0)').hide();
		//Hide/Show Tabs Accordingly On Click + Add/Remove active class
		$('.tabJS a').click(function (event) {
			event.preventDefault();
			var tabJSclickedLink = $(this).attr("href");
			$(containerSelector + " " + blockSelector).not(tabJSclickedLink).css("visibility","hidden").css("height","0").hide();
			$(tabJSclickedLink).css("visibility","visible").css("height","").show();
			$(this).parent('.tabJS').siblings('.tabJS').removeClass('active');
			$(this).parent('.tabJS').addClass('active');

			//recalculate readmoreJS (see wttoc.readmore.js)
			$('.view-business-display .wttocFieldEnclose').readmore({
				speed: 500, //in ms
				collapsedHeight: 300, //in px
				moreLink: '<a href="#" title="Read More">Read more</a>',
				lessLink: '<a href="#" title="Read Less">Read less</a>',
			});
			$('.view-events-display .wttocFieldEnclose').readmore({
				speed: 500, //in ms
				collapsedHeight: 300, //in px
				moreLink: '<a href="#" title="Read More">Read more</a>',
				lessLink: '<a href="#" title="Read Less">Read less</a>',
			});

		});
	}
    }
  };

})(jQuery, Drupal);

