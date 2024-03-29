<?php
/**
 * This file is part of the A.W.S.O.M.E.cms distribution.
 * Detailed copyright and licensing information can be found
 * in the doc/COPYRIGHT and doc/LICENSE files which should be
 * included in the distribution.
 *
 * @package components.core
 *
 * @copyright (c) 2009-2010 Yannick de Lange
 * @license http://www.gnu.org/licenses/gpl.txt
 *
 * @version $Revision$
 */
importField("Field");
importField("IntField");
importField("TextField");

/**
 * Core table, this handels all interaction with the core table in the database
 * 
 * @author Yannick <yannick.l.88@gmail.com>
 */
class ComponentsTable extends Table
{
    /**
     * Constructor
     */
    public function __construct()
    {
        parent::__construct("components");
        $this->assign("core");
        
        $this->addField(new Field("component_name", Field::STR_INDEX));
        $this->addField(new TextField("component_requests", Field::OPTIONAL));
        $this->addField(new Field("component_path", Field::OPTIONAL));
        $this->addField(new IntField("component_auth", Field::OPTIONAL));
        $this->addField(new IntField("component_patchlevel", Field::OPTIONAL));
        $this->addField(new Field("component_version", Field::OPTIONAL));
        $this->addField(new Field("component_updateurl", Field::OPTIONAL));
        $this->setTitle("[component_name]");
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
    protected function delete($query, $data = null) {}

}