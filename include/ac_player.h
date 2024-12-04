#ifndef AC_PLAYER_H
#define AC_PLAYER_H

#include "ac_entity.h"

#include "bn_fixed.h"
#include "bn_sprite_item.h"
#include "bn_point.h"
#include "bn_sprite_items_def_villager.h"
#include "bn_sprite_animate_actions.h"
#include "bn_sprite_items_player_villager.h"

namespace ac
{
    struct player_data
    {
        bn::string<12> name;
    };

    class player : public entity 
    {
        public:
            player();
            player(player_data data);
            void update();
            void handle_input();

        private:
            bn::optional<bn::sprite_animate_action<4>> action;
            static int const walk_speed;
            static int const run_speed;
            bool is_walking;
    };
}

#endif