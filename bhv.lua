--SMB3D CUSTOM BEHAVIORS-----------

--Rabbit NPC

local function rabbit_npc_init(o)
    o.oFlags = OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oAnimations = gObjectAnimations.mips_seg6_anims_06015634
    o.oInteractType = INTERACT_TEXT
    object_drop_to_floor(o)
    obj_set_hitbox_radius_and_height(o, 100, 60)
    obj_init_animation(o, 0)
    o.oBobombBuddyRole = 0
    cur_obj_set_home_once()
    bhv_bobomb_buddy_init()
    o.oIntangibleTimer = 0
end

local function rabbit_npc_loop(o)
    bhv_bobomb_buddy_loop() -- Generates script errors if used as the loop function for some reason
end

function bhv_piranha_plant_wild_loop()
end

--Red coins

---@param obj Object
function bhv_custom_red_coin_star_loop(obj)

if gNetworkPlayers[0].currLevelNum ~= LEVEL_WF then
    if obj.oHiddenStarTriggerCounter >= gMarioStates[0].area.numRedCoins - 2 then
        obj.oAction = 1
    end
end
end



--Yoshi

local function yoshi_star(o)

    despawn_if_stars_below_count(o, o.oBehParams2ndByte)

end

local function grandstar_custom(o)

spawn_star_number()

end


--Star enabled pipe

local function starpipe_init(o)

    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oInteractType = INTERACT_WARP
    o.collisionData = gGlobalObjectCollisionData.warp_pipe_seg3_collision_03009AC8
    o.oDrawingDistance = 16000
    o.oIntangibleTimer = 0
    obj_set_hitbox_radius_and_height(o, 70, 60)
    despawn_if_stars_below_count(o, o.oBehParams2ndByte)
	

end

local function starpipe_loop(o)

bhv_warp_loop()
load_object_collision_model()

end

--Progression boxes

local function boxlock_init(o)

    

    obj_set_model_extended(o, E_MODEL_METAL_BOX)
    o.collisionData = gGlobalObjectCollisionData.metal_box_seg8_collision_08024C28
    o.oDrawingDistance = 19455
    cur_obj_scale(1.17)
    

end

local function boxlock_loop(o)

    load_object_collision_model()
    despawn_if_stars_above_count(o, o.oBehParams2ndByte)
    
end



--Hidden Objects

function bhv_platspawn_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oCollisionDistance = 1500
	cur_obj_scale(1.60)
end

---@param o Object
function bhv_platspawn_loop(o)
    Func_Custom_0x804061b4(o)
end





---@param o Object
function Func_Custom_0x804061b4(o)
    ---@type Object?
    local purpleSwitch = nil

	obj_set_model_extended(o, E_MODEL_CARNIVAL_PLATFORM)
    o.collisionData = COL_CARNIVAL_PLATFORM

    if o.oAction == 0 then
        cur_obj_disable_rendering()
        cur_obj_become_intangible()
        if not o.oHiddenObjectUnkF4 then
            o.oHiddenObjectUnkF4 = obj_get_nearest_object_with_behavior_id(o, id_bhvFloorSwitchHiddenObjects)
        end
        purpleSwitch = o.oHiddenObjectUnkF4
        if purpleSwitch then
            if purpleSwitch.oAction == 2 then
                o.oAction = 1
                cur_obj_enable_rendering()
                cur_obj_unhide()
            end
        end
    else
        cur_obj_become_tangible()
        if cur_obj_wait_then_blink(360, 20) ~= 0 then
            o.oAction = 0
        end
        load_object_collision_model()
    end
end

