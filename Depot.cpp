/*********************************************************************
** Program Filename: Depot.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Depot class source code
** Input: various
** Output: various
*********************************************************************/

#include <iostream>
#include "Depot.h"



Depot::Depot() {

    name = "Depot";
    description = "Description of place";
    item = "Item name";


}

Depot::Depot(std::string string, std::string string1, std::string string2) {

    name = string;
    description = string1;
    item = string2;

}

std::string Depot::getName() {

    return name;

}


std::string Depot::getDescription() {

    return description;

}

void Depot::setName(std::string &string) {

    description = string;

}

void Depot::addDestination(Space *space) {

    destinations.push_back(space);

}

Space *Depot::transport() {

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


void Depot::setDescription(std::string s) {

description = s;

}

std::string Depot::getItem() {



    if(!item.empty()) {

        std::string temp;
        temp = item;

        item.clear();
        description = "\nThe current location no longer holds any items\n";
        return temp;

    }

    else {
        std::cout << getDescription() << std::endl;


        return item;

    }
}

std::string Depot::getCatchange() {

    return "you shouldn't see this\n";

}

bool Depot::setItem(std::string){

    std::cout << "you shouldn't see this\n";
}

std::string Depot::getItemWanted() {
    return "you shouldn't see this\n";
}

std::string Depot::ending() {
    return "you shouldn't see this\n";
}

std::string Depot::getDanceWanted() {
    return "you shouldn't see this\n";
}
