#ifndef NYPEPPIZZA_HPP
#define NYPEPPIZZA_HPP


#include "Pizza.hpp"

class NYPepironyPizza : public Pizza{
       public:
 NYPepironyPizza(){
        name = "NEWYOIRK pepirony PIZZA";
        dough = "NEWYOIRK pepirony DOUGH";
        sauce = "peperony";
    }
};

#endif