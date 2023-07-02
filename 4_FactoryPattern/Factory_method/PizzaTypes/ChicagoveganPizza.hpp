#ifndef CHICAGOVEGANPIZZA_HPP
#define CHICAGOVEGANPIZZA_HPP


#include "Pizza.hpp"

class ChicagoVeganPizza : public Pizza{
    public:
    ChicagoVeganPizza(){
        name = "CHICAGO VEGAN PIZZA";
        dough = "CHICAGO VEGAN DOUGH";
        sauce = "CHICAGO Vegan";
    }

    void box(void) override{
        std::cout << "Boxing the CHICAGO Vegan pizza\n";
    }
};


#endif