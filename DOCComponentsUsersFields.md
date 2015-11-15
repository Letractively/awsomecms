_Package: 'components.users.fields'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [AuthsField](DOCComponentsUsersFields#AuthsField.md)
  * [PrivlilegesField](DOCComponentsUsersFields#PrivlilegesField.md)
  * [UsersField](DOCComponentsUsersFields#UsersField.md)
  * [UsersselectField](DOCComponentsUsersFields#UsersselectField.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `AuthsField` ##
##### <sub>class</sub> AuthsField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: components/users/fields/class.AuthsField.inc</sup> #####
AuthsField list of check boxes
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **public** _string_ **`value2db`** (  `$value` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Convert the value of the param to that what the DB expects
> #### **public** _`*`_ **`db2value`** (  `$value` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Convert the dbvalue of the param to what the field expects
## `PrivlilegesField` ##
##### <sub>class</sub> PrivlilegesField <sub>extends</sub> [IntField](DOCCoreFields#IntField.md) <sup>File: components/users/fields/class.PrivlilegesField.inc</sup> #####
Privileges list of check boxes
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **public** _string_ **`value2db`** (  `$value` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Convert the value of the param to that what the DB expects
## `UsersField` ##
##### <sub>class</sub> UsersField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: components/users/fields/class.UsersField.inc</sup> #####
Selection list of all the users
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setData`** ( _object_ `$value` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Set the Value of this field with an result object
> #### **public** _`*`_ **`getValue`** ( _object_ `$data` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
get the data from this field
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **protected** _string_ **`toHTML_view`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of view field
> #### **public** _void_ **`select`** (  `$query`,  `$data` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Add select data for this field to a query
## `UsersselectField` ##
##### <sub>class</sub> UsersselectField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: components/users/fields/class.UsersselectField.inc</sup> #####
Selection list of all the users, do note you may want to use this as a dummy
field and so something with it yourself. There is currently no relation
option or something.
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **protected** _string_ **`toHTML_view`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of view field
> #### **public** _string_ **`getJavascript`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
get the javascript for this field
> #### _void_ **`form_UsersselectField_moveItem`** (  ) ####
> #### _void_ **`form_UsersselectField_updateUsersField`** (  ) ####