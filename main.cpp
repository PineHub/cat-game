/*********************************************************************
** Program Filename: main.cpp
** Author:Clarence Pine
** Date:3/12/16
** Description:Main Program for Final Project
** Input: Various
** Output: Various
*********************************************************************/

#include<iostream>
#include<iomanip>
#include <stdlib.h>
#include <deque>
#include<algorithm>
#include "Depot.h"
#include "Cat.h"
#include "Game.h"
#include "Yard.h"
#include "Couch.h"
#include "Garden.h"
#include "Deck.h"


int main() {

    char inputBuff = 'a';
    int anCtrlDy = 12;
    int veCapacity = 5;

    Depot driveway("Depot",
                   "The driveway had a garbage, recycle, and compost bin.  The compost bin was overloaded so the top was open",
                   "slice of pizza");

    Depot gazebo("Depot", "The large gazebo had an elaborate charcoal bbq grill setup and all the accessories\n",
                 "lighter fluid");

    Depot playset("Depot",
                  "The child\'s playset included a swing, a rock-climbing wall, swings, and a slide connected to a "
                          "small plastic, elevated fort that a small animal could access.\n",
                  "helium balloon");

    Depot Toolshed("Toolshed",
                   "The toolshed was locked and had no windows, but peering inside one could see that sunlight"
                           " was somehow getting inside.  A tall pine tree flanked the left side of the shed.\n",
                   "screwdriver");

    Yard y1;

    Couch co;

    Birdfeeder bi;

    Garden ga;

    Deck de;

    Roof ro;

    Depot d1("Start", "Starting location",
             "NoItem");
    Depot *d1ptr = &d1;


    Cat c1;
    Cat *cptr = &c1;
    Game g1(cptr, veCapacity, anCtrlDy);
    c1.setLocation(d1ptr);

    d1.addDestination(&driveway);

    d1.addDestination(&gazebo);

    d1.addDestination(&playset);

    d1.addDestination(&Toolshed);

    d1.addDestination(&y1);

    d1.addDestination(&co);

    d1.addDestination(&bi);

    d1.addDestination(&ga);

    d1.addDestination(&de);

    d1.addDestination(&ro);


    driveway.addDestination(&driveway);

    driveway.addDestination(&gazebo);

    driveway.addDestination(&playset);

    driveway.addDestination(&Toolshed);

    driveway.addDestination(&y1);

    driveway.addDestination(&co);

    driveway.addDestination(&bi);

    driveway.addDestination(&ga);

    driveway.addDestination(&de);

    driveway.addDestination(&ro);


    gazebo.addDestination(&driveway);

    gazebo.addDestination(&gazebo);

    gazebo.addDestination(&playset);

    gazebo.addDestination(&Toolshed);

    gazebo.addDestination(&y1);

    gazebo.addDestination(&co);

    gazebo.addDestination(&bi);

    gazebo.addDestination(&ga);

    gazebo.addDestination(&de);

    gazebo.addDestination(&ro);


    playset.addDestination(&driveway);

    playset.addDestination(&gazebo);

    playset.addDestination(&playset);

    playset.addDestination(&Toolshed);

    playset.addDestination(&y1);

    playset.addDestination(&co);

    playset.addDestination(&bi);

    playset.addDestination(&ga);

    playset.addDestination(&de);

    playset.addDestination(&ro);


    Toolshed.addDestination(&driveway);

    Toolshed.addDestination(&gazebo);

    Toolshed.addDestination(&playset);

    Toolshed.addDestination(&Toolshed);

    Toolshed.addDestination(&y1);

    Toolshed.addDestination(&co);

    Toolshed.addDestination(&bi);

    Toolshed.addDestination(&ga);

    Toolshed.addDestination(&de);

    Toolshed.addDestination(&ro);


    y1.addDestination(&driveway);

    y1.addDestination(&gazebo);

    y1.addDestination(&playset);

    y1.addDestination(&Toolshed);

    y1.addDestination(&y1);

    y1.addDestination(&co);

    y1.addDestination(&bi);

    y1.addDestination(&ga);

    y1.addDestination(&de);

    y1.addDestination(&ro);


    co.addDestination(&driveway);

    co.addDestination(&gazebo);

    co.addDestination(&playset);

    co.addDestination(&Toolshed);

    co.addDestination(&y1);

    co.addDestination(&co);

    co.addDestination(&bi);

    co.addDestination(&ga);

    co.addDestination(&de);

    co.addDestination(&ro);


    bi.addDestination(&driveway);

    bi.addDestination(&gazebo);

    bi.addDestination(&playset);

    bi.addDestination(&Toolshed);

    bi.addDestination(&y1);

    bi.addDestination(&co);

    bi.addDestination(&bi);

    bi.addDestination(&ga);

    bi.addDestination(&de);

    bi.addDestination(&ro);


    ga.addDestination(&driveway);

    ga.addDestination(&gazebo);

    ga.addDestination(&playset);

    ga.addDestination(&Toolshed);

    ga.addDestination(&y1);

    ga.addDestination(&co);

    ga.addDestination(&bi);

    ga.addDestination(&ga);

    ga.addDestination(&de);

    ga.addDestination(&ro);


    de.addDestination(&driveway);

    de.addDestination(&gazebo);

    de.addDestination(&playset);

    de.addDestination(&Toolshed);

    de.addDestination(&y1);

    de.addDestination(&co);

    de.addDestination(&bi);

    de.addDestination(&ga);

    de.addDestination(&de);

    de.addDestination(&ro);


    ro.addDestination(&driveway);

    ro.addDestination(&gazebo);

    ro.addDestination(&playset);

    ro.addDestination(&Toolshed);

    ro.addDestination(&y1);

    ro.addDestination(&co);

    ro.addDestination(&bi);

    ro.addDestination(&ga);

    ro.addDestination(&de);

    ro.addDestination(&ro);

    srand(time(NULL));


    std::cout << "Dr. Doolittle: The Kat name Kellogg\n\n"
            "Maya:  Ahem. The purpose of this experiment is to test the effectiveness of the RTP (Remote Telepathic Protocol)"
            "device.  This device will replace the need for all long-range voice and textual communication between two beings\n"
            "that share the same language.\n"
            "We have surgically inserted a small chip into the prefrontal cortex of Kellogg, a rescued Manx cat from a"
            "local shelter.\n"
            "The cat was released into a nearby neighborhood and we are attempting initial contact. \n"
            "Maya:  Trial 1 of animal testing of RTP implant.\n"
            "Maya: Hello? \n\n"

            "Kellogg:  Meow? \n"
            "Maya:  You can do better than that can\'t you? \n"
            "Kellogg:  Excuse me, that\'s my response out of habit to human voices.  Who are you? \n\n"
            "[Maya smiles] \n"
            "Maya:  Link established.  The RTP is fully functional.  My name is Dr. Maya Doolittle, pleased to meet you.\n\n"

            "Kellogg:  You\'re the famous Dr. Doolittle?  Where are you? \n\n"
            "Maya:  You\'re probably thinking of my father, but I\'ve inherited his many gifts. \n\n"
            "Kellogg:  So why can\'t I see you?  \n\n"
            "Choose (don\'t type the parentheses): \n"
            "a)	Are you familiar with the x-men? \n"
            "b)	I\'m afraid your small cat brain will be unable to comprehend.\n";

    std::cin >> inputBuff;

    if (inputBuff == 'a')
        std::cout <<
        "Kellogg:  Yes, my favorite character is Sabertooth.\n Maya:  Well it’s like Cerebro… but with cats." <<
        std::endl;
    else
        std::cout << "No need to be a jerk about it. \n";

    std::cout << "Kellogg:  I\'m afraid to ask this, because you seem to be an advocate of animal testing, but did you"
            " also inherit your dad\'s propensity to help animals? \n"
            "Choose (don\'t type the parentheses):\n"
            "a)Of course Kellogg, you\'ve helped me, and how could I not return the favor?\n"
            "b)I\'m accelerating the evolution of mankind by millions of years, I have no time to "
            "burden myself with the trivialities of a feline.\n" << std::endl;


    std::cin >> inputBuff;

    if (inputBuff == 'a')
        std::cout << "Kellogg:  Thank you Maya.  You\'re a true guardian angel.\n ";

    else
        std::cout << "Kellogg:  Whatever.  Don\'t worry, It\'s only life and death.\n  Maya:  Fine.\n";


    std::cout << "Maya:  How can I help you Kellogg?\n\n "
            "Kellogg:Well I\'ve been in this cul-de-sac for the past week and I\'ve noticed that every " << anCtrlDy
    << " days animal control comes here and grabs an innocent dog or cat then hauls them away in their truck.  "
            "When I was at the shelter, my cellmate told me that cats had about a 50% chance of survival "
            "once caught, and I definitely don\'t wish to flip that coin again.\n"
            "Maya:  My apartment doesn\'t allow pets Kellogg.  I would if I could.\n"
            "Kellogg:  I actually like this neighborhood.  I have an abandoned car here that barely ever moves, where I "
            "store all my stuff.  I can fit " << veCapacity <<
    "items in it total.  There\'s also an abandoned couch, a sprinkler, "
            "garbage cans, really all a cat needs to live a long, happy life.\n Maya:  So what do you want?\n"
            "Kellogg:  To be adopted and earn my collar to keep animal control off my back.  I've narrowed it down to 1"
            " house.\n";


    do {
        std::cout << "Choose (don\'t type the parentheses):\n"
                "a) Tell me about the Mother\n"
                "b) Tell me about the Son\n"
                "c) Tell me about the Father\n"
                "d) What can you offer the owners?\n"
                "e) Lets start\n";

        std::cin >> inputBuff;

        if (inputBuff == 'a') {

            std::cout <<
            "April, a robotics"
                    "engineer.  She has an army of robot gardeners that are constantly manicuring her crazy garden.\n";


        }

        if (inputBuff == 'b') {
            std::cout <<
            "Their son Theo.  He loves playing frisbee with"
                    " a dog, Dougie that has his own small Cape Cod doghouse.  This family can\'t \n "
                    "get enough of that Cape Cod.  This house is known to attract large raccoons for some reason\n";
        }

        if (inputBuff == 'c') {
            std::cout <<
            "Roger, he\'s ex-military.  He wasn\'t"
                    "allowed to have booby traps in his back yard so he installed a laser-guided sprinkler.  So if anything taller "
                    "than me walked into his yard it they would get a strong blast of water in the face.  I love this guy\'s sense\n "
                    "of humor.  He has all kinds of neat trophies, war memorabilia, and drones flying inside the house."
                    "  His garbage in the driveway is always overloaded, so its easy to access his leftovers.  He\n"
                    "has a toolshed and a deck where he spends nearly half the day smoking.\n";

        }

        if (inputBuff == 'd') {
            std::cout << "\nI can dance too! How about a sample?\n "
            << c1.dance() << std::endl;

            std::cout << " Maya:  I didn\'t see any of that.  You may want to give them something too, like a gift.\n";
            std::cout << " Kellogg:  Ahh, yes.  I knew you had some good ideas.\n ";

        }


    } while (inputBuff != 'e');


    std::cout << "Choose (don\'t type the parentheses):\n"
            "a) Go to a house\n"

            "x) Exit Program" << std::endl;

    std::cin >> inputBuff;

    if (inputBuff == 'a') {

        do {


            if (cptr->getLocation()->getName() == "Roof") {

                g1.roofMenu(cptr, &bi);

            }

            else
                g1.menu(cptr);

        } while (cptr->getFufilled() == false);

    }


    else
        std::cout << "Exiting...\n";








    /*    Yard y1;
      Yard* yptr = &y1;

      Couch co;
      Couch* coPtr = &co;

      Birdfeeder bi;
      Birdfeeder* biPtr = &bi;

      Garden ga;
      Garden* gaPtr = &ga;

      Deck de;
      Deck* dePtr = &de;

      Roof ro;
      Roof* roPtr = &ro;




      c1.takeItem("Whistle");
      c1.takeItem("helium balloon");
      c1.setClean(true);







   biPtr->setItem("slice of pizza"); */







    return 0;

}