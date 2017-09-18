/*********************************************************************
** Program Filename: Yard.h
** Author: Clarence Pine
** Date: 3/15/16
** Description: Yard class header
** Input: various
** Output: various
*********************************************************************/

#ifndef FINAL_YARD_H
#define FINAL_YARD_H


#include "Depot.h"

class Yard : public Depot {

private:

    std::string catChange;

public:

    Yard();
    Yard(std::string, std::string, std::string, std::string);

    virtual std::string getName();
    virtual std::string getDescription();
    virtual void setName(std::string &);
    virtual void addDestination(Space*);
    virtual Space* transport();

    virtual std::string getItem();
    virtual void setDescription(std::string);

    virtual std::string ending();

    std::string getCatchange();

    virtual std::string getDanceWanted();



};


#endif //FINAL_YARD_H
