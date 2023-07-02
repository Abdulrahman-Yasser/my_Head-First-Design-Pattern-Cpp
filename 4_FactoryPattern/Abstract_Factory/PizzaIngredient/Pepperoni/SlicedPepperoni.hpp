#ifndef SLICEDPEPPERONI_HPP
#define SLICEDPEPPERONI_HPP

#include "Pepperoni.hpp"

class SlicedPepperoni : public Pepperoni{
    public:
        void get_it() override{
            std::cout << "Pepperoni : Sliced";
        }
};

#endif