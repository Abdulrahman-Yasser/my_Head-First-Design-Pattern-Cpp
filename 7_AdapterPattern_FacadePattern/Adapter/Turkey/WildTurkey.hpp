#ifndef WILD_TURKEY_HPP
#define WILD_TURKEY_HPP

#include "Turkey.hpp"
#include <iostream>
class WildTurkey :public Turkey {
    public:
    void gobble() {
        std::cout << "Gobble gobble\n";
    }
    void fly() {
        std::cout << "I'm Flying a short Distance\n";
    }
};

#endif