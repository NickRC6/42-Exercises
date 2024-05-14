/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_largest_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriera-c <nriera-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:36:45 by nriera-c          #+#    #+#             */
/*   Updated: 2024/05/14 19:36:54 by nriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BSQ.h"

void find_largest_square(Map *map) {
	int max_size;
	int max_x;
	int max_y;
	int size;
	int valid;
	int y;
	int x;
	int j;
	int i;

	max_size = 0;
	max_x = 0;
	max_y = 0;
	size = 0;
	valid = 0;
	y = 0;
	x = 0;
	j = 0;
	i = 0;
	

	while (y < map->lines) {
		x = 0;
		while (x < map->lines) {
			if (map->data[y][x] == map->empty) {
				size = 0;
				while (y + size < map->lines && x + size < map->lines) {
					valid = 1;
					i = y;
					while (i <= y + size) {
						j = x;
						while (j <= x + size) {
							if (map->data[i][j] == map->obstacle) {
								valid = 0;
								break;
							}
							j++;
						}
						if (!valid) break;
						i++;
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
			x++;
		}
		y++;
	}
}
