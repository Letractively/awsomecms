_Package: 'components.file'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [FileComponent](DOCComponentsFile#FileComponent.md)
  * [FilesTable](DOCComponentsFile#FilesTable.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `FileComponent` ##
##### <sub>class</sub> FileComponent <sub>extends</sub> [Component](DOCCore#Component.md) <sup>File: components/file/class.FileComponent.inc</sup> #####
A way to create a centeral file repository to upload files.
> #### **public** _`*`_ **`__construct`** (  ) ####
Constructor
> #### **public** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register actions/hooks/mappings to the framework
> #### **public** _[FileConnector](DOCComponentsFileUtil#FileConnector.md)_ **`getConnector`** ( _string_ `$name` ) ####
Get a connector object based on the type
> #### **public** _void_ **`action_add`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Add action
> #### **public** _void_ **`action_update`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
update the references made by the connectors
> #### **public** _void_ **`action_upload`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Upload a file action
> #### **public** _void_ **`action_edit`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Edit action
> #### **public** _void_ **`action_delete`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Delete action
> #### **public** _void_ **`registerTreeItems`** ( _[Tree](DOCComponentsPageUtil#Tree.md)_ `$tree` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register tree items for this component
> #### **public** _void_ **`getLocationMap`** (  ) ####
> #### **public** _string_ **`getType`** ( _string_ `$fileType` ) ####
Get the type of a file based on the mimetype
> #### **public** _void_ **`permissions`** ( _object_ `$row` ) ####
Set the permissions for a row using the Table
> #### **public** _void_ **`execCron`** (  ) ####
> Inherited from: [Component](DOCCore#Component.md)
Execute a task for the cron. This called in the interval secified in the config files.
## `FilesTable` ##
##### <sub>class</sub> FilesTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/file/class.FilesTable.inc</sup> #####
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