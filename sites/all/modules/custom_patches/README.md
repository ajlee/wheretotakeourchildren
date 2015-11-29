FILE: views__js__ajax_view.js.patch
PATH: sites/all/modules/custom/devversions/views/js/ajax_view.js
This patch was introduced because empty select filters from term reference, were using the argument from the URL.
E.g. 
1) Make a views search page at something/pagename
2) Filter content by content type with an exposed filter
3) Set the view to use ajax
4) Set the view to have an exposed form in block
5) Place the block at both something/pagename and at whatever/anotherpage
6) Access whatever/anotherpage and filter by content type in the exposed form
7) This will take you to somethng like something/pagename?type[]=basic_page
8) On this page, resubmit the form with an empty content type filter.
9) The bug will still show basic_page

This patch is not necessarily the perfect way to solve this, because there are some use cases it would break.
Luckily for us, we don't need any of those use cases in this website for now.
//See addition to this solution at themes/wttoc/js/wttoc.allBizEvents.js

FILE: telephone__telephone_info.patch
PATH: /sites/all/modules/telephone/telephone.feeds.inc
PATH: /sites/all/modules/telephone/telephone.info

Allows for feeds to work with the telephone field
