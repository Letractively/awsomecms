AWSOMEcms is a CMS created for the web-designer rather then the end user. This translates as the way the CMS is made, it is essentially a large wrapper around smarty and thus focuses on templates and extending smarty. Using PHP5 and an OOP approach, the code is fast, stable, easy to maintain but also very extendible.

Because everything is made with the designer in mind, this means that most of the things you show on your site are either templates or well formatted html elements ready to be styled with CSS. This includes forms and even the admin panel, so it is the responsibility of the designer to create a usable site, the CMS only provides the tools and tries not to dictate the flow through a website. This makes for more creativity and less constrictions when designing and implementing a site and therefore a better experience.

The main features:
  * Fast serving of pages, around 0.05 sec per page
  * Component based (You don't install what you don't need)
  * Created around Smarty
  * Very customizable, even the admin section is just a template waiting to be changed to the needs of a customer.

The main technical features:
  * Database and SQL(-Query) abstraction layer
  * Component based actions
  * Pre- and Post-hooks for all actions (Thus extra stuff can be triggered)
  * Generated forms from tables (no need to make your own input forms anymore)

The current version of the CMS features the following components which are tested:
  * Aggregator
  * Comments
  * Contact
  * Core (required)
  * File (required)
  * Gallery
  * Groups
  * News
  * Page (required)
  * Publisher
  * Twitter
  * Users

If your interested please let me know, and I see what I can do. You can also download the source code from SVN to give it a go, just point your domain to the htdocs and run the installer.[For more info, read the instalation wiki](Instalation.md)

For full documentation on the source code, [you can use the documentation wiki pages](http://code.google.com/p/awsomecms/w/list?q=label:Documentation&sort=pagename).

**PHPDoc**: If you are interested in a php documentor, take a look at http://code.google.com/p/awsomecms/source/browse/#svn/trunk/libs/PHPDoc . It's more of an API which you can use for documenting a project and exporting wiki code, it can be easily fitted for other purposes. Do note that it is primarily used for this project and the associated coding style, so it might not correctly work with your project. If you are interested you can alway email me.