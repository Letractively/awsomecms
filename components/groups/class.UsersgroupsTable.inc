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
importField("Field");
importField("IntField");

/**
 * Usersgroups table, this is a raltional table to keep track of what users are in which groups
 * 
 * @author Yannick <yannick.l.88@gmail.com>
 */
class UsersgroupsTable extends Table
{
    /**
     * Constructor
     */
    public function __construct()
    {
        parent::__construct("usersgroups");
        $this->assign("groups");
        
        $this->addField(new IntField("group_id", ""));
        $this->addField(new IntField("user_id", ""));
    }
    /**
     * (non-PHPdoc)
     * @see core/Table#select($query, $data)
     */
    protected function select($query, $data = null) {}
    /**
     * (non-PHPdoc)
     * @see core/Table#insert($query, $data)
     */
    protected function insert($query, $data = null) {}
    /**
     * (non-PHPdoc)
     * @see core/Table#update($query, $data)
     */
    protected function update($query, $data = null) {}
    /**
     * (non-PHPdoc)
     * @see core/Table#delete($query, $data)
     */
    protected function delete($query, $data = null)
    {
        $query->whereWhenSet("group_id", $data->group_id);
        $query->whereWhenSet("user_id", $data->user_id);
    }
}