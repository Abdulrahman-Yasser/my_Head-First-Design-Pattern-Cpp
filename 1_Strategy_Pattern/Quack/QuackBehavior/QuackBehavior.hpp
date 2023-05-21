#ifndef quackbehavior_H
#define quackbehavior_H


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class QuackBehavior{
    public:
        virtual void Quack(void) const = 0;
        virtual ~QuackBehavior() = default;
};

#endif