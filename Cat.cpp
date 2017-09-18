/*********************************************************************
** Program Filename: Cat.cpp
** Author: Clarence Pine
** Date: 3/15/16
** Description: Cat class source code
** Input: various
** Output: various
*********************************************************************/

#include <iostream>
#include <stdlib.h>
#include "Cat.h"

//Cat Class Constructor
Cat::Cat() {


    location = NULL;
    age = 0;
    sharp = false;
    isClean = false;
    fufilled = false;


}


Cat::Cat(Space *space, int i, bool b, bool b1, bool b2) {

    location = space;
    age = i;
    sharp = b;
    isClean = b1;
    fufilled = b2;

}

/*********************************************************************
** Function: dance()
** Description: gives dance menu and returns dance of choice
** Parameters: n/a
** Pre-Conditions: no dance output
** Post-Conditions: dance string returned
*********************************************************************/


std::string Cat::dance() {

    char temp;

    std::cout << "Which dance should I do? \n"
            "Choose (don\'t type the parentheses):\n"
            "a) Teach me how to Dougie\n"
            "b) The Funky Chicken\n"
            "c) Uptown Funk\n"
            "d) Soulja Boy tell em\n"
            "e) The Robot\n";

    std::cin >> temp;

    if (temp == 'a') {

        std::cout <<
        "\n[Kellogg stood up, bent his hind legs, leaned side-to-side, and tapped his hind paws inward.  Then, "
                "before leaning, he led to the left and right with his head and followed his tow tap with a rolling motion  "
                "with his forepaws.] \n";

        return "Teach me how to Dougie";
    }

    if (temp == 'b') {

        std::cout << "\n"
                "[Kellogg started moving his head back and forth.  Then he made chicken-like noises \'cluck, cluck, cluuuuk!\'’ "
                "While still oscillating his head in a perfect rhythm, he stood on his hind legs and moved his paws towards "
                "his armpits.  Then he moved his elbows up and down as if he was flapping his wings.  Altering the "
                "traditional funky chicken, Kellogg’s version kept his hind feet planted instead of alternating them outward "
                "adding a bit of the Charleston to the dance.]\n";

        return "The Funky Chicken";
    }

    if (temp == 'c') {

        std::cout << "\n"
                "[Kellogg stood on his hind legs.  Pointing his right hind to the right, he turned his paw palm-up above his "
                "head, and then immediately bent his right elbow and toward his body like a \'yes!\' motion, giving a slight "
                "bend to his hind legs.  Then he did the same to his left side.  From there he made the ‘yes!’ motion to"
                "the right again but twice.]\n"

                "Kellogg:  Up, town funk-you-up, uptown-funk-you-up.\n";

        return "Uptown Funk";

    }

    if (temp == 'd') {

        std::cout << "\n"
                "[Kellogg immediately stood on his hind legs, crossed his front paws in front of each other while also giving "
                " a slight bounce to his hinds, not once, not twice, not thrice, but four times.  He then jumped to the right "
                "horizontally and pushed both forepaws to the left]\n";

        return "Soulja Boy tell em";

    }

    if (temp == 'e') {

        std::cout << "\n"
                "[Kellogg slowly brought both forepaws up close to his head, jerked his body, made an audible \'zoot\' noise, "
                "and immediately froze n place.  He then moved his right elbow above his head, froze, then moved his left  "
                "elbow up, and froze again.  At that point he made an audible \'whirrr\' noise and moved his head up in a "
                "zigzag motion above his elbows.  He moved his right hind leg forward, froze, his left paw forward, froze, "
                "then turned his head forward, froze.  It looked like he tried to move his left hind leg, it wouldn\'t move, so "
                "he moved his head back to look at that leg, froze, then he took his right paw to his left hind, froze, then "
                "made an oil can noises \'pup, pup, pup,\' and froze.]\n";


        return "The Robot";
    }


}

/*********************************************************************
** Function:  setLocation
** Description: sets location of the cat
** Parameters: space pointer
** Pre-Conditions: old location
** Post-Conditions: cat at new location
*********************************************************************/

void Cat::setLocation(Space *s) {

    location = s;

}

/*********************************************************************
** Function: getLocation
** Description: returns location
** Parameters: n/a
** Pre-Conditions: unk where cat is
** Post-Conditions: location of where
*********************************************************************/

Space *Cat::getLocation() {

    return location;

}

/*********************************************************************
** Function: animal control
** Description: after cat moves i times, a coin is flipped and it decides if he ran out of time. Or else he gets 12
 * more i more tries
** Parameters: i
** Pre-Conditions: cat may be put in pound
** Post-Conditions: 50% of chance of going to pound
*********************************************************************/

