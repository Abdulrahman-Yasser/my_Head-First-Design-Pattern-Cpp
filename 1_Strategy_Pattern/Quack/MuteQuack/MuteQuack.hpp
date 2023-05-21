#ifndef MUTEQUACK_H
#define MUTEQUACK_H


#include "../QuackBehavior/QuackBehavior.hpp"

class MuteQuack : public QuackBehavior{
    void Quack(void) const override{
            cout << "Mute Quacking" << endl;
    }
};

#endif