#ifndef AC_ENTITY_H
#define AC_ENTITY_H

#include "bn_optional.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_item.h"
#include "bn_fixed_point.h"
#include "bn_fixed.h"
#include "bn_string.h"
#include "ac_math.h"
#include "bn_math.h"

namespace ac
{
    class entity 
    {
        public:
            bn::point position;

            bn::sprite_ptr* get_sprite(){ return sprite_ptr.get(); }

            void draw(bn::point _camera_position);
            void set_position(int x, int y) { position.set_x(x); position.set_y(y); }
        protected:
            bn::optional<bn::sprite_ptr> sprite_ptr;
            bn::string<15> name;
            int m_height = 0;
    };
}

#endif