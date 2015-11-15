_Package: 'components.news'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [NewsComponent](DOCComponentsNews#NewsComponent.md)
  * [NewsTable](DOCComponentsNews#NewsTable.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `NewsComponent` ##
##### <sub>class</sub> NewsComponent <sub>extends</sub> [Component](DOCCore#Component.md) <sup>File: components/news/class.NewsComponent.inc</sup> #####
The News component provides a simple news system that allows for new messages.
News items can be grouped using a tag if needed.
> #### **public** _void_ **`__construct`** (  ) ####
Constructor
> #### **public** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register actions/hooks/mappings to the framework
> #### **public** _void_ **`action_index`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Index action, this is used when a page is shown by the cms
> #### **public** _void_ **`action_add`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Action for adding a news item
> #### **public** _void_ **`action_edit`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Action for editing a news item
> #### **public** _void_ **`action_delete`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Action for deleting a news item
> #### **public** _void_ **`registerTreeItems`** ( _[Tree](DOCComponentsPageUtil#Tree.md)_ `$tree` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register tree items for this component
> #### **public** _string_ **`makeURL`** ( _object_ `$record` ) ####
Create a url for the news record
## `NewsTable` ##
##### <sub>class</sub> NewsTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/news/class.NewsTable.inc</sup> #####
News table, this handels all interaction with the news table in the database
> #### **public** _void_ **`__construct`** (  ) ####
constructor
> #### **protected** _void_ **`select`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Select data
> #### **protected** _void_ **`update`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Update data
> #### **protected** _void_ **`insert`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Insert data
> #### **protected** _void_ **`delete`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Delete data