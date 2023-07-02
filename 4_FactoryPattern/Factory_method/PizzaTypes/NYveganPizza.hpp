#ifndef VEGANPIZZA_HPP
#define VEGANPIZZA_HPP


#include "Pizza.hpp"

class NYVeganPizza : public Pizza{
      public:
  NYVeganPizza(){
        name = "NEWYOIRK VEGAN PIZZA";
        dough = "NEWYOIRK VEGAN DOUGH";
        sauce = "Vegan";
    }

    void box(void) override{
        std::cout << "Boxing the NYVegan pizza\n";
    }
};


#endif