/**
 * @file
 */
(function ($, Drupal, window, document, undefined) {

$(document).ready(function(){
	/**
	 *  bxSlider for Dog Photos at the bottom of Dog Profile page
	 */
	$('ul.photo-album').bxSlider({
		minSlides: 2,
		maxSlides: 20,
		moveSlides: 1,
		slideMargin: 20,
		slideWidth: 200,
		auto: true,
		pause: 5000
	});
	// Add a photo link on Dog Profile
	$('.field-name-add-a-photo a').prepend('Add a ').addClass('pn_button');

	// News Feed Styles
	$('ul.front-page h3.content-title a').prepend('View ').addClass('pn_button');

	// Sidebar
	$('ul.links li.node-readmore a').addClass('pn_button');
	// $('ul.upcoming-events .field-items').dotdotdot();
	$('aside.sidebars ul.upcoming-events li .field-name-body').dotdotdot();
	$('.view-upcoming-events .more-link a').addClass('pn_button');
});

})(jQuery, Drupal, this, this.document);