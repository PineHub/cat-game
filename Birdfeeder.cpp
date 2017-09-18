/*********************************************************************
** Program Filename: Birdfeeder.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Birdfeeder class source code
** Input: various
** Output: various
*********************************************************************/

#include "Birdfeeder.h"

Birdfeeder::Birdfeeder() {

    name = "Birdfeeder";
    description = "The large plastic bird feeder was easily accessible but very delicate.  It had a plastic tube"
            " for a bird to perch on and then press her beak into the feeder.";
    item = "Not Pizza";
    itemWanted = "slice of pizza";



}


Birdfeeder::Birdfeeder(std::string string, std::string string1, std::string string2, std::string string3) {

    name = string;
            description = string1;
                    item = string2;
    itemWanted = string3;

}


std::string Birdfeeder::getName() {
    return name;
}

std::string Birdfeeder::getDescription() {
    return description;
}

void Birdfeeder::setName(std::string &string) {
    name = string;
}

void Birdfeeder::setDescription(std::string string) {
    description = string;
}

void Birdfeeder::addDestination(Space *space) {
    destinations.push_back(space);
}

Space *Birdfeeder::transport() {
    int temp;

    Space *temps = destinations.at(0);

    std::cout << "\nWhere would you like to go? Type integer of location desired.\n";
    for (int i = 0; i < destinations.size(); i++) {

        std::cout << i + 1 << ") " << destinations.at(i)->getDescription() << std::endl;

    }

    std::cin >> temp;


    return destinations.at(temp - 1);


}

std::string Birdfeeder::getItem() {
    return item;
}


bool Birdfeeder::setItem(std::string string) {

    if(itemWanted == string) {

        std::cout << "[Kellogg placed the slice of pizza on the bird perch of the feeder.]\n";

        item = string;

        description = "Kellogg: Its a birdfeeder with a slice of pizza on it.  I'd eat it myself if it wasn't thai chicken. "
                "I'm allergic to nuts.\n";

        std::cout << description;

        return true;

    }

    else{

        std::cout <<"Kellogg:  I see no reason to put that there\n";

        return false;

    }




}

std::string Birdfeeder::getItemWanted() {
    return itemWanted;
}

std::string Birdfeeder::ending() {
    return "you shouldn't see this\n";
}


std::string Birdfeeder::getDanceWanted() {
    return "You shouldn't see this\n";
}
