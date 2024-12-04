#include "ac_tree.h"

namespace ac
{
    tree::tree()
    {
        name = "Tree";
        sprite_ptr = bn::sprite_items::tree.create_sprite_optional(0, 0);
        stump_sprite_ptr = bn::sprite_items::tree_stump.create_sprite(0,0);
        get_sprite()->set_bg_priority(2);
    }
}