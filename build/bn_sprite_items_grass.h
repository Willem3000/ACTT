#ifndef BN_SPRITE_ITEMS_GRASS_H
#define BN_SPRITE_ITEMS_GRASS_H

#include "bn_sprite_item.h"

//{{BLOCK(grass_bn_gfx)

//======================================================================
//
//	grass_bn_gfx, 32x32@4, 
//	+ palette 16 entries, not compressed
//	+ 16 tiles not compressed
//	Total size: 32 + 512 = 544
//
//	Time-stamp: 2023-07-25, 23:39:56
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_GRASS_BN_GFX_H
#define GRIT_GRASS_BN_GFX_H

#define grass_bn_gfxTilesLen 512
extern const bn::tile grass_bn_gfxTiles[16];

#define grass_bn_gfxPalLen 32
extern const bn::color grass_bn_gfxPal[16];

#endif // GRIT_GRASS_BN_GFX_H

//}}BLOCK(grass_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item grass(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(grass_bn_gfxTiles, 16), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(grass_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

