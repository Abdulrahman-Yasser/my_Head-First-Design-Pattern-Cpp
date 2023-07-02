#ifndef ONION_HPP
#define ONION_HPP

#include "Veggies.hpp"


class Onion : public Veggies{
    public:
        void get_it(void) override{
            std::cout << "Veggies : Onion";
        }
};

#endif