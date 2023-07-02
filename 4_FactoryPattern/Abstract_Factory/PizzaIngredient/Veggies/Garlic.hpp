#ifndef GARLIC_HPP
#define GARLIC_HPP

#include "Veggies.hpp"


class Garlic : public Veggies{
    public:
        void get_it(void) override{
            std::cout << "Veggies : Garlic";
        }
};

#endif