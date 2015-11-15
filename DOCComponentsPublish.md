_Package: 'components.publish'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [PublisherComponent](DOCComponentsPublish#PublisherComponent.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `PublisherComponent` ##
##### <sub>class</sub> PublisherComponent <sub>extends</sub> [Component](DOCCore#Component.md) <sup>File: components/publisher/class.PublisherComponent.inc</sup> #####
A way to publish items onto social networks
> #### **public** _void_ **`__construct`** (  ) ####
Constructor
> #### **public** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register actions/hooks/mappings to the framework
> #### **public** _void_ **`registerMenuItems`** ( _[Menu](DOCComponentsPageUtil#Menu.md)_ `$menu` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register menu items for this component
> #### **public** _void_ **`action_admin`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Show a list of items you can publish
> #### **public** _void_ **`action_publish`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
publish action
> #### **public** _void_ **`action_auth`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Authentication action, this is needed for oauth calls
> #### **private** _array_ **`getPublishedItems`** (  ) ####
Get all published items
> #### **private** _[PublishItem](DOCComponentsPublishUtil#PublishItem.md)_ **`wrap`** ( _string_ `$table`, _object_ `$row` ) ####
Wrap a row in a PublishItem
> #### **private** _array_ **`getPublishSettings`** ( _string_ `$type`, _[PublishItem](DOCComponentsPublishUtil#PublishItem.md)_ `$item` ) ####
Get the publish settings for an type and item
> #### **private** _array_ **`getPublishers`** (  ) ####
Get a list of publishers found in the publishers folder
> #### **private** _int_ **`sort`** ( _[PublishItem](DOCComponentsPublishUtil#PublishItem.md)_ `$a`, _[PublishItem](DOCComponentsPublishUtil#PublishItem.md)_ `$b` ) ####
sort function