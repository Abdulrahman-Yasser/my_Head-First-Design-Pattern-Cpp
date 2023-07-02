#ifndef CHICAGOMEATPIZZA_HPP
#define CHICAGOMEATPIZZA_HPP

#include "Pizza.hpp"

class ChicagoMeatPizza : public Pizza{
     public:
   ChicagoMeatPizza(){
        name = "Name is ChicagoMeatPizza";
        dough = "dough is Chicago Meat dough";
        sauce = "sauce is Chicago Meat sauce";
    }
};

#endif