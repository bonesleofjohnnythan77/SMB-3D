Lights1 woodplank_woodplank2_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 woodplank_woodplank1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx woodplank__0300FD10_ci8_ci8_aligner[] = {gsSPEndDisplayList()};
u8 woodplank__0300FD10_ci8_ci8[] = {
	#include "actors/woodplank/_0300FD10.ci8.inc.c"
};

Gfx woodplank__0300FD10_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 woodplank__0300FD10_ci8_pal_rgba16[] = {
	#include "actors/woodplank/_0300FD10.ci8.rgba16.pal"
};

Gfx woodplank__0300ED10_ci8_ci8_aligner[] = {gsSPEndDisplayList()};
u8 woodplank__0300ED10_ci8_ci8[] = {
	#include "actors/woodplank/_0300ED10.ci8.inc.c"
};

Gfx woodplank__0300ED10_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 woodplank__0300ED10_ci8_pal_rgba16[] = {
	#include "actors/woodplank/_0300ED10.ci8.rgba16.pal"
};

Vtx woodplank_000_displaylist_001_mesh_layer_1_vtx_0[16] = {
	{{ {-8, -100, 58}, 0, {-16, -16}, {129, 0, 0, 255} }},
	{{ {-8, 1024, 59}, 0, {-16, 1008}, {129, 0, 0, 255} }},
	{{ {-8, 1024, -58}, 0, {1008, 1008}, {129, 0, 0, 255} }},
	{{ {-8, -100, -59}, 0, {1008, -16}, {129, 0, 0, 255} }},
	{{ {-8, -100, -59}, 0, {-16, -16}, {0, 129, 0, 255} }},
	{{ {608, -100, 58}, 0, {1008, 1008}, {0, 129, 0, 255} }},
	{{ {-8, -100, 58}, 0, {1008, -16}, {0, 129, 0, 255} }},
	{{ {608, -100, -59}, 0, {-16, 1008}, {0, 129, 0, 255} }},
	{{ {608, 1024, -58}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-8, 1024, -58}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {-8, 1024, 59}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {608, 1024, 59}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {608, -100, -59}, 0, {-16, -16}, {127, 0, 0, 255} }},
	{{ {608, 1024, 59}, 0, {1008, 1008}, {127, 0, 0, 255} }},
	{{ {608, -100, 58}, 0, {1008, -16}, {127, 0, 0, 255} }},
	{{ {608, 1024, -58}, 0, {-16, 1008}, {127, 0, 0, 255} }},
};

Gfx woodplank_000_displaylist_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(woodplank_000_displaylist_001_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSPEndDisplayList(),
};

Vtx woodplank_000_displaylist_001_mesh_layer_1_vtx_1[8] = {
	{{ {608, -100, 58}, 0, {974, 2032}, {0, 0, 127, 255} }},
	{{ {-8, 1024, 59}, 0, {-16, -16}, {0, 0, 127, 255} }},
	{{ {-8, -100, 58}, 0, {-16, 2032}, {0, 0, 127, 255} }},
	{{ {608, 1024, 59}, 0, {974, -16}, {0, 0, 127, 255} }},
	{{ {-8, -100, -59}, 0, {974, 2032}, {0, 0, 129, 255} }},
	{{ {-8, 1024, -58}, 0, {974, -16}, {0, 0, 129, 255} }},
	{{ {608, 1024, -58}, 0, {-16, -16}, {0, 0, 129, 255} }},
	{{ {608, -100, -59}, 0, {-16, 2032}, {0, 0, 129, 255} }},
};

Gfx woodplank_000_displaylist_001_mesh_layer_1_tri_1[] = {
	gsSPVertex(woodplank_000_displaylist_001_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_woodplank_woodplank2[] = {
	gsSPSetLights1(woodplank_woodplank2_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, woodplank__0300FD10_ci8_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 123),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, woodplank__0300FD10_ci8_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_woodplank_woodplank2[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_woodplank_woodplank1[] = {
	gsSPSetLights1(woodplank_woodplank1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, woodplank__0300ED10_ci8_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 135),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, woodplank__0300ED10_ci8_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_woodplank_woodplank1[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx woodplank_000_displaylist_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_woodplank_woodplank2),
	gsSPDisplayList(woodplank_000_displaylist_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_woodplank_woodplank2),
	gsSPDisplayList(mat_woodplank_woodplank1),
	gsSPDisplayList(woodplank_000_displaylist_001_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_woodplank_woodplank1),
	gsSPEndDisplayList(),
};

Gfx woodplank_material_revert_render_settings[] = {
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

