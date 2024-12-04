#ifndef BN_AFFINE_BG_TILES_ITEMS_OUTSIDE_TILES_H
#define BN_AFFINE_BG_TILES_ITEMS_OUTSIDE_TILES_H

#include "bn_affine_bg_tiles_item.h"

//{{BLOCK(outside_tiles_bn_gfx)

//======================================================================
//
//	outside_tiles_bn_gfx, 64x64@8, 
//	+ 64 tiles not compressed
//	Total size: 4096 = 4096
//
//	Time-stamp: 2023-08-19, 17:02:53
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_OUTSIDE_TILES_BN_GFX_H
#define GRIT_OUTSIDE_TILES_BN_GFX_H

#define outside_tiles_bn_gfxTilesLen 4096
extern const bn::tile outside_tiles_bn_gfxTiles[128];

#endif // GRIT_OUTSIDE_TILES_BN_GFX_H

//}}BLOCK(outside_tiles_bn_gfx)

namespace bn::affine_bg_tiles_items
{
    constexpr inline affine_bg_tiles_item outside_tiles(
            span<const tile>(outside_tiles_bn_gfxTiles, 128), compression_type::NONE);
}

#endif

