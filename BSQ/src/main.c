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

int main(int argc, char **argv) {
    // Check if correct number of arguments is provided
    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Read the map from the input file
    Map *map = read_map(argv[1]);

    // Find the largest square on the map
    find_largest_square(map);

    // Print the updated map
    print_map(map);

    // Free allocated memory
    for (int i = 0; i < map->lines; i++) {
        free(map->data[i]);
    }
    free(map->data);
    free(map);

    return EXIT_SUCCESS;
}
