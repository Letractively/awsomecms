<?php
import('/core/shared/class.Component.inc');

class NewsComponent extends Component
{
    public function __construct()
    {
        parent::__construct('news');
        
        $this->fields = array(
            "news_id" => "index",
            "news_title" => "text",
            "news_user" => "int",
            "news_text" => "text",
            "news_date" => "date"
        );
    }
    
    public function action_index($smarty, $smartyLoader, $request)
    {
        
    }
    
    public function action_add($smarty, $smartyLoader, $request)
    {
        if($request['methode'] == 'post')
        {
            $request['news_date'] = $request['news_date_Year']."-".$request['news_date_Month']."-".$request['news_date_Day'];
            
            if($this->validate($request, "/".Config::get('newsadd', 'newsadd', 'admin'), "add"))
            {
                $requestObj = Request::init("news");
                $id = $requestObj->doInsert($request);
            }
            
            $this->redirect("/".Config::get('newsadmin', 'newsadmin', 'admin'));
        }
        else
        {
            $smarty->assign("users", Request::init('users.users')->doSelect());
        }
    }
    
    public function action_edit($smarty, $smartyLoader, $request)
    {
        if($request['methode'] == 'post')
        {
            $request['news_date'] = $request['news_date_Year']."-".$request['news_date_Month']."-".$request['news_date_Day'];
            
            if($this->validate($request, "/".Config::get('newsedit', 'newsedit', 'admin'), "edit"))
            {
                $requestObj = Request::init("news");
                $requestObj->doUpdate($request);
            }
            
            $this->redirect("/".Config::get('newsadmin', 'newsadmin', 'admin'));
        }
        else
        {
            if($request['news_id'])
            {
                $smarty->assign("users", Request::init('users.users')->doSelect());
                
                $requestObj = Request::init("news");
                $record = $requestObj->doSelect($request);
                
                $smarty->assign("record", (object) array_merge((array) $record[0], Controller::getInstance()->lastRecord));
            }
            else
            {
                $this->redirect("/".Config::get('newsadd', 'newsadd', 'admin'));
            }
        }
    }
    
    public function action_delete($smarty, $smartyLoader, $request)
    {
        if($request['methode'] == 'post')
        {
            $requestObj = Request::init("news");
            $requestObj->doDelete($request);
            
            $this->redirect("/".Config::get('newsadmin', 'newsadmin', 'admin'));
        }
        else
        {
            if($request['news_id'])
            {
                $requestObj = Request::init("news");
                $record = $requestObj->doSelect($request);
                
                $smarty->assign("record", $record);
            }
            else
            {
                $this->redirect("/".Config::get('newsadd', 'newsadd', 'admin'));
            }
        }
    }
    
    public function action_admin($smarty, $smartyLoader, $request)
    {
        $smarty->assign("records", Request::init("news")->doSelect());
        
        //urls
        $smarty->assign("actionurl_add", Config::get('newsadd', 'newsadd', 'admin'));
        $smarty->assign("actionurl_edit", Config::get('newsedit', 'newsedit', 'admin'));
        $smarty->assign("actionurl_delete", Config::get('newsdelete', 'newsdelete', 'admin'));
    }
    
    public function registerMenuItems($menu)
    {
        $menu->addChild(new MenuItem("news", "", Config::get('newsadmin', 'newsadmin', 'admin')));
        $menu->addChild(new MenuItem("newsadmin", "Admin", Config::get('newsadmin', 'newsadmin', 'admin'), "news"));
        $menu->addChild(new MenuItem("newsadd", "Add", Config::get('newsadd', 'newsadd', 'admin'), "news"));
    }
}