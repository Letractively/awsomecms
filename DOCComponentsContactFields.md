_Package: 'components.contact.fields'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [FieldsField](DOCComponentsContactFields#FieldsField.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `FieldsField` ##
##### <sub>class</sub> FieldsField <sub>extends</sub> [Field](DOCCoreFields#Field.md) <sup>File: components/contact/fields/class.FieldsField.inc</sup> #####
Field for selecting the location within the site
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
> #### _void_ **`prossesFields`** (  ) ####
> #### _void_ **`addFieldsRow`** (  ) ####
> #### _void_ **`deleteFieldsRow`** (  ) ####
> #### _void_ **`resetFieldsRowIds`** (  ) ####