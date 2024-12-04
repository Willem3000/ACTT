#ifndef BN_SPRITE_ITEMS_HOUSE_H
#define BN_SPRITE_ITEMS_HOUSE_H

#include "bn_sprite_item.h"

//{{BLOCK(house_bn_gfx)

//======================================================================
//
//	house_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2023-07-29, 22:09:08
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_HOUSE_BN_GFX_H
#define GRIT_HOUSE_BN_GFX_H

#define house_bn_gfxTilesLen 2048
extern const bn::tile house_bn_gfxTiles[64];

#define house_bn_gfxPalLen 32
extern const bn::color house_bn_gfxPal[16];

#endif // GRIT_HOUSE_BN_GFX_H

//}}BLOCK(house_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item house(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(house_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(house_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

