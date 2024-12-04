#ifndef BN_SPRITE_ITEMS_DEF_VILLAGER_H
#define BN_SPRITE_ITEMS_DEF_VILLAGER_H

#include "bn_sprite_item.h"

//{{BLOCK(def_villager_bn_gfx)

//======================================================================
//
//	def_villager_bn_gfx, 32x128@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2023-07-25, 23:39:56
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_DEF_VILLAGER_BN_GFX_H
#define GRIT_DEF_VILLAGER_BN_GFX_H

#define def_villager_bn_gfxTilesLen 2048
extern const bn::tile def_villager_bn_gfxTiles[64];

#define def_villager_bn_gfxPalLen 32
extern const bn::color def_villager_bn_gfxPal[16];

#endif // GRIT_DEF_VILLAGER_BN_GFX_H

//}}BLOCK(def_villager_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item def_villager(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(def_villager_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 4), 
            sprite_palette_item(span<const color>(def_villager_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

