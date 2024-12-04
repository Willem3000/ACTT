#include "ac_grounds.h"

namespace ac::grnd
{
    grass::grass()
    {
        name = "grass";
        sprite_ptr = bn::sprite_items::grass.create_sprite_optional(0, 0);
    }
}