Each component contains a couple of tables which it uses to 'talk' to the database. These Table objects provide a rich amount of features like:
  * Meta information about fields like: type, name, data, etc
  * Generation of forms for that table
  * Validation of input
  * [Façade](http://en.wikipedia.org/wiki/Facade_pattern) to interact with the database

the idea of each Table to have a definition of fields and a list of links for the corresponding pages in the constructor and a set of functions with add 'stuff' to the queries the table uses.

Here is an example of a simple Table class that represents a table that contains news items:
```
importField("Field");
importField("IntField");
importField("DateField");
importField("TextField");
importField("BooleanField");
importField("users.UsersField");

class NewsTable extends Table
{
    public function __construct()
    {
        parent::__construct("news");
        $this->assign("news");
        
        $this->addField(new IntField("news_id", "", Field::INDEX|Field::AUTOKEY));
        $this->addField(new Field("news_title", "Title"), 1);
        $this->addField(new UsersField("news_user", "User"), 2);
        $this->addField(new DateField("news_date", "Date"), 3);
        $this->addField(new Field("news_tag", "Tag"), 4);
        $this->addField(new TextField("news_text", "Content"), 5);
        $this->setTitle("[news_title]");
    }
    
    protected function select($query, $data = null) 
    {
        $query->orderby('news_date', "DESC");
    }
    protected function update($query, $data = null) {}
    protected function insert($query, $data = null) {}
    protected function delete($query, $data = null) {}
}
```

You can clearly see that there isn't much code, but everything we need is here. We can see that in the constructor a list of fields is given that defines the way the table is made.
It also sets a title that will represent a record when shown in a list. This is useful because when deleting, a title is more useful then a numerical ID.
Finally it sets a couple of URLs needed to know where to redirect or link to when creating forms. So for components that do not use the generated forms, these are not useful and can be skipped.

When looking at the rest of the code, you can see that there are 4 CRUD methods. Each for the corresponding action. These function (can) add additional data to a query. In this case, everything that is fetched is ordered by news\_date.
The idea behind this is that the Table parent does the work and ask it's subclass if he has forgotten something. Rather then the subclass telling the parent he need something more. It's a subtle difference that makes things just a little easier.

When you want to do something with the table, all you have to do is call the appropiate action.
```
Table::init("news.news")
    ->setRecord((object) $request)
    ->doInsert();
```
It is recommended to use the static `Table::init()` rather then creating the table with `new`. This is because `init()` will store the table and retains it's record data.