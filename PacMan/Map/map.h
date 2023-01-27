//
//  map.h
//  PacMan
//
//  Created by Victor Mendes on 27/01/23.
//

#ifndef map_h
#define map_h

// MARK: - Structs
struct map {
    char **map;
    int lines;
    int columns;
};
typedef struct map Map;

struct coordinate {
    int x, y;
};
typedef struct coordinate Coordinate;

void readMap(Map* world);
void freeMemoryMap(Map* world);
void allocateMapMemory(Map* world);
void showMap(Map* world);
void findPlayer(Map* world, Coordinate* position, char player);

#endif /* map_h */
