_Package: 'components.page.util'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [MenuItem](DOCComponentsPageUtil#MenuItem.md)
  * [Menu](DOCComponentsPageUtil#Menu.md)
  * [Tree](DOCComponentsPageUtil#Tree.md)
  * [TreeNode](DOCComponentsPageUtil#TreeNode.md)
  * [PageItem](DOCComponentsPageUtil#PageItem.md)
  * [Folder](DOCComponentsPageUtil#Folder.md)
  * [RootFolder](DOCComponentsPageUtil#RootFolder.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `MenuItem` ##
##### <sub>class</sub> MenuItem <sup>File: components/page/util/class.Menu.inc</sup> #####
Menu item that is used in the admin menu
> #### **public** _void_ **`__construct`** ( _string_ `$name`, _string_ `$text`, _string_ `$page`, _string_ `$parent` ) ####
Constructor
> #### **public** _bool_ **`addChild`** ( _[MenuItem](DOCComponentsPageUtil#MenuItem.md)_ `$child` ) ####
Add a menu items to this item, returns true or false depending if succeded
> #### **private** _int_ **`sort`** ( _[MenuItem](DOCComponentsPageUtil#MenuItem.md)_ `$child1`, _[MenuItem](DOCComponentsPageUtil#MenuItem.md)_ `$child2` ) ####
sort the items in this MenuItem
> #### **public** _string_ **`toHTML`** (  ) ####
Create a HTML represenation of this MenuItem
## `Menu` ##
##### <sub>class</sub> Menu <sup>File: components/page/util/class.Menu.inc</sup> #####
Menu class, this is the root element of the menu
> #### **public** **static** _[Menu](DOCComponentsPageUtil#Menu.md)_ **`getInstance`** (  ) ####
Singelton
> #### **private** _void_ **`__construct`** (  ) ####
Constructor
> #### **public** _bool_ **`addChild`** ( _[MenuItem](DOCComponentsPageUtil#MenuItem.md)_ `$child` ) ####
Add a menu items to this menu, returns true or false depending if succeded
> #### **public** _string_ **`toHTML`** (  ) ####
Create HTML representation of this menu
> #### **private** _int_ **`sort`** ( _[MenuItem](DOCComponentsPageUtil#MenuItem.md)_ `$child1`, _[MenuItem](DOCComponentsPageUtil#MenuItem.md)_ `$child2` ) ####
Sort the items in the menu
## `Tree` ##
##### <sub>class</sub> Tree <sup>File: components/page/util/class.Tree.inc</sup> #####
Tree class for the page admin tree
> #### **public** **static** _void_ **`getInstance`** (  ) ####
> #### **private** _void_ **`__construct`** ( _string_ `$name`, _string_ `$element` ) ####
Constructor
> #### **public** _void_ **`addChild`** ( _[TreeNode](DOCComponentsPageUtil#TreeNode.md)_ `$child` ) ####
Add a child to the tree
> #### **public** _void_ **`addIcon`** (  ) ####
> #### **public** _string_ **`getName`** (  ) ####
get the name of the javascript element
> #### **public** _string_ **`toJavascript`** (  ) ####
Create the javascript code for the tree
## `TreeNode` ##
##### _abstract_ <sub>class</sub> TreeNode <sup>File: components/page/util/class.Tree.inc</sup> #####
Abstract class for the nodes of the tree
> #### **public** _void_ **`setParent`** ( _[Tree](DOCComponentsPageUtil#Tree.md)_ `$parent` ) ####
Set the parent, which is the tree
> #### **public** _void_ **`setType`** ( _int_ `$type` ) ####
Set the type of this node
> #### **public** _int_ **`getType`** (  ) ####
Get the type of this node
> #### **abstract** _string_ **`toJavascript`** (  ) ####
Create the javascript code for the node
> #### **abstract** _string_ **`toData`** (  ) ####
Create a JSON representation of this node
> #### **public** _string_ **`registerIcons`** (  ) ####
function that is called once on each type of node, you can add icons to the tree here
## `PageItem` ##
##### <sub>class</sub> PageItem <sub>extends</sub> [TreeNode](DOCComponentsPageUtil#TreeNode.md) <sup>File: components/page/util/class.Tree.inc</sup> #####
The node for the page items
> #### **public** _void_ **`__construct`** ( _object_ `$record` ) ####
Constructor
> #### **public** _string_ **`toJavascript`** (  ) ####
> Inherited from: [TreeNode](DOCComponentsPageUtil#TreeNode.md)
Create the javascript code for the node
> #### **public** _string_ **`toData`** (  ) ####
(non-PHPdoc)
## `Folder` ##
##### <sub>class</sub> Folder <sub>extends</sub> [TreeNode](DOCComponentsPageUtil#TreeNode.md) <sup>File: components/page/util/class.Tree.inc</sup> #####

> #### **public** _void_ **`__construct`** ( _object_ `$record` ) ####
Constructor
> #### **public** _string_ **`toJavascript`** (  ) ####
Create the javascript code for the tree
> #### **public** _string_ **`toData`** (  ) ####
(non-PHPdoc)
## `RootFolder` ##
##### <sub>class</sub> RootFolder <sub>extends</sub> [Folder](DOCComponentsPageUtil#Folder.md) <sup>File: components/page/util/class.Tree.inc</sup> #####

> #### **public** _string_ **`toJavascript`** (  ) ####
Create the javascript code for the tree