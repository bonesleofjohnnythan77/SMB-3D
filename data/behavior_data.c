const BehaviorScript bhvPiranhaPlant[] = {
    BEGIN(OBJ_LIST_GENACTOR),
	ID(id_bhvPiranhaPlant),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE|OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW|OBJ_FLAG_COMPUTE_DIST_TO_MARIO|OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO),
    LOAD_ANIMATIONS(oAnimations, piranha_plant_seg6_anims_0601C31C),
    ANIMATE(0),
    SET_INTERACT_TYPE(268435456),
	SET_INT(oDamageOrCoinValue,3)
    SET_HITBOX(216, 72),
    BEGIN_LOOP(),
		SET_INT(oIntangibleTimer,0),
        CALL_NATIVE(bhv_piranha_plant_wild_loop),
		SET_INT(oInteractStatus,0),
    END_LOOP(),
};

const BehaviorScript bhvBetaMovingFlames[] = {
BEGIN(OBJ_LIST_LEVEL),
ID(id_bhvBetaMovingFlames),
OR_INT(oFlags,11),
BILLBOARD(),
SET_INT(oIntangibleTimer,0),
SCALE(0,160),
CALL_NATIVE( bhv_beta_moving_flames_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_beta_moving_flames_loop),
ADD_INT(oAnimState,1),
ADD_INT(oMoveAngleYaw,256),
SET_INTERACT_TYPE(262144),
ANIMATE_TEXTURE(oAnimState,2),
SET_INT(oInteractStatus,0),
END_LOOP(),
};

const BehaviorScript bhvBreakableBox[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvBreakableBox),
SCALE(0,76),
LOAD_COLLISION_DATA(breakable_box_seg8_collision_08012D70),
SET_FLOAT(oCollisionDistance,500),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_breakable_box_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvYellowCoinBig[] = {
    BEGIN(OBJ_LIST_LEVEL),
    ID(id_bhvNewId),
    BILLBOARD(),
	SCALE(0,160),
	CALL_NATIVE( bhv_init_room),
    CALL_NATIVE(bhv_yellow_coin_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_yellow_coin_loop),
    END_LOOP(),
};

const BehaviorScript bhvRedCoin[] = {
BEGIN(OBJ_LIST_LEVEL),
ID(id_bhvRedCoin),
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

const BehaviorScript bhvLllHexagonalMesh[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvLllHexagonalMesh),
OR_INT(oFlags,17),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
LOAD_COLLISION_DATA(ssl_seg7_collision_0702808C),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvTowerDoor[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvTowerDoor),
LOAD_COLLISION_DATA(bbh_seg7_collision_haunted_bookshelf),
SCALE(0,80),
SET_HITBOX(255,255),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tower_door_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvHiddenObject[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvHiddenObject),
OR_INT(oFlags,1),
SET_MODEL(MODEL_BBH_MESH_ELEVATOR),
LOAD_COLLISION_DATA(bbh_seg7_collision_mesh_elevator),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( Func_Custom_Course2Hidden),
END_LOOP(),
};

const BehaviorScript bhvMeshElevator[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvMeshElevator),
OR_INT(oFlags,9),
SET_FLOAT(oDrawingDistance,19455),
LOAD_COLLISION_DATA(bbh_seg7_collision_mesh_elevator),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvWdwSquareFloatingPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvWdwSquareFloatingPlatform),
OR_INT(oFlags,73),
LOAD_COLLISION_DATA(metal_box_seg8_collision_08024C28),
SET_FLOAT(oDrawingDistance,19455),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_wood_piece_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};


const BehaviorScript bhvTreasureChests[] = {
BEGIN(OBJ_LIST_GENACTOR),
ID(id_bhvTreasureChests),
SET_INTERACT_TYPE(1073741824),
BILLBOARD(),
SET_HITBOX(85,85),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
SET_INT(oInteractStatus,0),
END_LOOP(),
};

const BehaviorScript bhvHoot[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvHoot),
SET_MODEL(MODEL_THWOMP)
LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B7D0),
SET_HOME(),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( bhv_exclamation_box_loop),
CALL_NATIVE( bhv_pushable_loop),
CALL_NATIVE( Func_Custom_0x802ca75c),
END_LOOP(),
};

const BehaviorScript bhvThwomp2[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvThwomp2),
LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B7D0),
OR_INT(oFlags,73),
SET_HOME(),
SCALE(0,140),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_moving_octagonal_mesh_platform_loop),
CALL_NATIVE( bhv_squarish_path_moving_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};}

const BehaviorScript bhvCameraLakitu[] = {
BEGIN(OBJ_LIST_PUSHABLE),
ID(id_bhvCameraLakitu),
OR_INT(oFlags,8265),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(oAnimations,goomba_seg8_anims_0801DA4C),
SET_HOME(),
CALL_NATIVE( bhv_goomba_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_goomba_update),
CALL_NATIVE( bhv_shellthing),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13002f08[] = {
BEGIN(OBJ_LIST_GENACTOR),
ID(id_bhvNewId),
OR_INT(oFlags,1),
CALL_NATIVE( explosive_toad_init),
BEGIN_LOOP(),
CALL_NATIVE( explosive_toad_loop),
END_LOOP(),
};

const BehaviorScript bhvIgloo[] = {
BEGIN(OBJ_LIST_LEVEL),
ID(id_bhvIgloo),
OR_INT(oFlags,1),
SCALE(0,223),
BEGIN_LOOP(),
ADD_INT(oFaceAngleRoll,400),
CALL_NATIVE( Func_Custom_0x8030b478),
END_LOOP(),
};

const BehaviorScript bhvDorrie[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvDorrie),
CALL_NATIVE( woodplank_init),
LOAD_COLLISION_DATA(door_seg3_collision_0301CE78),
OR_INT(oFlags,1),
SCALE(0,223),
BEGIN_LOOP(),
ADD_INT(oFaceAngleRoll,0x80),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x130005d0[] = {
BEGIN(OBJ_LIST_GENACTOR),
ID(id_bhvNewId),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
SET_HITBOX(168,212),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( Func_Custom_0x8030b510),

SET_INT(oInteractStatus,0),
END_LOOP(),
};



const BehaviorScript bhvMerryGoRoundBooManager[] = {
BEGIN(OBJ_LIST_DEFAULT),
ID(id_bhvMerryGoRoundBooManager),
OR_INT(oFlags,65),
BEGIN_LOOP(),
CALL_NATIVE( bhv_custom_spawn_manager_loop),
END_LOOP(),
};