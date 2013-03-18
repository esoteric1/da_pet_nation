api = 2
core = 7.x

; ; TEMPLATE
; projects[][subdir] = contrib
; projects[][version] =
; ; This is the issue title: http://drupal.org/node/xxxxxxx#comment-xxxxxxx
; projects[][patch][] =

; MODULES
; Ascending Alphabetical order from the module name

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc3

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.4

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.2

projects[date][subdir] = contrib
projects[date][version] = 2.6

projects[devel][subdir] = contrib
projects[devel][version] = 1.3

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

projects[email][subdir] = contrib
projects[email][version] = 1.2

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc3

projects[features][subdir] = contrib
projects[features][version] = 1.0

projects[features_extra][subdir] = contrib
projects[features_extra][version] = 1.0-alpha2

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = 1.5

projects[i18n][subdir] = contrib
projects[i18n][version] = 1.7
; Patch helps with installin from drush.
projects[i18n][patch][] = "http://drupal.org/files/static_reset.patch"

projects[link][subdir] = contrib
projects[link][version] = 1.0

projects[location][subdir] = contrib
projects[location][version] = 3.0-alpha1

projects[panels][subdir] = contrib
projects[panels][version] = 3.3

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[token][subdir] = contrib
projects[token][version] = 1.4

projects[variable][subdir] = contrib
projects[variable][version] = 2.1

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.2

projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.0

projects[og][subdir] = contrib
projects[og][version] = 2.0

projects[views][subdir] = contrib
projects[views][version] = 3.5

projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.1

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.7

projects[ds][subdir] = contrib
projects[ds][version] = 2.2

projects[entityreference_prepopulate][subdir] = contrib
projects[entityreference_prepopulate][version] = 1.2

projects[eva][subdir] = contrib
projects[eva][version] = 1.2

;mapping modules
projects[ip_geoloc][subdir] = contrib
projects[ip_geoloc][version] = 1.19

projects[geolocation][subdir] = contrib
projects[geolocation][version] = 1.1

projects[gmap][subdir] = contrib
projects[gmap][version] = 2.4

projects[fboauth][subdir] = contrib
projects[fboauth][version] = 1.6

projects[rules][subdir] = contrib
projects[rules][version] = 2.2

; THEMES

projects[zen][version] = 5.1

; LIBRARIES

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.zip"
libraries[ckeditor][directory_name] = "ckeditor"
