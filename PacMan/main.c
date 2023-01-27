//
//  main.c
//  PacMan
//
//  Created by Victor Mendes on 26/01/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "control.h"

// MARK: - Main
int main(int argc, const char * argv[]) {
    Map world;
    Coordinate position;
    
    readMap(&world);
    findPlayer(&world, &position, '@');
    play(&world, &position);
    freeMemoryMap(&world);
    return 0;
}
