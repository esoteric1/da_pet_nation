# Pet Nation Theme Development

By Tina Holly

![Screenshot of Pet Nation theme under development](screenshot.png)

This is the theme-specific readme file. It contains information on how to work with the theme.

1. Install the Ruby command line tool Compass
2. Using Compass
3. Understanding SASS

## Installing Compass

Installing Compass on a Mac is easy. Mac comes with Ruby installed. To confirm that you have Ruby, type the following command:

```bash
which ruby
```

You should get `/usr/bin/ruby`. If you don't see anything then you don't have Ruby installed. Please use Google to learn how to install Ruby on your machine.

Next, run the command to update Ruby to make sure it's up to date. Then install Compass.

```bash
$ sudo gem update --system
$ sudo gem install compass
$ sudo gem install zen-grids
```

Note: `$` is a placeholder for your Terminal's prompt. You don't type it.
If you are installing Zen Grids while Compass is running you will need to restart Compass for the changes to come into effect.

## Using Compass to compile SCSS files into CSS files

In the Terminal, change to the theme directory. This is the directory with the `config.rb` file. 

The following command is assuming you are in the `da_pet_nation` profile.

```bash
cd themes/petnation
sudo compass watch
```

Compass needs sudo privileges to overwrite your files. I don't know why, just do it. :)

That's what you need to know to work with the files I will set up. For further reading on Compass [visit their website](http://compass-style.org/) (optional reading).

## Understanding SASS

Please read the following articles to learn about SASS (mandatory reading).

- Official documentation for SASS (see tutorial section but do not run any Terminal commands—Compass, if running, handles that): [sass-lang.com](http://sass-lang.com/)
- [David Walsh on Redesigning with SASS - CSS Tricks](http://css-tricks.com/redesigning-with-sass/)
- Wikipedia entry on SASS: http://en.wikipedia.org/wiki/Sass_(stylesheet_language)
- [SASS vs SCSS file extensions](http://thesassway.com/articles/sass-vs-scss-which-syntax-is-better) *We will be using SCSS!*
- [Screencast: Intro to Compass/SASS - CSS Tricks](http://css-tricks.com/video-screencasts/88-intro-to-compass-sass/)

### Example SASS (SCSS) code

#### Variable
```scss
$ptsans: 'pt sans caption', 'helvetica neue', tahoma, sans-serif;
```
##### Usage
```scss
font-family: $ptsans;
```
#### Mixin
```scss
@mixin font($fam,$weight,$size,$lh) {
    font-family: $fam;
    font-weight: $weight;
    font-size: $size;
    line-height: $lh;
}
```
##### Usage
```scss
.my_element {
    @include font($ptsans,700,1em,1em);
}
```
Notice a variable was thrown in there too. ;)

### Nesting
Nesting makes it contextually easier to work with CSS—CSS specificity displayed graphically!

```scss
p, ul, ol {
    margin-bottom: 0.6em;
    line-height: 1.4em;
    font-size: 0.9em;
}
ul, ol {
    ul, ol {
        margin-bottom: 0;
    }
}
```
The above code shows that all `p, ul, ol` have the aforementioned properties but that lists nested within lists (i.e. `ul ul` and `ol ol`) have their bottom margins removed. 

```scss
nav {
    a {
        color: darkturquoise;
    }
}
```

The above code makes all links in `nav` the colour `darkturquoise`.

### CSS Comments
Comments in SCSS can be done using `//`

In Sublime, you can highlight an entire block of code and press `cmd+/` to comment it out.

```scss
h1 {
    font-size: 1.5em;
    letter-spacing: -1px;
    &.page-title {
        // font-size: 1.6em;
        color: lighten($darkgrey,20%);
    }
}
```

Font-size for `h1.page-title` will not be declared. `&` denotes where you are **plus** the class. You can also use `&:hover {...}` to declare a hover state:

```scss
nav {
    a {
        color: darkturquoise;
        &:hover {
            text-decoration: underline;
        }
    }
}
```
Using the `&` is optional but keeps the code cleaner.

## Further Reading (Optional)

- [Controlling colours in SASS](http://robots.thoughtbot.com/post/12974565313/controlling-color-with-sass-color-functions)
