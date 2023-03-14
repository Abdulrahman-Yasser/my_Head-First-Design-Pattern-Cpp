#ifndef FLYINTERFACE_H
#define FLYINTERFACE_H

#include <iostream>
using namespace std;

class FlyBehavior{
    virtual void fly(void) = 0;
};

class FlyNoWay : FlyBehavior{
    void fly(void){
        cout << "I can't fly" << endl;
    }
};

class FlyWithWings : FlyBehavior{
    void fly(void){
        cout << "I'm flying!!" << endl;
    }
};

class FlyJett : FlyBehavior{
    void fly(void){
        cout << "Jett Flying on a rocket bruuuh ..." << endl;
    }
};

#endif