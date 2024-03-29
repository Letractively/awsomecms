<?php
/**
 * This file is part of the A.W.S.O.M.E.cms distribution.
 * Detailed copyright and licensing information can be found
 * in the doc/COPYRIGHT and doc/LICENSE files which should be
 * included in the distribution.
 *
 * @package core
 *
 * @copyright (c) 2009-2010 Yannick de Lange
 * @license http://www.gnu.org/licenses/gpl.txt
 *
 * @version $Revision$
 */

/**
 * Debugger class that handels all debug messages generated from the CMS
 */
class Debugger
{
    const LOG       = 1;
    const NOTICE    = 2;
    const WARNING   = 3;
    const ERROR     = 4;
    
    const HTML      = "html";
    const CLI       = "cli";
    
    private static $instance;
    
    private $logs;
    private $currentRobot;
    private $type;
    private $debugID;
    private $stackTraces;
    
    /**
     * singelton
     *
     * @return Debugger      Instance of Debugger
     */
    public static function getInstance()
    {
        if (!self::$instance instanceof self) {
            self::$instance = new self();
        }
        return self::$instance;
    }
    
    /**
     * constructor
     */
    private function __construct()
    {
        $this->currentRobot = null;
        $this->logs = array();
        $this->stackTraces = array();
        $this->log("Debugger initialized");
        $this->type = Debugger::HTML;
        
        if(empty($_SESSION["DEBUGID"]))
        {
            //create a debug ID
            $_SESSION["DEBUGID"] = md5(rand()*microtime());
        }
        $this->debugID = $_SESSION["DEBUGID"];
    }
    /**
     * Set the robot that was used when visiting the site
     * @param $robot
     * @return unknown_type
     */
    public function setRobot($robot)
    {
        $this->currentRobot = stripslashes($robot);
    }
    /**
     * Add a log message
     * 
     * @param string $message
     * @param int $level
     */
    public function log($message, $level = Debugger::LOG, $stackTraceID = -1)
    {
        global $start;
        
        $timestamp = round(microtime(true) - $start, 2);
        
        $this->logs[] = array($level, "[{$timestamp}sec] - {$message}", $stackTraceID);
        
        if($this->type == Debugger::CLI && $level >= 4)
        {
            echo "{$message} \n";
        }
    }
    /**
     * Add a warning message
     * 
     * @param string $message
     */
    public function warning($message)
    {
        $stackTraceID = -1;
        if(Config::get('debug', 0, 'debug') > 1)
        {
            $stackTraceID = count($this->stackTraces);
            $this->stackTraces[] = debug_backtrace();
        }
        $this->log($message, Debugger::WARNING, $stackTraceID);
    }
    /**
     * Add a error message
     * 
     * @param string $message
     */
    public function error($message)
    {
        $stackTraceID = -1;
        if(Config::get('debug', 0, 'debug') > 0)
        {
            $stackTraceID = count($this->stackTraces);
            $this->stackTraces[] = debug_backtrace();
        }
        $this->log($message, Debugger::ERROR, $stackTraceID);
    }
    /**
     * Add a notice message
     * 
     * @param string $message
     */
    public function notice($message)
    {
        $stackTraceID = -1;
        if(Config::get('debug', 0, 'debug') > 1)
        {
            $stackTraceID = count($this->stackTraces);
            $this->stackTraces[] = debug_backtrace();
        }
        $this->log($message, Debugger::NOTICE, $stackTraceID);
    }
    /**
     * Converet the debugger to a string representation
     * 
     * @return string
     */
    public function __toString() {
        if(Config::get('debug', 0, 'debug') > 0)
        {
            try {
                return $this->renderDebug();
            }
            catch (Exception $e)
            {
                return $e->getMessage();
            }
        }
        else
        {
            return '';
        }
    }
    /**
     * Render the debug list as HTML
     * 
     * @return string
     */
    public function renderDebug()
    {
        global $start;
        $debug = '';
        
        // cache the debug stacktrace
        if(count($this->stackTraces) > 0)
        Cache::set("debug_{$this->debugID}", $this->stackTraces);
        
        $baseLevel = Debugger::LOG;
        
        foreach($this->logs as $log)
        {
            if($debug != "")
            {
                $debug .= "<br />";
            }
            
            switch($log[0])
            {
                case Debugger::WARNING:
                    $debug .= "<span style='color: #ffcc00;' class='debugRow warning'>";
                    
                    if($baseLevel < Debugger::WARNING)
                    {
                        $baseLevel = Debugger::WARNING;
                    }
                    
                    break;
                case Debugger::ERROR:
                    $debug .= "<span style='color: #ff0000;' class='debugRow error'>";
                    
                    if($baseLevel < Debugger::ERROR)
                    {
                        $baseLevel = Debugger::ERROR;
                    }
                    
                    break;
                    break;
                case Debugger::NOTICE:
                    $debug .= "<span style='color: #84a60e;' class='debugRow notice'>";
                    
                    if($baseLevel < Debugger::NOTICE)
                    {
                        $baseLevel = Debugger::NOTICE;
                    }
                    
                    break;
                default:
                    $debug .= "<span class='debugRow log'>";
                    break;
            }
            
            $debug .= $log[1];
            if($log[2] > -1)
            {
                $debug .= " - <a href='javascript:debug_backtrace(\"{$this->debugID}\", {$log[2]});'>[backtrace]</a>";
            }
            $debug .= "</span>";
        }
        
        $timestamp = round(microtime(true) - $start, 2);
        
        $html = "";
        
        //HTML
        $html .= "<div class='debug' style='margin-top: 5px;'>";
        switch($baseLevel)
        {
            case Debugger::WARNING:
                $html .= "<div style='display: block; cursor: pointer; color: #ffcc00;' onclick='debug_toggleDebug();'>";
                break;
            case Debugger::ERROR:
                $html .= "<div style='display: block; cursor: pointer; color: #ff0000;' onclick='debug_toggleDebug();'>";
                break;
            case Debugger::NOTICE:
                $html .= "<div style='display: block; cursor: pointer; color: #84a60e;' onclick='debug_toggleDebug();'>";
                break;
            default:
                $html .= "<div style='display: block; cursor: pointer;' onclick='debug_toggleDebug();'>";
                break;
        }
        $html .= "Site was rendered in {$timestamp}sec";
        if($this->currentRobot != null)
        {
            $html .= " [seen by '{$this->currentRobot}' robot]";
        }
        $html .= "</div>";
        if(isset($_COOKIE['debugHide']))
        {
            $html .= "<div class='debugBody' style='font-size: 0.9em; padding-left: 10px; display: none;'>";
        }
        else
        {
            $html .= "<div class='debugBody' style='font-size: 0.9em; padding-left: 10px;'>";
        }
        $html .= $debug;
        $html .= "</div></div>";
        
        //JAVASCRIPT
        $html .= <<<STR
<script type="text/javascript">
//<![CDATA[
    function debug_hadCookie() {
        var nameEQ = "debugHide=";
        var ca = document.cookie.split(';');
        for(var i=0;i < ca.length;i++) 
        {
            var c = ca[i];
            
            while (c.charAt(0)==' ') 
                c = c.substring(1,c.length);
            
            if (c.indexOf(nameEQ) == 0) 
                return true;
        }
        return false;
    }
    
    function debug_toggleDebug()
    {
        if(debug_hadCookie())
        {
            $('.debugBody').css('display', 'block');
            
            var date = new Date();
            date.setTime(date.getTime()+(-1*24*60*60*1000));
            document.cookie = "debugHide=true; expires="+date.toGMTString()+"; path=/";
        }
        else
        {
            $('.debugBody').css('display', 'none');
            document.cookie = "debugHide=true; path=/";
        }
    }
    
    function debug_backtrace(debug_ID, trace_ID)
    {
        window.open("/debug.php?id="+debug_ID+"&key="+trace_ID, "_blank", "width=500,height=600");
        return false;
    }
//]]>
</script>
STR;
        
        return $html;
    }
    
    public function setType($type)
    {
        $this->type = $type;
    }
}
