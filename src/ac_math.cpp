#include "ac_math.h"

namespace ac
{
    int max(int a, int b)
    {
        return a > b ? a : b;
    }

    bn::fixed max(bn::fixed a, bn::fixed b)
    {
        return a > b ? a : b;
    }

    bn::fixed pow(bn::fixed a, int pow)
    {
        bn::fixed ret = 1;

        while (pow-- > 0)
        {
            ret *= a;
        }

        return ret;
    }
    
    int pow(int a, int pow)
    {
        int ret = 1;

        while (pow-- > 0)
        {
            ret *= a;
        }

        return ret;
    }
}