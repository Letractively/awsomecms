With HTML5 just round the corner, some new features are going to be added to AWSOMEcms, or... already are.

Currently there is a lot of work done in order to support file drag-and-drop upload, which makes uploading multiple files as easy as it can get.

Some major changes are a re-factoring of the admin tree, which is no longer a data structure on the server site, but now is client side. This means it is a lot more dynamic and can support changes in the tree without reloading the page.

Further more there is a new component, the File component, which will act as a central repository for all uploaded files. This means components will no longer need to support their own file upload but can just add a file select field and get a reference to an image. This not only organizes the files but has a lot more re-use value. (Slideshow and gallery both has the same stuff)

These two major features are at the base of the file drag-and-drop system that is now implemented. ~~However it is still Firefox 3.6+ only. Since there is still a lot of work being done on the HTML5 APIs (including he file API), the other browsers are not yet supported. As soon as there is a way though, these will be added.~~

Anyways, for those that get a clean install; The admintree is divided into two sections now, the Siteroot and the Contentroot. Siteroot are visible pages, where Contentroot are static content like uploaded files.

**Update 9 aug 2010:**
With HTML5 becoming more finalized I've refactored the drag and drop code so it meets the HTML5 standard. This is done using the FormData class which will be added with HTML5. While not all browsers support this feature fully, Google Chrome (current release, 5.0.375.125) and Firefox 4.0b2 are tested and work. So while Firefox 3.6 is no longer supported, we get the support back when Firefox 4 is released. In the mean time we gained support for Google Chrome and the software is closer to the HTML5 standard.