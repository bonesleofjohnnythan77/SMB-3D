--Helpful Functions--

--Models

E_MODEL_CARNIVAL_PLATFORM = smlua_model_util_get_id("carnival_platform_geo")
E_MODEL_ORANGE_PLATFORM = smlua_model_util_get_id("orange_platform_geo")
E_MODEL_YELLOW_BLOCK = smlua_model_util_get_id("yellowblock_geo")


--Collisions
COL_CARNIVAL_PLATFORM = smlua_collision_util_get("carnival_platform_collision")
COL_ORANGE_PLATFORM = smlua_collision_util_get("orange_platform_collision")
COL_YELLOW_BLOCK = smlua_collision_util_get("yellowblock_collision")

--LuigiMode

SOUND_LUIGI_ON = audio_stream_load("luigi.mp3")
SOUND_LUIGI_OFF = audio_stream_load("nomore.mp3")

--Sequences
SEQ_CARNIVAL = 0x23
SEQ_GLACIER = 0x24
SEQ_BOWSER_CASTLE = 0x2
SEQ_BAUERNHOF = 0x28
SEQ_OUTSIDE_BAUERNHOF = 0x29
SEQ_SCHALCHTEREI = 0x2A
SEQ_RUSTYBUCKET = 0x2B
SEQ_GERUDO = 0x2C

LuigiMode = false

function is_button_combo_pressed(controller, ...)
    local mask = 0
	local m = gMarioStates[0]
	local controller = m.controller

    for _, v in ipairs {...} do
        mask = mask | v
    end

    if controller.buttonPressed & mask == 0 then
        return
    end

    return (controller.buttonDown & mask) | (controller.buttonPressed & mask) == mask
end

--get star count
function get_star_count() 
    return save_file_get_total_star_count(get_current_save_file_num() - 1, COURSE_MIN - 1, COURSE_MAX - 1)
end

--despawn if stars are below count
function despawn_if_stars_below_count(obj, count)
    if get_star_count() < count then
        obj_mark_for_deletion(obj)
    end
end

--opposite

function despawn_if_stars_above_count(obj, count)
    if get_star_count() >= count then
        obj_mark_for_deletion(obj)
    end
end

--do function for each object 
function for_each_object_with_behavior(behavior, func) -- by isaac
    local o = obj_get_first_with_behavior_id(behavior)
    while o do
        func(o)
        o = obj_get_next_with_same_behavior_id(o)
    end
end

--drop to floor
function object_drop_to_floor(obj)
    local x = obj.oPosX
    local y = obj.oPosY
    local z = obj.oPosZ

    local floorHeight = find_floor_height(x, y + 200, z)
    obj.oPosY = floorHeight
    obj.oMoveFlags = (obj.oMoveFlags | OBJ_MOVE_ON_GROUND)
end

--stop wing cap music

function stop_wingy_music()

if (gMarioStates[0].flags & MARIO_WING_CAP) then

stop_cap_music()

end

end

--play music if not playing yet

function play_music_if_not_yet(seq)
    local cur = get_current_background_music()
    if cur ~= seq and cur-1024 ~= SEQ_EVENT_POWERUP and cur-1024 ~= SEQ_EVENT_METAL_CAP then
        stop_background_music(cur)
        set_background_music(0, seq, 0)
    end
end

--override stage music

hook_event(HOOK_UPDATE, function() 

stop_wingy_music()

end)

hook_event(HOOK_MARIO_UPDATE, function(m)
    if m.playerIndex ~= 0 then return end
    
    local currLevel = gNetworkPlayers[0].currLevelNum
    
    if currLevel == LEVEL_BOB then
        play_music_if_not_yet(SEQ_CARNIVAL)
    elseif currLevel == LEVEL_WF then
        play_music_if_not_yet(SEQ_GLACIER)
    elseif currLevel == LEVEL_JRB then
        play_music_if_not_yet(SEQ_BOWSER_CASTLE)
    elseif currLevel == LEVELBBH then
        play_music_if_not_yet(SEQ_RUSTYBUCKET)
    elseif currLevel == LEVELBBH then
        play_music_if_not_yet(SEQ_GERUDO)
    end

    if currLevel == LEVEL_CCM then
        if m.floor.type == 253 then
            play_music_if_not_yet(SEQ_BAUERNHOF)
        elseif m.floor.type == 255 then
            play_music_if_not_yet(SEQ_OUTSIDE_BAUERNHOF)
        elseif m.floor.type == 112 then
            play_music_if_not_yet(SEQ_SCHALCHTEREI)
        end
    end

end)


hook_event(HOOK_BEFORE_SET_MARIO_ACTION, function(m)

	local noteblock = obj_get_nearest_object_with_behavior_id(m.marioObj, Bhv_Custom_0x130005d0)


    if obj_check_hitbox_overlap(o, m.marioObj) and m.action == ACT_DOUBLE_JUMP then
        m.particleFlags = m.particleFlags | PARTICLE_HORIZONTAL_STAR
    end
end)

-- Disable act select method #2

hook_event(HOOK_USE_ACT_SELECT, function(levelNum)

    if levelNum ~= LEVEL_CASTLE_GROUNDS then
        return false
    end

    return nil
end)

function mario_water(m)

	if m.playerIndex ~= 0 then return end

	
	
    -- prevent water heal
    if m.health >= 0x100 then
        if m.healCounter == 0 and m.hurtCounter == 0 then
            if ((m.action & ACT_FLAG_SWIMMING ~= 0) and (m.action & ACT_FLAG_INTANGIBLE == 0)) then
                if ((m.pos.y >= (m.waterLevel - 140)) and not (m.area.terrainType & TERRAIN_SNOW ~= 0)) then
                    m.health = m.health - 0x1A
                end
            end
        end
    end


end

hook_event(HOOK_MARIO_UPDATE, mario_water)
