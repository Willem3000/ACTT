#include "ac_player.h"
#include "bn_keypad.h"
#include "bn_log.h"

namespace ac
{
    player::player(player_data data) 
    {
        name = data.name;
        sprite_ptr = bn::sprite_items::player_villager.create_sprite_optional(0, 0);
        action = bn::create_sprite_animate_action_forever(
                    *get_sprite(), 5, bn::sprite_items::player_villager.tiles_item(), 0, 1, 0, 2);
    };

    int const player::walk_speed = 1;
    int const player::run_speed = 2;

    void player::update()
    {
        handle_input();

        if (is_walking)
        {
            action.get()->update();
        }
    };

    void player::handle_input() 
    {
        is_walking = false;

        if (bn::keypad::right_held() == true) 
        {
            position += bn::point(walk_speed, 0);
            get_sprite()->set_horizontal_flip(true);
            is_walking = true;
        }
        else if (bn::keypad::left_held() == true) 
        {
            position -= bn::point(walk_speed, 0);
            get_sprite()->set_horizontal_flip(false);
            is_walking = true;
        }

        if (bn::keypad::up_held() == true) 
        {
            position -= bn::point(0, walk_speed);
            is_walking = true;
        }
        else if (bn::keypad::down_held() == true) 
        {
            position += bn::point(0, walk_speed);
            is_walking = true;
        }
    };
}