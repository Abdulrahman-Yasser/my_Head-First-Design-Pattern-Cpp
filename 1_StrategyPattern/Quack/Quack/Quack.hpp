#ifndef QUACK_H
#define QUACK_H

#include "../QuackBehavior/QuackInterface.hpp"

class Quack : QuackBehavior{
    void quack(void) override;
};
#endif