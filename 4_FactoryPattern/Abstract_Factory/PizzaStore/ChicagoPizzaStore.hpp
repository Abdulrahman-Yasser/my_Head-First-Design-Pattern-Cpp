#ifndef CHICAGO_PIZZA_STORE_HPP
#define CHICAGO_PIZZA_STORE_HPP

#include "PizzaStore.hpp"

#include "../PizzaIngredientFactory/ChicagoPizzaIngredientFactory.hpp"

#include "../Pizza/CheesePizza.hpp"
#include "../Pizza/calmPizza.hpp"
#include "../Pizza/PepperoniPizza.hpp"
#include "../Pizza/veggiesPizza.hpp"

class ChicagoPizzaStore : public PizzaStore{
    private :

    public:
        Pizza* createPizza(std::string item) override{
            Pizza* my_pizza = nullptr;
            PizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();
            if(item == "cheese"){
                my_pizza = new CheesePizza(ingredientFactory);
                my_pizza->setName("Chicago Cheese Pizza");
            }else if(item == "veggie"){
                my_pizza = new VeggiePizza(ingredientFactory);
                my_pizza->setName("Chicago veggie Pizza");
            }else if(item == "clam"){
                my_pizza = new calmPizza(ingredientFactory);
                my_pizza->setName("Chicago clam Pizza");
            } else if (item == "pepperoni") {
                my_pizza = new PepperoniPizza(ingredientFactory);
                my_pizza->setName("Chicago pepperoni Pizza");
            }
        return my_pizza;
        }
};


#endif