#include "ac_villager.h"
#include "ac_villagers.h"
#include "ac_player.h"
#include "ac_ground.h"
#include "ac_grounds.h"
#include "ac_camera.h"
#include "ac_level.h"
#include "ac_levels.h"
#include "ac_tree.h"
#include "ac_house.h"
#include "bn_sprite_ptr.h"
#include "bn_math.h"
#include "ac_math.h"
#include "bn_fixed.h"
#include "ac_bg_outside_map.h"
#include "bn_core.h"
#include "bn_unique_ptr.h"

#include "bn_regular_bg_tiles_ptr.h"
#include "bn_regular_bg_item.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_map_ptr.h"
#include "bn_regular_bg_tiles_ptr.h"
#include "bn_affine_bg_ptr.h"
#include "bn_affine_bg_item.h"
#include "bn_affine_bg_map_ptr.h"
#include "bn_affine_bg_map_cell_info.h"
#include "bn_bg_palette_items_palette.h"
#include "bn_rect_window_actions.h"
#include "bn_affine_bg_pa_register_hbe_ptr.h"
#include "bn_affine_bg_tiles_items_outside_tiles.h"

#include "bn_random.h"

#include "bn_regular_bg_items_sky.h"

#include "bn_log.h"

#define MAX_VILLAGERS 10
#define MAX_TREES 8
#define TOWN_WIDTH 7
#define TOWN_HEIGHT 5
#define MAX_HOUSES 1

namespace ac::core 
{
    struct save_data
    {
        player_data _player;
        villager_data _villagers[MAX_VILLAGERS];
    };

    struct game_data
    {
        player* _player;
        villager* _villagers[MAX_VILLAGERS];
        house* _houses[MAX_HOUSES];
        tree* _trees[MAX_TREES];
        camera* _camera;
        ground _grounds[TOWN_WIDTH][TOWN_HEIGHT];
    };

    class game
    {
        public:
            game();
            void update();
            void save_game();
            void load_game();
            void load_level(level _level);
            void draw();
            void update_sprite(bn::point _world_position, bn::sprite_ptr* _sprite, int _offset);
            void update_sprite_debug(bn::point _world_position, bn::sprite_ptr* _sprite);
            void update_outside_bg(bn::point _world_position);
        private:
            save_data m_save_data;
            game_data m_game_data;
            
            bn::unique_ptr<outside_map> m_ac_map_ptr = bn::unique_ptr<outside_map>(new outside_map());
            bn::affine_bg_item bg_item = bn::affine_bg_item(bn::affine_bg_tiles_items::outside_tiles, 
                                        bn::bg_palette_items::palette, m_ac_map_ptr->map_item);
            bn::affine_bg_ptr m_outside_ptr = bg_item.create_bg(0, 0);
            bn::affine_bg_map_ptr m_outside_map = m_outside_ptr.map();

            bn::regular_bg_ptr m_sky_bg_ptr = bn::regular_bg_items::sky.create_bg(0,0);

            bn::span<const int16_t> horizontal_deltas;
            bn::affine_bg_pa_register_hbe_ptr horizontal_deltas_hbe =
            bn::affine_bg_pa_register_hbe_ptr::create(m_outside_ptr, horizontal_deltas);

            /*bn::array<bn::fixed, bn::display::height()> horizontal_scale_deltas;
            bn::regular_bg_position_hbe_ptr horizontal_deltas_hbe =
            bn::regular_bg_position_hbe_ptr::create_vertical(m_outside_ptr, horizontal_deltas);*/

            bn::rect_window m_internal_window = bn::rect_window::internal();

            bn::random rnd;

    };
}