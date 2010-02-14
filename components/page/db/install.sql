CREATE TABLE IF NOT EXISTS `pages` (
  `page_id` int(11) NOT NULL auto_increment,
  `page_name` varchar(100) NOT NULL,
  `page_location` varchar(255) NOT NULL,
  `page_template` text NOT NULL,
  `page_timestamp` datetime NOT NULL,
  PRIMARY KEY  (`page_id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 ;