//Include this file at the bottom of behavior_data.c
const BehaviorScript bhvCastleFloorTrap[] = {
BEGIN(OBJ_LIST_DEFAULT),
DISABLE_RENDERING(),
};

const BehaviorScript bhvFishGroup[] = {
BEGIN(OBJ_LIST_GENACTOR),
LOAD_ANIMATIONS(10022,100751140),
GOTO( Bhv_Custom_0x130031e0),
};

const BehaviorScript Bhv_Custom_0x130031e0[] = {
LOAD_ANIMATIONS(10022,134363500),
OR_INT(oFlags,9289),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
};

const BehaviorScript bhvTankFishGroup[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,1),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tank_fish_group_loop),
END_LOOP(),
};

const BehaviorScript bhvBooInCastle[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,8265),
SET_HOME(),
SET_FLOAT(oGraphYOffset,60),
SET_OBJ_PHYSICS(30,0,65486,1000,1000,200,0,0),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_boo_in_castle_loop),
END_LOOP(),
};

const BehaviorScript bhvStarDoor[] = {
BEGIN(OBJ_LIST_GENACTOR),
CALL_NATIVE( bhv_castle_cannon_grate_init),
GOTO( Bhv_Custom_0x130031e0),
};

const BehaviorScript Bhv_Custom_0x130031e0[] = {
LOAD_ANIMATIONS(10022,134363500),
OR_INT(oFlags,9289),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
};

const BehaviorScript bhvDoorWarp[] = {
BEGIN(OBJ_LIST_SURFACE),
SET_INT(oInteractType,2048),
GOTO( Bhv_Custom_0x13000b14),
};

const BehaviorScript Bhv_Custom_0x13000b14[] = {
OR_INT(oFlags,201),
LOAD_ANIMATIONS(10022,50419392),
ANIMATE(0),
LOAD_COLLISION_DATA(col_key_door_geo_0xacf284),
SET_HITBOX(80,100),
SET_INT(oIntangibleTimer,0),
SET_FLOAT(oCollisionDistance,1000),
SET_HOME(),
CALL_NATIVE( bhv_door_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_door_loop),
END_LOOP(),
};

const BehaviorScript bhvWarp[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,9),
SET_INT(oInteractType,8192),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_warp_loop),
END_LOOP(),
};

const BehaviorScript bhvInstantActiveWarp[] = {
BREAK(),
};

const BehaviorScript bhvAirborneWarp[] = {
BREAK(),
};

const BehaviorScript bhvAirborneDeathWarp[] = {
BREAK(),
};

const BehaviorScript bhvHardAirKnockBackWarp[] = {
BREAK(),
};

const BehaviorScript bhvDeathWarp[] = {
BREAK(),
};

const BehaviorScript bhvLaunchStarCollectWarp[] = {
BREAK(),
};

const BehaviorScript bhvLaunchDeathWarp[] = {
BREAK(),
};

const BehaviorScript bhvAirborneStarCollectWarp[] = {
BREAK(),
};

const BehaviorScript bhvPaintingStarCollectWarp[] = {
BREAK(),
};

const BehaviorScript bhvPaintingDeathWarp[] = {
BREAK(),
};

const BehaviorScript bhvClockMinuteHand[] = {
BEGIN(OBJ_LIST_DEFAULT),
SET_INT(oAngleVelRoll,65152),
GOTO( Bhv_Custom_0x13001c94),
};

const BehaviorScript Bhv_Custom_0x13001c94[] = {
OR_INT(oFlags,1),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_rotating_clock_arm_loop),
END_LOOP(),
};

const BehaviorScript bhvClockHourHand[] = {
BEGIN(OBJ_LIST_DEFAULT),
SET_INT(oAngleVelRoll,65504),
OR_INT(oFlags,1),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_rotating_clock_arm_loop),
END_LOOP(),
};

const BehaviorScript bhvDecorativePendulum[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,1),
CALL_NATIVE( bhv_decorative_pendulum_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_decorative_pendulum_loop),
END_LOOP(),
};

