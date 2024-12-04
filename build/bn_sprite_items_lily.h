#ifndef BN_SPRITE_ITEMS_LILY_H
#define BN_SPRITE_ITEMS_LILY_H

#include "bn_sprite_item.h"

//{{BLOCK(lily_bn_gfx)

//======================================================================
//
//	lily_bn_gfx, 32x96@4, 
//	+ palette 16 entries, not compressed
//	+ 48 tiles not compressed
//	Total size: 32 + 1536 = 1568
//
//	Time-stamp: 2023-07-29, 13:14:47
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LILY_BN_GFX_H
#define GRIT_LILY_BN_GFX_H

#define lily_bn_gfxTilesLen 1536
extern const bn::tile lily_bn_gfxTiles[48];

#define lily_bn_gfxPalLen 32
extern const bn::color lily_bn_gfxPal[16];

#endif // GRIT_LILY_BN_GFX_H

//}}BLOCK(lily_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item lily(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(lily_bn_gfxTiles, 48), bpp_mode::BPP_4, compression_type::NONE, 3), 
            sprite_palette_item(span<const color>(lily_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

