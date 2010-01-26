{if $FORMERROR}
    <div class="form_error">
        The form was not filled in correctly. Please check the following fields:
        <ul id="errorlist">
        </ul>
    </div>
    <script>
        {foreach from=$FORMERROR.fields key=field item=error}
            addFieldError('{$field}', '{$error}');
        {/foreach}
    </script>
{/if}
<form method="post" action="/admin/groups/add" class="admin_form admin_group_add" onsubmit="updateUsersField();">
    <div class="admin_form_row">
        <div class="admin_form_label">
            <label for="group_name">Name:</label>
        </div>
        <div class="admin_form_field">
            <input type="text" name="group_name" id="group_name" value="{$FORMERROR.record.group_name}"/>
        </div>
    </div>
    <div class="admin_form_row">
        <div class="admin_form_label">
            <label>Privileges:</label>
        </div>
        <div class="admin_form_field">
            {foreach from=$privileges item=priv}
                <input type="checkbox" name="privileges[]" value="{$priv->privilege_int}" {if $record->group_privileges|hasflag:$priv->privilege_int} checked="checked"{/if}/>{$priv->privilege_name}<br />
            {/foreach}
        </div>
    </div>
    <div class="admin_form_row">
        <div class="admin_form_label">
            <label>Users:</label>
        </div>
        <div class="admin_form_field">
            <div style="float: left; width: 150px;">
                <select id="activeusers" multiple="multiple" style="width: 140px; height: 120px;">
                </select>
            </div>
            <div style="width: 50px; float: left; text-align: center; padding-top: 30px;">
                <button type="button" onclick="moveItem('nonusers', 'activeusers');">&#171;</button>
                <button type="button" onclick="moveItem('activeusers', 'nonusers');">&#187;</button>
            </div>
            <div style="margin-left: 200px; width: 150px;">
                <select id="nonusers" multiple="multiple" style="width: 140px; height: 120px;">
                {foreach from=$users item=user}
                    <option value="{$user->user_id}">{$user->user_name}</option>
                {/foreach}
                </select>
            </div>
        </div>
    </div>
    <div class="admin_form_row admin_form_submit">
        <input type="submit" value="Save" id="groups_submit" class="admin_form_submit">
    </div>
    <input type="hidden" name="action" value="add" />
    <input type="hidden" name="component" value="groups" />
</form>
<script>
{literal}
    function moveItem(from, to)
    {
        var fromObj = $('#'+from);
        var toObj = $('#'+to);
        
        fromObj.find("option").each(function(key, value) {
            if(value.selected)
            {
                toObj.append(value);
            }
        });
        
        updateUsersField();
    }
    
    function updateUsersField()
    {
        $("input[type=hidden]").each(function(key, value) {
            if($(value).attr("name") == "users[]")
            {
                $(value).remove();
            }
        });
        
        $("#activeusers option").each(function(key, value) {
            $('.admin_group_add').append("<input type='hidden' name='users[]' value='"+$(value).val()+"' />");
        });
        
        return true;
    }
{/literal}
</script>