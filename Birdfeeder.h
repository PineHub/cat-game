/*********************************************************************
** Program Filename: Birdfeeder.h
** Author: Clarence Pine
** Date: 3/15/16
** Description: Birdfeeder class header code
** Input: various
** Output: various
*********************************************************************/

#ifndef FINAL_BIRDFEEDER_H
#define FINAL_BIRDFEEDER_H


#include "Depot.h"
#include "Cat.h"

class Birdfeeder : public Depot {

protected:

    std::string itemWanted;


public:

    Birdfeeder();
    Birdfeeder(std::string, std::string, std::string, std::string);

    virtual std::string getName();
    virtual std::string getDescription();
    virtual void setName(std::string &);
    virtual void setDescription(std::string);
    virtual void addDestination(Space*);
    virtual Space* transport();
    virtual std::string getItem();
    virtual bool setItem(std::string);
    virtual std::string ending();

    virtual std::string getItemWanted();

    virtual std::string getDanceWanted();





};


#endif //FINAL_BIRDFEEDER_H
