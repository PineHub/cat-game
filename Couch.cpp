/*********************************************************************
** Program Filename: Couch.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Couch class source code
** Input: various
** Output: various
*********************************************************************/

#include <iostream>
#include "Couch.h"

Couch::Couch() {

    name = "Couch";
    description = "The abandoned fabric couch looked out of place on the side of their house, but I love to spend hours"
            " sleeping and prying my claws into it.\n";


    catChange = "[Kellogg dug his claws into the couch and scratched it for half an hour.  Then he blew on them like "
            "he actually accomplished something]";

}


Couch::Couch(std::string string, std::string string1, std::string string2) {

    name = string;
    description = string1;

    catChange = string2;


}


std::string Couch::getName() {
    return name;

}

std::string Couch::getDescription() {
    return description;
}

void Couch::setName(std::string &string) {

    description = string;

}

void Couch::addDestination(Space *space) {

    destinations.push_back(space);

}

Space *Couch::transport() {
    int temp;

    Space* temps = destinations.at(0);

    std::cout << "\nWhere would you like to go? Type integer of location desired.\n";
    for(int i =0; i < destinations.size(); i++){

        std::cout << i+1 << ") " << destinations.at(i)->getDescription() << std::endl;

    }

    std::cin >> temp;


    return destinations.at(temp-1);
}

std::string Couch::getCatchange() {
    return catChange;
}


void Couch::setDescription(std::string string) {

    std::cout << "you shouldn't see this\n";

}


std::string Couch::getItem() {

    return "you shouldn't see this\n";

}

bool Couch::setItem(std::string string) {
    return false;
}

std::string Couch::getItemWanted() {
    return "You shouln't see this. \n";
}

std::string Couch::ending() {
    return "you shouldn't see this\n";
}

std::string Couch::getDanceWanted() {
    return "you shouldn't see this\n";
}
