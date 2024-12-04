#ifndef AC_CAMERA_H
#define AC_CAMERA_H

#include "ac_entity.h"

#include "bn_fixed.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_item.h"
#include "bn_point.h"
#include "bn_sprite_items_def_villager.h"

namespace ac
{
    class camera : public entity {
        public:
            camera(entity* tracked_entity);
            void update();

        private:
            entity* m_tracked_entity;
    };
}

#endif