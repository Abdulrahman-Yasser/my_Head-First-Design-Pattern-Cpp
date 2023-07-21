#ifndef NY_PIZZASOTRE_HPP
#define NY_PIZZASOTRE_HPP

#include <memory>

#include "PizzaStore.hpp"

#include "../PizzaIngredientFactory/NYPizzaIngredientFactory.hpp"

#include "../Pizza/CheesePizza.hpp"
#include "../Pizza/calmPizza.hpp"
#include "../Pizza/PepperoniPizza.hpp"
#include "../Pizza/veggiesPizza.hpp"

class NYPizzaStore : public PizzaStore{
    private :

    public:
        Pizza* createPizza(std::string item) override{
            Pizza* my_pizza = nullptr;
            PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();
            if(item == "cheese"){
                my_pizza = new CheesePizza(ingredientFactory);
                my_pizza->setName("New York Cheese Pizza");
            }else if(item == "veggie"){
                my_pizza = new VeggiePizza(ingredientFactory);
                my_pizza->setName("New York veggie Pizza");
            }else if(item == "clam"){
                my_pizza = new calmPizza(ingredientFactory);
                my_pizza->setName("New York clam Pizza");
            } else if (item == "pepperoni") {
                my_pizza = new PepperoniPizza(ingredientFactory);
                my_pizza->setName("New York pepperoni Pizza");
            }
        return my_pizza;
        }
};


#endif