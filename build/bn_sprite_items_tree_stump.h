#ifndef BN_SPRITE_ITEMS_TREE_STUMP_H
#define BN_SPRITE_ITEMS_TREE_STUMP_H

#include "bn_sprite_item.h"

//{{BLOCK(tree_stump_bn_gfx)

//======================================================================
//
//	tree_stump_bn_gfx, 32x16@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2023-07-29, 00:58:21
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TREE_STUMP_BN_GFX_H
#define GRIT_TREE_STUMP_BN_GFX_H

#define tree_stump_bn_gfxTilesLen 256
extern const bn::tile tree_stump_bn_gfxTiles[8];

#define tree_stump_bn_gfxPalLen 32
extern const bn::color tree_stump_bn_gfxPal[16];

#endif // GRIT_TREE_STUMP_BN_GFX_H

//}}BLOCK(tree_stump_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item tree_stump(sprite_shape_size(sprite_shape::WIDE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(tree_stump_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(tree_stump_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