const BehaviorScript bhvCameraLakitu[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,8265),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,134339148),
SET_HOME(),
CALL_NATIVE( bhv_goomba_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_camera_lakitu_update),
END_LOOP(),
};

const BehaviorScript bhvWaterLevelPillar[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_castle_geo_001940_0xe84987),
CALL_NATIVE( bhv_water_level_pillar_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_water_level_pillar_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvDddWarp[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
SET_FLOAT(oCollisionDistance,30000),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ddd_warp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvMips[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1033),
LOAD_ANIMATIONS(10022,100751140),
SET_INT(oInteractType,2),
DROP_TO_FLOOR(),
SET_HITBOX(50,75),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_mips_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_mips_loop),
END_LOOP(),
};

const BehaviorScript bhvFlame[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
BILLBOARD(),
SET_HOME(),
SCALE(0,700),
SET_INTERACT_TYPE(262144),
SET_HITBOX_WITH_OFFSET(50,25,25),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
SET_INT(oInteractStatus,0),
ANIMATE_TEXTURE(oAnimState,2),
END_LOOP(),
};

const BehaviorScript bhvSpinAirborneWarp[] = {
BREAK(),
};

const BehaviorScript bhvWarpPipe[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
SET_INT(oInteractType,8192),
LOAD_COLLISION_DATA(col_None_0xabbed4),
SET_FLOAT(oDrawingDistance,19455),
SET_INT(oIntangibleTimer,0),
SET_HITBOX(70,50),
BEGIN_LOOP(),
CALL_NATIVE( bhv_warp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvRedCoin[] = {
BEGIN(OBJ_LIST_LEVEL),
SCALE(0,160),
BILLBOARD(),
SET_INT(oIntangibleTimer,0),
SET_INT(oAnimState,65535),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_red_coin_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_red_coin_loop),
ADD_INT(oAnimState,1),
END_LOOP(),
};

const BehaviorScript bhvBowserCourseRedCoinStar[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,16385),
BEGIN_LOOP(),
CALL_NATIVE( bhv_bowser_course_red_coin_star_loop),
END_LOOP(),
};

const BehaviorScript bhvThwomp[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_thwomp_geo_0x86c6ac),
OR_INT(oFlags,73),
DROP_TO_FLOOR(),
ADD_FLOAT(oPosY,1),
SCALE(0,140),
SET_HOME(),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( bhv_grindel_thwomp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvSnufit[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
SET_HOME(),
SET_OBJ_PHYSICS(30,0,65486,0,0,0,0,0),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
SET_INT(oUkikiTauntsToBeDone,0),
CALL_NATIVE( bhv_snufit_loop),
END_LOOP(),
};

const BehaviorScript bhvYellowCoin[] = {
BEGIN(OBJ_LIST_LEVEL),
BILLBOARD(),
SCALE(0,160),
CALL_NATIVE( bhv_yellow_coin_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_yellow_coin_loop),
END_LOOP(),
};

const BehaviorScript bhvDorrie[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_hazy_maze_door_geo_0xacf284),
OR_INT(oFlags,1),
SCALE(0,223),
BEGIN_LOOP(),
CALL_NATIVE( bhv_merry_go_round_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x130005d0[] = {
BEGIN(OBJ_LIST_GENACTOR),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
SET_HITBOX(168,212),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( Func_Custom_0x8030b510),
CALL_NATIVE( bhv_mr_i_loop),
SET_INT(oInteractStatus,0),
END_LOOP(),
};

const BehaviorScript bhvPushableMetalBox[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_metal_box_geo_0x317c818),
SET_FLOAT(oDrawingDistance,19455),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_pushable_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvPoleGrabbing[] = {
BEGIN(OBJ_LIST_POLELIKE),
OR_INT(oFlags,1),
SET_INT(oInteractType,64),
SET_HITBOX(80,1500),
CALL_NATIVE( bhv_pole_init),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_pole_base_loop),
END_LOOP(),
};

const BehaviorScript bhvHeaveHo[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9289),
LOAD_ANIMATIONS(10022,83972940),
ANIMATE(0),
SET_OBJ_PHYSICS(200,65136,65486,1000,1000,600,0,0),
SPAWN_OBJ(0,318772644),
SET_INT(oInteractType,2),
SET_INT(oInteractionSubtype,516),
SET_HITBOX(120,100),
SET_HOME(),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_heave_ho_loop),
END_LOOP(),
};

