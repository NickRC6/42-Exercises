#include "../includes/BSQ.h"

void find_largest_square(Map *map) {
    int max_size = 0;
    int max_x = 0;
    int max_y = 0;

    for (int y = 0; y < map->lines; y++) {
        for (int x = 0; x < map->lines; x++) {
            if (map->data[y][x] == map->empty) {
                int size = 0;
                while (y + size < map->lines && x + size < map->lines) {
                    int valid = 1;
                    for (int i = y; i <= y + size; i++) {
                        for (int j = x; j <= x + size; j++) {
                            if (map->data[i][j] == map->obstacle) {
                                valid = 0;
                                break;
                            }
                        }
                        if (!valid) break;
                    }
                    if (valid) size++;
                    else break;
                }

                if (size > max_size) {
                    max_size = size;
                    max_x = x;
                    max_y = y;
                }
            }
        }
    }

    // Mark the largest square found
    for (int i = max_y; i < max_y + max_size; i++) {
        for (int j = max_x; j < max_x + max_size; j++) {
            map->data[i][j] = map->full;
        }
    }
}