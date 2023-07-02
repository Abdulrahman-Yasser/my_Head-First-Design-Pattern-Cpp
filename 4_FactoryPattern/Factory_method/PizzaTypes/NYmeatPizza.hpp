#ifndef NYMEATPIZZA_HPP
#define NYMEATPIZZA_HPP

#include "Pizza.hpp"

class NYMeatPizza : public Pizza{
      public:
  NYMeatPizza(){
        name = "Name is NYMeatPizza";
        dough = "dough is NY Meat dough";
        sauce = "sauce is NY Meat sauce";
    }
};

#endif