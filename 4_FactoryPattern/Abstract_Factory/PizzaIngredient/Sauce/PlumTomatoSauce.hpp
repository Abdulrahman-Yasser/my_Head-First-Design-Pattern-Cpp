#ifndef PLUMTOMATOSAUCE_HPP
#define PLUMTOMATOSAUCE_HPP

#include <iostream>

#include "Sauce.hpp"

class PlumTomatoSauce : public Sauce{
    public:
        void get_it() {
            std::cout << "Sauce : PlumTomatoSauce";
        }
};

#endif