#include "../includes/BSQ.h"

void print_map(const Map *map) {
    for (int i = 0; i < map->lines; i++) {
        printf("%s", map->data[i]);
    }
}