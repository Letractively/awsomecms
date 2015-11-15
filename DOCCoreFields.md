_Package: 'core.fields'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [BooleanField](DOCCoreFields#BooleanField.md)
  * [CaptchaField](DOCCoreFields#CaptchaField.md)
  * [DateField](DOCCoreFields#DateField.md)
  * [Field](DOCCoreFields#Field.md)
  * [IntField](DOCCoreFields#IntField.md)
  * [PasswordField](DOCCoreFields#PasswordField.md)
  * [TablePermissionField](DOCCoreFields#TablePermissionField.md)
  * [TagField](DOCCoreFields#TagField.md)
  * [TextField](DOCCoreFields#TextField.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `BooleanField` ##
##### <sub>class</sub> BooleanField <sub>extends</sub> [IntField](DOCCoreFields#IntField.md) <sup>File: core/fields/class.BooleanField.inc</sup> #####
Boolean field.
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **protected** _string_ **`toHTML_view`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of view field
## `CaptchaField` ##
##### <sub>class</sub> CaptchaField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: core/fields/class.CaptchaField.inc</sup> #####
Captcha field to prevent bots.
> #### **public** _void_ **`__construct`** ( _string_ `$name`, _string_ `$displayName`, _int_ `$style` ) ####
Constructor
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **public** _void_ **`validate`** ( _int_ `$mode` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Validate the data for this field. This throws a FormException when not valid
## `DateField` ##
##### <sub>class</sub> DateField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: core/fields/class.DateField.inc</sup> #####
Date field, this shows a date selection field
> #### **public** _string_ **`value2db`** (  `$value` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Convert the value of the param to that what the DB expects
> #### **public** _`*`_ **`getValue`** ( _object_ `$data` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
get the data from this field
> #### **public** _`*`_ **`getDefaultValue`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Get the default value of this field
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
## `Field` ##
##### <sub>class</sub> Field <sup>File: core/fields/class.Field.inc</sup> #####
Superclass for a Field.
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`__construct`** ( _string_ `$name`, _`*`_ `$value` ) ####
Constructor of the field
> #### **public** _bool_ **`hasFlag`** ( _int_ `$flag` ) ####
Check if this field has a give flag
> #### **public** _string_ **`getName`** (  ) ####
Get the name of this field
> #### **public** _string_ **`getDisplayName`** (  ) ####
Get the name that should be show in the forms
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setValue`** ( _`*`_ `$value` ) ####
Set the Value of this field
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setParent`** ( _[Table](DOCCore#Table.md)_ `$value` ) ####
Set the Parent table of this field
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setRequestValue`** ( _`*`_ `$value` ) ####
Set the value that the field got in the request
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setData`** ( _object_ `$value` ) ####
Set the Value of this field with an result object
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setRequestData`** ( _object_ `$record` ) ####
Set the request value of this field with an request object
> #### **public** _`*`_ **`getValue`** ( _object_ `$data` ) ####
get the data from this field
> #### **public** _`*`_ **`getRequestValue`** ( _object_ `$data` ) ####
get the request data from this field
> #### **public** _bool_ **`hasValue`** ( _array_ `$data` ) ####
Check if this field has a value that is not empty
> #### **public** _bool_ **`isRequired`** ( _int_ `$mode` ) ####
Check if this field is required
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setRequired`** ( _bool_ `$required` ) ####
Set the field to be required
> #### **public** _bool_ **`canBeNull`** (  ) ####
Check if this field can be null
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setCanBeNull`** ( _bool_ `$null` ) ####
Set the field to be null
> #### **public** _`*`_ **`getDefaultValue`** (  ) ####
Get the default value of this field
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setDefaultValue`** ( _`*`_ `$value` ) ####
Set the field to have a default value
> #### **public** _int_ **`getMaxSize`** (  ) ####
get the max size of this field
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setMaxSize`** ( _int_ `$size` ) ####
Set the field max size, -1 to have no size
> #### **public** _bool_ **`isIndex`** (  ) ####
Check if this field in an index field
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`setIndex`** ( _string_ `$index` ) ####
Set the field ability to have an index
> #### **public** _bool_ **`visible`** ( _int_ `$mode` ) ####
check if this field is visible
> #### **public** _string_ **`__get`** ( _string_ `$name` ) ####
This is designed to give fast acces to the toHTML functions
> #### **public** _void_ **`toHTML`** ( _int_ `$mode` ) ####
Get the HTML representation of this field.
NOTE:Do not overwrite this function. Use the toHTML\_add/edit/view instaid if you want to change the way the HTML looks
> #### **public** _string_ **`__toString`** (  ) ####
String representation of this field
> #### **protected** _string_ **`toHTML_add`** (  ) ####
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
Create a HTML representation of edit field
> #### **protected** _string_ **`toHTML_edit_hidden`** (  ) ####
Create a HTML representation of hidden field
> #### **protected** _string_ **`toHTML_view`** (  ) ####
Create a HTML representation of view field
> #### **public** _string_ **`getJavascript`** (  ) ####
get the javascript for this field
> #### **public** _void_ **`select`** (  `$query`,  `$data` ) ####
Add select data for this field to a query
> #### **public** _void_ **`insert`** (  `$query`,  `$data` ) ####
Add insert data for this field to a query
> #### **public** _void_ **`update`** (  `$query`,  `$data` ) ####
Add update data for this field to a query
> #### **public** _void_ **`delete`** (  `$query`,  `$data` ) ####
Add delete data for this field to a query
> #### **public** _void_ **`validate`** ( _int_ `$mode` ) ####
Validate the data for this field. This throws a FormException when not valid
> #### **public** _string_ **`value2db`** (  `$value` ) ####
Convert the value of the param to that what the DB expects
> #### **public** _`*`_ **`db2value`** (  `$value` ) ####
Convert the dbvalue of the param to what the field expects
> #### **public** _string_ **`getDBName`** (  ) ####
Get the name to be used in the SQL queries
> #### **public** _void_ **`preSQL`** ( _`*`_ `Array record that was used`, _[SQLQuery](DOCCore#SQLQuery.md)_ `$query` ) ####
preform this action prior to the SQL execution that uses this field
> #### **public** _void_ **`postSQL`** ( _[SQLRecord](DOCCore#SQLRecord.md)_ `$sqlrecord`, _array_ `$record`, _[SQLQuery](DOCCore#SQLQuery.md)_ `$query` ) ####
preform this action prior to the SQL execution that uses this field
## `IntField` ##
##### <sub>class</sub> IntField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: core/fields/class.IntField.inc</sup> #####
Integer field
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **public** _string_ **`getJavascript`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
get the javascript for this field
> #### _void_ **`form_IntField_handleKey`** (  ) ####
> #### **public** _void_ **`validate`** ( _int_ `$mode` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Validate the data for this field. This throws a FormException when not valid
## `PasswordField` ##
##### <sub>class</sub> PasswordField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: core/fields/class.PasswordField.inc</sup> #####
Password field
> #### **public** _void_ **`__construct`** ( _string_ `$name`, _string_ `$displayName`, _int_ `$style` ) ####
Constructor
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **public** _void_ **`value2db`** (  ) ####
> #### **public** _void_ **`db2value`** (  ) ####
## `TablePermissionField` ##
##### <sub>class</sub> TablePermissionField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: core/fields/class.TablePermissionField.inc</sup> #####
TablePermissionField field, with this field you can add a callback to each
row which will hide icons
> #### **public** _void_ **`__construct`** ( _string_ `$name`, _string_ `$displayName`, _int_ `$style` ) ####
Constructor
> #### **public** _void_ **`postSQL`** ( _[SQLRecord](DOCCore#SQLRecord.md)_ `$sqlrecord`, _array_ `$record`, _[SQLQuery](DOCCore#SQLQuery.md)_ `$query` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
preform this action prior to the SQL execution that uses this field
> #### **private** _void_ **`premissions`** ( _object_ `$row` ) ####
Set the premissions for this row if the callback was not valid
## `TagField` ##
##### <sub>class</sub> TagField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: core/fields/class.TagField.inc</sup> #####
Tag field, this allows for quick search and assignment of tags
> #### **public** _void_ **`preSQL`** ( _`*`_ `Array record that was used`, _[SQLQuery](DOCCore#SQLQuery.md)_ `$query` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
preform this action prior to the SQL execution that uses this field
> #### **public** _void_ **`select`** (  `$query`,  `$data` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Add select data for this field to a query
> #### **public** _void_ **`insert`** (  `$query`,  `$data` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Add insert data for this field to a query
> #### **public** _void_ **`update`** (  `$query`,  `$data` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Add update data for this field to a query
> #### **public** _void_ **`delete`** (  `$query`,  `$data` ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Add delete data for this field to a query
> #### **public** _string_ **`getJavascript`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
get the javascript for this field
> #### **private** _void_ **`getAllTags`** (  ) ####
## `TextField` ##
##### <sub>class</sub> TextField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: core/fields/class.TextField.inc</sup> #####
Textarea field
> #### **public** _void_ **`__construct`** ( _string_ `$name`, _string_ `$displayName`, _int_ `$style` ) ####
Constructor
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **public** _string_ **`getJavascript`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
get the javascript for this field
> #### _void_ **`bindEditor`** (  ) ####