#ifndef QUACKINTERFACE_H
#define QUACKINTERFACE_H

#include <iostream>
using namespace std;

class QuackBehavior{
    virtual void quack(void) = 0;
};

class Quack : QuackBehavior{
    void quack(void){
        cout << "Quack !!" << endl;
    }
};

class MuteQuack : QuackBehavior{
    void quack(void){
        cout << "Silence" << endl;
    }
};

class squeack : QuackBehavior{
    void quack(void){
        cout << "squeak" << endl;
    }
};


#endif