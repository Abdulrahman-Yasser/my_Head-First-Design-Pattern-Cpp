#ifndef NYPizzaIngredientFactory_HPP
#define NYPizzaIngredientFactory_HPP

#include "PizzaIngredientFactory.hpp"

#include "../PizzaIngredient/Dough/ThinCrustDough.hpp"
#include "../PizzaIngredient/Sauce/MarinaraSauce.hpp"
#include "../PizzaIngredient/Cheese/ReggianoCheese.hpp"
#include "../PizzaIngredient/Pepperoni/SlicedPepperoni.hpp"
#include "../PizzaIngredient/Clams/FreshClams.hpp"

#include "../PizzaIngredient/Veggies/Garlic.hpp"
#include "../PizzaIngredient/Veggies/Onion.hpp"
#include "../PizzaIngredient/Veggies/Mushroom.hpp"
#include "../PizzaIngredient/Veggies/RedPepper.hpp"


class NYPizzaIngredientFactory: public PizzaIngredientFactory{
    public:
    Dough *createDough() override{
        return(new ThinCrustDough());
    }
    Sauce *createSauce() override{
        return(new MarinaraSauce());
    }
    Cheese *createCheese() override{
        return(new ReggianoCheese());
    }
    std::queue<Veggies*> createVeggies() override{
        std::queue<Veggies*> my_Veggiest ;
        my_Veggiest.push(new Garlic());
        my_Veggiest.push(new Onion());
        my_Veggiest.push(new Mashroum());
        my_Veggiest.push(new Red_Pepper());
        return my_Veggiest;
    }
    Pepperoni *createPepperoni() override{
        return (new SlicedPepperoni());
    }
    Clams *createClam() override{
        return (new FreshCalms());
    }
};

#endif