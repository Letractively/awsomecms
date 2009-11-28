<table style="border-collapse: collapse;">
    <tr class="header">
        <th style="width: 100px;">Framework</th>
        <th style="width: 100px;">Status</th>
        <th>Description</th>
    </tr>
    <tr class="row" id="row_framework">
        <td style="vertical-align: top;">
        </td>
        <td style="vertical-align: top;" class="updateCell">
            <img src="/img/admin/{if $frameworkU2D}ok{else}fail{/if}-icon.png" /> 
            {if $frameworkU2D}Up-to-date{else}<button type="button" onclick="updateFramework()">Update</button>{/if}
        </td>
        <td style="vertical-align: top;">
            This is the framework that makes everything come together. It is what handels the actions and calls the components when needed.
        </td>
    </tr>
</table>
<br />
<form method="post" action="/" class="admin_form admin_core_components">
    <table style="border-collapse: collapse;">
        <tr class="header">
            <th style="width: 100px;">Component</th>
            <th style="width: 100px;">Status</th>
            <th style="width: 150px;">Public JSON Access</th>
            <th>Description</th>
        </tr>
        {foreach from=$components item=component name=components}
            <tr class="row" {if $smarty.foreach.components.index % 2 == 0}style="background-color: #F1F8FF;"{/if} id="row_{$component->component_name}">
                <td style="vertical-align: top;">
                    <i>{$component->component_name|capitalize}</i>
                </td>
                <td style="vertical-align: top;" class="updateCell">
                    <img src="/img/admin/{if $component->U2D}ok{else}fail{/if}-icon.png" /> 
                    {if $component->U2D}Up-to-date{else}<button type="button" onclick="updateComponent('{$component->component_name}');">Update</button>{/if}
                </td>
                <td>
                    <div style="float: left;">
                        <input name="auth_{$component->component_name}[]" value="{$auth.auth_select}" type="checkbox"{if !$component->component_auth|hasflag:$auth.auth_select} checked="checked"{/if} /> Select<br />
                        <input name="auth_{$component->component_name}[]" value="{$auth.auth_insert}" type="checkbox"{if !$component->component_auth|hasflag:$auth.auth_insert} checked="checked"{/if} /> Insert
                    </div>
                    <div style="margin-left: 75px;">
                        <input name="auth_{$component->component_name}[]" value="{$auth.auth_update}" type="checkbox"{if !$component->component_auth|hasflag:$auth.auth_update} checked="checked"{/if} /> Update<br />
                        <input name="auth_{$component->component_name}[]" value="{$auth.auth_delete}" type="checkbox"{if !$component->component_auth|hasflag:$auth.auth_delete} checked="checked"{/if} /> Delete
                    </div>
                </td>
                <td style="vertical-align: top;">
                    {$component->info.desc}
                </td>
            </tr>
        {/foreach}
    </table>
    <div class="admin_form_row admin_form_submit">
        <input type="submit" value="Save" id="component_submit" class="admin_form_submit">
    </div>
    <input type="hidden" name="action" value="components" />
    <input type="hidden" name="component" value="core" />
</form>
<script>
    {literal}
    function updateComponent(name)
    {
        //update the cell so it show loading
        $("#row_"+name+" .updateCell").html("<img src='/img/admin/loader.gif' /> Updating...");
        
        data = {
            component: "core",
            action: "update",
            updateComponent: name
        };
        
        $.post("/{/literal}{$smarty.get.url}{literal}", data, function(data) {
            $("#row_"+name+" .updateCell").html("<img src='/img/admin/ok-icon.png' /> Up-to-date");
        }, "json");
    }
    function updateFramework()
    {
        //update the cell so it show loading
        $("#row_framework .updateCell").html("<img src='/img/admin/loader.gif' /> Updating...");
        
        data = {
            component: "core",
            action: "update",
            framework: 1
        };
        
        $.post("/{/literal}{$smarty.get.url}{literal}", data, function(data) {
            $("#row_framework .updateCell").html("<img src='/img/admin/ok-icon.png' /> Up-to-date");
        }, "json");
    }
    {/literal}
</script>