void Cat::animalControl(int i) {

    if (age % i == 0) {

        char fightFlight = 'r';

        std::cout << "\n Here comes animal control.  Should I run or fight? Press r for run, f for fight\n";

        std::cin >> fightFlight;

        int result = 1;

        result = ((rand() % 2) + 1);

        if (result == 1 && fightFlight == 'r') {

            std::cout <<
            "\n You wouldn\'t believe it Maya; I ran for my life and he tripped on a polecat. Then he got sprayed."
                    "Its my lucky day\n";

        }

        if (result == 2 && fightFlight == 'r') {

            std::cout <<
            "\n I ran as fast as I could, but this polecat got in the way and I got sprayed.  Not only am I caught, "
                    "but no one is going to want to adopt me smelling like this. Really bad luck. \n "
                    "[Animal control takes Kellogg to the shelter where he is never heard from again.]\n\n"
                    "   Game Over\n";

            fufilled = true;
            return;

        }


        if (result == 1 && fightFlight == 'f') {

            std::cout <<
            "\n I jumped in the air and tried to scratch him, but I missed and got his phone instead.  The phone "
                    "fell into a puddle of water and he raced to the store to buy a bag of rice\n";

        }

        if (result == 2 && fightFlight == 'f') {

            std::cout <<
            "\n  I went into my attack stance and he pointed to his cage which was full of catnip.  I jumped into "
                    "the cage frantically and he locked the door behind me.\n"

                    "[Animal control takes Kellogg to the shelter where he is never heard from again.]\n\n"
                    "   Game Over\n";

            fufilled = true;
            return;

        }
    }

}

/*********************************************************************
** Function: invEmpty
** Description: returns true if inventory empty
** Parameters: n/a
** Pre-Conditions: unk if inv emtpy
** Post-Conditions: true if inv empty
*********************************************************************/


bool Cat::invEmpty() {

    bool temp = true;

    for (int i = 0; i < 5; i++) {

        if (!inventory[i].empty()) {

            temp = false;
            return temp;
        }

    }

    return temp;
}

/*********************************************************************
** Function: displayInventory
** Description: shows inventory
** Parameters: n/a
** Pre-Conditions: unk whats in inventory
** Post-Conditions: inventory shown
*********************************************************************/

void Cat::displayInventory() {

    if (invEmpty()) {

        std::cout << "Cat stash is empty\n";

        return;

    } //need a test for if string empty

    else {
        for (int i = 0; i < 5; i++) {

            if (!inventory[i].empty())
                std::cout << "Item " << i + 1 << ": " << inventory[i] << std::endl;

        }
    }

}

/*********************************************************************
** Function: takeItem
** Description: puts item in inventory
** Parameters: string
** Pre-Conditions: item not in inventory
** Post-Conditions: item in inventory
*********************************************************************/

void Cat::takeItem(std::string s) {

    for (int i = 0; i < 5; i++) {

        if (inventory[i].empty()) {

            inventory[i] = s;
            std::cout << "Item " << s << " successfully added to cat stash.\n";
            return;
        }

    }
    std::cout << "Cat stash is full.\n";


}

/*std::string Cat::giveItem(Space *l) {

    int stashItem= 0;

    std::cout << " What item should I use? Type the integer of the item.\n";

    displayInventory();

    std::cin >> stashItem;



    if(l->itemWanted == inventory->[stashItem -1]){

        l->itemTaken = inventory[stashItem];
        std::cout << "Item successfully placed at location! \n";

        inventory[stashItem].clear();

    }



} */


/*********************************************************************
** Function: incAge
** Description: increments Kellogg's age
** Parameters: n/a
** Pre-Conditions: age is x
** Post-Conditions: age is x+1
*********************************************************************/

void Cat::incAge() {

    age++;
    std::cout << "Kellogg is now " << age << " years old.\n";

}

/*********************************************************************
** Function: setClean
** Description: sets if clean or dirty
** Parameters: bool
** Pre-Conditions: clean status
** Post-Conditions: clean status update
*********************************************************************/

void Cat::setClean(bool b) {

    isClean = b;

}

/*********************************************************************
** Function: getClean
** Description: returns if the cat is clean or dirty
** Parameters: n/a
** Pre-Conditions: unk if clean or not
** Post-Conditions: true if clean, false if dirty
*********************************************************************/

bool Cat::getClean() {

    return isClean;
}


/*********************************************************************
** Function: setSharp
** Description: sharpens cats claws
** Parameters: bool
** Pre-Conditions: sharp status
** Post-Conditions: new sharp status
*********************************************************************/

void Cat::setSharp(bool b) {

    sharp = b;

}

/*********************************************************************
** Function: getSharp()
** Description: returns true if sharp
** Parameters: n/a
** Pre-Conditions: unk if sharp or not
** Post-Conditions:true if sharp
*********************************************************************/

bool Cat::getSharp() {

    return sharp;

}

/*********************************************************************
** Function: showInvItem
** Description: returns inventory string at [i]
** Parameters: int
** Pre-Conditions: unk inventory item
** Post-Conditions: returns inventory item string
*********************************************************************/

std::string Cat::showInvItem(int i) {
    return inventory[i - 1];
}

/*********************************************************************
** Function: rmInvItem
** Description: removes inventory item
** Parameters: int
** Pre-Conditions: item in inventory
** Post-Conditions: item out of it
*********************************************************************/

void Cat::rmInvItem(int i) {

    if (inventory[i - 1].empty()) {

        std::cout << "Item " << i - 1 << "does not exist.\n";
        return;
    }


    std::cout << "Item " << i << " removed from cat stash.\n";
    inventory[i - 1].clear();


}

/*********************************************************************
** Function: getFufilled
** Description: returns boolean if game is ready to end
** Parameters: n/a
** Pre-Conditions: unk if game ready to end
** Post-Conditions: true or false if ready to end
*********************************************************************/

bool Cat::getFufilled() {
    return fufilled;
}

/*********************************************************************
** Function: setFufilled()
** Description: sets t/f if game ready to end
** Parameters: bool
** Pre-Conditions: status of if game ready to end
** Post-Conditions: new status of if game ready to end
*********************************************************************/

void Cat::setFufilled(bool f) {

    fufilled = f;

}