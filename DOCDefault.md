_Package: 'default'_


## Index: ##
**functions**:
  * generateTranslateable
  * generateNewLangFile
**classes**:
  * [NewsItem](DOCDefault#NewsItem.md)
  * [NewsFolder](DOCDefault#NewsFolder.md)
  * [Usage](DOCDefault#Usage.md)
  * [Cron](DOCDefault#Cron.md)
  * [DeployAction](DOCDefault#DeployAction.md)
  * [Usage](DOCDefault#Usage.md)
  * [Pack](DOCDefault#Pack.md)
  * [Update](DOCDefault#Update.md)
  * [Release](DOCDefault#Release.md)
  * [Patch](DOCDefault#Patch.md)
## Contents: ##
The following functions are located in this package
### Functions: ###
> #### _void_ **`generateTranslateable`** (  ) <sup>File: langconvert.php</sup> ####

> #### _void_ **`generateNewLangFile`** (  ) <sup>File: langconvert.php</sup> ####

The following classes are located in this package
### Classes: ###
## `NewsItem` ##
##### <sub>class</sub> NewsItem <sub>extends</sub> [TreeNode](DOCComponentsPageUtil#TreeNode.md) <sup>File: components/news/util/class.NewsTree.inc</sup> #####
The node for the page items
> #### **public** _void_ **`__construct`** ( _object_ `$record` ) ####
Constructor
> #### **public** _void_ **`registerIcons`** (  ) ####
See parent
> #### **public** _string_ **`toJavascript`** (  ) ####
> Inherited from: [TreeNode](DOCComponentsPageUtil#TreeNode.md)
Create the javascript code for the node
> #### **public** _string_ **`toData`** (  ) ####
(non-PHPdoc)
## `NewsFolder` ##
##### <sub>class</sub> NewsFolder <sub>extends</sub> [TreeNode](DOCComponentsPageUtil#TreeNode.md) <sup>File: components/news/util/class.NewsTree.inc</sup> #####
News root folder which contains all the news items
> #### **public** _void_ **`__construct`** ( _object_ `$record` ) ####
Constructor
> #### **public** _void_ **`registerIcons`** (  ) ####
See parent
> #### **public** _string_ **`toJavascript`** (  ) ####
> Inherited from: [TreeNode](DOCComponentsPageUtil#TreeNode.md)
Create the javascript code for the node
> #### **public** _string_ **`toData`** (  ) ####
(non-PHPdoc)
## `Usage` ##
##### <sub>class</sub> Usage <sub>extends</sub> [CLIAction](DOCLibs#CLIAction.md) <sup>File: cron.php</sup> #####
This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
> #### **public** _void_ **`exec`** ( _[CLI](DOCLibs#CLI.md)_ `$cli`, _string_ `$action` ) ####
> Inherited from: [CLIAction](DOCLibs#CLIAction.md)
Execute the action
## `Cron` ##
##### <sub>class</sub> Cron <sub>extends</sub> [CLIAction](DOCLibs#CLIAction.md) <sup>File: cron.php</sup> #####

> #### **public** _void_ **`exec`** ( _[CLI](DOCLibs#CLI.md)_ `$cli`, _string_ `$action` ) ####
> Inherited from: [CLIAction](DOCLibs#CLIAction.md)
Execute the action
## `DeployAction` ##
##### _abstract_ <sub>class</sub> DeployAction <sub>extends</sub> [CLIAction](DOCLibs#CLIAction.md) <sup>File: deploy.php</sup> #####
This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
> #### **public** _void_ **`__construct`** (  ) ####
Constructor
> #### **public** _void_ **`setup`** ( _[CLI](DOCLibs#CLI.md)_ `$cli` ) ####
> Inherited from: [CLIAction](DOCLibs#CLIAction.md)
Setup function, you can override this to add setup stuff. This is
called before the exec
> #### **public** _void_ **`cleanup`** ( _[CLI](DOCLibs#CLI.md)_ `$cli` ) ####
> Inherited from: [CLIAction](DOCLibs#CLIAction.md)
Cleanup function, you can override this to add cleanup stuff. This is
called after the exec
## `Usage` ##
##### <sub>class</sub> Usage <sub>extends</sub> [CLIAction](DOCLibs#CLIAction.md) <sup>File: deploy.php</sup> #####

> #### **public** _void_ **`exec`** ( _[CLI](DOCLibs#CLI.md)_ `$cli`, _string_ `$action` ) ####
> Inherited from: [CLIAction](DOCLibs#CLIAction.md)
Execute the action
## `Pack` ##
##### <sub>class</sub> Pack <sub>extends</sub> [DeployAction](DOCDefault#DeployAction.md) <sup>File: deploy.php</sup> #####

> #### **public** _void_ **`exec`** ( _[CLI](DOCLibs#CLI.md)_ `$cli`, _string_ `$action` ) ####
> Inherited from: [CLIAction](DOCLibs#CLIAction.md)
Execute the action
## `Update` ##
##### <sub>class</sub> Update <sub>extends</sub> [DeployAction](DOCDefault#DeployAction.md) <sup>File: deploy.php</sup> #####

> #### **public** _void_ **`exec`** ( _[CLI](DOCLibs#CLI.md)_ `$cli`, _string_ `$action` ) ####
> Inherited from: [CLIAction](DOCLibs#CLIAction.md)
Execute the action
## `Release` ##
##### <sub>class</sub> Release <sub>extends</sub> [DeployAction](DOCDefault#DeployAction.md) <sup>File: deploy.php</sup> #####

> #### **public** _void_ **`exec`** ( _[CLI](DOCLibs#CLI.md)_ `$cli`, _string_ `$action` ) ####
> Inherited from: [CLIAction](DOCLibs#CLIAction.md)
Execute the action
## `Patch` ##
##### <sub>class</sub> Patch <sub>extends</sub> [CLIAction](DOCLibs#CLIAction.md) <sup>File: deploy.php</sup> #####

> #### **public** _void_ **`exec`** ( _[CLI](DOCLibs#CLI.md)_ `$cli`, _string_ `$action` ) ####
> Inherited from: [CLIAction](DOCLibs#CLIAction.md)
Execute the action