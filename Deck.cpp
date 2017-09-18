/*********************************************************************
** Program Filename: Deck.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Deck class source code
** Input: various
** Output: various
*********************************************************************/

#include <iostream>
#include "Deck.h"


Deck::Deck() {

    name = "Deck";

    description = "The large, wooden deck had an ashtray on the railing.  It was still emitting smoke.\n";

    wantedDance = "Soulja Boy tell em";


    itemWanted = "helium balloon";

    item = "lighter fluid";


}


Deck::Deck(std::string string, std::string string1, std::string string2, std::string string3, std::string string4) {

    name = string;
    description = string1;
    wantedDance = string2;
    item = string3;
    itemWanted = string4;

}

std::string Deck::getName() {
    return name;
}


std::string Deck::getDescription() {
    return description;
}

void Deck::setName(std::string &string) {

    description = string;

}

void Deck::addDestination(Space *space) {

    destinations.push_back(space);

}

Space *Deck::transport() {
    int temp;

    Space *temps = destinations.at(0);

    std::cout << "\nWhere would you like to go? Type integer of location desired.\n";
    for (int i = 0; i < destinations.size(); i++) {

        std::cout << i + 1 << ") " << destinations.at(i)->getDescription() << std::endl;

    }

    std::cin >> temp;


    return destinations.at(temp - 1);
}

std::string Deck::getCatchange() {
    return "you shouldn't see this\n";
}


void Deck::setDescription(std::string string) {

    std::cout << "you shouldn't see this\n";

}


std::string Deck::getItem() {

    return item;

}

bool Deck::setItem(std::string string) {
    return false;
}

std::string Deck::getItemWanted() {
    return itemWanted;
}

std::string Deck::ending() {
    return "[Kellogg hands the balloon to Roger but releases it too early.  The balloon rises and the laser locks onto "
            "the balloon, squirting it and the fire.  Roger goes into the house, grabs a cup of coffee and puts out the "
            "rest of the flames.]\n"
            "Roger:  Incredible.  Almost seemed like you meant to do that. \n "
            "Kellogg:  Meow\n"
            "Roger:  You did?  No way, a dancing, fire-fighting cat.  \n\n"

            "Roger brings Kellogg inside.  Roger, a renowned agent in corporate espionage, worked with Kellogg to  "
            "gather intelligence on competing companies.  Roger would often have a drone helicopter carry Kellogg "
            "past security systems and while relaying commands through Kellogg\'s RTP implant, infiltrate competing "
            "companies for purposes of information theft and economic sabotage.  After Kellogg\'s first successful \n"
            "mission, Roger rewarded Kellog with the collar that he so desired.  It was outfitted with; you guessed it,  "
            "a laser that kept him entertained for years]\n "
            "Congratulations! There are 2 alternate endings available. Explore them all!\n ";

}


std::string Deck::getDanceWanted() {
    return wantedDance;
}

