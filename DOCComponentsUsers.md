_Package: 'components.users'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [PrivilegesTable](DOCComponentsUsers#PrivilegesTable.md)
  * [UsersComponent](DOCComponentsUsers#UsersComponent.md)
  * [UsersTable](DOCComponentsUsers#UsersTable.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `PrivilegesTable` ##
##### <sub>class</sub> PrivilegesTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/users/class.PrivilegesTable.inc</sup> #####
Privileges tabel.
> #### **public** _[Table](DOCCore#Table.md)_ **`__construct`** ( _string_ `$name` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Constructor for Table
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
> #### **public** _[SQLRecord](DOCCore#SQLRecord.md)_ **`doDelete`** (  ) ####
> Inherited from: [Table](DOCCore#Table.md)
Preform a delete on the table
> #### **public** _string_ **`getAction`** ( _int_ `$mode` ) ####
> Inherited from: [Table](DOCCore#Table.md)
Mapping of the action to the actuly hidden field content.
When in need of custom mapping, like if you have two tables for one component, override this method
## `UsersComponent` ##
##### <sub>class</sub> UsersComponent <sub>extends</sub> [Component](DOCCore#Component.md) <sub>implements</sub> [AuthComponent](DOCCore#AuthComponent.md) <sup>File: components/users/class.UsersComponent.inc</sup> #####
User component and the actions that it can do.
This components gives you the option to create different users inside a
system, these users can be assigned a name and password and privilages. If
the group component is installed, privilages will be delegated there
> #### **public** _void_ **`__construct`** (  ) ####
> #### **public** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register actions/hooks/mappings to the framework
> #### **private** _void_ **`login`** ( _array_ `$request`, _string_ `$redirect` ) ####
Internal function to handle login. This checks user and password and
if they are filled in or throws and FormException otherwise.
> #### **public** _void_ **`action_login`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Login and redirect to the admin section
> #### **public** _void_ **`action_admin_login`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Login and redirect to the index
> #### **public** _void_ **`action_add`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Add a user
> #### **public** _void_ **`action_edit`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Edit a user
> #### **public** _void_ **`action_delete`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Delete a user
> #### **public** _void_ **`action_privadd`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Add a privilege
> #### **public** _void_ **`action_privedit`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Edit a privilege
> #### **public** _void_ **`action_privdelete`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Delete a privilege
> #### **public** _array_ **`getPrivilageMapping`** ( _int_ `$userPrivs` ) ####
Get the privileges the user has
> #### **public** _bool_ **`auth_login`** ( _string_ `$user_name`, _string_ `$user_pass` ) ####
Authenticate a user
> #### **public** _void_ **`auth_logout`** (  ) ####
Log a user out
> #### **public** _void_ **`registerMenuItems`** ( _[Menu](DOCComponentsPageUtil#Menu.md)_ `$menu` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register menu items for this component
## `UsersTable` ##
##### <sub>class</sub> UsersTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/users/class.UsersTable.inc</sup> #####
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