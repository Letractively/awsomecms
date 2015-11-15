_Package: 'components.file.connectors'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [TwitpicConnector](DOCComponentsFileConnectors#TwitpicConnector.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `TwitpicConnector` ##
##### <sub>class</sub> TwitpicConnector <sub>implements</sub> [FileConnector](DOCComponentsFileUtil#FileConnector.md) <sup>File: components/file/connectors/class.TwitpicConnector.inc</sup> #####
Connector for twitpic.com
> #### **public** _array_ **`fetch`** (  ) ####
> Inherited from: [FileConnector](DOCComponentsFileUtil#FileConnector.md)
Fetch the new images and add them to the database
> #### **public** _void_ **`walk`** ( _object_ `$row` ) ####
> Inherited from: [FileConnector](DOCComponentsFileUtil#FileConnector.md)
Modify a record for the tree, this usally includes adding tree premissions
> #### **public** _bool_ **`isActive`** (  ) ####
> Inherited from: [FileConnector](DOCComponentsFileUtil#FileConnector.md)
Check if the connector is active so we can use it
> #### **private** _array_ **`getTags`** (  `$tweet` ) ####
Parse a post for tags