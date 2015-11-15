_Package: 'components.comments'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [CommentsComponent](DOCComponentsComments#CommentsComponent.md)
  * [CommentsTable](DOCComponentsComments#CommentsTable.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `CommentsComponent` ##
##### <sub>class</sub> CommentsComponent <sub>extends</sub> [Component](DOCCore#Component.md) <sup>File: components/comments/class.CommentsComponent.inc</sup> #####
Comments compontent class, this includes all logic for an component
> #### **public** _void_ **`__construct`** (  ) ####
Constructor for the comments component
> #### **public** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
> Inherited from: [Component](DOCCore#Component.md)
Register actions/hooks/mappings to the framework
> #### **public** _void_ **`action_reply`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader`, _array_ `$request` ) ####
Repley action, this is called when a reply is posted
## `CommentsTable` ##
##### <sub>class</sub> CommentsTable <sub>extends</sub> [Table](DOCCore#Table.md) <sup>File: components/comments/class.CommentsTable.inc</sup> #####
Comments table, this handels all interaction with the comments table in the database
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