#ifndef MEATPIZZA_HPP
#define MEATPIZZA_HPP

#include "Pizza.hpp"

class MeatPizza : public Pizza{
    public:
    void prepare(void) override{
        std::cout << "Preparing the Meat pizza\n";
    }
    void bake(void) override{
        std::cout << "Baking the Meat pizza\n";
    }
    void cut(void) override{
        std::cout << "Cutting the Meat pizza\n";
    }
    void box(void) override{
        std::cout << "Boxing the Meat pizza\n";
    }
};

#endif