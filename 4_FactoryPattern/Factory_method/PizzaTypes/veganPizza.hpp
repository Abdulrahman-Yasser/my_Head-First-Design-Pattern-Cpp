#ifndef VEGANPIZZA_HPP
#define VEGANPIZZA_HPP


#include "Pizza.hpp"

class VeganPizza : public Pizza{
       public:
 
    void prepare(void) override{
        std::cout << "Preparing the Vegan pizza\n";
    }
    void bake(void) override{
        std::cout << "Baking the Vegan pizza\n";
    }
    void cut(void) override{
        std::cout << "Cutting the Vegan pizza\n";
    }
    void box(void) override{
        std::cout << "Boxing the Vegan pizza\n";
    }
};


#endif