#include "ac_core.h"

namespace ac::core
{
    game::game()
    {
        BN_LOG("Calling game constructor");
        load_game();
    }

    void game::load_game()
    {
        villager_data lily_data = {"lily"};
        villager_data maple_data = {"coco"};
        villager_data coco_data = {"maple"};
        m_save_data._villagers[0] = lily_data;
        m_save_data._villagers[1] = maple_data;
        m_save_data._villagers[2] = coco_data;

        for (unsigned char i=0; i < MAX_VILLAGERS; i++)
        {
            villager_data data = m_save_data._villagers[i];
            int x = rnd.get_int(298);
            int y = rnd.get_int(300);
            m_game_data._villagers[i] = vlgr::create_villager(data);
            m_game_data._villagers[i]->set_position(x, y);
        }

        for (unsigned char i=0; i < MAX_TREES; i++)
        {
            m_game_data._trees[i] = new tree();
            int x = rnd.get_int(299);
            int y = rnd.get_int(300);
            m_game_data._trees[i]->set_position(x, y);
        }

        m_game_data._houses[0] = new house();
        m_game_data._houses[0]->set_position(80,140);

        player_data _player_data = {"Bee-chancho"};
        m_game_data._player = new player(_player_data);

        m_game_data._camera = new camera(m_game_data._player);

        m_ac_map_ptr->fill_map();
        m_outside_ptr.set_priority(1);
        m_outside_map.reload_cells_ref();

        m_internal_window.set_boundaries(-80, -120, 20, 120);
        m_internal_window.set_show_bg(m_outside_ptr, false);

        m_sky_bg_ptr.set_position(0,-108);
    };

    void game::save_game()
    {

    }

    void game::load_level(level _level)
    {
        _level.load();
    }

    void game::update_sprite(bn::point _world_position, bn::sprite_ptr* _sprite, int _offset)
    {
        int x = _world_position.x() - m_game_data._camera->position.x(); // Get relative x pos
        int y = _world_position.y() - m_game_data._camera->position.y(); // Get relative y pos

        int h = _sprite->shape_size().height();
        int parabola_width = 200;
        int y_pos = pow(y + 40, 2) / parabola_width + 20 - h/2; // Parabolic y

        if (y > -40) _sprite->set_bg_priority(1); else _sprite->set_bg_priority(2);

        _sprite->set_z_order(-(_world_position.y()-m_game_data._camera->position.y()));
        _sprite->set_position(x, y_pos + _offset);
    }

    void game::update_sprite_debug(bn::point _world_position, bn::sprite_ptr* _sprite)
    {
        int x = _world_position.x() - m_game_data._camera->position.x(); // Get relative x pos
        int y = _world_position.y() - m_game_data._camera->position.y(); // Get relative y pos

        _sprite->set_z_order(-(_world_position.y()-m_game_data._camera->position.y()));
        _sprite->set_position(x, y);
    }

    void game::update_outside_bg(bn::point _world_position)
    {
        int x = _world_position.x() - m_game_data._camera->position.x(); // Get relative x pos
        int y = _world_position.y() - m_game_data._camera->position.y(); // Get relative y pos

        int parabola_width = 200;
        m_outside_ptr.set_position(x, y);

        for (int i = 20, limit = 80; i < limit; i++)
        {
            int screen_y = -40 + bn::sqrt((i-20)*parabola_width); // Parabolic y
            horizontal_deltas[i+80] = screen_y - (i+80);
        }

        horizontal_deltas_hbe.reload_deltas_ref();
    }

    void game::draw()
    {
        for (villager* _villager : m_game_data._villagers)
        {
            if (_villager != nullptr)
            {
                _villager->draw(m_game_data._camera->position);
            }
        }

        for (house* _house : m_game_data._houses)
        {
            if (_house != nullptr)
            {
                _house->draw(m_game_data._camera->position);
            }
        }

        /*for (int i=0; i < MAX_TREES; i++)
        {
            update_sprite(m_game_data._trees[i]->position, m_game_data._trees[i]->get_stump_sprite(), 4);
            update_sprite(m_game_data._trees[i]->position, m_game_data._trees[i]->get_sprite(), 4);
        }*/

        m_game_data._player->draw(m_game_data._camera->position);
        //update_sprite(m_game_data._villagers[0]->position, m_game_data._villagers[0]->get_sprite(), 0);
        //update_sprite(m_game_data._villagers[1]->position, m_game_data._villagers[1]->get_sprite(), 0);=
        //update_sprite_debug(m_game_data._villagers[1]->position, m_game_data._villagers[1]->get_sprite());
        update_outside_bg(bn::point(0,0));
    }

    void game::update()
    {
        m_game_data._player->update();
        m_game_data._camera->update();
        draw();
    }
}