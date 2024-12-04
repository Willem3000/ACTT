#ifndef AC_TREE_H
#define AC_TREE_H

#include "ac_entity.h"
#include "bn_sprite_items_tree.h"
#include "bn_sprite_items_tree_stump.h"

namespace ac
{
    class tree : public entity
    {
        public:
            tree();
            bn::sprite_ptr* get_stump_sprite(){ return stump_sprite_ptr.get(); }
        private:

            bn::optional<bn::sprite_ptr> stump_sprite_ptr;
    };
}

#endif