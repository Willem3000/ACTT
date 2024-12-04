#include "ac_villagers.h"
#include "bn_sprite_items_lily.h"
#include "bn_sprite_items_maple.h"
#include "bn_sprite_items_coco.h"

namespace ac::vlgr
{
    villager* create_villager(villager_data data)
    {
        villager* villager = fetch_villager(data);
        populate_villager(villager, data);

        return villager;
    }

    villager* fetch_villager(villager_data data)
    {
        if (data.name == bn::string<7>("lily")) return new lily();
        else if (data.name == bn::string<7>("maple")) return new maple();
        else if (data.name == bn::string<7>("coco")) return new coco();
        else return nullptr;
    }

    void populate_villager(villager* villager, villager_data data){}

    lily::lily() 
    {
        name = "Lily";
        sprite_ptr = bn::sprite_items::lily.create_sprite_optional(0, 0);
        get_sprite()->set_bg_priority(2);
    }

    coco::coco() 
    {
        name = "Coco";
        sprite_ptr = bn::sprite_items::coco.create_sprite_optional(0, 0);
        get_sprite()->set_bg_priority(2);
    }

    maple::maple() 
    {
        name = "Maple";
        sprite_ptr = bn::sprite_items::maple.create_sprite_optional(0, 0);
        get_sprite()->set_bg_priority(2);
    }
}