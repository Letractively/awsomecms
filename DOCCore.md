_Package: 'core'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**functions**:
  * import
  * importField
  * getFrameworkRoot
  * handleError
  * parseInfoFile
  * addSlashesConfig
  * getActions
  * urlEscape
  * str\_rand
  * makeLink
**classes**:
  * [Authentication](DOCCore#Authentication.md)
  * [AuthComponent](DOCCore#AuthComponent.md)
  * [Cache](DOCCore#Cache.md)
  * [Component](DOCCore#Component.md)
  * [Config](DOCCore#Config.md)
  * [ComponentNotFoundException](DOCCore#ComponentNotFoundException.md)
  * [ActionNotFoundException](DOCCore#ActionNotFoundException.md)
  * [NotInstanciatedException](DOCCore#NotInstanciatedException.md)
  * [UnauthException](DOCCore#UnauthException.md)
  * [Notifications](DOCCore#Notifications.md)
  * [Controller](DOCCore#Controller.md)
  * [Debugger](DOCCore#Debugger.md)
  * [Extention](DOCCore#Extention.md)
  * [FormException](DOCCore#FormException.md)
  * [InvalidFormException](DOCCore#InvalidFormException.md)
  * [Language](DOCCore#Language.md)
  * [RegisterManager](DOCCore#RegisterManager.md)
  * [ForbiddenException](DOCCore#ForbiddenException.md)
  * [Request](DOCCore#Request.md)
  * [SQLExeption](DOCCore#SQLExeption.md)
  * [SQLConnenectionExeption](DOCCore#SQLConnenectionExeption.md)
  * [SQLQuery](DOCCore#SQLQuery.md)
  * [SQLRecord](DOCCore#SQLRecord.md)
  * [SQL](DOCCore#SQL.md)
  * [PageNotFoundExeption](DOCCore#PageNotFoundExeption.md)
  * [NotInstalledException](DOCCore#NotInstalledException.md)
  * [SmartyPageLoader](DOCCore#SmartyPageLoader.md)
  * [DataContainer](DOCCore#DataContainer.md)
  * [Table](DOCCore#Table.md)
## Contents: ##
The following functions are located in this package
### Functions: ###
> #### _void_ **`import`** ( _string_ `$file` ) <sup>File: core/functions.util.inc</sup> ####
Import a file, with the root the framework root
> #### _void_ **`importField`** ( _string_ `$field` ) <sup>File: core/functions.util.inc</sup> ####
Import a field.
You can use {FieldName} for core fields and {component}.{FieldName} for component specific fields.
> #### _string_ **`getFrameworkRoot`** (  ) <sup>File: core/functions.util.inc</sup> ####
Get the root of the framework
> #### _bool_ **`handleError`** ( _int_ `$errno`, _string_ `$errstr`, _string_ `$errfile`, _int_ `$errline` ) <sup>File: core/functions.util.inc</sup> ####
Error handeler for the framework
> #### _array_ **`parseInfoFile`** ( _string_ `$file`, _string_ `$component` ) <sup>File: core/functions.util.inc</sup> ####
Parse an info file from a component
> #### _string_ **`addSlashesConfig`** ( _string_ `$string` ) <sup>File: core/functions.util.inc</sup> ####
Add slashes to a string only when magic\_quotes\_gpc is turned off.
> #### _array_ **`getActions`** ( _string_ `$component` ) <sup>File: core/functions.util.inc</sup> ####
Get the actions of a give component
> #### _string_ **`urlEscape`** ( _string_ `$string` ) <sup>File: core/functions.util.inc</sup> ####
Clean up a string so it can be validly passed in the url
> #### _void_ **`str_rand`** ( _int_ `$p` ) <sup>File: core/functions.util.inc</sup> ####
Generate a random string
> #### _string_ **`makeLink`** ( _`*`_ `* $url` ) <sup>File: core/functions.util.inc</sup> ####
Create a link, based on if the $url is a String or an Array with <Component, String>
The following classes are located in this package
### Classes: ###
## `Authentication` ##
##### <sub>class</sub> Authentication <sup>File: core/class.Authentication.inc</sup> #####
Authentication class that is a facade for loggin in and out
> #### **public** **static** _bool_ **`login`** ( _string_ `$user_name`, _string_ `$user_pass` ) ####
Login, and setting the user session. This calls the component set in the config
> #### **public** **static** _bool_ **`logout`** (  ) ####
Logout, and clearing the user session. This calls the component set in the config
## `AuthComponent` ##
##### <sub>interface</sub> AuthComponent <sup>File: core/class.Authentication.inc</sup> #####
Interface class for componentn that want to provide login service
> #### **public** _array_ **`getPrivilageMapping`** (  `$privileges` ) ####
Get the mapping of all privilages and if the user has it
> #### **public** _bool_ **`auth_login`** ( _string_ `$user_name`, _string_ `$user_pass` ) ####
Log the user in
> #### **public** _bool_ **`auth_logout`** (  ) ####
Log the user out
## `Cache` ##
##### <sub>class</sub> Cache <sup>File: core/class.Cache.inc</sup> #####
Cache class which handels quick caching of data
NOTE: data is serialized using the build-in PHP serialize and unserialize
functions, make sure your data can be serialized.
More info: http://php.net/manual/en/language.oop5.serialization.php
> #### **public** **static** _string_ **`getCacheDir`** (  ) ####
Get the cache directory
> #### **public** **static** _`*`_ **`get`** ( _string_ `$key` ) ####
Get cached data
> #### **public** **static** _bool_ **`has`** ( _string_ `$key` ) ####
Check if there is cached data
> #### **public** **static** _void_ **`set`** ( _string_ `$key`, _string_ `$value` ) ####
Set cached data
> #### **public** **static** _void_ **`clear`** ( _string_ `$key` ) ####
Clear cached data
## `Component` ##
##### <sub>class</sub> Component <sup>File: core/class.Component.inc</sup> #####
Superclass for all the components
> #### **public** _void_ **`__construct`** ( _string_ `$component` ) ####
constructor
> #### **public** **static** _[Component](DOCCore#Component.md)_ **`init`** ( _string_ `$component` ) ####
Initialisation of the component corresponding with the give name
> #### **public** **static** _[Component](DOCCore#Component.md)_ **`createComponent`** ( _string_ `$name`, _string_ `$path` ) ####
Create a component instance based on the name and the path

NOTE: do not use this, use Component::init().
Only use this to resolve ciclur reference from the register manager
> #### **protected** _void_ **`setDefaultRequest`** ( _string_ `$request` ) ####
Set the default request that is linked to the component, default is the same as the component name
> #### **public** _string_ **`getName`** (  ) ####
Get the name of the component
> #### **protected** _void_ **`redirect`** ( _string_ `$url`, _array_ `$data` ) ####
Do an redirect
> #### **protected** _void_ **`ajax`** ( _`*`_ `$data` ) ####
Do an ajax return (just data, no HTML) in json format
> #### **protected** _array_ ~~**`getFields`**~~ (  ) ####
> Deprecated: Use tables
Get the fields for this component
> #### **protected** _void_ ~~**`setCurrentTable`**~~ ( _string_ `$table` ) ####
> Deprecated: Use tables
Set the current table to be validated against
> #### **public** _void_ **`registerMenuItems`** ( _[Menu](DOCComponentsPageUtil#Menu.md)_ `$menu` ) ####
Register menu items for this component
> #### **public** _void_ **`registerTreeItems`** ( _[Tree](DOCComponentsPageUtil#Tree.md)_ `$tree` ) ####
Register tree items for this component
> #### **public** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
Register actions/hooks/mappings to the framework
> #### **public** _void_ **`execCron`** (  ) ####
Execute a task for the cron. This called in the interval secified in the config files.
## `Config` ##
##### <sub>class</sub> Config <sup>File: core/class.Config.inc</sup> #####
Configuration class, this is used to retrive all the data from seperate config files
> #### **public** **static** _[Config](DOCCore#Config.md)_ **`getInstance`** (  ) ####
singelton
> #### **public** **static** _`*`_ **`get`** ( _string_ `$key`, _`*`_ `$default`, _string_ `$section` ) ####
Get something from the config
> #### **private** _void_ **`__construct`** (  ) ####
constructor
> #### **public** _void_ **`inject`** ( _array_ `$data` ) ####
Inject data into the config. This can be used to add data to the
config while there is no config file to read yet.
> #### **private** _void_ **`fillData`** (  ) ####
Populate the config from the ini files
> #### **public** _`*`_ **`getItem`** ( _string_ `$key`, _`*`_ `$default`, _string_ `$section` ) ####
Get something from the config
> #### **public** _void_ **`reload`** (  ) ####
reload the config values, this should be called when the config is changed during the execution of a page
> #### **public** _void_ **`set`** ( _string_ `$key`, _`*`_ `$default`, _string_ `$section` ) ####
Set something for the current request.
Note that the value is not saved in a config.
> #### **public** **static** _bool_ **`hasFlag`** ( _int_ `$int`, _int_ `$flag` ) ####
Check if a value contains another value. This is done using bitwise comparison
## `ComponentNotFoundException` ##
##### <sub>class</sub> ComponentNotFoundException <sub>extends</sub> Exception <sup>File: core/class.Controller.inc</sup> #####
Exception thrown if the given component is not installed or found
## `ActionNotFoundException` ##
##### <sub>class</sub> ActionNotFoundException <sub>extends</sub> Exception <sup>File: core/class.Controller.inc</sup> #####
Exception thrown if the given action for an component could not be found
## `NotInstanciatedException` ##
##### <sub>class</sub> NotInstanciatedException <sub>extends</sub> Exception <sup>File: core/class.Controller.inc</sup> #####
Exception thrown if controller is waiting for the setData to be called
## `UnauthException` ##
##### <sub>class</sub> UnauthException <sub>extends</sub> Exception <sup>File: core/class.Controller.inc</sup> #####
Exception to be triggered when the current user does not have the proper authorization
## `Notifications` ##
##### <sub>class</sub> Notifications <sup>File: core/class.Controller.inc</sup> #####
Manager for handeling notifications
> #### **public** **static** _[Notifications](DOCCore#Notifications.md)_ **`getInstance`** (  ) ####
Singelton
> #### **private** _void_ **`__construct`** (  ) ####
Constructor
> #### **public** _void_ **`addNotification`** ( _string_ `$mess`, _string_ `$url` ) ####
Add a notifications for a given URL
> #### **public** _bool_ **`hasNotification`** ( _string_ `$key` ) ####
Check if a given notification already exists
> #### **public** _array_ **`getNotifications`** ( _string_ `$url` ) ####
Get the notifications for a give URL
> #### **public** _void_ **`save`** (  ) ####
Save the notications to the session.

Note: This is also called when changes happen inside this object
> #### **public** _void_ **`removeNotification`** ( _string_ `$url` ) ####
remove the notifications for an URL
## `Controller` ##
##### <sub>class</sub> Controller <sup>File: core/class.Controller.inc</sup> #####
Controller class that handels all the incomming data requests
> #### **public** **static** _[Controller](DOCCore#Controller.md)_ **`getInstance`** (  ) ####
Singelton
> #### **public** _void_ **`dispatch`** ( _Smarty_ `$smarty`, _[SmartyPageLoader](DOCCore#SmartyPageLoader.md)_ `$smartyLoader` ) ####
Handle a request
> #### **public** _void_ **`setOutput`** (  `$string` ) ####
Set the output to be returned on completion, this is used so that on
redirecting there is no content.
> #### **public** _void_ **`appendOutput`** (  `$string` ) ####
Append the output to be returned on completion, this is used so that on
redirecting there is no content.
> #### **public** _`*`_ **`callAction`** ( _[Component](DOCCore#Component.md)_ `$component`, _string_ `$action`, _[Request](DOCCore#Request.md)_ `$request` ) ####
call an action on a component with it's hooks
> #### **public** _void_ **`callTable`** ( _[Component](DOCCore#Component.md)_ `$component`, _string_ `$action`, _[Request](DOCCore#Request.md)_ `$request` ) ####
Handel the request made by the proxy
> #### **public** _[Request](DOCCore#Request.md)_ **`getRequest`** (  ) ####
Get the request
> #### **public** _Smarty_ **`getSmarty`** (  ) ####
Get the smarty object that is used for the page rendering
> #### **public** _array_ **`getActionAuthExceptions`** (  ) ####
List of action that do not need auth checking
> #### **public** _void_ **`redirect`** ( _string_ `$url`, _array_ `$data` ) ####
Do an redirect, based on what is set.
> #### **public** _bool_ **`isRedirecting`** (  ) ####
Check if the page will be redirecting once done
> #### **public** _void_ **`setRedirect`** ( _string_ `$url` ) ####
Set the redirect, this can be used to prospone the redirect till everything is done executing
## `Debugger` ##
##### <sub>class</sub> Debugger <sup>File: core/class.Debugger.inc</sup> #####
Debugger class that handels all debug messages generated from the CMS
> #### **public** **static** _[Debugger](DOCCore#Debugger.md)_ **`getInstance`** (  ) ####
singelton
> #### **private** _void_ **`__construct`** (  ) ####
constructor
> #### **public** _`*`_ **`setRobot`** (  `$robot` ) ####
Set the robot that was used when visiting the site
> #### **public** _void_ **`log`** ( _string_ `$message`, _int_ `$level` ) ####
Add a log message
> #### **public** _void_ **`warning`** ( _string_ `$message` ) ####
Add a warning message
> #### **public** _void_ **`error`** ( _string_ `$message` ) ####
Add a error message
> #### **public** _void_ **`notice`** ( _string_ `$message` ) ####
Add a notice message
> #### **public** _string_ **`__toString`** (  ) ####
Converet the debugger to a string representation
> #### **public** _string_ **`renderDebug`** (  ) ####
Render the debug list as HTML
> #### _void_ **`debug_hadCookie`** (  ) ####
> #### _void_ **`debug_toggleDebug`** (  ) ####
> #### **public** _void_ **`setType`** (  ) ####
## `Extention` ##
##### _abstract_ <sub>class</sub> Extention <sup>File: core/class.Extention.inc</sup> #####
Abstract class for extentions, these are small files which can extend the
framework with smarty plugins or url Hooks
> #### **public** **static** _[Extention](DOCCore#Extention.md)_ **`init`** ( _string_ `$name` ) ####
Create an extention
> #### **abstract** _void_ **`register`** ( _[RegisterManager](DOCCore#RegisterManager.md)_ `$registerManager` ) ####
Register items to the registerManager
> #### **abstract** _void_ **`extend`** ( _Smarty_ `$smarty` ) ####
Register items to Smarty
## `FormException` ##
##### <sub>class</sub> FormException <sub>extends</sub> Exception <sup>File: core/class.InvalidFormException.inc</sup> #####
Exception to be triggered when a field is not validly filled in
> #### **public** _void_ **`__construct`** (  ) ####
> #### **public** _string_ **`getField`** (  ) ####
Get the field that were not valid
## `InvalidFormException` ##
##### <sub>class</sub> InvalidFormException <sub>extends</sub> Exception <sup>File: core/class.InvalidFormException.inc</sup> #####
Exception class when a form is not valid
> #### **public** _void_ **`__construct`** (  ) ####
> #### **public** _void_ **`addInvalidField`** ( _string_ `$field`, _string_ `$message` ) ####
Add field that is was not valid
> #### **public** _array_ **`getInvalidFields`** (  ) ####
Get the fields that were not valid
> #### **public** _object_ **`getRecord`** (  ) ####
Get the record that was not valid
> #### **public** _string_ **`getRedirect`** (  ) ####
Get the page that should be redirected to
> #### **public** _void_ **`getTable`** (  ) ####
Get the table that the fields belong to
> #### **public** _array_ **`getRedirectData`** (  ) ####
Get the data that should be passed when redirecting
> #### **public** _void_ **`setRedirectData`** ( _array_ `$redirectData` ) ####
Set the data that should be passed when redirecting
> #### **public** _void_ **`__toString`** (  ) ####
## `Language` ##
##### <sub>class</sub> Language <sup>File: core/class.Language.inc</sup> #####
Multilanguage class which handels translation
> #### **public** **static** _[Language](DOCCore#Language.md)_ **`getInstance`** (  ) ####
Singelton
> #### **public** **static** _string_ **`get`** ( _string_ `$key`, _string_ `$lang` ) ####
Static way to get a language string from a key
> #### **public** _string_ **`getText`** ( _string_ `$key`, _string_ `$lang` ) ####
Get a language string from a key
> #### **public** _array_ **`getLangMap`** ( _string_ `$lang` ) ####
Get mapped keys to string for a given language
> #### **private** _void_ **`loadLang`** ( _string_ `$lang` ) ####
Load a language file based on the language key
## `RegisterManager` ##
##### <sub>class</sub> RegisterManager <sup>File: core/class.RegisterManager.inc</sup> #####
Manager for registering components, hooks, mappings and pages dynamicly
> #### **public** **static** _[RegisterManager](DOCCore#RegisterManager.md)_ **`getInstance`** (  ) ####
Singelton
> #### **private** _void_ **`__construct`** (  ) ####
Construcor
> #### **public** _void_ **`needsRevalidation`** (  ) ####
Check if the cache is avalible and usable
> #### **private** _void_ **`load`** (  ) ####
Load the content for the RegisterManager, either from cache or from the components
> #### **private** _void_ **`save`** (  ) ####
Cache the content of the RegisterManager
> #### **public** _void_ **`reload`** ( _Bool_ `$noload` ) ####
Reload the content of the RegisterManager
> #### **public** _void_ **`registerHook`** (  ) ####
Register a Hook
> #### **public** _void_ **`registerPage`** ( _`*`_ `* $url`, _`*`_ `$content` ) ####
Register a page
> #### **public** _void_ **`registerAuth`** ( _string_ `$action`, _string_ `$group` ) ####
Register an auth group to which this action belongs
> #### **public** _void_ **`registerURLMap`** ( _string_ `$pattern`, _string_ `$action`, _int_ `$sort` ) ####
Register an urlmapping
> #### **public** _void_ **`getHook`** (  ) ####
Get a Hook
> #### **public** _string_ **`getPage`** ( _`*`_ `* $url` ) ####
Get a page
> #### **public** _void_ **`getURLMap`** ( _string_ `$url`, _array_ `$request` ) ####
Get the mapping for an URL
> #### **public** _array_ **`getComponents`** (  ) ####
Get all components
> #### **public** _array_ **`getComponent`** ( _string_ `$name` ) ####
Get a component
> #### **public** _array_ **`getAuths`** (  ) ####
Get all registered Auth groups
> #### **public** _bool_ **`hasComponent`** ( _string_ `$component` ) ####
Check if a component is installed
> #### **public** _bool_ **`hasPage`** ( _string_ `$pageName`, _string_ `$pageLocation` ) ####
Check if a page is rgistered
> #### **public** _bool_ **`hasHook`** ( _string_ `$component`, _string_ `$action`, _string_ `$prepost` ) ####
Check if a hook is rgistered
> #### **public** _void_ **`hasAuth`** ( _string_ `$action`, _array_ `$user` ) ####
Check if an user can execute the given action
NOTE: if there is no information on the action, valid is assumed
## `ForbiddenException` ##
##### <sub>class</sub> ForbiddenException <sub>extends</sub> Exception <sup>File: core/class.Request.inc</sup> #####
Exception thrown when you cannot make an call to that action
## `Request` ##
##### <sub>class</sub> Request <sup>File: core/class.Request.inc</sup> #####
request object, datawrapper for an request call
> #### **public** _void_ **`__construct`** (  ) ####
Constructor, all relevent data is gathered here
> #### **public** _bool_ **`isMadeByProxy`** (  ) ####
Check if the request is made through the proxy url
> #### **public** _string_ **`translateAction`** (  ) ####
translate the HTTP method to SQL method
## `SQLExeption` ##
##### <sub>class</sub> SQLExeption <sub>extends</sub> Exception <sup>File: core/class.SQL.inc</sup> #####
SQLException when there was an error in executing a given Query
## `SQLConnenectionExeption` ##
##### <sub>class</sub> SQLConnenectionExeption <sub>extends</sub> [SQLExeption](DOCCore#SQLExeption.md) <sup>File: core/class.SQL.inc</sup> #####
SQLException when there was a problem connecting to the database
## `SQLQuery` ##
##### <sub>class</sub> SQLQuery <sup>File: core/class.SQL.inc</sup> #####
Abstraction of a SQL query
> #### **private** _void_ **`__construct`** ( _string_ `$action` ) ####
Constructor
> #### **public** _string_ **`getAction`** (  ) ####
return the action for this query
> #### **public** **static** _[SQLQuery](DOCCore#SQLQuery.md)_ **`doSelect`** ( _string_ `$field`, _string_ `$distrinct` ) ####
Create a select query object
> #### **public** **static** _[SQLQuery](DOCCore#SQLQuery.md)_ **`doInsert`** ( _string_ `$field`, _string_ `$value` ) ####
Create a insert query object
> #### **public** **static** _[SQLQuery](DOCCore#SQLQuery.md)_ **`doMInsert`** ( _array_ `$values` ) ####
Create a multiple insert query object
> #### **public** **static** _[SQLQuery](DOCCore#SQLQuery.md)_ **`doUpdate`** ( _string_ `$field`, _string_ `$value` ) ####
Create a update query object
> #### **public** **static** _[SQLQuery](DOCCore#SQLQuery.md)_ **`doDelete`** (  ) ####
Create a delete query object
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`select`** ( _string_ `$field`, _bool_ `$distrinct` ) ####
add select statement
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`insert`** ( _string_ `$field`, _`*`_ `$value` ) ####
add insert statement
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`mInsert`** ( _array_ `$values` ) ####
add insert statement
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`insertWhenSet`** ( _string_ `$field`, _`*`_ `$value` ) ####
add insert statement, only when the value is set
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`update`** ( _string_ `$field`, _`*`_ `$value` ) ####
add update statement
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`updateWhenSet`** ( _string_ `$field`, _`*`_ `$value` ) ####
add update statement, only when the value is set
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`table`** ( _string_ `$table` ) ####
add tabel
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`where`** ( _string_ `$field`, _`*`_ `$value`, _string_ `$comparison`, _string_ `$orAnd` ) ####
add where statement
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`whereWhenSet`** ( _string_ `$field`, _`*`_ `$value`, _string_ `$comparison`, _string_ `$orAnd` ) ####
add where statement, only when the value is set
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`groupBy`** ( _string_ `$field` ) ####
add group statement
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`orderBy`** ( _string_ `$field`, _string_ `$sort` ) ####
add order statement
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`limit`** ( _int_ `$amount`, _in_ `$start` ) ####
add limit statement
> #### **public** _[SQLQuery](DOCCore#SQLQuery.md)_ **`join`** ( _string_ `$table`, _string_ `$local`, _string_ `$forign`, _string_ `$type` ) ####
add join statement
> #### **public** **static** _bool_ **`isEmpty`** ( _string_ `$value` ) ####
Check if a value is empty
> #### **public** _[SQLRecord](DOCCore#SQLRecord.md)_ **`exec`** (  ) ####
execute the statement
> #### **public** _string_ **`getSQL`** (  ) ####
Get the SQL statement as a string formed by this query
> #### **public** _array_ **`getTables`** (  ) ####
Get a list of all table objects
> #### **private** _string_ **`getTablesString`** (  ) ####
Get a string containing the table names
> #### **private** _string_ **`getSelectSQL`** (  ) ####
Get the SQL statement for an select
> #### **private** _string_ **`getInsertSQL`** (  ) ####
Get the SQL statement for an insert
> #### **private** _string_ **`getMInsertSQL`** (  ) ####
Get the SQL statement for an multiple insert
> #### **private** _string_ **`getUpdateSQL`** (  ) ####
Get the SQL statement for an update
> #### **private** _string_ **`getDeleteSQL`** (  ) ####
Get the SQL statement for an Delete
> #### **public** _void_ **`getRequest`** (  ) ####
## `SQLRecord` ##
##### <sub>class</sub> SQLRecord <sup>File: core/class.SQL.inc</sup> #####
SQLRecord that is a wrapper for all data generated from the queries
> #### **public** _void_ **`__construct`** (  ) ####
> #### **public** _`*`_ **`getRows`** (  ) ####
Get all the rows that were returned by the query
> #### **public** _object_ **`getRow`** (  ) ####
Get a row and move the interal point one place ahead. returns false when there are no more rows
> #### **public** _void_ **`reset`** (  ) ####
reset the internal pointer
> #### **public** _int_ **`count`** (  ) ####
Get the amount of rows returned by the query
> #### **public** _int_ **`insertID`** (  ) ####
Get the latest ID from the last insert. This is 0 when there was no insert done
## `SQL` ##
##### <sub>class</sub> SQL <sup>File: core/class.SQL.inc</sup> #####
SQL class that handels the connection to the database
> #### **public** **static** _[SQL](DOCCore#SQL.md)_ **`getInstance`** (  ) ####
Get a SQL instance
> #### **private** _void_ **`__construct`** (  ) ####
> #### **public** _void_ **`reconnect`** (  ) ####
Reconnect with the database
> #### **public** _PDO_ **`getPDOInstance`** (  ) ####
Get the PDO instance that this SQL class uses
> #### **public** _[SQLRecord](DOCCore#SQLRecord.md)_ **`query`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query` ) ####
Execute a query
> #### **public** _array_ **`multi_query`** ( _string_ `$queries` ) ####
Execute multiple queries
> #### **private** _void_ **`triggerSQLError`** ( _string_ `$error`, _int_ `$type` ) ####
Trigger a SQL exception and throws it
## `PageNotFoundExeption` ##
##### <sub>class</sub> PageNotFoundExeption <sub>extends</sub> Exception <sup>File: core/class.SmartyPageLoader.inc</sup> #####
Exception thrown when a page could not be found
## `NotInstalledException` ##
##### <sub>class</sub> NotInstalledException <sub>extends</sub> Exception <sup>File: core/class.SmartyPageLoader.inc</sup> #####
Exception to be triggered when the framework is not properly installed (No components)
## `SmartyPageLoader` ##
##### <sub>class</sub> SmartyPageLoader <sup>File: core/class.SmartyPageLoader.inc</sup> #####
Handel all the database loading and file checking. Also do some util
actions with smarty, like loading all the plugins
> #### **public** _void_ **`__construct`** (  ) ####
constructor
> #### **public** _string_ **`getPage`** ( _string_ `$url`, _Smarty_ `$smarty_obj` ) ####
Get the HTML of an page
> #### **public** _string_ **`getRenderedPage`** ( _string_ `$content`, _string_ `$url`, _Smarty_ `$smarty_obj` ) ####
Get the page with the rendered page with the layout wraped around it
> #### **public** _bool_ **`getTemplate`** ( _string_ `$tpl_name`, _string_ `$tpl_source`, _Smarty_ `$smarty_obj` ) ####
load the template from the database
> #### **public** _bool_ **`getTimestamp`** ( _string_ `$tpl_name`, _string_ `$tpl_timestamp`, _Smarty_ `$smarty_obj` ) ####
check the timestamp for an template
> #### **public** _bool_ **`getSecure`** (  `$tpl_name`,  `$smarty_obj` ) ####
check if the template is secure
> #### **public** _bool_ **`getTrusted`** ( _string_ `$tpl_name`, _Smarty_ `$smarty_obj` ) ####
check if the template is trusted
> #### **public** _void_ **`registerModulePlugins`** ( _Smarty_ `$smarty_obj` ) ####
register all the smarty extentions from the components,
see http://smarty.net/manual/en/plugins.php
## `DataContainer` ##
##### <sub>class</sub> DataContainer <sup>File: core/class.Table.inc</sup> #####
Container for dynamic data, this always returnes NULL when a propertie is not found
> #### **public** _`*`_ **`__get`** ( _`*`_ `$key` ) ####
Getter
> #### **public** _void_ **`__set`** ( _`*`_ `$key`, _`*`_ `$value` ) ####
Setter
> #### **public** **static** _`*`_ **`init`** ( _object_ `$data` ) ####
Wrap an object or an array containing object in the DataContainer
## `Table` ##
##### _abstract_ <sub>class</sub> Table <sup>File: core/class.Table.inc</sup> #####
Abstract class that handels all the information about a table
> #### **public** **static** _[Table](DOCCore#Table.md)_ **`init`** ( _string_ `$table` ) ####
Static function to get a table object
> #### **public** _[Table](DOCCore#Table.md)_ **`__construct`** ( _string_ `$name` ) ####
Constructor for Table
> #### **public** _[Table](DOCCore#Table.md)_ **`setExternal`** ( _bool_ `$fromExternal` ) ####
Set if the table is being accessed from an external source.
> #### **public** _bool_ **`getExternal`** (  ) ####
Check if the table is being accessed from an external source.
> #### **public** _[Table](DOCCore#Table.md)_ **`setMultipart`** ( _bool_ `$multipart` ) ####
Set the multipart so the forms are send with that field
> #### **public** _[Table](DOCCore#Table.md)_ **`assign`** ( _string_ `$component` ) ####
Assign the table to a component with an action.
> #### **public** _[Table](DOCCore#Table.md)_ **`addField`** ( _[Field](DOCCoreFields#Field.md)_ `$field`, _int_ `$sort` ) ####
Add Field to the table
> #### **public** _string_ **`__get`** ( _string_ `$name` ) ####
This is designed to give fast acces to the toHTML functions
> #### **public** _[Field](DOCCoreFields#Field.md)_ **`getField`** ( _string_ `$name` ) ####
Get a field based on it's name, NULL when there was no field found
> #### **public** _array_ **`getFields`** (  ) ####
Get all the fields in this table
> #### **public** _array_ **`getKeys`** (  ) ####
Get all the fields in this table which are keys
> #### **public** _string_ **`getName`** (  ) ####
Get the name of this tabel.
> #### **public** _string_ **`getTitle`** (  ) ####
Get the title of this tabel record. This is a pre-parsed string with the values from the record
> #### **public** _[Table](DOCCore#Table.md)_ **`setTitle`** (  `$titleString` ) ####
Set the title of this tabel record. This is a string with the field names between [and ](.md)
> #### **public** _[Table](DOCCore#Table.md)_ **`setRecord`** ( _object_ `$data` ) ####
Set the current record of the table
> #### **public** _[Table](DOCCore#Table.md)_ **`setRequest`** ( _object_ `$data` ) ####
Set the request data for this table
> #### **public** _void_ **`getRecord`** (  ) ####
> #### **public** _void_ **`getRequest`** (  ) ####
> #### **public** _[Table](DOCCore#Table.md)_ **`setError`** ( _[InvalidFormException](DOCCore#InvalidFormException.md)_ `$error` ) ####
Set the current error record of the table, this has priority over the current one
> #### **public** _void_ **`toHTML`** ( _int_ `$mode` ) ####
Get the HTML representation of this field.
NOTE:Do not overwrite this function. Use the toHTML\_add/edit/view instaid if you want to change the way the HTML looks
> #### **public** _string_ **`__toString`** (  ) ####
Convert this table to a string
> #### **protected** _void_ **`sortFields`** (  ) ####
Sort the fields by their sort values
> #### **protected** _int_ **`handleSort`** ( _[Field](DOCCoreFields#Field.md)_ `$a`, _[Field](DOCCoreFields#Field.md)_ `$b` ) ####
Sorthing algorithem
> #### **protected** _string_ **`toHTML_add`** (  ) ####
HTML representation for add Form
> #### **protected** _string_ **`toHTML_edit`** (  ) ####
HTML representation for edit Form
> #### **protected** _string_ **`toHTML_view`** (  ) ####
HTML representation for view Form
> #### **protected** _string_ **`toHTML_delete`** (  ) ####
HTML representation for delete Form
> #### **protected** _string_ **`parseTitle`** ( _string_ `$title`, _array_ `$data` ) ####
A way to parse the title string.
> #### **public** _[SQLRecord](DOCCore#SQLRecord.md)_ **`doSelect`** (  ) ####
Preform a select on the table
> #### **public** _[SQLRecord](DOCCore#SQLRecord.md)_ **`doInsert`** (  ) ####
Preform an insert on the table
> #### **public** _[SQLRecord](DOCCore#SQLRecord.md)_ **`doUpdate`** (  ) ####
Preform an update on the table
> #### **public** _[SQLRecord](DOCCore#SQLRecord.md)_ **`doDelete`** (  ) ####
Preform a delete on the table
> #### **protected** _string_ **`getJavascript`** (  ) ####
Get the JavaScript for this table
> #### **protected** _string_ **`getErrors`** (  ) ####
Get the HTML for if there were any errors
> #### **protected** _string_ **`getAssignment`** ( _int_ `$mode` ) ####
Assignment field which containt the componentn and action values
> #### **public** _string_ **`getAction`** ( _int_ `$mode` ) ####
Mapping of the action to the actuly hidden field content.
When in need of custom mapping, like if you have two tables for one component, override this method
> #### **protected** _int_ **`string2action`** ( _string_ `$string` ) ####
String to an action that the table can understand
> #### **abstract** _void_ **`select`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
Additional Select data
> #### **abstract** _void_ **`insert`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
Additional Insert data
> #### **abstract** _void_ **`update`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
Additional Update data
> #### **abstract** _void_ **`delete`** ( _[SQLQuery](DOCCore#SQLQuery.md)_ `$query`, _object_ `$data` ) ####
Additional Delete data
> #### **public** _void_ **`validate`** ( _int_ `$mode` ) ####
Validate the data with the fields in this table. If not valid a InvalidFormException is thrown
> #### **public** _int_ **`getInsertedID`** (  ) ####
Get the last inserted ID for this table.
Note: this is not fetched, only kept if there was an insert. So only use
this if you are sure there was an insert.
> #### **public** _array_ **`db2value`** ( _array_ `$record` ) ####
Parse the record, this allows for data conversions or deserialization
> #### **private** _void_ **`callPreFields`** (  ) ####
> #### **private** _void_ **`callPostFields`** (  ) ####