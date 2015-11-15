_Package: 'components.groups'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [GroupsComponent](DOCComponentsGroups#GroupsComponent.md)
  * [GroupsTable](DOCComponentsGroups#GroupsTable.md)
  * [UsersgroupsTable](DOCComponentsGroups#UsersgroupsTable.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `GroupsComponent` ##
##### <sub>class</sub> GroupsComponent <sub>extends</sub> [Component](DOCCore#Component.md) <sub>implements</sub> [AuthComponent](DOCCore#AuthComponent.md) <sup>File: components/groups/class.GroupsComponent.inc</sup> #####
Component that allowes for group based authentication, rather then user based
> #### **public** _`*`_ **`__construct`** (  ) ####
Constructor
> #### **public** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register actions/hooks/mappings to the framework
> #### **public** _void_ **`action_add`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Action to add an group
> #### **public** _void_ **`action_edit`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Action to edit an group
> #### **public** _void_ **`action_delete`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Action to delete an group
> #### **public** _array_ **`getPrivilageMapping`** ( _int_ `$userPriv`, _array_ `$preset` ) ####
Request a list of privilages a given groups has
> #### **public** _bool_ **`auth_login`** ( _string_ `$user_name`, _string_ `$user_pass` ) ####
Log a user in with crendtials
> #### **public** _void_ **`auth_logout`** (  ) ####
Log a user out
> #### **public** _bool_ **`hook_useradd`** ( _Smarty_ `$smarty`, _array_ `$request` ) ####
Hook to add a reference of a user when it is deleted in the user component
> #### **public** _bool_ **`hook_userdel`** ( _Smarty_ `$smarty`, _array_ `$request` ) ####
Hook to delete a reference of a user when it is deleted in the user component
> #### **public** _void_ **`registerMenuItems`** ( _[Menu](DOCComponentsPageUtil#Menu.md)_ `$menu` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register menu items for this component
## `GroupsTable` ##
##### <sub>class</sub> GroupsTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/groups/class.GroupsTable.inc</sup> #####
User table, this handels all interaction with the user table in the database
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
## `UsersgroupsTable` ##
##### <sub>class</sub> UsersgroupsTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/groups/class.UsersgroupsTable.inc</sup> #####
Usersgroups table, this is a raltional table to keep track of what users are in which groups
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