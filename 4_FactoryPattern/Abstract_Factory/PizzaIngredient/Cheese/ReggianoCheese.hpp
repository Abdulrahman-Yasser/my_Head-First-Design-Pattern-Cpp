#ifndef REGGIANOCHEESE_HPP
#define REGGIANOCHEESE_HPP

#include "Cheese.hpp"

class ReggianoCheese: public Cheese{
    void get_it() override{
        std::cout << "Cheese - ReggianoCheese";
    }
};

#endif