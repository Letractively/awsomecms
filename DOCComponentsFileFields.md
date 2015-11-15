_Package: 'components.file.fields'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [FileSelectField](DOCComponentsFileFields#FileSelectField.md)
  * [UploadField](DOCComponentsFileFields#UploadField.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `FileSelectField` ##
##### <sub>class</sub> FileSelectField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: components/file/fields/class.FileSelectField.inc</sup> #####
Field for uploading files
> #### **public** _void_ **`__construct`** ( _string_ `$name`, _int_ `$style` ) ####
Constructor
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **public** _`*`_ **`db2value`** (  `$value` ) ####
Convert the dbvalue of the param to what the field expects
> #### **public** _string_ **`value2db`** (  `$value` ) ####
Convert the value of the param to that what the DB expects
## `UploadField` ##
##### <sub>class</sub> UploadField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: components/file/fields/class.UploadField.inc</sup> #####
Field for uploading files
> #### **public** _void_ **`__construct`** ( _string_ `$name`, _int_ `$style` ) ####
Constructor
> #### **protected** _string_ **`toHTML_add`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of add field
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
> Inherited from: [Field](DOCCoreFields#Field.md)
Create a HTML representation of edit field
> #### **public** _`*`_ **`db2value`** (  `$value` ) ####
Convert the dbvalue of the param to what the field expects
> #### **public** _string_ **`value2db`** (  `$value` ) ####
Convert the value of the param to that what the DB expects
> #### **public** _void_ **`preSQL`** ( _[SQLRecord](DOCCore#SQLRecord.md)_ `$record`, _[SQLQuery](DOCCore#SQLQuery.md)_ `$query` ) ####
upload the file on edit
> #### **private** _void_ **`handleFileUpload`** (  ) ####
> #### **private** _void_ **`createThumb`** (  ) ####
> #### **public** _void_ **`validate`** (  ) ####
> #### **public** _void_ **`isRequired`** (  ) ####