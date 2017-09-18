/*********************************************************************
** Program Filename: Garden.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Garden class source code
** Input: various
** Output: various
*********************************************************************/

#include <iostream>
#include "Garden.h"

Garden::Garden() {

    name = "Garden";

    description = "The unfenced garden was at the front of the house and had several android robots, shearing, pruning, "
            "cultivating and weeding various parts of the enormous Japanese-style garden.\n";

    wantedDance = "The Robot";

    catChange = "Robot Gardener: Beep boop beep boop kitty.\n"
            "[The robot moves toward the Kellogg to pet him.] \n";

    itemWanted = "screwdriver";


}


Garden::Garden(std::string string, std::string string1, std::string string2, std::string string3, std::string string4) {

    name = string;
    description = string1;
    wantedDance = string2;
    catChange = string3;
    itemWanted = string4;

}

std::string Garden::getName() {
    return name;
}


std::string Garden::getDescription() {
    return description;
}

void Garden::setName(std::string &string) {

    description = string;

}

void Garden::addDestination(Space *space) {

    destinations.push_back(space);

}

Space *Garden::transport() {
    int temp;

    Space *temps = destinations.at(0);

    std::cout << "\nWhere would you like to go? Type integer of location desired.\n";
    for (int i = 0; i < destinations.size(); i++) {

        std::cout << i + 1 << ") " << destinations.at(i)->getDescription() << std::endl;

    }

    std::cin >> temp;


    return destinations.at(temp - 1);
}

std::string Garden::getCatchange() {
    return catChange;
}


void Garden::setDescription(std::string string) {

    std::cout << "you shouldn't see this\n";

}


std::string Garden::getItem() {

    return "you shouldn't see this\n";

}

bool Garden::setItem(std::string string) {
    return false;
}

std::string Garden::getItemWanted() {
    return itemWanted;
}

std::string Garden::ending() {
    return "April: Thank you so much Mr. Cat.  You seem pretty smart for a feline.  How did you know that tools like "
            "this help build robots? \n"
            "Kellogg:  Meow.\n"
            "April:  Come with me Mr. Cat, we can deal with this robot mess later.\n"
            "[Kellogg followed April inside where he would spend hours with April, handing various tools to her to "
            "help build her project robots.  One day, April built Kellogg a robot butler, then a robot maid.  Wearing a "
            "high tech cat collar that would transmit commands to his robot-servants.  Kellogg lived a long, health "
            "life, beloved by April’s family.  After he passed, April kept a picture of her beloved cat, riding across the "
            "living room on his favorite Roomba]\n"
            "Congratulations.  There are 2 other endings. Explore them all!\n";
}


std::string Garden::getDanceWanted() {
    return wantedDance;
}