const BehaviorScript bhvBulletBill[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8267),
SET_HOME(),
SET_HITBOX_WITH_OFFSET(50,50,50),
SET_INTERACT_TYPE(8),
SET_INT(oDamageOrCoinValue,3),
SCALE(0,40),
SET_INT(oIntangibleTimer,0),
SET_OBJ_PHYSICS(30,0,0,0,0,0,0,0),
CALL_NATIVE( bhv_bullet_bill_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_bullet_bill_loop),
END_LOOP(),
};

const BehaviorScript bhvLargeFishGroup[] = {
BEGIN(OBJ_LIST_DEFAULT),
DISABLE_RENDERING(),
};

const BehaviorScript bhvFish3[] = {
BEGIN(OBJ_LIST_DEFAULT),
SET_INT(oBehParams2ndByte,1),
GOTO( Bhv_Custom_0x13002160),
};

const BehaviorScript Bhv_Custom_0x13002160[] = {
DISABLE_RENDERING(),
};

const BehaviorScript bhvFish2[] = {
BEGIN(OBJ_LIST_DEFAULT),
SET_INT(oBehParams2ndByte,0),
GOTO( Bhv_Custom_0x13002160),
};

const BehaviorScript Bhv_Custom_0x13002160[] = {
DISABLE_RENDERING(),
};

const BehaviorScript bhvStar[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_collect_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_collect_star_loop),
END_LOOP(),
};

const BehaviorScript bhvFireSpitter[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8257),
BILLBOARD(),
SCALE(0,40),
BEGIN_LOOP(),
CALL_NATIVE( bhv_fire_spitter_update),
END_LOOP(),
};

const BehaviorScript bhvGoombaTripletSpawner[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,65),
DROP_TO_FLOOR(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_goomba_triplet_spawner_update),
END_LOOP(),
};

const BehaviorScript bhvCoinFormation[] = {
BEGIN(OBJ_LIST_SPAWNER),
OR_INT(oFlags,65),
CALL_NATIVE( bhv_coin_formation_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_coin_formation_loop),
END_LOOP(),
};

const BehaviorScript bhvBobomb[] = {
BEGIN(OBJ_LIST_DESTRUCTIVE),
OR_INT(oFlags,25673),
LOAD_ANIMATIONS(10022,134363500),
DROP_TO_FLOOR(),
ANIMATE(0),
SET_INT(oIntangibleTimer,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_bobomb_loop),
END_LOOP(),
};

const BehaviorScript bhvFlyGuy[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8257),
LOAD_ANIMATIONS(10022,134290020),
ANIMATE(0),
SET_HOME(),
SET_OBJ_PHYSICS(50,0,0,0,1000,600,0,0),
CALL_NATIVE( bhv_init_room),
SET_INT(oInteractionSubtype,128),
SET_FLOAT(oGraphYOffset,30),
SCALE(0,150),
BEGIN_LOOP(),
CALL_NATIVE( bhv_fly_guy_update),
END_LOOP(),
};

const BehaviorScript bhv1Up[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
BILLBOARD(),
SET_HITBOX_WITH_OFFSET(30,30,0),
SET_FLOAT(oGraphYOffset,30),
CALL_NATIVE( bhv_1up_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_1up_loop),
END_LOOP(),
};

const BehaviorScript bhvIgloo[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
SCALE(0,223),
BEGIN_LOOP(),
ADD_INT(oFaceAngleRoll,400),
CALL_NATIVE( Func_Custom_0x8030b478),
END_LOOP(),
};

const BehaviorScript bhvMontyMoleHole[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,8257),
DROP_TO_FLOOR(),
SCALE(0,150),
BEGIN_LOOP(),
CALL_NATIVE( bhv_monty_mole_hole_update),
END_LOOP(),
};

