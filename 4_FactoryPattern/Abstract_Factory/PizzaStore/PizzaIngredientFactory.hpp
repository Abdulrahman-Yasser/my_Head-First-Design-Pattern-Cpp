#ifndef PizzaIngredientFactory_hpp
#define PizzaIngredientFactory_hpp

#include "../PizzaIngredient/Cheese/Cheese.hpp"
#include "../PizzaIngredient/Sauce/Sauce.hpp"
#include "../PizzaIngredient/Pepperoni/Pepperoni.hpp"
#include "../PizzaIngredient/Clams/Calm.hpp"
#include "../PizzaIngredient/Dough/Dough.hpp"
#include "../PizzaIngredient/Veggies/Veggies.hpp"

#include <queue>

class PizzaIngredientFactory{
    virtual ~PizzaIngredientFactory(){

    }
    virtual Dough *createDough()=0;
    virtual Sauce *createSauce()=0;
    virtual Cheese *createCheese()=0;
    virtual std::queue<Veggies*> createVeggies()=0;
    virtual Pepperoni *createPepperoni()=0;
    virtual Clams *createClam()=0;
};

#endif