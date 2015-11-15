_Package: 'components.file.util'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [FileConnector](DOCComponentsFileUtil#FileConnector.md)
  * [FileItem](DOCComponentsFileUtil#FileItem.md)
  * [ImageFolder](DOCComponentsFileUtil#ImageFolder.md)
  * [UploadFolder](DOCComponentsFileUtil#UploadFolder.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `FileConnector` ##
##### <sub>interface</sub> FileConnector <sup>File: components/file/util/class.FileConnector.inc</sup> #####
Connector class so files can be imported from external sources
> #### _array_ **`fetch`** (  ) ####
Fetch the new images and add them to the database
> #### _void_ **`walk`** ( _object_ `$row` ) ####
Modify a record for the tree, this usally includes adding tree premissions
> #### _bool_ **`isActive`** (  ) ####
Check if the connector is active so we can use it
## `FileItem` ##
##### <sub>class</sub> FileItem <sub>extends</sub> [TreeNode](DOCComponentsPageUtil#TreeNode.md) <sup>File: components/file/util/class.FileTree.inc</sup> #####
Tree item which contains a file
> #### **public** _void_ **`__construct`** ( _object_ `$record` ) ####
Constructor
> #### **public** _string_ **`toJavascript`** (  ) ####
> Inherited from: [TreeNode](DOCComponentsPageUtil#TreeNode.md)
Create the javascript code for the node
> #### **public** _string_ **`toData`** (  ) ####
(non-PHPdoc)
## `ImageFolder` ##
##### <sub>class</sub> ImageFolder <sub>extends</sub> [Folder](DOCComponentsPageUtil#Folder.md) <sup>File: components/file/util/class.FileTree.inc</sup> #####
Tree items which contains the images
> #### **public** _void_ **`__construct`** ( _object_ `$record` ) ####
Constructor
> #### **public** _void_ **`registerIcons`** (  ) ####
See parent
> #### **public** _string_ **`toJavascript`** (  ) ####
Create the javascript code for the tree
## `UploadFolder` ##
##### <sub>class</sub> UploadFolder <sub>extends</sub> [Folder](DOCComponentsPageUtil#Folder.md) <sup>File: components/file/util/class.FileTree.inc</sup> #####
Tree items to which can be uploaded by drag and drop
> #### **public** _void_ **`__construct`** ( _object_ `$record` ) ####
Constructor
> #### **public** _void_ **`registerIcons`** (  ) ####
See parent
> #### **public** _string_ **`toJavascript`** (  ) ####
Create the javascript code for the tree