#include "ac_entity.h"

namespace ac
{
    void entity::draw(bn::point _camera_position)
    {
        int x = position.x() - _camera_position.x(); // Get relative x pos
        int y = position.y() - _camera_position.y(); // Get relative y pos

        int h = get_sprite()->shape_size().height();
        int parabola_width = 200;
        int y_pos = pow(y + 40, 2) / parabola_width + 20 - h/2; // Parabolic y

        if (y > -40) get_sprite()->set_bg_priority(1); else get_sprite()->set_bg_priority(2);

        get_sprite()->set_z_order(-(position.y()-_camera_position.y()));
        get_sprite()->set_position(x, y_pos + m_height);
    };
}