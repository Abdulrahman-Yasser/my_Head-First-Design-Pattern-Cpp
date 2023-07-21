#ifndef MALLARD_DUCK_HPP
#define MALLARD_DUCK_HPP

#include "Duck.hpp"
#include <iostream>

class MallardDuck : public Duck{
    public:
        void quack() {
            std::cout << "Quack !! \n";
        }
        void fly() {
            std::cout << "I'm flying \n";
        }
};

#endif