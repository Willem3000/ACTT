#ifndef AC_BG_OUTSIDE_MAP_H
#define AC_BG_OUTSIDE_MAP_H

#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_memory.h"
#include "bn_affine_bg_ptr.h"
#include "bn_affine_bg_item.h"
#include "bn_affine_bg_map_ptr.h"
#include "bn_sprite_text_generator.h"
#include "bn_affine_bg_map_cell_info.h"
#include "bn_display.h"

namespace ac
{
    constexpr int debug_tile_index = 2;
    constexpr int grass_tile_1_index = 0;
    constexpr int grass_tile_2_index = 1;
    constexpr int grass_tile_3_index = 8;
    constexpr int grass_tile_4_index = 9;

    class outside_map
    {
        public:
            static constexpr int columns = 64;
            static constexpr int rows = 64;
            static constexpr int cells_count = columns * rows;

            alignas(int) bn::affine_bg_map_cell cells[cells_count];
            bn::affine_bg_map_item map_item = bn::affine_bg_map_item(cells[0], bn::size(columns, rows));

            outside_map()
            {
                reset();
            }

            void fill_map()
            {
                for (int x = 0; x < rows; x++)
                {
                    for (int y = 0; y < columns; y++)
                    {
                        bn::affine_bg_map_cell& current_cell = cells[map_item.cell_index(x, y)];
                        bn::affine_bg_map_cell_info current_cell_info(current_cell);

                        int index = 0;

                        if (x % 2 == 0) 
                        {
                            if (y % 2 == 0) {index = grass_tile_1_index;}
                            else {index = grass_tile_3_index;}
                        }
                        else
                        {
                            if (y % 2 == 0) {index = grass_tile_2_index;}
                            else {index = grass_tile_4_index;}
                        }

                        if (x == 0 && y == 1)
                        {
                            index = debug_tile_index;
                        }

                        current_cell_info.set_tile_index(index);
                        current_cell = current_cell_info.cell();
                    }
                }
            }

            void reset()
            {
                bn::memory::clear(cells_count, cells[0]);
            }
        
        private:

    };
}

#endif