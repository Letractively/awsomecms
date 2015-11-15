After almost 1 year of active development and shaping the CMS to what it is today; it is time to reevaluate and see where we want to go from here on. What we want is to redefine the requirements that the CMS should for fill and see in how much it matches the current features.

# Requirements #
MoSCoW
## Functional requirements ##
Requirements which are directly related to the user
### Content Management ###
  1. The user must be able to add, edit and remove a page
  1. The user must be able to upload files
  1. The user must use a template engine for the HTML pages
  1. The user must be able to login to the front and backend
  1. The user should be able to define page types
  1. The user should be able to define the layout of a page based on the page type
  1. The user should be able to reference/include files in page
  1. The user should be able to format pages using a text-editor (WYSIWIG)
  1. The user could be able to re-use content for other purposes
  1. The user could be able to publish content on other sites
## System requirements ##
Requirements which are used for the application flow and components
### Content Management ###
  1. The system must have a location-based page structure
  1. The system must have a layout file for each page type
  1. The system should not allow duplicate pages on the same location
  1. The system should be able to generate a sitemap.xml
### Infrastructure ###
  1. The system must use a meta-table like way for interacting with the the database
  1. The system should contain validation of input
  1. The system could have a restful interface
  1. The system could be installed as a service (rather then a website)
### Components ###
  1. The system must be extentable with plugin like programs
  1. The system must copy site specific content from the install folders to the site root
  1. The system should only load plugins when needed
  1. The system should allow for components to add the page listings
  1. The system could be configured to pull data externally for some components
## Component requirements ##
  1. A component must be able to pre-hook another component action
  1. A component must be able to post-hook another component action
  1. A component must have an install folder which contains site specific content
  1. A component should be able to installed from an external location