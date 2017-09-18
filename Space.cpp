/*********************************************************************
** Program Filename: Space.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Space abstract class source code
** Input: various
** Output: various
*********************************************************************/

#include <iostream>
#include "Space.h"


Space::Space() {

    std::string name = "unk";
    std::string description = "unk";



}

Space::Space(std::string n, std::string d){

    name = n;
    description = d;

}

std::string Space::getName() {

    return name;
}

void Space::setName(std::string &n) {

    name = n;

}

/*void Space::menu(Cat* c){


    std::cout << "blank menu\n";


}*/

void Space::setDescription(std::string s) {

    description = s;

}



