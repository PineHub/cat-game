/*********************************************************************
** Program Filename: Game.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Game class source code
** Input: various
** Output: menus
*********************************************************************/

#include "Game.h"

//constructors
Game::Game() {

    //spacePtr = NULL;
    catPtr = NULL;
    catPets = 5;
    anCntrVisits = 15;

}

Game::Game(Cat *cat, int p, int v) {

    //spacePtr = space;
    catPtr = cat;
    catPets = p;
    anCntrVisits = v;


}

/*********************************************************************
** Function: menu
** Description: the game menu for non-roofs.
** Parameters: cat pointer
** Pre-Conditions: no menu
** Post-Conditions: menu
*********************************************************************/
void Game::menu(Cat *c) {

    char temp = 'a';


    if (c->getLocation()->getName() == "Start") {


        c->setLocation(c->getLocation()->transport());
        c->incAge();


    }


    if (c->getLocation()->getName() == "Depot") {

        std::cout << std::endl << "Choose:\n"
                "a) Examine surroundings\n"
                "b) Loot the joint\n"
                "c) Go to a new location and age 1 day.\n";

        std::cin >> temp;

        if (temp == 'b') {

            c->takeItem(c->getLocation()->getItem());


        }

        else if (temp == 'c') {
            c->setLocation(c->getLocation()->transport());
            c->incAge();
            c->animalControl(anCntrVisits);
        }

        else {

            std::cout << c->getLocation()->getDescription() << std::endl;

        }

    }

    if (c->getLocation()->getName() == "Yard") {

        std::cout << std::endl << "Choose:\n"
                "a) Examine surroundings\n"
                "b) Loot the joint\n"
                "c) Interact\n"
                "d) Go to a new location and age 1 day.\n";

        std::cin >> temp;

        if (temp == 'b') {

            c->takeItem(c->getLocation()->getItem());


        }

        else if (temp == 'c') {

            std::string temp;

            temp = c->getLocation()->getCatchange();

            std::cout << temp;

            c->setClean(true);

        }

        else if (temp == 'd') {
            c->setLocation(c->getLocation()->transport());
            c->incAge();
            c->animalControl(anCntrVisits);
        }

        else {

            std::cout << c->getLocation()->getDescription() << std::endl;

        }

    }

    if (c->getLocation()->getName() == "Toolshed") {

        std::cout << std::endl << "Choose:\n"
                "a) Examine surroundings\n"
                "b) Loot the joint\n"
                "c) Go to a new location and age 1 day.\n";

        std::cin >> temp;

        if (temp == 'b') {

            if (c->getSharp()) {

                std::cout << "[Kellog climbed the tree and dropped into the hole of the shed grabbed the only"
                        " thing he could carry, a screwdriver and climbed back out.]\n";
                c->takeItem(c->getLocation()->getItem());


            }

            else {

                std::cout << "Kellogg: The sheds locked and I haven\'t sharpened my claws in a while.\n";

            }


        }


        else if (temp == 'c') {
            c->setLocation(c->getLocation()->transport());
            c->incAge();
            c->animalControl(anCntrVisits);
        }

        else {

            std::cout << c->getLocation()->getDescription() << std::endl;

        }

    }

    if (c->getLocation()->getName() == "Couch") {

        std::cout << std::endl << "Choose:\n"
                "a) Examine surroundings\n"
                "b) Interact\n"
                "c) Go to a new location and age 1 day." << std::endl;


        std::cin >> temp;


        if (temp == 'b') {

            std::string temp;

            temp = c->getLocation()->getCatchange();

            std::cout << temp;

            c->setSharp(true);

        }

        else if (temp == 'c') {
            c->setLocation(c->getLocation()->transport());
            c->incAge();
            c->animalControl(anCntrVisits);
        }

        else {

            std::cout << c->getLocation()->getDescription() << std::endl;

        }

    }

    if (c->getLocation()->getName() == "Birdfeeder") {

        std::cout << std::endl << "Choose:\n"
                "a) Examine surroundings\n"
                "b) Interact\n"
                "c) Go to a new location and age 1 day.\n";

        std::cin >> temp;

        if (temp == 'b') {

            std::cout << "Please choose item to interact with " << c->getLocation()->getName() << std::endl;


            c->displayInventory();

            if (c->invEmpty())
                std::cout << "Gather more items\n";

            else {

                int invChoice;
                std::cin >> invChoice;
                if (c->getLocation()->getItemWanted() == c->showInvItem(invChoice)) {


                    c->getLocation()->setItem(c->showInvItem(invChoice));

                    c->rmInvItem(invChoice);

                }


            }


        }

        else if (temp == 'c') {
            c->setLocation(c->getLocation()->transport());
            c->incAge();
            c->animalControl(anCntrVisits);
        }

        else {

            std::cout << c->getLocation()->getDescription() << std::endl;

        }

    }


    if (c->getLocation()->getName() == "Garden") {

        std::cout << std::endl << "Choose:\n"
                "a) Examine surroundings\n"
                "b) Interact\n"
                "c) Go to a new location and age 1 day.\n";

        std::cin >> temp;


        if (temp == 'b') {

            char petAllow = 'n';
            int numCatPets = 0;
            int itemChoice = 0;

            for (int i = 0; i < catPets; i++) {


                std::cout << c->getLocation()->getCatchange();
                std::cout << "Should I let it pet me? Press y for yes, n for no.";

                std::cin >> petAllow;

                if (petAllow == 'y') {

                    std::cout << "[The robot pets Kellogg and he purrs]\n"
                            "Robot:  Good Kitty.\n"
                            "[The robot continues gardening.\n";

                    break;

                }

                numCatPets = i + 1;
            }

            if (numCatPets == catPets) {

                std::cout << "[At this point the robot is in the street and a car comes by and crashes into it.  April"
                        " comes out of the house noticing it in several pieces."
                        "April:  Oh no! my Robot!  She notices Kellogg standing next to it.\n";

                if (!c->getClean()) {

                    std::cout << "April:  Ugh, you smell cat.  Amscray.\n";
                }


                else if (c->dance() == c->getLocation()->getDanceWanted()) {


                    std::cout << "[Kellogg runs to his cat stash and comes back.]\n"
                            "Please chose number of item that Kellogg should use\n";

                    c->displayInventory();

                    std::cin >> itemChoice;

                    if (c->getLocation()->getItemWanted() == c->showInvItem(itemChoice)) {
                        std::cout << c->getLocation()->ending();
                        c->setFufilled(true);
                    }

                    else {

                        std::cout << "April: Umm, I don\'t want that. Amscray. \n";

                    }

                }

                else {

                    std::cout << "April:  Why would I be interested in THAT dance? Amscray.\n";
                }

            }

        }

        else if (temp == 'c') {
            c->setLocation(c->getLocation()->transport());
            c->incAge();
            c->animalControl(anCntrVisits);
        }

        else {

            std::cout << c->getLocation()->getDescription() << std::endl;

        }
    }
    if (c->getLocation()->getName() == "Deck") {

        std::cout << std::endl << "Choose:\n"
                "a) Examine surroundings\n"
                "b) Interact\n"
                "c) Go to a new location and age 1 day.\n";

        std::cin >> temp;


        if (temp == 'b') {


            int itemChoice = 0;


            if (temp == 'b') {

                int invChoice;

                std::cout << "Please choose item to interact with " << c->getLocation()->getName() << std::endl;


                c->displayInventory();

                if (c->invEmpty())
                    std::cout << "Gather more items\n";

                else {


                    std::cin >> invChoice;

                    if (c->showInvItem(invChoice) == c->getLocation()->getItem()) {

                        std::cout << "[The ashtray ignites and starts to spread. Roger comes over to examine the "
                                "situation and sees Kellogg.\n";

                        if (!c->getClean()) {

                            std::cout << "Roger:  Ugh, you smell cat.  Amscray.\n";
                        }

                        else if (c->dance() == c->getLocation()->getDanceWanted()) {


                            std::cout << "[Kellogg runs to his cat stash and comes back.]\n"
                                    "Please chose number of item that Kellogg should use\n";


                            c->displayInventory();

                            if (c->invEmpty())
                                std::cout << "Gather more items\n";

                            else {
                                std::cin >> itemChoice;

                                if (c->getLocation()->getItemWanted() == c->showInvItem(itemChoice)) {
                                    std::cout << c->getLocation()->ending();
                                    c->setFufilled(true);
                                }

                                else {

                                    std::cout << "Roger: Umm, I don\'t want that. Amscray. \n";

                                }

                            }


                        }

                        else {

                            std::cout << "Roger:  Why would I be interested in THAT dance? Amscray.\n";
                        }

                    }

                    else {

                        std::cout << "Kellogg: I don't see why those two items go together.\n";

                    }

                }
            }


        }


        else if (temp == 'c') {
            c->setLocation(c->getLocation()->transport());
            c->incAge();
            c->animalControl(anCntrVisits);
        }

        else {

            std::cout << c->getLocation()->getDescription() << std::endl;

        }


    }


}

