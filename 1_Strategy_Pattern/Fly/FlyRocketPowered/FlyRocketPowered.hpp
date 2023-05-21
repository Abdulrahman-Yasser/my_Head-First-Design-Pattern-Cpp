#ifndef FLYROCKETPOWERED_H
#define FLYROCKETPOWERED_H


#include "../FlyBehavior/FlyBehavior.hpp"

class FlyRocketPowered : public FlyBehavior{
    void Fly(void) const override{
        cout << "Flying with Rocket POWERED !!!! " << endl;
    }
};

#endif