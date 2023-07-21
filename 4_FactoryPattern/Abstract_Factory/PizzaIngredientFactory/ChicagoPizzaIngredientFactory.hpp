#ifndef ChicagoPizzaIngredientFactory_HPP
#define ChicagoPizzaIngredientFactory_HPP

#include "PizzaIngredientFactory.hpp"

#include "../PizzaIngredient/Dough/ThickCrustDough.hpp"
#include "../PizzaIngredient/Sauce/PlumTomatoSauce.hpp"
#include "../PizzaIngredient/Cheese/MozzarellaCheese.hpp"
#include "../PizzaIngredient/Pepperoni/NonSlicedPepperoni.hpp"
#include "../PizzaIngredient/Clams/FrozenClams.hpp"

#include "../PizzaIngredient/Veggies/Garlic.hpp"
#include "../PizzaIngredient/Veggies/Onion.hpp"
#include "../PizzaIngredient/Veggies/RedPepper.hpp"


class ChicagoPizzaIngredientFactory: public PizzaIngredientFactory{
    public:
    Dough *createDough() override{
        return(new ThickCrustDough());
    }
    Sauce *createSauce() override{
        return(new PlumTomatoSauce());
    }
    Cheese *createCheese() override{
        return(new MozzarellaCheese());
    }
    std::queue<Veggies*> createVeggies() override{
        std::queue<Veggies*> my_Veggiest;
        my_Veggiest.push(new Garlic());
        my_Veggiest.push(new Onion());
        my_Veggiest.push(new Red_Pepper());
        return my_Veggiest;
    }
    Pepperoni *createPepperoni() override{
        return (new NonSlicedPepperoni());
    }
    Clams *createClam() override{
        return (new FrozenCalms());
    }
};

#endif