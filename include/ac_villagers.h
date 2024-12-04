#ifndef AC_VILLAGERS_H
#define AC_VILLAGERS_H

#include "bn_fixed.h"
#include "ac_entity.h"
#include "ac_villager.h"

namespace ac::vlgr 
{
    villager* create_villager(villager_data data);
    villager* fetch_villager(villager_data data);
    void populate_villager(villager* villager, villager_data data);

    class default_vlgr : public villager
    {
        public:
            default_vlgr();
    };

    class lily : public villager
    {
        public:
            lily();
    };

    class maple : public villager
    {
        public:
            maple();
    };

    class coco : public villager
    {
        public:
            coco();
    };
}
#endif