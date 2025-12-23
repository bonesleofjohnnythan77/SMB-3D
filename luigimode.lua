
--"Steal this from Flood Expanded" - birdekek

local wm_timer = 0

local function display_welcome_message()
    djui_chat_message_create("\\#ffffdc\\IMPORTANT: You can type the \\#00ff00\\/luigi-mode\\#ffffdc\\ command in chat to enable/disable Luigi's controls from the original hack.")
end

local function welcome_message(m)
    if wm_timer then
        wm_timer = wm_timer + 1

        if wm_timer >= 25 then

                display_welcome_message()

            wm_timer = nil
        end
    end
end

--Luigi's Special Move (thanks pipocalio)

local function on_mario_update(m)
    if not LuigiMode then return end
	if m.playerIndex ~= 0 then return end
	if m.action == ACT_TWIRLING then return end
	if m.action == ACT_BUBBLED then return end

    if is_button_combo_pressed(controller, Z_TRIG, B_BUTTON) then
        set_mario_action(m, ACT_TWIRLING, 0)
    end
	
	
end

--Slippery luigi (thanks peachypeach)

local sSlipperySurfaces = {}

local function slippery(m)
    if m.playerIndex ~= 0 then return end

    if LuigiMode  and (m.action == ACT_BRAKING or m.action == ACT_TURNING_AROUND) then
        if m.floor.type == 0 then
            m.floor.type = SURFACE_SLIPPERY
            sSlipperySurfaces[m.floor] = true
        end
    else
        for surf in pairs(sSlipperySurfaces) do
            surf.type = 0
        end
        sSlipperySurfaces = {}
    end
end



function luigimode(msg)
	if msg == "" then
        if not LuigiMode then
            djui_popup_create("Luigi Mode \\#00ff00\\Activated", 1)
            LuigiMode = true
			audio_stream_play(SOUND_LUIGI_ON, false, 1)
        elseif LuigiMode then
            djui_popup_create("Luigi Mode \\#ff0000\\Deactivated", 1)
            LuigiMode = false
			audio_stream_play(SOUND_LUIGI_OFF, false, 1)
        end
        return true
    end

    return false
end


hook_event(HOOK_MARIO_UPDATE, on_mario_update)
hook_event(HOOK_UPDATE, welcome_message)
hook_event(HOOK_BEFORE_PHYS_STEP, slippery)
hook_chat_command("luigi-mode", "- Enables/Disables Luigi's Controls from the original SMB3D hack.", luigimode) 


--hook_event(HOOK_BEFORE_PHYS_STEP, slippery_update)
