#ifndef CHICAGOPEPPIZZA_HPP
#define CHICAGOPEPPIZZA_HPP


#include "Pizza.hpp"

class ChicagoPepironyPizza : public Pizza{
    public:
    ChicagoPepironyPizza(){
        name = "CHICAGO pepirony PIZZA";
        dough = "CHICAGO pepirony DOUGH";
        sauce = "CHICAGO peperony";
    }
};

#endif