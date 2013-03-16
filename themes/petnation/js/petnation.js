/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
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
});


})(jQuery, Drupal, this, this.document);
