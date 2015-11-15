_Package: 'components.publish.util'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [PublishItem](DOCComponentsPublishUtil#PublishItem.md)
  * [Publisher](DOCComponentsPublishUtil#Publisher.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `PublishItem` ##
##### <sub>class</sub> PublishItem <sup>File: components/publisher/util/class.PublishItem.inc</sup> #####
Item which is used to standardize input for different tables
> #### **public** _void_ **`__construct`** ( _string_ `$id`, _string_ `$title`, _string_ `$message`, _string_ `$linkback`, _int_ `$date`, _string_ `$picture`, _string_ `$type` ) ####
Constructor
## `Publisher` ##
##### <sub>interface</sub> Publisher <sup>File: components/publisher/util/class.Publisher.inc</sup> #####
Publisher interface
> #### _bool_ **`publish`** ( _array_ `$request`, _[PublishItem](DOCComponentsPublishUtil#PublishItem.md)_ `$item` ) ####
Publish an item
> #### _bool_ **`canPublish`** ( _string_ `$type` ) ####
Check if an type can be published by this publisher
> #### _string_ **`auth`** ( _array_ `$request` ) ####
Authenticated if needed to post the request