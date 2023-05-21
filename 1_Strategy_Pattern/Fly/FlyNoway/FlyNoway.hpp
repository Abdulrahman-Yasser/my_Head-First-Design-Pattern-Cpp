#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include "../FlyBehavior/FlyBehavior.hpp"

class FlyNoway: public FlyBehavior{
    void Fly(void) const override{
        cout << "Flying noooo waaaay !!!! " << endl;
    }
};

#endif