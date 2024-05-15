#include "../includes/BSQ.h"

void print_map(const Map *map) 
{
    int i;

    i = 0;
    while (i < map->lines) 
    {
        ft_putstr(map->data[i]);
        ft_putstr("\n");
        i++;
    }
    ft_putstr("\n");
}