#ifndef CHICAGOCHEEZEPIZZA_HPP
#define CHICAGOCHEESEPIZZA_HPP

#include "Pizza.hpp"

class ChicagoCheesePizza : public Pizza{
    public:
    ChicagoCheesePizza(){
        name = "Name is ChicagoCheesePizza";
        dough = "dough is Chicago chees";
        sauce = "sauce is Chicago cheese";

        my_toppings.push("Grated Chicago Reggiano Cheese");
    }
    void box(void) override{
        std::cout << "Boxing the NYCheese pizza\n";
    }
};

#endif