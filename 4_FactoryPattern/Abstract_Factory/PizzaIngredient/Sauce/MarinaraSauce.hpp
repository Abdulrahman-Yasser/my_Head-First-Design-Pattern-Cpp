#ifndef MARINARASAUCE_HPP
#define MARINARASAUCE_HPP

#include <iostream>

#include "Sauce.hpp"

class MarinaraSauce : public Sauce{
    public:
        void get_it() {
            std::cout << "Sauce : MarinaraSauce";
        }
};

#endif