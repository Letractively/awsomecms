<?php
importField("Field");
importField("IntField");
importField("TextField");
importField("DateField");
importField("page.LocationField");

class PagesTable extends Table
{
    public function __construct()
    {
        parent::__construct("pages");
        $this->assign("page");
        
        $this->addField(new IntField("page_id", "", Field::INDEX|Field::AUTOKEY));
        $this->addField(new Field("page_name", "Name"), 1);
        $this->addField(new LocationField("page_location", "Location"), 2);
        $this->addField(new TextField("page_template", "Content"), 3);
        $this->addField(new DateField("page_timestamp", "", Field::HIDE));
        $this->setTitle("[page_name]");
        
        $this->setURLs(
            Config::get('pageadmin', 'pageadmin', 'admin'),
            Config::get('pageadd', 'pageadd', 'admin'),
            Config::get('pageedit', 'pageedit', 'admin'),
            Config::get('pagedelete', 'pagedelete', 'admin')
        );
    }
    
    protected function select($query, $data = null)
    {
        $query->orderby('page_name');
        
        if($data)
        {
            $query->whereWhenSet('page_location', $data->page_location);
            $query->whereWhenSet($data->where[0], $data->where[1], $data->where[2]);
        }
    }
    protected function update($query, $data = null)
    {
        if($data && isset($data->page_timestamp))
        {
            $query->update('page_timestamp', $data->page_timestamp);
        }
        else
        {
            $query->update('page_timestamp', date('c'));
        }
    }
    protected function insert($query, $data = null)
    {
        $query->insert('page_timestamp', date('c'));
    }
    protected function delete($query, $data = null) {}
}