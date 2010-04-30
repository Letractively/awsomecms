CREATE TABLE IF NOT EXISTS `groups` (
  `group_id` int(11) NOT NULL auto_increment,
  `group_name` varchar(100) NOT NULL,
  `group_privileges` int(11) NOT NULL,
  PRIMARY KEY  (`group_id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;

INSERT INTO `groups` (`group_id`, `group_name`, `group_privileges`) VALUES
(1, 'admin', 1),
(2, 'users', 0);

CREATE TABLE IF NOT EXISTS `usersgroups` (
  `group_id` int(11) NOT NULL,
  `user_id` int(11) NOT NULL,
  PRIMARY KEY  (`group_id`,`user_id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

INSERT INTO `usersgroups` (`group_id`, `user_id`) VALUES
(1, 1),
(2, 1);

INSERT INTO `auth` (`auth_component`, `auth_action`, `auth_privilage`) VALUES('groups', 'action_add', 'admin');
INSERT INTO `auth` (`auth_component`, `auth_action`, `auth_privilage`) VALUES('groups', 'action_delete', 'admin');
INSERT INTO `auth` (`auth_component`, `auth_action`, `auth_privilage`) VALUES('groups', 'action_edit', 'admin');