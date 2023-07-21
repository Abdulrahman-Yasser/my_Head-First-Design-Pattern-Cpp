#ifndef CALM_PIZZA_HPP
#define CALM_PIZZA_HPP

#include "Pizza.hpp"
#include "../PizzaIngredientFactory/PizzaIngredientFactory.hpp"

class calmPizza : public Pizza{
    private:
        PizzaIngredientFactory* af_factory;
    public:
        calmPizza(PizzaIngredientFactory* temp_af_factory) : af_factory(temp_af_factory){

        }
        void prepare() override {
            std::cout << "Preparing " << name << '\n';
            dough = af_factory->createDough();
            cheese = af_factory->createCheese();
            sauce = af_factory->createSauce();
        }
};


#endif