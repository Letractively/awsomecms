<?php
import('/components/page/util/class.Tree.inc');

class FileItem extends TreeNode
{
    private $name;
    private $id;
    private $location;
    private $viewURL;
    private $fileType;
    
    /**
     * Constructor
     * 
     * @param Object $record
     */
    public function __construct($record)
    {
        $this->name = $record->file_name;
        $this->id = $record->file_id;
        $this->location = $record->file_location;
        $this->viewURL = $record->file_data->url;
        $this->fileType = $record->file_data->type;
        $this->type = Tree::CONTENT;
    }
    /**
     * Create the javascript code for the tree
     * 
     * @return String
     */
    public function toJavascript()
    {
        $component = Component::init("file");
        $linkEdit = makeLink(array($component, "edit"))."?file_id={$this->id}";
        $linkDelete = makeLink(array($component, "delete"))."?file_id={$this->id}";
        $icon = $component->getType($this->fileType);
        
        $html = "{$this->parent->getName()}.addChild(new TreeItem(\"{$this->name}\", \"{$this->location}\", \"{$linkEdit}\", {$this->parent->getName()}, \"{$icon}\", [new TreeAction(\"view\", \"{$this->viewURL}\", {$this->parent->getName()}), new TreeAction(\"delete\", \"{$linkDelete}\", {$this->parent->getName()})], {$this->getType()}));\n";
        
        return $html;
    }
}
class ImageFolder extends Folder
{
    /**
     * Constructor
     * 
     * @param Object $record
     */
    public function __construct($name, $location)
    {
        parent::__construct($name, $location);
        $this->location = "/[contentroot]".$location;
        $this->type = Tree::CONTENT;
    }
    /**
     * See parent
     */
    public function registerIcons()
    {
        $this->parent->addIcon("image_folder", "/img/icons/images_folder.png");
    }
    /**
     * Create the javascript code for the tree
     * 
     * @return String
     */
    public function toJavascript()
    {
        $html = "{$this->parent->getName()}.addChild(new TreeFolder(\"{$this->name}\", \"{$this->location}\", {$this->parent->getName()}, \"image_folder\", [], {$this->getType()}));\n";
        
        return $html;
    }
}
class UploadFolder extends Folder
{
    private $nodeMap;
    /**
     * Constructor
     * 
     * @param Object $record
     */
    public function __construct($name, $location, $nodeMap)
    {
        parent::__construct($name, $location);
        $this->location = "/[contentroot]".$location;
        $this->nodeMap = $nodeMap;
        $this->type = Tree::CONTENT;
    }
    /**
     * See parent
     */
    public function registerIcons()
    {
        $this->parent->addIcon("images", "/img/icons/image.png");
        $this->parent->addIcon("docs", "/img/icons/doc.png");
        $this->parent->addIcon("vid", "/img/icons/video.png");
        $this->parent->addIcon("other", "/img/icons/other.png");
    }
    /**
     * Create the javascript code for the tree
     * 
     * @return String
     */
    public function toJavascript()
    {
        $component = Component::init("file");
        
        $linkAdd = makeLink(array($component, "add"));
        $linkView = makeLink(array($component, "admin"));
        
        $html = "uploadFolder = new TreeFolder(\"{$this->name}\", \"{$this->location}\", {$this->parent->getName()}, \"folder\", [new TreeAction(\"overview\", \"{$linkView}\", {$this->parent->getName()}), new TreeAction(\"add\", \"{$linkAdd}\", {$this->parent->getName()})], {$this->getType()});\n";
        $html .= "uploadFolder.nodes = ".stripslashes(json_encode($this->nodeMap))."\n";
        $html .= "$().ready(function(e) {new FileUpload(uploadFolder.html.get(0)); });\n";
        $html .= "{$this->parent->getName()}.addChild(uploadFolder);\n";
        
        return $html;
    }
}