function Func_Custom_Course2Hidden(o)
    ---@type Object?
    local purpleSwitch = nil

    if o.oAction == 0 then
        cur_obj_disable_rendering()
        cur_obj_become_intangible()
        if not o.oHiddenObjectUnkF4 then
            o.oHiddenObjectUnkF4 = obj_get_nearest_object_with_behavior_id(o, id_bhvFloorSwitchHiddenObjects)
        end
        purpleSwitch = o.oHiddenObjectUnkF4
        if purpleSwitch then
            if purpleSwitch.oAction == 2 then
                o.oAction = 1
                cur_obj_enable_rendering()
                cur_obj_unhide()
            end
        end
    else
        cur_obj_become_tangible()
        if cur_obj_wait_then_blink(360, 20) ~= 0 then
            o.oAction = 0
        end
        load_object_collision_model()
    end
end


--Carnival

--Elevator Platform

local function C1_elevator(o)

	obj_set_model_extended(o, E_MODEL_CARNIVAL_PLATFORM)
    o.collisionData = COL_CARNIVAL_PLATFORM

end

--Breakable Yellow Block

local function 	C1_yellowblock_init(o)

obj_set_model_extended(o, E_MODEL_YELLOW_BLOCK)
o.collisionData = COL_YELLOW_BLOCK

end

local function C1_yellowblock_loop(o)

load_object_collision_model()
bhv_unused_poundable_platform()

end

--Glacier Cocktail

--Orange Platform

local function orangeplatform_init(o)
	
	o.oDrawingDistance = 19455
	o.header.gfx.skipInViewCheck = true
	o.oCollisionDistance = 12288
	o.oAngleVelYaw = 200
	obj_set_model_extended(o, E_MODEL_ORANGE_PLATFORM)
	o.collisionData = COL_ORANGE_PLATFORM
	network_init_object(o, false, nil)
	
end

local function orangeplatform_loop(o)

	load_object_collision_model()
	cur_obj_rotate_face_angle_using_vel()

end

--Bowser's Castle

--Exclamation Thwomp

function Func_Custom_0x802ca75c(o)

network_init_object(o, true, { "oExclamationBoxUnkF4", "oExclamationBoxUnkF8", "oAction" })

cur_obj_scale(2)

if o.oAction == 3 then


o.header.gfx.scale.x = o.oExclamationBoxUnkF4 * 2.0;
o.header.gfx.scale.y = o.oExclamationBoxUnkF8 * 2.0;
o.header.gfx.scale.z = o.oExclamationBoxUnkF4 * 2.0;

end


end

--Farm & Slaughter

--Windmill

function Func_Custom_0x8030b478(o)

cur_obj_scale(2.3)
network_init_object(o, true, { "oFaceAngleRoll", "oAngleVelRoll", "oMoveAngleRoll" })

end

--Shell Creature

function bhv_shellthing(o)


o.oDamageOrCoinValue = 3

if o.oAction == 102 or o.oAction == 100 then

o.oAction = 0

end

end

--Toad

function explosive_toad_init(o)

o.oAnimations = gObjectAnimations.toad_seg6_anims_0600FB58
obj_init_animation(o, 6)
bhv_toad_message_init()
o.oIntangibleTimer = 0
o.oInteractStatus = 0
network_init_object(o, true,{"oInteractStatus", "activeFlags"})

end

function explosive_toad_loop(o)

--local player = nearest_mario_state_to_object(o)

o.oIntangibleTimer = 0
bhv_bowser_bomb_loop()




end



--Rusty Bucket

--Noteblock

function Func_Custom_0x8030b510(o)
    local m = nearest_mario_state_to_object(o)
    if obj_check_hitbox_overlap(o, m.marioObj) and m.action ~= ACT_DOUBLE_JUMP then
        play_sound(SOUND_ACTION_BOUNCE_OFF_OBJECT, m.marioObj.header.gfx.cameraToObject)
        set_mario_action(m, ACT_DOUBLE_JUMP, 1)
        m.vel.y = 85
		if (m.controller.buttonDown & A_BUTTON) ~= 0 then 
			spawn_non_sync_object(id_bhvHorStarParticleSpawner, E_MODEL_NONE, m.pos.x, m.pos.y, m.pos.z, nil)
		end
    end
	load_object_collision_model()
