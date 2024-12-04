#ifndef BN_REGULAR_BG_TILES_ITEMS_OUTSIDE_TILES_H
#define BN_REGULAR_BG_TILES_ITEMS_OUTSIDE_TILES_H

#include "bn_regular_bg_tiles_item.h"

//{{BLOCK(outside_tiles_bn_gfx)

//======================================================================
//
//	outside_tiles_bn_gfx, 64x64@4, 
//	+ 64 tiles not compressed
//	Total size: 2048 = 2048
//
//	Time-stamp: 2023-07-30, 17:21:55
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_OUTSIDE_TILES_BN_GFX_H
#define GRIT_OUTSIDE_TILES_BN_GFX_H

#define outside_tiles_bn_gfxTilesLen 2048
extern const bn::tile outside_tiles_bn_gfxTiles[64];

#endif // GRIT_OUTSIDE_TILES_BN_GFX_H

//}}BLOCK(outside_tiles_bn_gfx)

namespace bn::regular_bg_tiles_items
{
    constexpr inline regular_bg_tiles_item outside_tiles(
            span<const tile>(outside_tiles_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE);
}

#endif

