#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class FlyBehavior{
    public:
        virtual void Fly(void) const = 0;
        virtual ~FlyBehavior() = default;
};

#endif