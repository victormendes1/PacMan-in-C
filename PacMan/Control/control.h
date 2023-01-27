//
//  control.h
//  PacMan
//
//  Created by Victor Mendes on 27/01/23.
//

#ifndef control_h
#define control_h

#include <stdio.h>
#include "map.h"

void moveCharacter(Map* world, Coordinate *position, char direction);
void play(Map* world, Coordinate *position);
int endGame(void);

#endif /* control_h */
