#ifndef BN_SPRITE_ITEMS_MAPLE_H
#define BN_SPRITE_ITEMS_MAPLE_H

#include "bn_sprite_item.h"

//{{BLOCK(maple_bn_gfx)

//======================================================================
//
//	maple_bn_gfx, 32x96@4, 
//	+ palette 16 entries, not compressed
//	+ 48 tiles not compressed
//	Total size: 32 + 1536 = 1568
//
//	Time-stamp: 2023-07-29, 23:15:25
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_MAPLE_BN_GFX_H
#define GRIT_MAPLE_BN_GFX_H

#define maple_bn_gfxTilesLen 1536
extern const bn::tile maple_bn_gfxTiles[48];

#define maple_bn_gfxPalLen 32
extern const bn::color maple_bn_gfxPal[16];

#endif // GRIT_MAPLE_BN_GFX_H

//}}BLOCK(maple_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item maple(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(maple_bn_gfxTiles, 48), bpp_mode::BPP_4, compression_type::NONE, 3), 
            sprite_palette_item(span<const color>(maple_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

