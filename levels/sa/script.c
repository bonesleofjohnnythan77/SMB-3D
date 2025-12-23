#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/sa/header.h"
extern u8 _sa_segment_ESegmentRomStart[]; 
extern u8 _sa_segment_ESegmentRomEnd[];
#include "levels/ddd/header.h"
const LevelScript level_sa_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _dddSegmentRomStart, _dddSegmentRomEnd),
LOAD_RAW(0x0E, _sa_segment_ESegmentRomStart, _sa_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_ssl_skybox_mio0SegmentRomStart,_ssl_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB,      ddd_geo_0004A0),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE,            ddd_geo_000450),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(86,0x05014630),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_6),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_sa_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x2001700),
TERRAIN(col_sa_1_0xe03d030),
SET_BACKGROUND_MUSIC(0,44),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,-19593,3849,-5230,0,92,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(215,11939,-1615,1527,0,-154,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,11939,-1615,1527,0,-153,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3331,-932,-4920,0,107,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4722,-932,-1842,0,-151,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3386,667,2315,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-860,-132,4521,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1785,-932,-4906,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2395,-932,895,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,11855,-990,2313,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(22,10992,-1332,3355,0,0,0,0x0, bhvWarpPipe,31),
OBJECT_WITH_ACTS(223,-6237,67,-4943,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-1214,-932,5161,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,3587,-932,-2679,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,3419,667,4487,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,8636,-1332,-830,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4793,-932,-3339,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4318,667,4260,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6496,67,-4489,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(100,4814,0,-2361,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,4836,0,-3947,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-2026,-672,1093,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-3929,-567,246,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-820,580,-80,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-812,422,4257,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-6131,900,-4668,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-3092,-412,3014,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-5127,0,-1350,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(212,-9558,2201,-5049,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,11454,-967,2492,0,0,0,0x20000, bhvDeathWarp,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,6,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,15,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
