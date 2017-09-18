/*********************************************************************
** Program Filename: Couch.h
** Author: Clarence Pine
** Date: 3/15/16
** Description: Depot class header code
** Input: various
** Output: various
*********************************************************************/

#ifndef FINAL_COUCH_H
#define FINAL_COUCH_H


#include "Space.h"

class Couch: public Space {

private:

    std::string catChange;

public:

    Couch();
    Couch(std::string string, std::string string1, std::string string2);

    virtual std::string getName();
    virtual std::string getDescription();
    virtual void setName(std::string &);
    virtual void addDestination(Space*);
    virtual Space* transport();




    std::string getCatchange();


    virtual void setDescription(std::string);
    virtual std::string getItem();

    virtual bool setItem(std::string);

    virtual std::string getItemWanted();

    virtual std::string ending();

    virtual std::string getDanceWanted();
};


#endif //FINAL_COUCH_H
