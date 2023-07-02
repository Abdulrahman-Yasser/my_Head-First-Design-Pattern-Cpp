#ifndef NONSLICEDPEPPERONI_HPP
#define NONSLICEDPEPPERONI_HPP

#include "Pepperoni.hpp"

class NonSlicedPepperoni : public Pepperoni{
    public:
        void get_it() override{
            std::cout << "Pepperoni : Non-Sliced";
        }
};

#endif