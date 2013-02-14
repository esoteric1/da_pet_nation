drupalacademy
=============

Drupal Academy


Profile Installation Instructions:
==================================

Prerequisites: 
-------------

1. You should have drush and git setup on your computer as well as some server software to host your site (MAMP, LAMP, WAMP)

2. You should have access to some sort of command line/shell so you can type in the commands necessary to get this up and running

Steps to Install:
----------------

1. You will navigating to your basic http directory and install the drupal core files. You can do this by executing the following drush command:

<pre>
drush dl drupal
</pre>

This will install the drupal core files into a folder called drupal-7.xx.  If you want to rename this folder you can run the command:

<pre>
mv drupal-7.xx mydrupal
</pre>

2. Next up we will want to add the profile for our site.  This will involve cloning the repository containing our files into the appropriate place. Navigate to the profiles directory and clone the git repository:

<pre>
../mydrupal/profiles>git clone url_to_repository
</pre>

This will create a folder with the machine name of your install profile in your profiles folder.  This will be the root directory where most of your work on the website will go.  Let's assume that the repository is called "pet_nation" for the remainder of this readme.

3. The next step will be to create the mysql database for the site if you haven't already.  You can do this using phpmyadmin or you can use the following commands.
<pre>
mysqladmin -u USER -pPASSWORD create DBNAME;
</pre>

There could be some issues if you haven't create a user for yourself in mysql with the appropriate privileges.  If that is the case, you can create a new user with mysql superpowers using the following command. (you will need to be logged into mysql using the root user)
<pre>
CREATE USER 'user'@'localhost' IDENTIFIED by 'password';
GRANT ALL PRIVILEGES ON *.* TO 'user'@'localhost' WITH GRANT OPTION;
</pre>

you probably won't need to do that though.


























