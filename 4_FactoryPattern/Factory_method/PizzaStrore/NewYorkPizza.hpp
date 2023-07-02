#ifndef CHICAGOPIZZASTORE_CPP
#define CHICAGOPIZZASTORE_CPP

#include <iostream>

#include "pizzaStore.hpp"

#include "../PizzaTypes/NYCheesePizza.hpp"
#include "../PizzaTypes/NYmeatPizza.hpp"
#include "../PizzaTypes/NYpepironyPizza.hpp"
#include "../PizzaTypes/NYveganPizza.hpp"

class NewYorkPizzaStor : public PizzaStore{
    protected:
        Pizza *createPizza(string type) override{
            Pizza *my_p;

            std::cout << "NewYork Pizza : \n";
            
            if(type == "cheese"){
                my_p = new NYCheesePizza();
            }else if(type == "pepirony"){
                my_p = new NYPepironyPizza();
            }else if(type == "vegan"){
                my_p = new NYVeganPizza();
            }else if(type == "meat"){
                my_p = new NYMeatPizza();
            }
            return my_p;
        }
};

#endif