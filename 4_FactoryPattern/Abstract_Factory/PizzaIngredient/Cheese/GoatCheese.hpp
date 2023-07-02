#ifndef GOATCHEESE_HPP
#define GOATCHEESE_HPP

#include "Cheese.hpp"

class GoalCheese: public Cheese{
    void get_it() override{
        std::cout << "Cheese - GoalCheese";
    }
};


#endif