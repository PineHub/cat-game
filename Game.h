/*********************************************************************
** Program Filename: Game.h
** Author: Clarence Pine
** Date: 3/15/16
** Description: Game class header code
** Input: n/a
** Output: just header file
*********************************************************************/

#ifndef FINAL_GAME_H
#define FINAL_GAME_H

#include "Space.h"
#include "Depot.h"
#include "Cat.h"
#include "Roof.h"
#include "Birdfeeder.h"


class Game {

protected:
    // Space* spacePtr;
    Cat *catPtr;
    int catPets;
    int anCntrVisits;


public:

    Game();

    Game(Cat *, int, int);

    void menu(Cat *c);

    void roofMenu(Cat *c, Birdfeeder *bird);


};


#endif //FINAL_GAME_H
