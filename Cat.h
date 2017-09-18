/*********************************************************************
** Program Filename: Cat.h
** Author: Clarence Pine
** Date: 3/15/16
** Description: Cat class header
** Input: various
** Output: various
*********************************************************************/

#ifndef FINAL_CAT_H
#define FINAL_CAT_H


#include <string>
#include <vector>
#include "Space.h"
#include "Depot.h"
#include <stdlib.h>

class Cat{

private:

    std::string inventory[5];
    Space* location;
    int age;
    bool sharp;
    bool isClean;
    bool fufilled;

public:

    Cat();
    Cat(Space*, int, bool, bool, bool);
    std::string dance();
    void setLocation(Space*);
    Space* getLocation();
    void animalControl(int i);
    bool invEmpty();
    std::string showInvItem(int);
    void rmInvItem(int);

    void takeItem(std::string);
  //std::string giveItem(Space* l);
    void incAge();

    void displayInventory();



    void setClean(bool b);
    bool getClean();

    void setSharp(bool b);
    bool getSharp();

    bool getFufilled();
    void setFufilled(bool f);





  //  friend BirdFeeder::takeItem(std::string);
  //  friend Deck::takeItem(std::string);







};


#endif //FINAL_CAT_H
