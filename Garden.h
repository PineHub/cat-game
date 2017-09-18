/*********************************************************************
** Program Filename: Garden.h
** Author: Clarence Pine
** Date: 3/15/16
** Description: Garden class header code
** Input: various
** Output: various
*********************************************************************/

#ifndef FINAL_GARDEN_H
#define FINAL_GARDEN_H


#include "Space.h"

class Garden: public Space {


protected:

  std::string wantedDance;
    std::string catChange;
    std::string itemWanted;


public:

    Garden();
    Garden(std::string string, std::string string1, std::string string2, std::string string3, std::string string4);

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


#endif //FINAL_GARDEN_H
