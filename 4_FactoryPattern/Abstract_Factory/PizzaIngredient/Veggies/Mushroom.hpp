#ifndef MASHROUM_HPP
#define MASHROUM_HPP

#include "Veggies.hpp"


class Mashroum : public Veggies{
    public:
        void get_it(void) override{
            std::cout << "Veggies : Mashroum";
        }
};

#endif