#ifndef SAUCE_HPP
#define SAUCE_HPP

#include <iostream>

class Sauce{
    public:
        virtual ~Sauce(){

        }
        virtual void get_it() = 0;
};

#endif