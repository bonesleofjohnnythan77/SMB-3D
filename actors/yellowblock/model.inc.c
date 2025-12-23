Lights1 yellowblock_yellowblock_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx yellowblock__09002800_ci4_aligner[] = {gsSPEndDisplayList()};
u8 yellowblock__09002800_ci4[] = {
	#include "actors/yellowblock/_09002800.ci4.inc.c"
};

Gfx yellowblock__09002800_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 yellowblock__09002800_pal_rgba16[] = {
	#include "actors/yellowblock/_09002800.rgba16.pal"
};

Vtx yellowblock_000_displaylist_mesh_layer_1_vtx_0[14] = {
	{{ {256, 0, 256}, 0, {974, -16}, {73, 183, 73, 255} }},
	{{ {-255, 0, 256}, 0, {974, 974}, {183, 183, 73, 255} }},
	{{ {-255, 0, -255}, 0, {-16, 974}, {183, 183, 183, 255} }},
	{{ {256, 0, -255}, 0, {-16, -16}, {73, 183, 183, 255} }},
	{{ {-255, 102, 256}, 0, {974, 974}, {183, 73, 73, 255} }},
	{{ {256, 102, -255}, 0, {-16, -16}, {73, 73, 183, 255} }},
	{{ {-255, 102, -255}, 0, {-16, 974}, {183, 73, 183, 255} }},
	{{ {256, 102, 256}, 0, {974, -16}, {73, 73, 73, 255} }},
	{{ {256, 0, -255}, 0, {-16, 80}, {73, 183, 183, 255} }},
	{{ {256, 0, 256}, 0, {974, 80}, {73, 183, 73, 255} }},
	{{ {-255, 102, 256}, 0, {-16, -16}, {183, 73, 73, 255} }},
	{{ {-255, 0, 256}, 0, {-16, 80}, {183, 183, 73, 255} }},
	{{ {-255, 102, -255}, 0, {974, -16}, {183, 73, 183, 255} }},
	{{ {-255, 0, -255}, 0, {974, 80}, {183, 183, 183, 255} }},
};

Gfx yellowblock_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(yellowblock_000_displaylist_mesh_layer_1_vtx_0 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 5, 7, 0, 8, 7, 9, 0),
	gsSP2Triangles(9, 7, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(13, 12, 5, 0, 13, 5, 8, 0),
	gsSPEndDisplayList(),
};


Gfx mat_yellowblock_yellowblock[] = {
	gsSPSetLights1(yellowblock_yellowblock_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, yellowblock__09002800_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 0),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, yellowblock__09002800_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_yellowblock_yellowblock[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx yellowblock_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_yellowblock_yellowblock),
	gsSPDisplayList(yellowblock_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_yellowblock_yellowblock),
	gsSPEndDisplayList(),
};

Gfx yellowblock_material_revert_render_settings[] = {
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