end

--Final Battle

--Infinite Bomb Spawner

function bhv_custom_spawn_manager_loop(o)

    network_init_object(o, true, { "oAction" })

    local player = nearest_player_to_object(o)
    local distanceToPlayer = player and dist_between_objects(o, player) or 10000


    local MGR_BOO_MGR_ACT_IDLE = 0
    local MGR_BOO_MGR_ACT_SPAWNING = 1


    if o.oAction == MGR_BOO_MGR_ACT_IDLE then
        if distanceToPlayer < 1000.0 then
            if player == gMarioStates[0].marioObj then

                local ground = find_floor_height(o.oPosX, o.oPosY, o.oPosZ)
                
                -- spawn bobomb
                spawn_sync_object(id_bhvBobomb, E_MODEL_BLACK_BOBOMB, 
                                  o.oPosX, ground, o.oPosZ, 
                                  function (bomb)
                                      bomb.oAction = BOBOMB_ACT_CHASE_MARIO
                                  end)
                

                o.oAction = MGR_BOO_MGR_ACT_SPAWNING
            end
        end
    elseif o.oAction == MGR_BOO_MGR_ACT_SPAWNING then
        if o.oTimer > 60 then
            o.oAction = MGR_BOO_MGR_ACT_IDLE
        end
    end
end

--FUUUUUUUUUUUCK THE SYNC I FORGOT TO SYNC FUCK FUCK FUCK SHIT FUCK FUUUUUUUUUUUUUUUUUCK

function bhv_beta_moving_flames_init(o)
    network_init_object(o, true, { "oMoveAngleYaw", "oForwardVel", "oMovingFlameTimer" })
end

function woodplank_init(o)
    network_init_object(o, true, { "oFaceAngleRoll", "oAngleVelRoll", "oMoveAngleRoll" })
end


--Hooks

hook_behavior(id_bhvRotatingPlatform, OBJ_LIST_GENACTOR, true, rabbit_npc_init, rabbit_npc_loop, "bhvTalkingRabbit")
hook_behavior(id_bhvGrandStar, OBJ_LIST_LEVEL, false, yoshi_star, grandstar_custom, "bhvGrandStar")
hook_behavior(id_bhvSLWalkingPenguin, OBJ_LIST_SURFACE, true, starpipe_init, starpipe_loop)
hook_behavior(id_bhvHiddenAt120Stars, OBJ_LIST_SURFACE, false, boxlock_init, boxlock_loop, "bhvBoxLock")
hook_behavior(id_bhvMerryGoRound, OBJ_LIST_SURFACE, true, orangeplatform_init, orangeplatform_loop, "bhvOrangePlatform")
hook_behavior(id_bhvSslMovingPyramidWall, OBJ_LIST_SURFACE, false, nil, C1_elevator, "bhvSSlElevator")
Bhv_Custom_0x13000014 = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_platspawn_init, bhv_platspawn_loop, "Bhv_Custom_0x13000014")
Bhv_Custom_0x1300003c = hook_behavior(nil, OBJ_LIST_SURFACE, true, C1_yellowblock_init, C1_yellowblock_loop, "Bhv_Custom_0x1300003c")
--Bhv_Custom_0x13002f08 = hook_behavior(nil, OBJ_LIST_GENACTOR, true, explosive_toad_init, explosive_toad_loop, "Bhv_Custom_0x13002f08")
hook_behavior(id_bhvHiddenRedCoinStar, OBJ_LIST_LEVEL, false, nil, bhv_custom_red_coin_star_loop)
hook_behavior(id_bhvBowserCourseRedCoinStar, OBJ_LIST_LEVEL, false, nil, bhv_custom_red_coin_star_loop)

hook_event(HOOK_UPDATE, function()
    
    for_each_object_with_behavior(bhvSMSRYoshiMessage, yoshi_star)

    end)