const BehaviorScript bhvMontyMole[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,83915336),
ANIMATE(3),
SET_OBJ_PHYSICS(30,0,65486,1000,1000,200,0,0),
HIDE(),
SET_INT(oIntangibleTimer,65535),
SET_FLOAT(oGraphYOffset,65476),
SCALE(0,150),
DELAY(1),
CALL_NATIVE( bhv_monty_mole_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_monty_mole_update),
END_LOOP(),
};

const BehaviorScript bhvBreakableBox[] = {
BEGIN(OBJ_LIST_SURFACE),
SCALE(0,76),
LOAD_COLLISION_DATA(breakable_box_seg8_collision_08012D70),
SET_FLOAT(oCollisionDistance,500),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_breakable_box_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvButterfly[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,9),
LOAD_ANIMATIONS(10022,50353840),
DROP_TO_FLOOR(),
SET_FLOAT(oGraphYOffset,5),
CALL_NATIVE( bhv_butterfly_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_butterfly_loop),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13002f08[] = {
BEGIN(OBJ_LIST_GENACTOR),
LOAD_ANIMATIONS(10022,100727880),
ANIMATE(6),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bowser_bomb_loop),
CALL_NATIVE( bhv_toad_message_init),
END_LOOP(),
};

const BehaviorScript bhvBoo[] = {
BEGIN(OBJ_LIST_GENACTOR),
SET_INT(oBehParams2ndByte,1),
GOTO( Bhv_Custom_0x13002808),
};

const BehaviorScript Bhv_Custom_0x13002808[] = {
OR_INT(oFlags,8265),
SET_INT(oIntangibleTimer,0),
SET_HOME(),
SET_INT(oDamageOrCoinValue,2),
SET_HITBOX(140,80),
SET_HURTBOX(40,60),
SET_FLOAT(oGraphYOffset,30),
CALL_NATIVE( bhv_init_room),
SPAWN_CHILD(116,318769288),
SET_OBJ_PHYSICS(30,0,65486,1000,1000,200,0,0),
CALL_NATIVE( bhv_boo_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_boo_loop),
END_LOOP(),
};

const BehaviorScript bhvTtmBowlingBallSpawner[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1),
SET_INT(oYoshiChosenHome,63),
CALL_NATIVE( bhv_generic_bowling_ball_spawner_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_generic_bowling_ball_spawner_loop),
END_LOOP(),
};

const BehaviorScript bhvCloud[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,8265),
BILLBOARD(),
SET_HOME(),
SET_INT(oOpacity,240),
BEGIN_LOOP(),
CALL_NATIVE( bhv_cloud_update),
END_LOOP(),
};

const BehaviorScript bhvMacroUkiki[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9289),
SET_INT(oInteractType,2),
SET_INT(oInteractionSubtype,16),
SET_HITBOX(40,40),
SET_INT(oIntangibleTimer,0),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,83974020),
ANIMATE(0),
SET_OBJ_PHYSICS(30,65136,65486,0,0,200,0,0),
SET_HOME(),
CALL_NATIVE( bhv_ukiki_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ukiki_loop),
END_LOOP(),
};

const BehaviorScript bhvWaterBombCannon[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,65),
BEGIN_LOOP(),
CALL_NATIVE( bhv_water_bomb_cannon_loop),
END_LOOP(),
};

const BehaviorScript bhvFlamethrower[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,73),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_flamethrower_loop),
END_LOOP(),
};

const BehaviorScript bhvFadingWarp[] = {
BEGIN(OBJ_LIST_LEVEL),
SET_INT(oInteractionSubtype,1),
OR_INT(oFlags,9),
SET_INT(oInteractType,8192),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_fading_warp_loop),
END_LOOP(),
};

const BehaviorScript bhvChainChomp[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8393),
LOAD_ANIMATIONS(10022,100815224),
ANIMATE(0),
HIDE(),
SET_HOME(),
SET_FLOAT(oGraphYOffset,240),
SCALE(0,200),
BEGIN_LOOP(),
CALL_NATIVE( bhv_chain_chomp_update),
END_LOOP(),
};

