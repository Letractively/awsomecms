_Package: 'components.core.plugins'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**functions**:
  * smarty\_function\_form
  * smarty\_modifier\_bbcode
  * smarty\_modifier\_count
  * smarty\_modifier\_date
  * smarty\_modifier\_explode
  * smarty\_modifier\_hasflag
  * smarty\_modifier\_installed
  * smarty\_modifier\_notin
  * smarty\_modifier\_text
  * smarty\_modifier\_ucfirst
## Contents: ##
The following functions are located in this package
### Functions: ###
> #### _void_ **`smarty_function_form`** ( _array_ `$params`, _Smarty_ `$smarty` ) <sup>File: components/core/plugins/function.form.php</sup> ####
Form tag, this is used to add a form from a component to a page. This will call the action and hooks related to the action of the form
> #### _bool_ **`smarty_modifier_bbcode`** ( _array_ `$array` ) <sup>File: components/core/plugins/modifier.bbcode.php</sup> ####
Modifier to count the number of elements
> #### _bool_ **`smarty_modifier_count`** ( _array_ `$array` ) <sup>File: components/core/plugins/modifier.count.php</sup> ####
Modifier to count the number of elements
> #### _string_ **`smarty_modifier_date`** ( _string_ `$string` ) <sup>File: components/core/plugins/modifier.date.php</sup> ####
Make the first letter of a string uppercase
> #### _string_ **`smarty_modifier_explode`** ( _string_ `$string` ) <sup>File: components/core/plugins/modifier.explode.php</sup> ####
Make the first letter of a string uppercase
> #### _bool_ **`smarty_modifier_hasflag`** ( _int_ `$int`, _int_ `$flag` ) <sup>File: components/core/plugins/modifier.hasflag.php</sup> ####
Modifier to binary check if a flag is in a value
> #### _bool_ **`smarty_modifier_installed`** ( _string_ `$element` ) <sup>File: components/core/plugins/modifier.installed.php</sup> ####
Modifier to check if a given component is installed
> #### _bool_ **`smarty_modifier_notin`** ( _`*`_ `$element`, _array_ `$array` ) <sup>File: components/core/plugins/modifier.notin.php</sup> ####
Modifier to check if value is in an array
> #### _bool_ **`smarty_modifier_text`** ( _array_ `$array` ) <sup>File: components/core/plugins/modifier.text.php</sup> ####
Modifier to count the number of elements
> #### _string_ **`smarty_modifier_ucfirst`** ( _string_ `$string` ) <sup>File: components/core/plugins/modifier.ucfirst.php</sup> ####
Make the first letter of a string uppercase