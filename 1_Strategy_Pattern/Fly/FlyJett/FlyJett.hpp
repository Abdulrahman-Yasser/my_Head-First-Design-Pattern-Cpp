#ifndef FLYJETT_H
#define FLYJETT_H

#include "../FlyBehavior/FlyBehavior.hpp"

class FlyJett: public FlyBehavior{
    void Fly(void) const override{
        cout << "Flying Jett !!!!" << endl;
    }
};

#endif