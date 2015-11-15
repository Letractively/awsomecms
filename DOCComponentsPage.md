_Package: 'components.page'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [PageComponent](DOCComponentsPage#PageComponent.md)
  * [PagesTable](DOCComponentsPage#PagesTable.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `PageComponent` ##
##### <sub>class</sub> PageComponent <sub>extends</sub> [Component](DOCCore#Component.md) <sup>File: components/page/class.PageComponent.inc</sup> #####
The Page component, together with the core component, is this used to show pages and manage them
> #### **public** _void_ **`__construct`** (  ) ####
Constructor
> #### **public** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register actions/hooks/mappings to the framework
> #### **public** _void_ **`action_add`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Action for adding a page
> #### **public** _void_ **`action_edit`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Action for editing a page
> #### **public** _void_ **`action_delete`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Action for deleting a page
> #### **public** _void_ **`registerMenuItems`** ( _[Menu](DOCComponentsPageUtil#Menu.md)_ `$menu` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register menu items for this component
> #### **public** _void_ **`registerTreeItems`** ( _[Tree](DOCComponentsPageUtil#Tree.md)_ `$tree` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register tree items for this component
## `PagesTable` ##
##### <sub>class</sub> PagesTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/page/class.PagesTable.inc</sup> #####
Pages table, this handels all interaction with the pages table in the database
> #### **public** _void_ **`__construct`** (  ) ####
Constructor
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