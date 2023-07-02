#ifndef NYCHEEZEPIZZA_HPP
#define NYCHEESEPIZZA_HPP

#include "Pizza.hpp"

class NYCheesePizza : public Pizza{
    public:
    NYCheesePizza(){
        name = "Name is NYCheesePizza";
        dough = "dough is NY chees";
        sauce = "sauce is NY cheese";

        my_toppings.push("Grated Reggiano Cheese");
    }
    void box(void) override{
        std::cout << "Boxing the NYCheese pizza\n";
    }
};

#endif