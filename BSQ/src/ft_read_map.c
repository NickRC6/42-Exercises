/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqiu <zqiu@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:35:15 by zqiu              #+#    #+#             */
/*   Updated: 2024/05/15 11:35:17 by zqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BSQ.h"

Map* read_map(const char *file) 
{
	char param_buf[100]; 
    int param_count = 0;
    char ch;
	int	i;
	int j;
    int fd;
	int digits;

	fd = open(file, O_RDONLY);
    if (fd < 0) 
	{
        print_error(1);
        exit(EXIT_FAILURE);
    }

    // Allocate memory for map structure
    Map *map = malloc(sizeof(Map));
    if (!map) 
	{
        close(fd);
        print_error(2);
        exit(EXIT_FAILURE);
    }

    // Read map parameters

    while (read(fd, &ch, 1) && ch != '\n' && param_count < 100) 
	{
        param_buf[param_count] = ch;
        param_count++;
    }
    param_buf[param_count] = '\0'; 

    // Extract map parameters
	digits = 0;
    while (param_buf[digits] >= '0' && param_buf[digits] <= '9') 
	{
        digits++;
    }
    map->lines = 0;
    for (int i = 0; i < digits; i++) 
	{
        map->lines = map->lines * 10 + (param_buf[i] - '0');
    }
    map->empty = param_buf[digits];
    map->obstacle = param_buf[digits + 1];
    map->full = param_buf[digits + 2];

    // Allocate memory for map data
    map->data = malloc(map->lines * sizeof(char*));
    if (!map->data) 
	{
        close(fd);
        free(map);
        print_error(2);
        exit(EXIT_FAILURE);
    }

    // Read map data
	i = 0;
    while (i < map->lines) 
	{
        map->data[i] = malloc((map->lines + 1) * sizeof(char)); 
        if (!map->data[i]) 
		{
            close(fd);
            free(map->data);
            free(map);
            print_error(2);
            exit(EXIT_FAILURE);
        }
        j = 0;
        while (read(fd, &ch, 1) && ch != '\n') 
		{
            if (j >= map->lines) 
			{ 
                close(fd);
                free(map->data);
                free(map);
                print_error(3);
                exit(EXIT_FAILURE);
            }
            if (ch != map->empty && ch != map->obstacle && ch != map->full) 
            {
                print_error(5);
                ft_putstr(&ch);
                ft_putstr("\n");
                exit(EXIT_FAILURE);
            }
            if (ch == map->empty || ch == map->obstacle || ch == map->full) 
			{
                map->data[i][j] = ch;
                j++;
            }
        }
        map->data[i][j] = '\0'; 
		i++;
    }
    close(fd);
    return map;
}
