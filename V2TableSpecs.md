All Design aspects of the tables for v2

## Table Definition ##
[Tables](MetatableStructure.md) are used to interact with the database and function as a facade to all persistent data. Currently (v1.x) the tables are sort of defined twice. In the table class with all attributes etc. and in the XML files for creation of the database.

With v2 I would like to merge the two in favor of less code duplication and easier maintainability. There are two options: remove the XML data and read the meta structure from the class object or move all table related meta-data to the XML file thus extending the XML file with fields.

### Table Classes ###
**pros:**
  * Everything is in one location, meaning no need for separate XML files for structure
  * More freedom with initializing fields
  * Logic can be added to the fields, like conditions when a certain field should be hidden
**cons:**
  * Large files which may lead to searching for the code.
  * Heavy memory use when loading a table, even for just fetching meta data.

### XML schema ###
**pros:**
  * Pre-defined syntax, so standardizing databases schema
  * Separation of structure from logic
  * Only relevant data in the file (no initialization etc).
**cons:**
  * Larger files mean more processing involved
  * No dynamic behavior
  * Still two files, schema and logic

## Form generation ##
Currently the table is also responsible for rendering the forms, this makes the table class rather large. In v2 I want to separate this and make a form generator which can make forms using a table as input. This will make the table class considerably small and focus more on what it was made for in the first place, abstracting tables.

<sub>class</sub> Table
```
function void setRequest(Array $data)
function Array getRequest()
function void setResponse(Array $data)
function Array getResponse()
function void add(Field $field)
function Field getField(String $name)
function Field getAllFields()
function String getName()
function Field getPrimaryKey()
function void validate() //throws exception when no valid

function SQLRecord select()
function SQLRecord insert()
function SQLRecord update()
function SQLRecord delete()
```
<sub>class</sub> Form
```
ADD
EDIT
ADMIN
DELETE

function __construct(* $data) //either a table object or an array of field names and types
function String toHTML(int $action)
function void setValues(* $data) //Array or SQLRecord
function String toJavaScript(int $action)
```