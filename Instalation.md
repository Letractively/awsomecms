The installation process of the CMS is quite simple.

# Step 1 #
Get a version of the CMS. This can either be through me(Yannick, project owner) or using SVN. I recommend you get one through me because then it comes pre-preped with some information so you can use the update feature.
When you get it from SVN (using a checkout) the update feature will be disabled because versions cannot be checked properly. So and SVN export is not recommended.

# Step 2 #
Upload, or move, the CMS files to a server. Make sure the htdocs is your document root because the CMS will not function from within a subfolder of your domain (ie. `http://yourdomain.com/htdocs/` will not work). The CMS expects that your (sub-)domain is the root of the site.
The reason for this is that all urls are parsed and fetched from the database, using rewrite-rules all urls are rewritten internally to `http://yourdomain.com/index.php?url=/current/page`. Using a subfolder will break this and thus the CMS cannot locate the page correctly.

# Step 3 #
Point your browser to your site, an install page should appear and this will guide you through the remainder of the installation.

# Step 3.2 #
Login to the admin section of the CMS, usually `http://yourdomain.com/admin/` (the ending "/" is required!). The default login credentials are:
  * username: admin
  * password: demo
The latest version of the CMS should give a warning if the install files are still there and gives the option to remove them. **It is recommended to remove the install files once the CMS is working.** Leaving the install files are a big security risk.