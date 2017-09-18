/*********************************************************************
** Program Filename: Depot.h
** Author: Clarence Pine
** Date: 3/15/16
** Description: depot class header code
** Input: various
** Output: various
*********************************************************************/

#ifndef FINAL_DEPOT_H
#define FINAL_DEPOT_H





#include "Space.h"
//#include "Cat.h"
#include<string>
#include<iostream>


class Depot: public Space {

protected:

    std::string item;


public:

    Depot();
    Depot(std::string, std::string, std::string);

    virtual std::string getName();
    virtual std::string getDescription();
    virtual void setName(std::string &);
    virtual void addDestination(Space*);
    virtual Space* transport();

    virtual std::string getItem();

    //virtual void menu(Cat*);



    virtual void setDescription(std::string);

    virtual std::string getCatchange();

    virtual bool setItem(std::string);

    virtual std::string getItemWanted();

    virtual std::string ending();

    virtual std::string getDanceWanted();

//    friend void Cat::takeItem(std::string);





};


#endif //FINAL_DEPOT_H
