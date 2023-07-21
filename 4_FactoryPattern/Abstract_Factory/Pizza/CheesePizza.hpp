#ifndef CHEESEPIZZA_HPP
#define CHEESEPIZZA_HPP

#include "Pizza.hpp"
#include "../PizzaIngredientFactory/PizzaIngredientFactory.hpp"

class CheesePizza: public Pizza{
    private:
        PizzaIngredientFactory* af_factory;
    public:
        CheesePizza(PizzaIngredientFactory* temp_af_factory) : af_factory(temp_af_factory){

        }
        void prepare() override {
            std::cout << "Preparing " << name << '\n';
            dough = af_factory->createDough();
            sauce = af_factory->createSauce();
            cheese = af_factory->createCheese();
            clam = af_factory->createClam();
        }
};



#endif