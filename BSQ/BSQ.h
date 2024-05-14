#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <fcntl.h>

typedef struct {
    int lines;
    char empty;
    char obstacle;
    char full;
    char **data;
} Map;

// Function to read the map from a file
Map* read_map(const char *file);

// Function to print the map
void print_map(const Map *map);

// Function to find the largest square
void find_largest_square(Map *map);

#endif