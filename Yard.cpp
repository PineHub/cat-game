/*********************************************************************
** Program Filename: Yard.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Yard class source code
** Input: various
** Output: various
*********************************************************************/

#include "Yard.h"
#include <iostream>
#include "Depot.h"



Yard::Yard() {

    name = "Yard";
    description = "It was a clean looking yard scattered with sprinklers throughout.  One of the sprinklers had a laser"
            " scope attached. There is a small glimmer in the grass.\n";
    item = "Whistle";
    catChange = "[Kellogg leaped in the air and the laser-guided sprinkler shot a bright-red beam on the "
            "airborne kitty then blasted him with water.  It was enough water to completely clean the cat]";


}

Yard::Yard(std::string string, std::string string1, std::string string2, std::string string3) {

    name = string;
    description = string1;
    item = string2;
    catChange = string3;


}

std::string Yard::getName() {

    return name;

}


std::string Yard::getDescription() {

    return description;

}

void Yard::setName(std::string &string) {

    description = string;

}

void Yard::addDestination(Space *space) {

    destinations.push_back(space);

}

Space *Yard::transport() {

    int temp;

    Space* temps = destinations.at(0);

    std::cout << "\nWhere would you like to go? Type integer of location desired.\n";
    for(int i =0; i < destinations.size(); i++){

        std::cout << i+1 << ") " << destinations.at(i)->getDescription() << std::endl;

    }

    std::cin >> temp;


    return destinations.at(temp-1);

}





/*void Depot::menu(Cat *c) {

    char temp = 'a';

    std::cout << std::cout << "Choose (don\'t type the parentheses):\n"
            "a) Examine surroundings\n"
            "b) Loot the joint\n"
            "c) Go to a new location and age 1 day.\n";

    std::cin >> temp;

    if(temp == 'b'){

        if(!item.empty()) {

            c->takeItem(item);
            item.clear();
            description = "\nThe current location no longer holds any items\n";

        }

        else
            std::cout << getDescription() << std::endl;

    }

    else if(temp == 'c')
        transport();

    else{

        std::cout << getDescription() << std::endl;

    }



}*/


void Yard::setDescription(std::string s) {

    description = s;

}

std::string Yard::getItem() {



    if(!item.empty()) {

        std::string temp;
        temp = item;

        item.clear();
        description = "\nIt was a clean looking yard scattered with sprinklers throughout.  One of the sprinklers had a laser"
                "scope attached. \n";
        return temp;

    }

    else {
        std::cout << getDescription() << std::endl;


        return item;

    }
}

std::string Yard::getCatchange(){

    return catChange;

}

std::string Yard::ending() {
    return "you shouldn't see this\n";
}

std::string Yard::getDanceWanted() {
    return "you shouldn't see this\n";
}
