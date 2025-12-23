local charSelectOn = false
hook_event(HOOK_ON_MODS_LOADED, function(m)
    charSelectOn = _G.charSelectExists
end)

custom_hud = true
showhud = true
stationaryPowerMeter = false
currHUD = 1 -- Required check for the custom power meter table to work. Also used to check which HUD to pick from in a multi-HUD pack

local powerMeters = {
    ["left"] = {
        [1] = get_texture_info("texture_power_meter_left_side")
    },
    ["right"] = {
        [1] = get_texture_info("texture_power_meter_right_side")
    },
    [1] = {
        [1] = get_texture_info("texture_power_meter_one_segments")
    },
    [2] = {
        [1] = get_texture_info("texture_power_meter_two_segments")
    },
    [3] = {
        [1] = get_texture_info("texture_power_meter_three_segments")
    },
    [4] = {
        [1] = get_texture_info("texture_power_meter_four_segments")
    },
    [5] = {
        [1] = get_texture_info("texture_power_meter_five_segments")
    },
    [6] = {
        [1] = get_texture_info("texture_power_meter_six_segments")
    },
    [7] = {
        [1] = get_texture_info("texture_power_meter_seven_segments")
    },
    [8] = {
        [1] = get_texture_info("texture_power_meter_full")
    }
}


--Using OneCalledRPG's custom hud as a base

function render_lives_segment(x, y, scaleW, scaleH)

    local lives = tostring(string.format(hud_get_value(HUD_DISPLAY_LIVES))):gsub("-", "M")


    if charSelectOn then
        djui_hud_print_text( _G.charSelect.character_get_nickname(_G.charSelect.character_get_current_number(0)):sub(1, 1), x - 12, y, scaleW)
        djui_hud_print_text( _G.charSelect.character_get_nickname(_G.charSelect.character_get_current_number(0)):sub(2, 2), x - 4, y, scaleW)
        --djui_chat_message_create("printing" .. currentCharacter)
    else
        djui_hud_print_text(gMarioStates[0].character.name:sub(1, 1), x - 12, y, scaleW)
		djui_hud_print_text(gMarioStates[0].character.name:sub(2, 2), x - 4, y, scaleW)
    end
    djui_hud_print_text("@", x + 16, y, scaleW)
    djui_hud_print_text(lives, x + 32, y, scaleW)
end

function render_coins_segment(x, y, scaleW, scaleH) -- Coins
    if appendZero then
        coins = tostring(string.format("%02d", hud_get_value(HUD_DISPLAY_COINS))):gsub("-", "M")
    else
        coins = tostring(string.format(hud_get_value(HUD_DISPLAY_COINS))):gsub("-", "M")
    end

    if gNetworkPlayers[0].currLevelNum ~= LEVEL_CASTLE_GROUNDS and gNetworkPlayers[0].currLevelNum ~= LEVEL_CASTLE_COURTYARD and gNetworkPlayers[0].currLevelNum ~= LEVEL_CASTLE then     -- Hides coin display in certain areas
        djui_hud_render_texture(gTextures.coin, x, y, scaleW, scaleH) -- Coin texture
        djui_hud_print_text("@", x + 16, y, scaleW) -- The X
        djui_hud_print_text(coins, x + 30, y, scaleW)
    end
end

function render_stars_segment(x, y, scaleW, scaleH) -- Stars
    if appendZero then
        stars = tostring(string.format("%02d", hud_get_value(HUD_DISPLAY_STARS))):gsub("-", "M")
    else
        stars = tostring(string.format(hud_get_value(HUD_DISPLAY_STARS))):gsub("-", "M")
    end

    --render_custom_star_icon(x, y, scaleW, scaleH) -- Gets the star icon from the earlier functions, in the event of a Character Select override
    if charSelectOn then
        _G.charSelect.character_render_star_icon(0, x, y, 1)
    else
        djui_hud_render_texture(gTextures.star, x, y, 1, 1)
    end
    if gMarioStates[0].numStars < 100 then  -- Renders the X if you have less than 100 stars
        djui_hud_print_text("@", x + 16, y, scaleW) -- The X
        djui_hud_print_text(stars, x + 30, y, scaleW)  -- The counter itself
    else
        djui_hud_print_text(stars, x + 16, y, scaleW)
    end
end

