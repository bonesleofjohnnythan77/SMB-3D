Lights1 shellcreature_shellcreature_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 shellcreature_shellcreature1_lights = gdSPDefLights1(
	0x79, 0x53, 0x0,
	0xF2, 0xAB, 0x0, 0x28, 0x28, 0x28);

Gfx shellcreature__06002800_ci8_aligner[] = {gsSPEndDisplayList()};
u8 shellcreature__06002800_ci8[] = {
	#include "actors/shellcreature/_06002800.ci8.inc.c"
};

Gfx shellcreature__06002800_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 shellcreature__06002800_pal_rgba16[] = {
	#include "actors/shellcreature/_06002800.rgba16.pal"
};

Vtx shellcreature_000_offset_mesh_layer_1_vtx_0[20] = {
	{{ {91, -25, 86}, 0, {224, 448}, {52, 201, 102, 255} }},
	{{ {137, 35, 43}, 0, {-16, 964}, {103, 61, 41, 255} }},
	{{ {84, 28, 99}, 0, {226, 968}, {37, 52, 110, 255} }},
	{{ {132, -17, 43}, 0, {18, 452}, {111, 211, 42, 255} }},
	{{ {84, -76, 30}, 0, {294, -30}, {54, 148, 38, 255} }},
	{{ {2, -35, 86}, 0, {668, 454}, {214, 191, 101, 255} }},
	{{ {-2, 15, 99}, 0, {668, 974}, {204, 43, 108, 255} }},
	{{ {-33, -40, 43}, 0, {868, 468}, {161, 182, 41, 255} }},
	{{ {-56, 7, 43}, 0, {942, 976}, {140, 29, 44, 255} }},
	{{ {-33, -40, -40}, 0, {868, 468}, {162, 181, 216, 255} }},
	{{ {-56, 7, -40}, 0, {942, 976}, {140, 29, 213, 255} }},
	{{ {2, -35, -81}, 0, {668, 464}, {218, 189, 155, 255} }},
	{{ {-2, 15, -96}, 0, {668, 974}, {206, 42, 147, 255} }},
	{{ {91, -22, -81}, 0, {224, 458}, {51, 201, 154, 255} }},
	{{ {84, 28, -96}, 0, {226, 968}, {37, 49, 145, 255} }},
	{{ {132, -17, -40}, 0, {18, 452}, {111, 211, 213, 255} }},
	{{ {137, 35, -40}, 0, {-16, 964}, {104, 61, 215, 255} }},
	{{ {84, -76, -28}, 0, {294, -30}, {54, 148, 215, 255} }},
	{{ {22, -84, -28}, 0, {596, -26}, {229, 138, 216, 255} }},
	{{ {22, -84, 30}, 0, {596, -26}, {229, 138, 38, 255} }},
};

Gfx shellcreature_000_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(shellcreature_000_offset_mesh_layer_1_vtx_0 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(2, 5, 0, 0, 2, 6, 5, 0),
	gsSP2Triangles(6, 7, 5, 0, 6, 8, 7, 0),
	gsSP2Triangles(8, 9, 7, 0, 8, 10, 9, 0),
	gsSP2Triangles(11, 9, 10, 0, 11, 10, 12, 0),
	gsSP2Triangles(12, 13, 11, 0, 12, 14, 13, 0),
	gsSP2Triangles(14, 15, 13, 0, 14, 16, 15, 0),
	gsSP2Triangles(16, 3, 15, 0, 16, 1, 3, 0),
	gsSP2Triangles(17, 15, 3, 0, 13, 15, 17, 0),
	gsSP2Triangles(13, 17, 18, 0, 17, 19, 18, 0),
	gsSP2Triangles(17, 4, 19, 0, 17, 3, 4, 0),
	gsSP2Triangles(5, 19, 4, 0, 5, 7, 19, 0),
	gsSP2Triangles(19, 7, 9, 0, 19, 9, 18, 0),
	gsSP2Triangles(18, 9, 11, 0, 13, 18, 11, 0),
	gsSPEndDisplayList(),
};

Vtx shellcreature_000_offset_mesh_layer_1_vtx_1[11] = {
	{{ {68, 61, -33}, 0, {-4, 904}, {6, 124, 227, 255} }},
	{{ {84, 28, -96}, 0, {-4, 904}, {37, 49, 145, 255} }},
	{{ {-2, 15, -96}, 0, {-4, 904}, {206, 42, 147, 255} }},
	{{ {137, 35, -40}, 0, {-4, 904}, {104, 61, 215, 255} }},
	{{ {68, 61, 35}, 0, {-4, 904}, {6, 124, 28, 255} }},
	{{ {0, 51, 0}, 0, {-4, 904}, {207, 117, 255, 255} }},
	{{ {-56, 7, -40}, 0, {-4, 904}, {140, 29, 213, 255} }},
	{{ {-56, 7, 43}, 0, {-4, 904}, {140, 29, 44, 255} }},
	{{ {-2, 15, 99}, 0, {-4, 904}, {204, 43, 108, 255} }},
	{{ {84, 28, 99}, 0, {-4, 904}, {37, 52, 110, 255} }},
	{{ {137, 35, 43}, 0, {-4, 904}, {103, 61, 41, 255} }},
};

Gfx shellcreature_000_offset_mesh_layer_1_tri_1[] = {
	gsSPVertex(shellcreature_000_offset_mesh_layer_1_vtx_1 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(2, 5, 0, 0, 2, 6, 5, 0),
	gsSP2Triangles(5, 6, 7, 0, 7, 8, 5, 0),
	gsSP2Triangles(4, 5, 8, 0, 8, 9, 4, 0),
	gsSP2Triangles(9, 10, 4, 0, 4, 10, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_shellcreature_shellcreature[] = {
	gsSPSetLights1(shellcreature_shellcreature_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, shellcreature__06002800_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 28),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, shellcreature__06002800_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_shellcreature_shellcreature[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_shellcreature_shellcreature1[] = {
	gsSPSetLights1(shellcreature_shellcreature1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_shellcreature_shellcreature1[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx shellcreature_000_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_shellcreature_shellcreature),
	gsSPDisplayList(shellcreature_000_offset_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_shellcreature_shellcreature),
	gsSPDisplayList(mat_shellcreature_shellcreature1),
	gsSPDisplayList(shellcreature_000_offset_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_shellcreature_shellcreature1),
	gsSPEndDisplayList(),
};

Gfx shellcreature_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP  | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