const BehaviorScript bhvFloorSwitchHiddenObjects[] = {
BEGIN(OBJ_LIST_SURFACE),
SET_INT(oBehParams2ndByte,2),
GOTO( Bhv_Custom_0x13001488),
};

const BehaviorScript Bhv_Custom_0x13001488[] = {
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_purple_switch_geo_0x3035398),
BEGIN_LOOP(),
CALL_NATIVE( bhv_purple_switch_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13000014[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,73),
LOAD_COLLISION_DATA(col_hmc_geo_0005A0_0xeb82ff),
SET_HOME(),
SCALE(0,160),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_object_loop),
END_LOOP(),
};

const BehaviorScript bhvWoodenPost[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_wooden_post_geo_0xa0bdc4),
OR_INT(oFlags,8257),
SET_OBJ_PHYSICS(0,65136,65486,1000,1000,200,0,0),
SET_INT(oNumLootCoins,5),
DROP_TO_FLOOR(),
SET_HOME(),
SCALE(0,50),
BEGIN_LOOP(),
CALL_NATIVE( bhv_wooden_post_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvExclamationBox[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_exclamation_box_geo_0x304eb68),
OR_INT(oFlags,1),
SET_FLOAT(oCollisionDistance,300),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_exclamation_box_loop),
END_LOOP(),
};

const BehaviorScript bhvSmallWhomp[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,100796932),
LOAD_COLLISION_DATA(col_whomp_geo_0xa2a340),
ANIMATE(0),
SET_OBJ_PHYSICS(0,65136,65486,0,0,200,0,0),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_whomp_loop),
END_LOOP(),
};

const BehaviorScript bhvPitBowlingBall[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1),
BILLBOARD(),
SET_FLOAT(oGraphYOffset,130),
CALL_NATIVE( bhv_bob_pit_bowling_ball_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_bob_pit_bowling_ball_loop),
END_LOOP(),
};

const BehaviorScript bhvJumpingBox[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1089),
SET_OBJ_PHYSICS(30,65136,65486,1000,1000,600,0,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_jumping_box_loop),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x1300003c[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_hmc_geo_0005D0_0xeb8203),
GOTO( Bhv_Custom_0x130015f4),
};

const BehaviorScript Bhv_Custom_0x130015f4[] = {
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_unused_poundable_platform),
END_LOOP(),
};

const BehaviorScript bhvSslMovingPyramidWall[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
LOAD_COLLISION_DATA(col_hmc_geo_0005A0_0xeb82ff),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvHoot[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_None_0x889b68),
SET_HOME(),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( bhv_exclamation_box_loop),
CALL_NATIVE( bhv_pushable_loop),
CALL_NATIVE( Func_Custom_0x802ca75c),
END_LOOP(),
};

const BehaviorScript bhvKoopa[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,8257),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,100733796),
ANIMATE(9),
SET_HOME(),
SET_OBJ_PHYSICS(50,65136,0,0,1000,200,0,0),
SCALE(0,150),
SET_FLOAT(oUkikiTauntsToBeDone,1),
CALL_NATIVE( bhv_koopa_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_koopa_update),
END_LOOP(),
};

const BehaviorScript bhvKoopaRaceEndpoint[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,65),
DROP_TO_FLOOR(),
SPAWN_CHILD_WITH_PARAM(0,106,318785016),
BEGIN_LOOP(),
CALL_NATIVE( bhv_koopa_race_endpoint_update),
END_LOOP(),
};

