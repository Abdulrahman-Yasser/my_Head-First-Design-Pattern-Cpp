#ifndef SQUEAKQUACK_H
#define SQUEAKQUACK_H

#include "../QuackBehavior/QuackBehavior.hpp"

class squeakQuack : public QuackBehavior{
    void Quack(void) const override{
        cout << "Squeak Quacking" << endl;
    }
};


#endif