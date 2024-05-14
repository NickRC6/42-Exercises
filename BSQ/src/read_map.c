#include "BSQ.h"

Map* read_map(const char *file) {
    FILE *fp = fopen(file, "r");
    if (!fp) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Allocate memory for map structure
    Map *map = malloc(sizeof(Map));

    // Read map parameters
    fscanf(fp, "%d %c %c %c", &map->lines, &map->empty, &map->obstacle, &map->full);
    fgetc(fp); // consume newline

    // Allocate memory for map data
    map->data = malloc(map->lines * sizeof(char*));
    for (int i = 0; i < map->lines; i++) {
        map->data[i] = malloc((map->lines + 1) * sizeof(char)); // +1 for null terminator
        fgets(map->data[i], map->lines + 2, fp); // Read one extra for newline
    }

    fclose(fp);
    return map;
}