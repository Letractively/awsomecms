_Package: 'components.core'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [ComponentsTable](DOCComponentsCore#ComponentsTable.md)
  * [CoreComponent](DOCComponentsCore#CoreComponent.md)
  * [TagsTable](DOCComponentsCore#TagsTable.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `ComponentsTable` ##
##### <sub>class</sub> ComponentsTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/core/class.ComponentsTable.inc</sup> #####
Core table, this handels all interaction with the core table in the database
> #### **public** _void_ **`__construct`** (  ) ####
Constructor
> #### **protected** _void_ **`select`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Select data
> #### **protected** _void_ **`insert`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Insert data
> #### **protected** _void_ **`update`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Update data
> #### **protected** _void_ **`delete`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Delete data
## `CoreComponent` ##
##### <sub>class</sub> CoreComponent <sub>extends</sub> [Component](DOCCore#Component.md) <sup>File: components/core/class.CoreComponent.inc</sup> #####
Core component class, this includes all the logic for the core actions
> #### **public** _void_ **`__construct`** (  ) ####
Constructor
> #### **public** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register actions/hooks/mappings to the framework
> #### **public** _void_ **`action_index`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Index action, this is used when a page is shown by the cms
> #### **public** _void_ **`action_session`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Session action, this is used to set some data for the templates, like if a user is logged in or if the page is part of the admin section.
> #### **public** _void_ **`action_layout`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader` ) ####
Layout action, this is used for the layout mapping page.
> #### **public** _void_ **`action_install`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Install action, this is used for the update manager.
> #### **public** _void_ **`action_update`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Update action, this is used for the update manager.
> #### **public** _void_ **`action_components`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Components action, this is used for the compontent settings page
> #### **public** _void_ **`action_deleteinstall`** (  ) ####
> #### **public** _void_ **`action_getform`** (  ) ####
> #### **public** _void_ **`registerMenuItems`** ( _[Menu](DOCComponentsPageUtil#Menu.md)_ `$menu` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register menu items for this component
## `TagsTable` ##
##### <sub>class</sub> TagsTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/core/class.TagsTable.inc</sup> #####
Auth table, this handels all interaction with the auth table in the database
> #### **public** _void_ **`__construct`** (  ) ####
Constructor
> #### **protected** _void_ **`select`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Select data
> #### **protected** _void_ **`insert`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Insert data
> #### **protected** _void_ **`update`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Update data
> #### **protected** _void_ **`delete`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Additional Delete data