/*********************************************************************
** Function: roof menu
** Description: the game menu for roofs.
** Parameters: cat pointer
** Pre-Conditions: no menu
** Post-Conditions: menu
*********************************************************************/

void Game::roofMenu(Cat *c, Birdfeeder *birdfeeder) {

    char temp = 'a';

    if (c->getLocation()->getName() == "Roof") {

        std::cout << std::endl << "Choose:\n"
                "a) Examine surroundings\n"
                "b) Interact\n"
                "c) Go to a new location and age 1 day.\n";

        std::cin >> temp;


        if (temp == 'b') {


            int itemChoice = 0;


            if (birdfeeder->getItemWanted() == birdfeeder->getItem()) {

                std::cout <<
                "[Looks like racoons got to the pizza and broke the birdfeeder.  Kellogg pushes the frisbee "
                        " off the roof and it misses the broken bird feeder and sails out of sight.  Dougie sees this and "
                        "runs after the frisbee.\n"
                        "Theo:  Oh no! Come back Dougie!  Kellogg, not far behind Dougie sees Theo and stops him.\n";

                if (!c->getClean()) {

                    std::cout << "Theo:  Ugh, you smell cat.  Amscray.\n";
                }


                else if (c->dance() == c->getLocation()->getDanceWanted()) {


                    std::cout << "[Kellogg runs to his cat stash and comes back.]\n"
                            "Please chose number for the item that Kellogg should use\n";

                    c->displayInventory();

                    std::cin >> itemChoice;

                    if (c->getLocation()->getItemWanted() == c->showInvItem(itemChoice)) {
                        std::cout << c->getLocation()->ending();
                        c->setFufilled(true);
                    }

                    else {

                        std::cout << "Theo: Umm, I don\'t want that. Amscray. \n";

                    }

                }

                else {

                    std::cout << "Theo:  Why would I be interested in THAT dance? Amscray.\n";
                }

            }

            else
                std::cout << c->getLocation()->getCatchange() << std::endl;

        }

        else if (temp == 'c') {
            c->setLocation(c->getLocation()->transport());
            c->incAge();
            c->animalControl(anCntrVisits);
        }

        else {

            std::cout << c->getLocation()->getDescription() << std::endl;

        }


    }
}
