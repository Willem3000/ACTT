#ifndef AC_MATH_H
#define AC_MATH_H

#include "bn_fixed.h"

namespace ac
{
    int max(int a, int b);
    bn::fixed max(bn::fixed a, bn::fixed b);
    bn::fixed pow(bn::fixed a, int pow);
    int pow(int a, int pow);
}

#endif