-- Timer handling
minutes = 0
seconds = 0
milliseconds = 0
function render_timer(timer, x, y)
    djui_hud_set_color(255, 255, 255, 255)

    
    if hud_get_value(HUD_DISPLAY_FLAGS) & HUD_DISPLAY_FLAGS_TIMER ~= 0 then
            minutes = math.floor(timer/30/60%60)
            seconds = math.floor(timer/30)%60
            milliseconds = math.floor(timer/30%1 * 10)

            djui_hud_print_text("TIME", x - 47, y, 1)
            djui_hud_print_text(string.format("%d", minutes), x + 12, y, 1)
            djui_hud_print_text("'", x + 22, y - 7, 1)
            djui_hud_print_text(string.format("%02d", seconds), x + 32, y, 1)
            djui_hud_print_text('"', x + 57, y - 7, 1)
            djui_hud_print_text(string.format("%d", milliseconds), x + 66, y, 1)
        end

end



-- Power meter handling
local pmTimer = 0
local ascendValue = 0
local doOnce = true
function render_power_meter(x, y, scaleW, scaleH)
    local health = math.ceil(gMarioStates[0].health / 256) - 1

    local renderPowerMeter = health < 8 or gMarioStates[0].action & ACT_GROUP_MASK == ACT_GROUP_SUBMERGED or stationaryPowerMeter
    if not stationaryPowerMeter then
        if pmTimer > 0 then
            pmTimer = pmTimer - 1
        elseif renderPowerMeter then
            if ascendValue < -1 then
                ascendValue = 35
            end
            if ascendValue >= 31 then ascendValue = ascendValue - 5
            elseif ascendValue >= 21 then ascendValue = ascendValue - 3
            elseif ascendValue >= 10 then ascendValue = ascendValue - 2
            elseif ascendValue >= 0 then ascendValue = ascendValue - 1 end
        else
            if ascendValue == -1 and not doOnce then
                pmTimer = 90
                doOnce = true
            end
            if ascendValue > 0 - 100 and pmTimer == 0 then
                ascendValue = ascendValue - 20
                doOnce = false
            end
        end
    end

    djui_hud_set_color(255, 255, 255, 255)
    -- DEFAULT POWER-METER RENDER (use these if you're not adding multiple power meters)
    --hud_render_power_meter(gMarioStates[0].health, x, y + ascendValue, scaleW, scaleH)
    --hud_render_power_meter_interpolated(gMarioStates[0].health, x, y + ascendValue, scaleW, scaleH, x, y + ascendValue, scaleW, scaleH) -- Interpolated version of the above function

    -- CUSTOM POWER-METER SUPPORT
    djui_hud_render_texture(powerMeters["left"][currHUD], x, y + ascendValue, scaleW, scaleH)
    djui_hud_render_texture(powerMeters["right"][currHUD], x + 32, y + ascendValue, scaleW, scaleH)
    if health > 0 then
        djui_hud_render_texture(powerMeters[health][currHUD], (x + 16), (y + 16) + ascendValue, scaleW, scaleH)
    end

end

-- Camera handling
local is_camera_cdown = false
function render_camera(x, y, scaleW, scaleH)
    local m = gMarioStates[0]
    local c = m.area and m.area.camera or nil
    if not c then return end
    local camText = nil
    if c.cutscene ~= 0 or (m.controller.buttonDown & R_TRIG ~= 0 and cam_select_alt_mode(0) == CAM_SELECTION_FIXED) or camera_is_frozen() then
        camText = gTextures.no_camera
    elseif set_cam_angle(0) == CAM_ANGLE_MARIO then
        camText = gTextures.mario_head
    else
        camText = gTextures.lakitu
    end
    if camText == gTextures.mario_head then --Determines whether or not to render out the custom character icon or the standard icon
        if charSelectOn then
            djui_hud_print_text( _G.charSelect.character_get_nickname(_G.charSelect.character_get_current_number(0)):sub(1, 1), x, y, 1)
            djui_hud_print_text( _G.charSelect.character_get_nickname(_G.charSelect.character_get_current_number(0)):sub(2, 2), x + 8, y, 1)
        else
            djui_hud_print_text(m.character.name:sub(1, 1), x, y, 1)
            djui_hud_print_text(m.character.name:sub(2, 2), x + 8, y, 1)
        end
    else
        djui_hud_render_texture(camText, x, y, scaleW, scaleH)
    end
    djui_hud_render_texture(gTextures.camera, x - 16, y, scaleW, scaleH)
    if c.mode == CAMERA_MODE_C_UP then
        djui_hud_render_texture(gTextures.arrow_up, x - 12, y - 8, scaleW, scaleH)
    end
    if c.cutscene == 0 and (c.mode ~= CAMERA_MODE_C_UP and c.mode ~= CAMERA_MODE_BEHIND_MARIO) then
        if m.controller.buttonPressed & D_CBUTTONS ~= 0 then
            is_camera_cdown = true
        elseif m.controller.buttonPressed & U_CBUTTONS ~= 0 then
            is_camera_cdown = false
        end
    end
    if is_camera_cdown then
        djui_hud_render_texture(gTextures.arrow_down, x - 12, y + 16, scaleW, scaleH)
    end
end

local function on_hud_render() -- Handles the HUD layouts 
	if not custom_hud then return end
	

    hud_hide()  -- Hides base HUD
    if obj_get_first_with_behavior_id(id_bhvActSelector) ~= nil then return end  -- Hides HUD during star select
    if gNetworkPlayers[0].currActNum == 99 then return end  -- Hides HUD during Act 99, aka the credits
    djui_hud_set_resolution(RESOLUTION_N64)  -- Sets resolution to N64
    djui_hud_set_color(255, 255, 255, 255) -- Sets colors to default, fixes weird HUD render quirks
    screenWidth = djui_hud_get_screen_width()  -- Width of the screen
    screenHeight = djui_hud_get_screen_height()  -- Height of the screen
    halfScreenWidth = djui_hud_get_screen_width() / 2  -- Half the width of the screen
    halfScreenHeight = djui_hud_get_screen_height() / 2  -- Half the height of the screen
    djui_hud_set_font(FONT_HUD)

	render_power_meter(halfScreenWidth - 51, 9, 1, 1) -- scale 65 for default power meter, though you might need to change it to a scale of 1 for custom textures

	if showhud then
        render_lives_segment(22, 15, 1, 1) -- Lives Segment positioning
        render_coins_segment(halfScreenWidth + 8, 15, 1, 1) -- Coins Segment positioning
        render_stars_segment(screenWidth - 76, 15, 1, 1) -- Stars Segment positioning
        render_timer(hud_get_value(HUD_DISPLAY_TIMER), halfScreenWidth + 54, 39) -- Vanilla Timer positioning
        render_camera(screenWidth - 38, screenHeight - 35, 1, 1) -- Camera mode icon positioning
	end
    
end

hook_event(HOOK_ON_HUD_RENDER_BEHIND, on_hud_render)

--hide hud button

local function hudhiderL(m)
	if not custom_hud then return end

	if m.playerIndex ~= 0 then return end

    if m.controller.buttonPressed & L_TRIG ~= 0 then
        play_sound(SOUND_MENU_REVERSE_PAUSE | SOUND_DISCRETE, m.marioObj.header.gfx.cameraToObject)
        
		--i learned this works as a way to switch!
        showhud = not showhud
    end
end

hook_event(HOOK_MARIO_UPDATE, hudhiderL)


hook_chat_command("custom-hud", "to toggle between custom and vanilla HUDs, /custom-hud [hide/show] to hide or show the HUD altogether",
function (msg)
    
    if msg == "hide" then --Hides hud
        play_sound(SOUND_MENU_CLICK_FILE_SELECT, gMarioStates[0].pos)
        hud_hide()
        custom_hud = false
        return true

    elseif msg == "unhide" or msg == "show" then --Reveals hud in it's current state
        play_sound(SOUND_MENU_CLICK_FILE_SELECT, gMarioStates[0].pos)
        if currHUD ~= 0 then
            custom_hud = true 
        else
            hud_show()
        end
        return true

    elseif msg == "base" or msg == "vanilla" or msg == "off" then --Toggles hud off and shows it, even if hidden
        play_sound(SOUND_MENU_CLICK_FILE_SELECT, gMarioStates[0].pos)
        custom_hud = false 
        hud_show()
        return true

    else --Toggles hud on if off or hidden, off if on
        custom_hud = not custom_hud
        play_sound(SOUND_MENU_CLICK_FILE_SELECT, gMarioStates[0].pos)
        hud_show()
        return true
    end
    return true
end)

--[[

hook_event(HOOK_UPDATE, function(m)
    
    djui_chat_message_create("your floor type is: " .. gMarioStates[0].floor.type)
    
end)

]]--
