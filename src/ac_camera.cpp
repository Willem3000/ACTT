#include "ac_camera.h"

namespace ac
{
    camera::camera(entity* tracked_entity)
    {
        m_tracked_entity = tracked_entity;
    }

    void camera::update()
    {
        position = m_tracked_entity->position - bn::point(0, 20);
    }
}