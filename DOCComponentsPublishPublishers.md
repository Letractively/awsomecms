_Package: 'components.publish.publishers'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [FacebookPublisher](DOCComponentsPublishPublishers#FacebookPublisher.md)
  * [HyvesPublisher](DOCComponentsPublishPublishers#HyvesPublisher.md)
  * [TwitterPublisher](DOCComponentsPublishPublishers#TwitterPublisher.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `FacebookPublisher` ##
##### <sub>class</sub> FacebookPublisher <sub>implements</sub> [Publisher](DOCComponentsPublishUtil#Publisher.md) <sup>File: components/publisher/publishers/class.FacebookPublisher.inc</sup> #####
Publisher for facebook.com
> #### **public** _bool_ **`publish`** ( _array_ `$request`, _[PublishItem](DOCComponentsPublishUtil#PublishItem.md)_ `$item` ) ####
> Inherited from: [Publisher](DOCComponentsPublishUtil#Publisher.md)
Publish an item
> #### **public** _string_ **`auth`** ( _array_ `$request` ) ####
> Inherited from: [Publisher](DOCComponentsPublishUtil#Publisher.md)
Authenticated if needed to post the request
> #### **public** _bool_ **`canPublish`** ( _string_ `$type` ) ####
> Inherited from: [Publisher](DOCComponentsPublishUtil#Publisher.md)
Check if an type can be published by this publisher
> #### **private** _SimpleXMLElement_ **`makeRequest`** ( _string_ `$method`, _string_ `$action`, _array_ `$data`, _array_ `$oauth_token` ) ####
Make an oAuth request
> #### **public** _string_ **`actionMap`** ( _string_ `$type` ) ####
Map types to actions
## `HyvesPublisher` ##
##### <sub>class</sub> HyvesPublisher <sub>implements</sub> [Publisher](DOCComponentsPublishUtil#Publisher.md) <sup>File: components/publisher/publishers/class.HyvesPublisher.inc</sup> #####
Publisher for hyves.nl
> #### **public** _bool_ **`publish`** ( _array_ `$request`, _[PublishItem](DOCComponentsPublishUtil#PublishItem.md)_ `$item` ) ####
> Inherited from: [Publisher](DOCComponentsPublishUtil#Publisher.md)
Publish an item
> #### **public** _string_ **`auth`** ( _array_ `$request` ) ####
> Inherited from: [Publisher](DOCComponentsPublishUtil#Publisher.md)
Authenticated if needed to post the request
> #### **public** _bool_ **`canPublish`** ( _string_ `$type` ) ####
> Inherited from: [Publisher](DOCComponentsPublishUtil#Publisher.md)
Check if an type can be published by this publisher
> #### **private** _SimpleXMLElement_ **`makeRequest`** ( _string_ `$method`, _string_ `$action`, _array_ `$data`, _array_ `$oauth_token` ) ####
Make an oAuth request
> #### **public** _string_ **`actionMap`** ( _string_ `$type` ) ####
Map types to actions
## `TwitterPublisher` ##
##### <sub>class</sub> TwitterPublisher <sub>implements</sub> [Publisher](DOCComponentsPublishUtil#Publisher.md) <sup>File: components/publisher/publishers/class.TwitterPublisher.inc</sup> #####
Publisher for twitter.com
> #### **public** _bool_ **`publish`** ( _array_ `$request`, _[PublishItem](DOCComponentsPublishUtil#PublishItem.md)_ `$item` ) ####
> Inherited from: [Publisher](DOCComponentsPublishUtil#Publisher.md)
Publish an item
> #### **public** _string_ **`auth`** ( _array_ `$request` ) ####
> Inherited from: [Publisher](DOCComponentsPublishUtil#Publisher.md)
Authenticated if needed to post the request
> #### **public** _bool_ **`canPublish`** ( _string_ `$type` ) ####
> Inherited from: [Publisher](DOCComponentsPublishUtil#Publisher.md)
Check if an type can be published by this publisher
> #### **private** _SimpleXMLElement_ **`makeRequest`** ( _string_ `$method`, _string_ `$action`, _array_ `$data`, _array_ `$oauth_token` ) ####
Make an oAuth request
> #### **public** _string_ **`actionMap`** ( _string_ `$type` ) ####
Map types to actions