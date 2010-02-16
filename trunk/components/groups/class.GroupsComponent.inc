<?php
/**
 * This file is part of the A.W.S.O.M.E.cms distribution.
 * Detailed copyright and licensing information can be found
 * in the doc/COPYRIGHT and doc/LICENSE files which should be
 * included in the distribution.
 *
 * @package components.groups
 *
 * @copyright (c) 2009-2010 Yannick de Lange
 * @license http://www.gnu.org/licenses/gpl.txt
 *
 * @version $Revision$
 */
import('/core/class.Component.inc');

/**
 * Component that allowes for group based authentication, rather then user based
 * 
 * @author Yannick <yannick.l.88@gmail.com>
 */
class GroupsComponent extends Component
{
    /**
     * Constructor
     * 
     * @return unknown_type
     */
    public function __construct()
    {
        parent::__construct('groups');
    }
    /**
     * Action to add an group
     * 
     * @param Smarty $smarty
     * @param SmartyPageLoader $smartyLoader
     * @param array $request
     */
    public function action_add($smarty, $smartyLoader, $request)
    {
        if($request['method'] == 'post')
        {
            $id = Table::init('groups.groups')
                ->setRecord((object) $request)
                ->doInsert();
            
            foreach($request['users'] as $user)
            {
                Table::init('groups.usersgroups')->setRecord((object) array("user_id" => $user, "group_id" => $id))->doInsert();
            }
            
            $this->redirect("/".Config::get('groupsadmin', 'groupsadmin', 'admin'));
        }
    }
    /**
     * Action to edit an group
     * 
     * @param Smarty $smarty
     * @param SmartyPageLoader $smartyLoader
     * @param array $request
     */
    public function action_edit($smarty, $smartyLoader, $request)
    {
        if($request['method'] == 'post')
        {
            Table::init('groups.groups')
                ->setRecord((object) $request)
                ->doUpdate();
            
            //update the usersgroups references
            $usersgroups = Table::init('groups.usersgroups');
            $usersgroups->doDelete((object) $request);
            
            foreach($request['users'] as $user)
            {
                $usersgroups->setRecord((object) array("user_id" => $user, "group_id" => $request['group_id']))->doInsert();
            }
            
            $this->redirect("/".Config::get('groupsadmin', 'groupsadmin', 'admin'));
        }
        else
        {
            if($request['group_id'])
            {
                $users = Table::init('groups.groups')
                    ->doSelect((object) array("showusers" => true, 'group_id' => $request['group_id']))
                    ->getRows();
                    
                $request['group_users'] = array();
                foreach($users as $user)
                {
                    $request['group_users'][$user->user_id] = $user;
                }
                
                Table::init('groups.groups')
                    ->setRequest((object) $request);
            }
            else
            {
                $this->redirect("/".Config::get('groupsadmin', 'groupsadmin', 'admin'));
            }
        }
    }
    /**
     * Action to delete an group
     * 
     * @param Smarty $smarty
     * @param SmartyPageLoader $smartyLoader
     * @param array $request
     */
    public function action_delete($smarty, $smartyLoader, $request)
    {
        if($request['method'] == 'post')
        {
            Table::init('groups.groups')
                ->setRequest((object) $request)
                ->doDelete();
            
            Table::init('groups.usersgroups')
                ->setRequest((object) (object) array("group_id" => $request["group_id"]))
                ->doDelete();
            
            $this->redirect("/".Config::get('groupsadmin', 'groupsadmin', 'admin'));
        }
        else
        {
            if($request['group_id'])
            {
                Table::init('groups.groups')
                    ->setRequest((object) $request);
            }
            else
            {
                $this->redirect("/".Config::get('groupsadmin', 'groupsadmin', 'admin'));
            }
        }
    }
    /**
     * Request a list of privilages a given groups has
     * 
     * @param object $groupRecord
     * @return array
     */
    public function auth($groupRecord)
    {
        $privilages = Table::init('users.privileges')
            ->doSelect()
            ->getRows();
        $rights = array();
        
        foreach($privilages as $privilage)
        {
            $rights[$privilage->privilege_name] = Config::hasFlag((int) $groupRecord->group_privileges, $privilage->privilege_int);
        }
        
        return $rights;
    }
    /**
     * Log a user in with crendtials
     * 
     * @param string $user_name
     * @param string $user_pass
     * @return boolean
     */
    public function auth_login($user_name, $user_pass)
    {
        $user_pass = md5($user_pass);
        
        $records = Table::init('groups.groups')
            ->doSelect((object) array("user_name" => $user_name, "user_pass" => $user_pass))
            ->getRows();
        
        foreach($records as $record)
        {
            $privilages = $this->auth($record);
            
            if(count($record) == 1)
            {
                //set the session
                $_SESSION['usr'] = array();
                $_SESSION['usr']['user_name'] = $user_name;
                $_SESSION['usr']['user_pass'] = $user_pass;
                $_SESSION['usr']['auth'] = $privilages;
                
                return true;
            }
        }
        
        return false;
    }
    /**
     * Log a user out
     */
    public function auth_logout()
    {
        $_SESSION['usr'] = null;
        session_destroy();
    }
    /**
     * Hook to add a reference of a user when it is deleted in the user component
     * 
     * @param Smarty $smarty
     * @param array $request
     * @return boolean
     */
    public function hook_useradd($smarty, $request)
    {
        if($request['method'] == 'post')
        {
            Table::init('groups.usersgroups')
                ->setRecord((object) array(
                    "group_id" => Config::get('defaultgroup', 2, 'groups'), 
                    "user_id" => Table::init('users.users')->getInsertedID()
                ))
                ->doInsert();
        }
        return true;
    }
    /**
     * Hook to delete a reference of a user when it is deleted in the user component
     * 
     * @param Smarty $smarty
     * @param array $request
     * @return boolean
     */
    public function hook_userdel($smarty, $request)
    {
        if($request['method'] == 'post')
        {
            Table::init('groups.usersgroups')
                ->doDelete((object) $request);
        }
        return true;
    }
    /**
     * (non-PHPdoc)
     * @see core/Component#registerMenuItems($menu)
     */
    public function registerMenuItems($menu)
    {
        $menu->addChild(new MenuItem("groupsadmin", Config::get('groupsadmin', 'groupsadmin', 'admin'), "users"));
    }
}