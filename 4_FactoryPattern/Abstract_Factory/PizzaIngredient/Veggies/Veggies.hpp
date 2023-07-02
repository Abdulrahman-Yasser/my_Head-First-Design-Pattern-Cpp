#ifndef VEGGIES_HPP
#define VEGGIES_HPP

#include <iostream>

class Veggies{
    public:
        virtual ~Veggies(){

        }
        virtual void get_it(void) = 0;
};

#endif