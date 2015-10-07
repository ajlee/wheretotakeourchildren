/*
 * Tab Blocks
 * 
 */
(function ($, Drupal) {
  Drupal.behaviors.wttocTabBlock = {
    attach: function (context) {
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
		// Go through all blocks
		for (i = 0; i < countBlocks; i++) {
			var ip1 = i + 1;
			var currentBlockSelector = blockSelector + ':eq(' + i + ')';
			var currentTitleBlock = parentOfBlocks.children(currentBlockSelector).children(blockTitleSelector);
			//Give the block an ID
			parentOfBlocks.children(currentBlockSelector).attr('id', 'tabBlock' + ip1);
			//Create a tab and give it a link to its block
			firstBlock.before('<div class="tabJS"> <a href="#tabBlock' + ip1 + '" title="Toggle to tab '+ ip1 + '">'+ currentTitleBlock.text() + '</a></div>');
			//Hide block titles
			parentOfBlocks.children(currentBlockSelector).children(blockTitleSelector).hide();
		}
		//Only Show First Tab Content Initially
		$(containerSelector + " " + blockSelector).not(containerSelector + " " + blockSelector + ':eq(0)').css("display", "none");
		$('.tabJS:eq(0) a').parent('.tabJS').addClass('active');
		//Hide/Show Tabs Accordingly On Click + Add/Remove active class
		$('.tabJS a').click(function (event) {
			event.preventDefault();
			var tabJSclickedLink = $(this).attr("href");
			$(containerSelector + " " + blockSelector).not(tabJSclickedLink).css("display", "none");
			$(tabJSclickedLink).fadeIn();
			$(this).parent('.tabJS').siblings('.tabJS').removeClass('active');
			$(this).parent('.tabJS').addClass('active');
		});
    }
  };

})(jQuery, Drupal);

