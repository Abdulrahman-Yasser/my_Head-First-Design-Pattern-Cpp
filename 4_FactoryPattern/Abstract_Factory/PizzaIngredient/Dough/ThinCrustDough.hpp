#ifndef THINCRUSTDOUGH_HPP
#define THINCRUSTDOUGH_HPP


#include "Dough.hpp"

class ThinCrustDough : public Dough{
    public:
        void get_it() {
            std::cout << "Dough : Thin Crust";
        }
};


#endif