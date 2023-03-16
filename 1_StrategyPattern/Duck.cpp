#include "Duck.hpp"
#include "FlyBehavior/FlyInterface.hpp"
#include "QuackBehavior/QuackInterface.hpp"

Duck::Duck(FlyBehavior &&f, QuackBehavior &&q) : fb(f), qb(q)
{
}

void Duck::performFly(void){
    fb->fly();
}

void Duck::preformQuack(void){
    qb->quack();
}
