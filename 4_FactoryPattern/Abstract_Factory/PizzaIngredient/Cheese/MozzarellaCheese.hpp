#ifndef MOZZARELLACHEESE_HPP
#define MOZZARELLACHEESE_HPP

#include "Cheese.hpp"

class MozzarellaCheese: public Cheese{
    void get_it() override{
        std::cout << "Cheese - MozzarellaCheese";
    }
};

#endif