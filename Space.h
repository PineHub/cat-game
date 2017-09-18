/*********************************************************************
** Program Filename: Space.h
** Author: Clarence Pine
** Date: 3/15/16
** Description: Space abstract class header code
** Input: various
** Output: various
*********************************************************************/


#ifndef FINAL_SPACE_H
#define FINAL_SPACE_H

#include<string>
#include<vector>
//#include "Cat.h"






class Space{

protected:

    std::string name;
    std::string description;
    std::vector<Space*> destinations;



public:

    Space();
    Space(std::string, std::string);

    virtual std::string getName() = 0;
    virtual std::string getDescription() = 0;
    virtual void setName(std::string &) = 0;
    virtual void setDescription(std::string) = 0;
    virtual void addDestination(Space*) = 0;
    virtual Space* transport() = 0;
    virtual std::string getItem() = 0;
    virtual std::string getCatchange() = 0;
    virtual bool setItem(std::string) = 0;
    virtual std::string getItemWanted() = 0;

    virtual std::string ending() = 0;
    virtual std::string getDanceWanted() = 0;

 //   virtual void menu(Cat*) = 0;



};


#endif //FINAL_SPACE_H
