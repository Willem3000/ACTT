#ifndef BN_REGULAR_BG_ITEMS_SKY_H
#define BN_REGULAR_BG_ITEMS_SKY_H

#include "bn_regular_bg_item.h"

//{{BLOCK(sky_bn_gfx)

//======================================================================
//
//	sky_bn_gfx, 256x256@8, 
//	+ palette 16 entries, not compressed
//	+ 15 tiles (t|f reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 960 + 2048 = 3040
//
//	Time-stamp: 2023-07-28, 23:53:38
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SKY_BN_GFX_H
#define GRIT_SKY_BN_GFX_H

#define sky_bn_gfxTilesLen 960
extern const bn::tile sky_bn_gfxTiles[30];

#define sky_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell sky_bn_gfxMap[1024];

#define sky_bn_gfxPalLen 32
extern const bn::color sky_bn_gfxPal[16];

#endif // GRIT_SKY_BN_GFX_H

//}}BLOCK(sky_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item sky(
            regular_bg_tiles_item(span<const tile>(sky_bn_gfxTiles, 30), bpp_mode::BPP_8, compression_type::NONE), 
            bg_palette_item(span<const color>(sky_bn_gfxPal, 16), bpp_mode::BPP_8, compression_type::NONE),
            regular_bg_map_item(sky_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1));
}

#endif

