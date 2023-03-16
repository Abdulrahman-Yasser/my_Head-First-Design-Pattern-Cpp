#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include <iostream>
using namespace std;
#include "../FlyBehavior/FlyInterface.hpp"

class FlyNoWay : FlyBehavior{
    public:
    void fly(void) override;
};

#endif