const BehaviorScript bhvThwomp2[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_thwomp_geo_0x86c808),
OR_INT(oFlags,73),
SET_HOME(),
SCALE(0,140),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_moving_octagonal_mesh_platform_loop),
CALL_NATIVE( bhv_squarish_path_moving_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvTreasureChests[] = {
BEGIN(OBJ_LIST_GENACTOR),
SET_INTERACT_TYPE(1073741824),
BILLBOARD(),
SET_HITBOX(85,85),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
SET_INT(oInteractStatus,0),
END_LOOP(),
};

const BehaviorScript bhvPiranhaPlant[] = {
BEGIN(OBJ_LIST_GENACTOR),
SET_INTERACT_TYPE(268435456),
SET_HITBOX(216,72),
LOAD_ANIMATIONS(10022,100778780),
ANIMATE(0),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( Func_Custom_0x802ca720),
SET_INT(oInteractStatus,0),
END_LOOP(),
};

const BehaviorScript bhvMerryGoRoundBooManager[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,65),
BEGIN_LOOP(),
CALL_NATIVE( bhv_merry_go_round_boo_manager_loop),
END_LOOP(),
};

const BehaviorScript bhvKingBobomb[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8393),
LOAD_ANIMATIONS(10022,83951152),
SET_INT(oInteractType,2),
SET_HITBOX(100,100),
SET_OBJ_PHYSICS(30,65136,65486,1000,1000,200,0,0),
SET_INT(oIntangibleTimer,0),
DROP_TO_FLOOR(),
SET_HOME(),
SPAWN_OBJ(0,318767700),
SET_INT(oHealth,3),
SET_INT(oDamageOrCoinValue,1),
BEGIN_LOOP(),
CALL_NATIVE( bhv_king_bobomb_loop),
END_LOOP(),
};

const BehaviorScript bhvSLWalkingPenguin[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
SET_INT(oInteractType,8192),
LOAD_COLLISION_DATA(col_warp_pipe_geo_0xabbed4),
SET_FLOAT(oDrawingDistance,16000),
SET_INT(oIntangibleTimer,0),
SET_HITBOX(70,50),
CALL_NATIVE( bhv_yoshi_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_warp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvRotatingPlatform[] = {
BEGIN(OBJ_LIST_GENACTOR),
CALL_NATIVE( bhv_yoshi_init),
LOAD_ANIMATIONS(10022,100751140),
GOTO( Bhv_Custom_0x130031e8),
};

const BehaviorScript Bhv_Custom_0x130031e8[] = {
OR_INT(oFlags,9289),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
};

const BehaviorScript bhvGrandStar[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
SET_INTERACT_TYPE(4096),
SET_INT(oInteractionSubtype,2048),
SET_HITBOX(160,100),
SET_HOME(),
CALL_NATIVE( bhv_yoshi_init),
GOTO( bhvAlphaBooKey),
};

const BehaviorScript bhvYoshi[] = {
BEGIN(OBJ_LIST_GENACTOR),
LOAD_ANIMATIONS(10022,84034024),
CALL_NATIVE( bhv_yoshi_init),
GOTO( Bhv_Custom_0x130031e8),
};

const BehaviorScript Bhv_Custom_0x130031e8[] = {
OR_INT(oFlags,9289),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
};

const BehaviorScript bhvHiddenAt120Stars[] = {
BEGIN(OBJ_LIST_SURFACE),
SCALE(0,117),
LOAD_COLLISION_DATA(col_metal_box_dl_0xaa6444),
SET_FLOAT(oDrawingDistance,19455),
CALL_NATIVE( bhv_castle_cannon_grate_init),
BEGIN_LOOP(),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvThiHugeIslandTop[] = {
BEGIN(OBJ_LIST_SURFACE),
SCALE(0,160),
LOAD_COLLISION_DATA(col_cannon_lid_seg8_dl_080048E0_0xa8616c),
SET_HOME(),
CALL_NATIVE( bhv_yoshi_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_wood_piece_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvGoomba[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,8265),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,134339148),
SET_HOME(),
SET_OBJ_PHYSICS(40,65136,65486,1000,1000,0,0,0),
CALL_NATIVE( bhv_goomba_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_goomba_update),
END_LOOP(),
};

const BehaviorScript bhvToxBox[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,73),
LOAD_COLLISION_DATA(col_ssl_geo_000630_0xed2bcb),
ADD_FLOAT(oPosY,256),
SET_FLOAT(oDrawingDistance,8000),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tox_box_loop),
END_LOOP(),
};

const BehaviorScript bhvLllHexagonalMesh[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
LOAD_COLLISION_DATA(ssl_seg7_collision_0702808C),
GOTO( Bhv_Custom_0x13003b40),
};

const BehaviorScript Bhv_Custom_0x13003b40[] = {
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvCapSwitch[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_cap_switch_geo_0x913d94),
BEGIN_LOOP(),
CALL_NATIVE( bhv_cap_switch_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvBetaMovingFlames[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,11),
BILLBOARD(),
SET_INT(oIntangibleTimer,0),
SCALE(0,160),
BEGIN_LOOP(),
CALL_NATIVE( bhv_beta_moving_flames_loop),
ADD_INT(oAnimState,1),
ADD_INT(oMoveAngleYaw,256),
SET_INTERACT_TYPE(262144),
ANIMATE_TEXTURE(oAnimState,2),
SET_INT(oInteractStatus,0),
END_LOOP(),
};

const BehaviorScript bhvChuckya[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1097),
LOAD_ANIMATIONS(10022,134266992),
ANIMATE(5),
SET_INT(oInteractType,2),
SET_HITBOX(150,100),
SET_OBJ_PHYSICS(30,65136,65486,1000,1000,200,0,0),
SPAWN_OBJ(0,318768516),
SET_INT(oNumLootCoins,5),
SET_INT(oIntangibleTimer,0),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_chuckya_loop),
END_LOOP(),
};

