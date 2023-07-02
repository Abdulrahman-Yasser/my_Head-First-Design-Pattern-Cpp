#ifndef CHEESE_HPP
#define CHEESE_HPP

#include <iostream>
#include <string>

class Cheese{
    public:
        virtual ~Cheese(){

        }
        virtual void get_it() = 0;
};

#endif