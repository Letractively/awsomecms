{if $FORMERROR}{$FORMERROR}{/if}
<form method="post" action="/" class="form contact_send">
    {foreach from=$contactform->fields item=row}
        <div class="form_row">
            <div class="form_label">
                <label for="{$row->field_code}">{$row->field_name}{if $row->field_required == 1}<span class="required">*</span>{/if}:</label>
            </div>
            <div class="form_field">
                {assign var=fieldcode value=$row->field_code}
                {if $row->field_type == 1}
                    <input type="text" name="{$fieldcode}" id="{$fieldcode}"/>
                {elseif $row->field_type == 2}
                    <input type="password" name="{$fieldcode}" id="{$fieldcode}"/>
                {elseif $row->field_type == 3}
                    <textarea name="{$fieldcode}" id="{$fieldcode}" rows="5" cols="30"></textarea>
                {elseif $row->field_type == 4}
                    <select name="{$fieldcode}" id="{$fieldcode}">
                        <option>{"male"|text|ucfirst}</option>
                        <option>{"female"|text|ucfirst}</option>
                    </select>
                {/if}
            </div>
        </div>
    {/foreach}
    <div class="admin_form_row">
        <div class="admin_form_label">
            <label for="captcha">{"captcha"|text}<span class="required">*</span>:</label>
        </div>
        <div class="admin_form_field">
            <div style="height: 80px;">
                <img style="float: left;" src="/securimage_show.php?sid=d28544701be50bc66afb925278e38059" id="siimage">
                <a onclick="$('#siimage').attr('src', '/securimage_show.php?sid=' + Math.random()); return false" title="Refresh Image" href="#" style="border-style: none;" tabindex="-1">
                    <img border="0" align="bottom" onclick="this.blur()" alt="Reload Image" src="/img/refresh.gif">
                </a>
                <br />
             </div>
             Code:<br />
             <input type="text" class="empty" id="captcha" name="captcha">
         </div>
    </div>
    <div class="form_row form_submit">
        <input type="submit" value="{"send"|text|ucfirst}" id="contact_submit" class="form_submit" />
    </div>
    <input type="hidden" name="form_id" value="{$contactform->form_id}" />
    <input type="hidden" name="url" value="{$URL}" />
    <input type="hidden" name="action" value="send" />
    <input type="hidden" name="component" value="contact" />
</form>