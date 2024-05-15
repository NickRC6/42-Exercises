/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqiu <zqiu@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:53:35 by zqiu              #+#    #+#             */
/*   Updated: 2024/05/14 17:53:40 by zqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BSQ.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
    int i;
    int j;

    if (argc < 2) 
    {
        print_error(4);
        return EXIT_FAILURE;
    }
    i = 0;
    while (i < argc)
    {
        Map *map = read_map(argv[i]);
        find_largest_square(map);
        print_map(map);
        j = 0;
        while (j < map->lines) 
        {
            free(map->data[j]);
            j++;
        }
        free(map->data);
        free(map);
        i++;
    }
    return EXIT_SUCCESS;
}
