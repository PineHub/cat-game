/*********************************************************************
** Program Filename: Roof.h
** Author: Clarence Pine
** Date: 3/15/16
** Description: Roof class header code
** Input: various
** Output: various
*********************************************************************/

#ifndef FINAL_ROOF_H
#define FINAL_ROOF_H


#include "Space.h"

class Roof : public Space {

protected:

    std::string name;

    std::string description;

    std::string wantedDance;


    std::string itemWanted;

    std::string catChange;


public:

    Roof();

    Roof(std::string string, std::string string1, std::string string2, std::string string3, std::string string4);

    virtual std::string getName();

    virtual std::string getDescription();

    virtual void setName(std::string &);

    virtual void addDestination(Space *);

    virtual Space *transport();


    std::string getCatchange();


    virtual void setDescription(std::string);

    virtual std::string getItem();

    virtual bool setItem(std::string);

    virtual std::string getItemWanted();

    virtual std::string ending();

    virtual std::string getDanceWanted();


};


#endif //FINAL_ROOF_H
