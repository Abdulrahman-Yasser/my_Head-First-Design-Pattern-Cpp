#ifndef DOUGH_HPP
#define DOUGH_HPP

#include <iostream>
#include <string>

class Dough{
    public:
        virtual ~Dough(){

        }
        virtual void get_it() = 0;
};

#endif