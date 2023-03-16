#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include <iostream>
using namespace std;
#include "../QuackBehavior/QuackInterface.hpp"
class MuteQuack : QuackBehavior{
    void quack(void) override;
};


#endif