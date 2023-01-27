 //
//  map.c
//  PacMan
//
//  Created by Victor Mendes on 27/01/23.
//

#include <stdio.h>
#include "stdlib.h"
#include "map.h"
#include "stringconstants.h"

// MARK: - Reading map file
void readMap(Map* world) {
    FILE *file = fopen(pathMap, "r");
    if (file == 0) {
        printf("Error reading map file.\n");
        return;
    }
    fscanf(file, "%d %d", &world->lines, &world->columns);
    allocateMapMemory(world);
    for(int i = 0; i < 5; i++) {
        fscanf(file, "%s", world->map[i]);
    }
    fclose(file);
}

// MARK: - Finding Player
void findPlayer(Map* world, Coordinate* position, char player) {
    for(int i = 0; i < world->lines; i++) {
        for(int j = 0; j < world->columns; j++) {
            if (world->map[i][j] == player) {
                position->x = i;
                position->y = j;
                break;
            }
        }
    }
}

// MARK: - Show map
void showMap(Map* world) {
    for(int i = 0; i < 5; i++) {
        printf("%s\n", world->map[i]);
    }
}

// MARK: - Allocate / Free Memory
void allocateMapMemory(Map* world) {
    world->map = malloc(sizeof(char *) * world->lines);
    for (int i = 0; i < world->lines; i++) {
        world->map[i] = malloc(sizeof(char) * (world->columns + 1));
    }
}

void freeMemoryMap(Map* world) {
    for(int i = 0; i < 5; i++) {
        free(world->map[i]);
    }
    free(world->map);
}
