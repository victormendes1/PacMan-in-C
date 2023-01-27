//
//  control.c
//  PacMan
//
//  Created by Victor Mendes on 27/01/23.
//

#include "control.h"

// MARK: - Control
void moveCharacter(Map* world, Coordinate *position, char direction) {
    world->map[position->x][position->y] = '.';
    
    switch (direction) {
        case 'a':
            world->map[position->x][position->y-1] = '@';
            position->y--;
            break;
        case 'w':
            world->map[position->x-1][position->y] = '@';
            position->x--;
            break;
        case 'd':
            world->map[position->x][position->y+1] = '@';
            position->y++;
            break;
        case 's':
            world->map[position->x+1][position->y] = '@';
            position->x++;
            break;
        default:
            break;
    }
}

// MARK: - Game start and end
void play(Map* world, Coordinate *position) {
    char command;
    do {
        showMap(world);
        scanf(" %c", &command);
        moveCharacter(world, position, command);
    } while(!endGame());
}


int endGame(void) {
    return 0;
}
