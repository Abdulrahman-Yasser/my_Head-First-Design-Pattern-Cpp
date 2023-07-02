#ifndef THICKCRUSTDOUGH_HPP
#define THICKCRUSTDOUGH_HPP

#include "Dough.hpp"

class ThickCrustDough : public Dough{
    public:
        void get_it() {
            std::cout << "Dough : Thick Crust";
        }
};

#endif