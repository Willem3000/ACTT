#ifndef BN_SPRITE_ITEMS_PLAYER_VILLAGER_H
#define BN_SPRITE_ITEMS_PLAYER_VILLAGER_H

#include "bn_sprite_item.h"

//{{BLOCK(player_villager_bn_gfx)

//======================================================================
//
//	player_villager_bn_gfx, 32x96@4, 
//	+ palette 16 entries, not compressed
//	+ 48 tiles not compressed
//	Total size: 32 + 1536 = 1568
//
//	Time-stamp: 2023-07-29, 22:40:47
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PLAYER_VILLAGER_BN_GFX_H
#define GRIT_PLAYER_VILLAGER_BN_GFX_H

#define player_villager_bn_gfxTilesLen 1536
extern const bn::tile player_villager_bn_gfxTiles[48];

#define player_villager_bn_gfxPalLen 32
extern const bn::color player_villager_bn_gfxPal[16];

#endif // GRIT_PLAYER_VILLAGER_BN_GFX_H

//}}BLOCK(player_villager_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item player_villager(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(player_villager_bn_gfxTiles, 48), bpp_mode::BPP_4, compression_type::NONE, 3), 
            sprite_palette_item(span<const color>(player_villager_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

