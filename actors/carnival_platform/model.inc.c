Lights1 carnival_platform_material2_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 carnival_platform_material1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx carnival_platform__08000800_ci8_aligner[] = {gsSPEndDisplayList()};
u8 carnival_platform__08000800_ci8[] = {
	#include "actors/carnival_platform/_08000800.ci8.inc.c"
};

Gfx carnival_platform__08000800_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 carnival_platform__08000800_pal_rgba16[] = {
	#include "actors/carnival_platform/_08000800.rgba16.pal"
};

Gfx carnival_platform__08000000_ci8_aligner[] = {gsSPEndDisplayList()};
u8 carnival_platform__08000000_ci8[] = {
	#include "actors/carnival_platform/_08000000.ci8.inc.c"
};

Gfx carnival_platform__08000000_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 carnival_platform__08000000_pal_rgba16[] = {
	#include "actors/carnival_platform/_08000000.rgba16.pal"
};

Vtx carnival_platform_000_displaylist_mesh_layer_1_vtx_0[16] = {
	{{ {307, 51, 307}, 0, {2988, -28}, {0, 0, 127, 255} }},
	{{ {-306, 0, 307}, 0, {-18, 974}, {0, 0, 127, 255} }},
	{{ {307, 0, 307}, 0, {2988, 974}, {0, 0, 127, 255} }},
	{{ {-306, 51, 307}, 0, {-18, -28}, {0, 0, 127, 255} }},
	{{ {307, 0, -306}, 0, {2988, 974}, {127, 0, 0, 255} }},
	{{ {307, 51, -306}, 0, {2988, -28}, {127, 0, 0, 255} }},
	{{ {307, 51, 307}, 0, {-18, -28}, {127, 0, 0, 255} }},
	{{ {307, 0, 307}, 0, {-18, 974}, {127, 0, 0, 255} }},
	{{ {-306, 0, 307}, 0, {-18, 974}, {129, 0, 0, 255} }},
	{{ {-306, 51, 307}, 0, {-18, -28}, {129, 0, 0, 255} }},
	{{ {-306, 51, -306}, 0, {2988, -28}, {129, 0, 0, 255} }},
	{{ {-306, 0, -306}, 0, {2988, 974}, {129, 0, 0, 255} }},
	{{ {-306, 0, -306}, 0, {-18, 974}, {0, 0, 129, 255} }},
	{{ {307, 51, -306}, 0, {2988, -28}, {0, 0, 129, 255} }},
	{{ {307, 0, -306}, 0, {2988, 974}, {0, 0, 129, 255} }},
	{{ {-306, 51, -306}, 0, {-18, -28}, {0, 0, 129, 255} }},
};

Gfx carnival_platform_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(carnival_platform_000_displaylist_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSPEndDisplayList(),
};

Vtx carnival_platform_000_displaylist_mesh_layer_1_vtx_1[8] = {
	{{ {307, 51, -306}, 0, {1966, -1040}, {0, 127, 0, 255} }},
	{{ {-306, 51, 307}, 0, {-1038, 1964}, {0, 127, 0, 255} }},
	{{ {307, 51, 307}, 0, {1966, 1964}, {0, 127, 0, 255} }},
	{{ {-306, 51, -306}, 0, {-1038, -1040}, {0, 127, 0, 255} }},
	{{ {307, 0, 307}, 0, {2988, -2062}, {0, 129, 0, 255} }},
	{{ {-306, 0, 307}, 0, {-18, -2062}, {0, 129, 0, 255} }},
	{{ {-306, 0, -306}, 0, {-18, 944}, {0, 129, 0, 255} }},
	{{ {307, 0, -306}, 0, {2988, 944}, {0, 129, 0, 255} }},
};

Gfx carnival_platform_000_displaylist_mesh_layer_1_tri_1[] = {
	gsSPVertex(carnival_platform_000_displaylist_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_carnival_platform_material2[] = {
	gsSPSetLights1(carnival_platform_material2_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, carnival_platform__08000800_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 205),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, carnival_platform__08000800_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_carnival_platform_material2[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_carnival_platform_material1[] = {
	gsSPSetLights1(carnival_platform_material1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, carnival_platform__08000000_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 79),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, carnival_platform__08000000_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_carnival_platform_material1[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx carnival_platform_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_carnival_platform_material2),
	gsSPDisplayList(carnival_platform_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_carnival_platform_material2),
	gsSPDisplayList(mat_carnival_platform_material1),
	gsSPDisplayList(carnival_platform_000_displaylist_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_carnival_platform_material1),
	gsSPEndDisplayList(),
};

Gfx carnival_platform_material_revert_render_settings[] = {
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

