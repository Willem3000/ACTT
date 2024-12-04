#ifndef AC_VILLAGER_H
#define AC_VILLAGER_H

#include "ac_entity.h"

#include "bn_fixed.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_item.h"
#include "bn_sprite_items_def_villager.h"

namespace ac
{
    enum mood
    {
        NEUTRAL,
        HAPPY,
        SAD,
        ANGRY
    };

    class villager : public entity 
    {
        public:
            villager(){};
            //void walk();
            
        protected:
            //bn::point target_point;
    };

    struct villager_data
    {
        bn::string<7> name;
        //mood _mood;
    };
}

#endif