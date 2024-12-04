#ifndef BN_SPRITE_ITEMS_TREE_H
#define BN_SPRITE_ITEMS_TREE_H

#include "bn_sprite_item.h"

//{{BLOCK(tree_bn_gfx)

//======================================================================
//
//	tree_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2023-07-29, 00:58:21
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TREE_BN_GFX_H
#define GRIT_TREE_BN_GFX_H

#define tree_bn_gfxTilesLen 2048
extern const bn::tile tree_bn_gfxTiles[64];

#define tree_bn_gfxPalLen 32
extern const bn::color tree_bn_gfxPal[16];

#endif // GRIT_TREE_BN_GFX_H

//}}BLOCK(tree_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item tree(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(tree_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(tree_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

