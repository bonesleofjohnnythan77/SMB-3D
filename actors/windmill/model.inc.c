Lights1 windmill_windmill2_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 windmill_windmill1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx windmill__03011510_ci4_aligner[] = {gsSPEndDisplayList()};
u8 windmill__03011510_ci4[] = {
	#include "actors/windmill/_03011510.ci4.inc.c"
};

Gfx windmill__03011510_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 windmill__03011510_pal_rgba16[] = {
	#include "actors/windmill/_03011510.rgba16.pal"
};

Gfx windmill__03010510_ci4_aligner[] = {gsSPEndDisplayList()};
u8 windmill__03010510_ci4[] = {
	#include "actors/windmill/_03010510.ci4.inc.c"
};

Gfx windmill__03010510_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 windmill__03010510_pal_rgba16[] = {
	#include "actors/windmill/_03010510.rgba16.pal"
};

Vtx windmill_000_offset_001_mesh_layer_1_vtx_0[16] = {
	{{ {-8, 1000, -58}, 0, {-16, 54}, {129, 0, 0, 255} }},
	{{ {-8, 0, -58}, 0, {-16, 920}, {129, 0, 0, 255} }},
	{{ {-8, 0, 59}, 0, {974, 920}, {129, 0, 0, 255} }},
	{{ {-8, 1000, 59}, 0, {974, 54}, {129, 0, 0, 255} }},
	{{ {-8, 0, -58}, 0, {974, 98}, {0, 129, 0, 255} }},
	{{ {591, 0, -58}, 0, {974, 840}, {0, 129, 0, 255} }},
	{{ {591, 0, 59}, 0, {-16, 840}, {0, 129, 0, 255} }},
	{{ {-8, 0, 59}, 0, {-16, 98}, {0, 129, 0, 255} }},
	{{ {-8, 1000, 59}, 0, {-16, 98}, {0, 127, 0, 255} }},
	{{ {591, 1000, 59}, 0, {-16, 840}, {0, 127, 0, 255} }},
	{{ {591, 1000, -58}, 0, {974, 840}, {0, 127, 0, 255} }},
	{{ {-8, 1000, -58}, 0, {974, 98}, {0, 127, 0, 255} }},
	{{ {591, 1000, 59}, 0, {974, 54}, {127, 0, 0, 255} }},
	{{ {591, 0, 59}, 0, {974, 920}, {127, 0, 0, 255} }},
	{{ {591, 0, -58}, 0, {-16, 920}, {127, 0, 0, 255} }},
	{{ {591, 1000, -58}, 0, {-16, 54}, {127, 0, 0, 255} }},
};

Gfx windmill_000_offset_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(windmill_000_offset_001_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx windmill_000_offset_001_mesh_layer_1_vtx_1[8] = {
	{{ {591, 0, -58}, 0, {-16, 2032}, {0, 0, 129, 255} }},
	{{ {-8, 0, -58}, 0, {974, 2032}, {0, 0, 129, 255} }},
	{{ {-8, 1000, -58}, 0, {974, -16}, {0, 0, 129, 255} }},
	{{ {591, 1000, -58}, 0, {-16, -16}, {0, 0, 129, 255} }},
	{{ {-8, 0, 59}, 0, {974, 2032}, {0, 0, 127, 255} }},
	{{ {591, 1000, 59}, 0, {-16, -16}, {0, 0, 127, 255} }},
	{{ {-8, 1000, 59}, 0, {974, -16}, {0, 0, 127, 255} }},
	{{ {591, 0, 59}, 0, {-16, 2032}, {0, 0, 127, 255} }},
};

Gfx windmill_000_offset_001_mesh_layer_1_tri_1[] = {
	gsSPVertex(windmill_000_offset_001_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_windmill_windmill2[] = {
	gsSPSetLights1(windmill_windmill2_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, windmill__03011510_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 5),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, windmill__03011510_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_windmill_windmill2[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_windmill_windmill1[] = {
	gsSPSetLights1(windmill_windmill1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, windmill__03010510_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 12),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, windmill__03010510_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_windmill_windmill1[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx windmill_000_offset_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_windmill_windmill2),
	gsSPDisplayList(windmill_000_offset_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_windmill_windmill2),
	gsSPDisplayList(mat_windmill_windmill1),
	gsSPDisplayList(windmill_000_offset_001_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_windmill_windmill1),
	gsSPEndDisplayList(),
};

Gfx windmill_material_revert_render_settings[] = {
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

