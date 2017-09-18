/*********************************************************************
** Program Filename: Roof.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Roof class source code
** Input: various
** Output: various
*********************************************************************/

#include <iostream>
#include "Roof.h"

//constructors
Roof::Roof() {

    name = "Roof";

    description = "The roof had no birds on it today, but there was a red Frisbee.\n";

    wantedDance = "Teach me how to Dougie";

    catChange = "[Kellogg pushed the frisbee off the roof and it ricocheted off the bird feeder and hit Dougie\'s dog"
            " house.  Kellogg watched and him and Theo play frisbee for hours until it landed on the roof again.  \n";

    itemWanted = "Whistle";


}


Roof::Roof(std::string string, std::string string1, std::string string2, std::string string3, std::string string4) {

    name = string;
    description = string1;
    wantedDance = string2;
    catChange = string3;
    itemWanted = string4;

}


/*********************************************************************
** Function: getName()
** Description: returns name of place
** Parameters: n/a
** Pre-Conditions: no name
** Post-Conditions: name
*********************************************************************/

std::string Roof::getName() {
    return name;
}

/*********************************************************************
** Function: getDescription()
** Description: gives descrption of place
** Parameters: n/a
** Pre-Conditions: no description
** Post-Conditions: descrption
*********************************************************************/

std::string Roof::getDescription() {
    return description;
}

/*********************************************************************
** Function: setName()
** Description: sets place name
** Parameters: string
** Pre-Conditions: diff name
** Post-Conditions: new name
*********************************************************************/

void Roof::setName(std::string &string) {

    description = string;

}

/*********************************************************************
** Function: addDestination()
** Description: adds space pointer
** Parameters: space ptr
** Pre-Conditions: no space added
** Post-Conditions: space added
*********************************************************************/

void Roof::addDestination(Space *space) {

    destinations.push_back(space);

}

/*********************************************************************
** Function: transport()
** Description: asks for destination and returns it from vector
** Parameters: n/a
** Pre-Conditions: Unk destinations
** Post-Conditions: destinations returned in pointer form
*********************************************************************/

Space *Roof::transport() {
    int temp;

    Space *temps = destinations.at(0);

    std::cout << "\nWhere would you like to go? Type integer of location desired.\n";
    for (int i = 0; i < destinations.size(); i++) {

        std::cout << i + 1 << ") " << destinations.at(i)->getDescription() << std::endl;

    }

    std::cin >> temp;


    return destinations.at(temp - 1);
}

/*********************************************************************
** Function: getCatchange()
** Description: returns some sort of interaction between cat and place
** Parameters: n/a
** Pre-Conditions: unk interaction
** Post-Conditions: interaction given
*********************************************************************/


std::string Roof::getCatchange() {
    return catChange;
}


/*********************************************************************
** Function: setDescription()
** Description: returns some sort of description of place
** Parameters: string
** Pre-Conditions: diff description
** Post-Conditions: new description
*********************************************************************/

void Roof::setDescription(std::string string) {

    std::cout << "you shouldn't see this\n";

}

/*********************************************************************
** Function: setDescription()
** Description: returns some sort of description of place
** Parameters: string
** Pre-Conditions: diff description
** Post-Conditions: new description
*********************************************************************/

std::string Roof::getItem() {

    return "you shouldn't see this\n";

}

/*********************************************************************
** Function: setItem()
** Description: describes item
** Parameters: string
** Pre-Conditions: item not set
** Post-Conditions: t/f
*********************************************************************/

bool Roof::setItem(std::string string) {
    return false;
}

/*********************************************************************
** Function: getItemWanted()
** Description: returns item wanted
** Parameters: n/a
** Pre-Conditions: unk item wanted
** Post-Conditions: string of item wanted
*********************************************************************/

std::string Roof::getItemWanted() {
    return itemWanted;
}

/*********************************************************************
** Function: ending()
** Description: returns ending of one of the areas
** Parameters: n/a
** Pre-Conditions: no ending
** Post-Conditions: ending returned
*********************************************************************/

std::string Roof::ending() {
    return "[Theo blows the whistle and Dougie quickly runs back]\n"
            "Theo:  Aren\'t you a helpful little cat.\n"
            "Kellogg:  Meow\n"
            "Theo:  You know what, I bet all that running around made you hungry. ?\n"
            "Kellogg: Meow\n"
            "Theo:  Hmm\n"
            "[Theo carries the cat back home and introduces him to his parents, who instantly fell in love with him "
            "and all of his perfectly executed dances.  They outfitted him with a fancy embroidered collar and he "
            "spent years playing Frisbee and dancing with Dougie and Theo until one day, a Netflix executive saw "
            " Kellogg and Dougie on Youtube and gave them their own show.  That\'s right, a show of those two, "
            "dancing every week.  No dialogue.  The producers tried to add voices and their ratings plummeted.  "
            "When Kellogg got too old to dance, he returned home, with Dougie.  Every so often he would get a call "
            "from Maya on his RTP to see how he was doing and they would reminisce of the adventures with laser "
            "guided sprinklers and robot gardeners.]\n\n"

            "Congratulations.  There are 2 other endings. Explore them all!\n";
}


/*********************************************************************
** Function: getDanceWanted()
** Description: returns dance that owner wants
** Parameters: n/a
** Pre-Conditions: unk dance wanted
** Post-Conditions: returns string of dance wanted.
*********************************************************************/

std::string Roof::getDanceWanted() {
    return wantedDance;
}
