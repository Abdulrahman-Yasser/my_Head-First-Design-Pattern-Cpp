#ifndef REDPEPPER_HPP
#define REDPEPPER_HPP

#include "Veggies.hpp"


class Red_Pepper : public Veggies{
    public:
        void get_it(void) override{
            std::cout << "Veggies : Red Pepper";
        }
};

#endif