const BehaviorScript bhvSwoop[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,100692176),
SET_HOME(),
SET_OBJ_PHYSICS(50,0,65486,0,0,0,0,0),
CALL_NATIVE( bhv_init_room),
SCALE(0,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_swoop_update),
END_LOOP(),
};

const BehaviorScript bhvTowerDoor[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(bbh_seg7_collision_haunted_bookshelf),
SCALE(0,80),
SET_HITBOX(255,255),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tower_door_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvCannonClosed[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,16385),
LOAD_COLLISION_DATA(col_custom_DL_080048e0_0x3056130),
SET_HOME(),
CALL_NATIVE( bhv_cannon_closed_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_cannon_closed_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvBobombBuddyOpensCannon[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,25673),
LOAD_ANIMATIONS(10022,134363500),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,1),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
};

const BehaviorScript bhvBbhTumblingBridge[] = {
BEGIN(OBJ_LIST_SPAWNER),
OR_INT(oFlags,193),
SET_HOME(),
SET_INT(oBehParams2ndByte,1),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tumbling_bridge_loop),
END_LOOP(),
};

const BehaviorScript bhvMeshElevator[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
SET_FLOAT(oDrawingDistance,19455),
LOAD_COLLISION_DATA(col_geo_bbh_000628_0xdd80b1),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvWdwSquareFloatingPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,73),
LOAD_COLLISION_DATA(col_custom_DL_08024bb8_0x3076408),
SET_FLOAT(oDrawingDistance,19455),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_wood_piece_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvScuttlebugSpawn[] = {
BEGIN(OBJ_LIST_SPAWNER),
OR_INT(oFlags,65),
BEGIN_LOOP(),
CALL_NATIVE( bhv_scuttlebug_spawn_loop),
END_LOOP(),
};

const BehaviorScript bhvHiddenObject[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_geo_bbh_000628_0xdd80b1),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_object_loop),
END_LOOP(),
};

const BehaviorScript bhvBlueCoinSwitch[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_blue_coin_switch_geo_0x3052678),
BEGIN_LOOP(),
CALL_NATIVE( bhv_blue_coin_switch_loop),
END_LOOP(),
};

const BehaviorScript bhvHiddenBlueCoin[] = {
BEGIN(OBJ_LIST_LEVEL),
SET_INT(oInteractType,16),
OR_INT(oFlags,193),
BILLBOARD(),
SET_HITBOX(100,64),
SET_INT(oDamageOrCoinValue,5),
SET_INT(oIntangibleTimer,0),
SET_INT(oAnimState,65535),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_blue_coin_loop),
ADD_INT(oAnimState,1),
END_LOOP(),
};

