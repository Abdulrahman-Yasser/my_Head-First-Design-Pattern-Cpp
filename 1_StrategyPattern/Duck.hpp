#include "FlyBehavior/FlyInterface.hpp"
#include "QuackBehavior/QuackInterface.hpp"
#include <memory>
#include <stdlib.h>
#include <iostream>
#include <string>


class Duck{
public:
    FlyBehavior *fb;
    QuackBehavior *qb;
    Duck(FlyBehavior &&f, QuackBehavior &&q);
    virtual void display(void) = 0;
    void performFly(void);
    void preformQuack(void);
};
