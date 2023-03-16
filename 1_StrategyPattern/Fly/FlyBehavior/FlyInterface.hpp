#ifndef FLYINTERFACE_H
#define FLYINTERFACE_H

#include <iostream>
using namespace std;

class FlyBehavior{
public:
    virtual void fly(void) = 0;
};


#endif