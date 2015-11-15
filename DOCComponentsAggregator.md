_Package: 'components.aggregator'_

This file is part of the A.W.S.O.M.E.cms distribution.
Detailed copyright and licensing information can be found
in the doc/COPYRIGHT and doc/LICENSE files which should be
included in the distribution.
## Index: ##
**classes**:
  * [AggregatorComponent](DOCComponentsAggregator#AggregatorComponent.md)
## Contents: ##
The following classes are located in this package
### Classes: ###
## `AggregatorComponent` ##
##### <sub>class</sub> AggregatorComponent <sub>extends</sub> [Component](DOCCore#Component.md) <sup>File: components/aggregator/class.AggregatorComponent.inc</sup> #####
Aggregates News form RSS feeds and imports them into the news component
> #### **public** _void_ **`__construct`** (  ) ####
Constructor
> #### **public** _void_ **`execCron`** (  ) ####
> Inherited from: [Component](DOCCore#Component.md)
Execute a task for the cron. This called in the interval secified in the config files.