#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "../FlyBehavior/FlyBehavior.hpp"

class FlyWithWings: public FlyBehavior{
    void Fly(void) const override{
        cout << "Flying with WINGS !!!! " << endl;
    }
};

#endif