#include "bn_core.h"
#include "ac_core.h"

int main()
{
    bn::core::init();
    ac::core::game game = ac::core::game();

    while(true)
    {
        game.update();
        bn::core::update();
    }
}
