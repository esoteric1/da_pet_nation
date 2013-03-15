![](petnation-banner.jpg)
Drupal Academy / Fellowship Install Profile
==========================================

- - -
Table of Contents
=================
 [Profile Installation Instructions](#profile-installation-instructions)

 [Running MySQL from the command line on a Mac](#running-mysql-from-the-command-line-on-a-mac)

 [Steps to Install Drupal using an Install Profile](#steps-to-install-drupal-using-an-install-profile)

 [Troubleshooting](#troubleshooting)

 [Extra Information](#extra-information)

 [Git Workflow](#git-workflow)

 [Features](#features)

 [Adding a Module to your install profile](#adding-the-feature-to-a-local-branch-in-your-git-repo)

 [Modifying an existing Feature](#modifying-an-existing-feature)

[Theme Development](#theme-development)

 Link to [readme_theme.md](themes/petnation/readme_theme.md)

[GeoLocation in Dog Profile](#geolocation-in-dog-profile)

- - -
<a id="profile-installation-instructions"></a>
Profile Installation Instructions:
==================================

Prerequisites: 
-------------

1. You should have drush and git setup on your computer as well as some server software to host your site (MAMP, LAMP, WAMP)

2. You should have access to some sort of command line/shell so you can type in the commands necessary to get this up and running


Troubleshooting for Mac
-----------------------
This section is thanks to Tina Holly.

Installing Git
---
Installing Git

Download the package off of the main Git website: http://git-scm.com/book/en/Getting-Started-Installing-Git

The Github app gives you the option to install the command line tool from the Application menu but this does not work and it is best to install it off the site.
Error: command not found

If you are getting "command not found" error, you may have to add an alias for git to your current bash profile. Follow these steps:
Go to your home directory to find your current bash profile.

<pre>
cd ~
ls -a
</pre>

You will see a list of files. Look for the following:

<pre>
.bash_profile
.profile
.bashrc
</pre>

The above order is the order in which bash will read the profiles, e.g. if bash_profile exists, it will use it first even if the others exist. (unconfirmed) You may by default have .profile as the only active one. Open the used profile and add the following line. Do not replace existing text!
<pre>
export PATH=$PATH:/usr/local/git/bin
</pre>
Reload your profile

Reload your bash profile by relaunching Terminal or running the following command (unconfirmed):
<pre>
. .profile
</pre>

Replace .profile with whichever you're using.
Changing your profile

You can specify which profile to use with the following command:
<pre>
source ./bash_profile
</pre>

This changes your bash profile source to the specified. You must be within your home directory to do that.

- - -
<a id="running-mysql-from-the-command-line-on-a-mac"></a>
Running MySQL from the command line on a Mac
--------------------------------------------

Using the above method to add a command to your .profile, you should add the following command

<pre>
alias mysql="/Applications/MAMP/Library/bin/mysql --host=localhost -uroot -proot"
</pre>

the "-u" and "-p" are followed by root and root, these correspond to the username and password for the root user of your mysql database.  If you changed those during the install process, then change this accordingly.

- - -
<a id="steps-to-install-drupal-using-an-install-profile"></a>
Steps to Install Drupal using an Install Profile:
----------------

Step 1: You will be navigating to your basic http directory and installing the drupal core files. Once in your http/www directory, you can do this by executing the following drush command:

<pre>
drush dl drupal
</pre>

This will install the drupal core files into a folder called drupal-7.xx.  If you want to rename this folder you can run the command:

<pre>
mv drupal-7.xx mydrupal
</pre>

Step 2: Next up we will want to add the profile for our site.  This will involve cloning the repository containing our files into the appropriate place. Navigate to the profiles directory and clone the git repository:

<pre>
pathto/mydrupal/profiles>git clone url_to_repository
</pre>

This will create a folder with the machine name of your install profile in your profiles folder.  This will be the root directory where most of your work on the website will go.

Step 3: The next step will be to create the mysql database for the site if you haven't already.  You can do this using phpmyadmin or you can use the following commands.
<pre>
mysqladmin -u USER -pPASSWORD create DBNAME;
</pre>


- - -
<a id="troubleshooting"></a>
Troubleshooting:
---------------

There could be some issues if you haven't create a user for yourself in mysql with the appropriate privileges.  If that is the case, you can create a new user with mysql superpowers using the following command. (you will need to be logged into mysql using the root user)
<pre>
CREATE USER 'user'@'localhost' IDENTIFIED by 'password';
GRANT ALL PRIVILEGES ON *.* TO 'user'@'localhost' WITH GRANT OPTION;
</pre>

you probably won't need to do that though.

Step 4: At this point you should have the repository cloned and the files in your /profiles/projectname/ directory, you should have a mysql database setup and you should have the drupal core files installed.  You should now run the rebuild.sh script which will install the modules specified in the install profile.
<pre>
../mydrupal/profiles/projectname>./rebuild.sh
</pre>


- - -
<a id="troubleshooting2"></a>
Troubleshooting:
---------------

There could be a few issues when running this.  One is if you do not have execute permissions on rebuild.sh.  You can fix this with the command 
<pre>
chmod u+x rebuild.sh
</pre>

Another problem could be if somehow you don't have access to write in your drush cache directories. you would locate your .drush directory (often times it will be a hidden directory in your home directory and either change the owner or set the permissions to be able to write in those cache directories

Step 5: To install drupal, you will need a few folders and files to be writeable by the server,  you would go to the mydrupal/sites/default folder and run the following commands:
<pre>
cp default.settings.php settings.php
mkdir files
chmod g+w settings.php
chmod g+w files
chmod g+w ../default
</pre>


- - -
<a id="extra-information"></a>
Extra Information
-----------------

These set the permissions for these files and directory to be writeable by the group associated with the file.  You can check who the user/group is for a file by running the command :
<pre>
marc@ordeau:/var/www/vhosts/da$ ls -al
total 260
drwxrwxr-x  9 marc www-data  4096 Feb 13 14:30 .
drwxrwxr-x 11 marc www-data  4096 Feb  9 11:46 ..
-rw-rw-r--  1 marc www-data  6553 Feb  9 11:45 authorize.php
-rw-rw-r--  1 marc www-data 74911 Feb  9 11:45 CHANGELOG.txt
-rw-rw-r--  1 marc www-data  1481 Feb  9 11:45 COPYRIGHT.txt
-rw-rw-r--  1 marc www-data   720 Feb  9 11:45 cron.php
...
</pre>

Here we can see that the user for these files is "marc" and the group owner is "www-data".  Apache is part of this group so we are giving apache permission to write to those files.



You are now ready to install your profile.  You should doublecheck you've done the following things:
* downloaded drupal core
* cloned the git repo for your profile into /profiles
* created a database for your site
* created a settings.php file, a files directory and changed permissions on the necessary files and folders to be able to run the install.
* run the rebuild.sh script and confirmed that it downloaded the modules it was supposed to.

Step 6: You navigate to the url of your drupal install and run install.php.  One of the options should be your install profile.  select that one and give drupal all the info it wants during the process.

- - -
<a id="git-workflow"></a>
Git Workflow
=============

Creating and committing a branch
--------------------------------

When committing changes to the repository, you will first give yourself a local branch specific to the task you are working on.  If you are using an issue tracker, it is customary to include the issue id in the name of the branch so that people can find the issue that relates to your branch.  Suppose we wanted to edit this README.md file and append some additional instructions to it.  We begin by creating a branch to work on:
<pre>
/profiles/projectname>git checkout -b 01-adding-blah-to-readme
Switched to a new branch '01-adding-blah-to-readme'
</pre>

You will now edit the README.md file and save your changes.  You can run
<pre>
git status
</pre>
to see that git has noticed that you changed that file.  You should now add the file so that the changes will be added when you commit them.
<pre>
git add README.md
</pre>
You can now commit the changes and you should add a message indicating what you did
<pre>
git commit -m"Added extra git workflow steps to the README.md"
</pre>
You now need to push the changes back to the remote repository.  If your branch does not exist there, simply doing git push may not work.  You should run the command:
<pre>
git push -u origin 01-adding-blah-to-readme
</pre>
Your remote repository should now have your branch and whomever is in charge of merging should take over from there.

Merging the changes
-------------------

To merge the changes, you would first inspect the difference between the current branch and the new branch.
<pre>
git fetch origin
git checkout master
git diff 01-adding-blah-to-readme
</pre>

Once you are satisfied everything is alright
<pre>
git merge 01-adding-blah-to-readme
git push
</pre>


- - -
<a id="features"></a>
Features
========

Features allows us to take information that would normally be stored in the database and move it into code.  This is very useful especially for things like version control.  As an example of how to use features, we will create a content type and then export it to a module and add it to our repository.


Creating a Content Type
-----------------------

Navigate to your new drupal site.  Provided you are logged in, you will have a menu at the top.  Go to Structure>Content Types and Add a new content Type.  Configure your content type and add any fields that are required.  We will assume the content is an Event and the feature will have the machine name event_feature.

Creating a Feature
------------------

Once that is done, go to Structure>Features and add a new Feature.  You will be able to select the new Event content type you just created.  You can then download the event_feature tar ball. this will include a module that will tell drupal to add your content type when it is enabled on a site.

Adding the Feature to a local branch in your git repo.
------------------------------------------------------

Create a new branch on your local git repository called "02-added-event-feature".  make sure that branch is checked out and then untar the features file you downloaded and copy it to your module directory in /profiles/projectname/modules/features/.  you should now have a directory called /profiles/projectname/modules/features/event_feature/  which contains the module files for your event content type.

Doing a git status will show a new feature directory.  Run the git add command to add your directory
<pre>
git add modules/features
</pre>
or 
<pre>
git add modules/features/event_features
</pre>


Editing the Profile projectname.install file to include your feature
--------------------------------------------------------------------

Navigate to the projectname.install and inside you will see a list of modules to be enabled when the profile is installed.  You can add your feature there under the //Features section
'event_feature',

The insides of the .install file will look like this:
<pre>
...
// Enable modules
$module_enable(array(
 //Contrib
 'update',
 ...
 //Custom modules.
 'custom_config',
 //Features.
 ...
</pre>

You should add it so that the file looks like:

<pre>
...
// Enable modules
$module_enable(array(
 //Contrib
 'update',
 ...
 //Custom modules.
 'custom_config',
 //Features.
 'event_feature',
 ...
</pre>



Save your changes. If you now do a git status you will see that you've modified the .install file.  Do a "git add" command to add this file and now commit all your changes
<pre>
git commit -m"added event-feature to the profile which creates an event content type"
git push -u origin 02-added-event-feature
</pre>

Your new feature should now be in a branch on the remote repository, ready to be merged.

- - -
<a id="adding-the-feature-to-a-local-branch-in-your-git-repo"></a>
Adding a Module to your install profile
======================================

Step 1
------

Create an Issue in your issue tracker and then create a local branch with that issue number and a description.  For this readme, we will consider installing the OG module.

Step 2
------

Once we have created our branch 01-add-og-to-profile, we now navigate to the Organic Groups homepage and get the machine name of the module.  We should also determine if there are any module dependencies and add those.  In our case, we need Organic Groups(og) and Entity Reference (entityreference)

Step 3
------

Edit the drupal-org.make file to include those contrib modules.  The subdir is the destination directory and the version allows you to specify a specific version of the module to download.
<pre>
...
projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.0

projects[og][subdir] = contrib
projects[og][version] = 2.0
...
</pre>

Step 4
------

You can now run ./rebuild.sh and the script will download the two modules but the modules won't be enabled.  To enable them, you will edit the .install file in your profile directory and add the two modules to the list of modules being enabled:
<pre>
//Contrib
...
'field_ui',
'entityreference',
'og',
//Custom modules
...
</pre>

Step 5
------

We now need to use our browser and navigate to Configuration > PetNation > Run Install Hooks.  This will enable Organic Groups and Entity Reference.

Step 6
------

We now want to share our changes so that others can update their profiles with our changes, to this end, we will begin by adding our modified files to the git branch we are currently checked out in.
<pre>
git add drupal-org.make
git add da_pet_nation.install
</pre>

We now want to commit our changes to our local branch:
<pre>
git commit -m"added OG and entityreference to install profile"
</pre>
Finally we push our branch to the remote repo
<pre>
git push -u origin 01-add-og-to-profile
</pre>

Additional Steps
================

You can merge your changes to master a couple of different ways.  On the drupal.org website, you will notice that a lot of changes to modules are done using patches.  So we will look at how to make a simple patch that will update our master branch with the changes on the 01-add-og-to-profile branch.

We will fetch master and make sure that there are no local changes that need to be committed:
<pre>
git fetch
git status
</pre>
Provided everything looks clean, we will use the git diff command to generate a patch.  If you forgot the name of the branch, you can do:
<pre>
git branch -a
</pre>
to list all the branches.  To make our patch, we will run the command:
<pre>
git diff master 01-add-og-to-profile > 01-add-og-to-profile.patch
</pre>
This will redirect the output of the diff into the file called 01-add-og-to-profile.patch.  You can then inspect the file and take a look at the changes being made.  If everything looks good, you can apply the patch to master:
<pre>
git apply 01-add-og-to-profile.patch
git status
</pre>
you will now see the modifications to the .install and .make files but they won't be committed by default.  You would then add each of them:
<pre>
git add drupal-org.make
git add da_pet_nation.install
</pre>
Provided everything went well, you can commit your changes and then push to the remote repo.
<pre>
git commit -m"added og and entityreference to profile"
git push
rm 01-add-og-to-profile.patch
</pre>

<a id="modifying-an-existing-feature"></a>

Modifying an existing feature
-----------------------------

You can modify an existing feature by using the drush command.  The changes you make that are stored in the database get exported to the feature module code.  The command is:

<pre>
drush features-update [feature-name]
</pre>

You can then push your changes with git.


- - -
<a id="theme-development"></a>
## Theme Development

Please read the ["readme_theme.md"](themes/petnation/readme_theme.md) found in the theme directory.

---
<a id="geolocation-in-dog-profile"></a>

GeoLocation in Dog Profile
-----------------------------
This feature allows the user to:

1. Manually enter their address so their geolocation can be calculated from it, or
2. Click "My Location" to use the GPS on their device to calculate their geolocation through HTML5, or
3. Place a pin on the map to show their geolocation.

They can also remove remove their indicated geolocation.

These geolocations are used in the Dog Map feature.

---
<a id="facebook-login"></a>

Facebook Login
--------------
This module allows a user to automatically create an account and login to Petnation with only their Facebook profile. They are taken to facebook to verify this the first time. After authentication they only have to click the facebook link.
Petnation can also pull information from the users facebook account such as their bio.

The connection to Facebook is acheived through a drupal module called fboauth. OAuth is an **open standard for authorization**. An app was created on Facebook specifically to communitcate with this website. 