const BehaviorScript bhvBobombBuddy[] = {
BEGIN(OBJ_LIST_GENACTOR),
LOAD_ANIMATIONS(10022,134363500),
OR_INT(oFlags,9289),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
};

const BehaviorScript bhvMerryGoRound[] = {
BEGIN(OBJ_LIST_SURFACE),
BEGIN(OBJ_LIST_PLAYER),
LOAD_COLLISION_DATA(col_geo_bbh_000658_0xdd310d),
SET_FLOAT(oDrawingDistance,19455),
BEGIN(OBJ_LIST_PLAYER),
SET_INT(oAngleVelYaw,200),
SET_FLOAT(oCollisionDistance,12288),
BEGIN_LOOP(),
BEGIN(OBJ_LIST_PLAYER),
CALL_NATIVE( load_object_collision_model),
CALL_NATIVE( cur_obj_rotate_face_angle_using_vel),
END_LOOP(),
};

const BehaviorScript bhvWaterBombSpawner[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,65),
DROP_TO_FLOOR(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_water_bomb_spawner_update),
END_LOOP(),
};

const BehaviorScript bhvBooWithCage[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
SET_HOME(),
SET_INT(oDamageOrCoinValue,3),
SET_HURTBOX(80,120),
SET_HITBOX(180,140),
SET_FLOAT(oGraphYOffset,60),
SET_OBJ_PHYSICS(30,0,65486,1000,1000,200,0,0),
CALL_NATIVE( bhv_boo_with_cage_init),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_boo_with_cage_loop),
END_LOOP(),
};

const BehaviorScript bhvAmbientSounds[] = {
BEGIN(OBJ_LIST_DEFAULT),
CALL_NATIVE( bhv_ambient_sounds_init),
BEGIN_LOOP(),
END_LOOP(),
};

const BehaviorScript bhvBirdsSoundLoop[] = {
BEGIN(OBJ_LIST_DEFAULT),
BEGIN_LOOP(),
CALL_NATIVE( bhv_birds_sound_loop),
END_LOOP(),
};

const BehaviorScript bhvCourtyardBooTriplet[] = {
BEGIN(OBJ_LIST_DEFAULT),
DISABLE_RENDERING(),
};

const BehaviorScript bhvHiddenStarTrigger[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
SET_HITBOX(100,100),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_star_trigger_loop),
END_LOOP(),
};

const BehaviorScript bhvHiddenStar[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,16385),
CALL_NATIVE( bhv_hidden_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_star_loop),
END_LOOP(),
};

const BehaviorScript bhvFirePiranhaPlant[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,100778780),
ANIMATE(0),
SET_HOME(),
HIDE(),
CALL_NATIVE( bhv_fire_piranha_plant_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_fire_piranha_plant_update),
END_LOOP(),
};

const BehaviorScript bhvRecoveryHeart[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,8257),
BEGIN_LOOP(),
CALL_NATIVE( bhv_recovery_heart_loop),
END_LOOP(),
};

const BehaviorScript bhvFlyingWarp[] = {
BREAK(),
};

const BehaviorScript bhvHiddenRedCoinStar[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,16385),
CALL_NATIVE( bhv_hidden_red_coin_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_red_coin_star_loop),
END_LOOP(),
};

const BehaviorScript bhvSpinAirborneCircleWarp[] = {
BREAK(),
};

const BehaviorScript bhvTiltingBowserLavaPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,8193),
LOAD_COLLISION_DATA(col_bowser_2_geo_000170_0x115df4f),
SET_FLOAT(oDrawingDistance,20000),
SET_FLOAT(oCollisionDistance,20000),
SET_INT(oFaceAngleYaw,0),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( cur_obj_rotate_face_angle_using_vel),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvBowserBomb[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1),
SET_INT(oIntangibleTimer,0),
SET_HITBOX_WITH_OFFSET(40,40,40),
DELAY(1),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bowser_bomb_loop),
END_LOOP(),
};

