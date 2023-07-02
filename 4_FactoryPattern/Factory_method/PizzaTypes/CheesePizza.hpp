#ifndef CHEEZEPIZZA_HPP
#define CHEESEPIZZA_HPP

#include "Pizza.hpp"

class CheesePizza : public Pizza{
     public:
   void prepare(void) override{
        std::cout << "Preparing the Cheese pizza\n";
    }
    void bake(void) override{
        std::cout << "Baking the Cheese pizza\n";
    }
    void cut(void) override{
        std::cout << "Cutting the Cheese pizza\n";
    }
    void box(void) override{
        std::cout << "Boxing the Cheese pizza\n";
    }
};

#endif