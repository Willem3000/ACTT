#include "ac_house.h"

namespace ac
{
    house::house()
    {
        name = "House";
        sprite_ptr = bn::sprite_items::house.create_sprite_optional(0, 0);
        get_sprite()->set_bg_priority(2);
        //m_height = 22;
    };
}