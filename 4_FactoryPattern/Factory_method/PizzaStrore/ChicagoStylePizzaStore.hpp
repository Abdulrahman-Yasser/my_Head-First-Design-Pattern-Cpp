#ifndef CHICAGOPIZZASTORE_HPP
#define CHICAGOPIZZASTORE_HPP

#include <iostream>

#include "pizzaStore.hpp"

#include "../PizzaTypes/ChicagoCheesePizza.hpp"
#include "../PizzaTypes/ChicagomeatPizza.hpp"
#include "../PizzaTypes/ChicagopepironyPizza.hpp"
#include "../PizzaTypes/ChicagoveganPizza.hpp"

class ChicagoPizzaStore : public PizzaStore{
    protected:
        Pizza *createPizza(string type) override{
            Pizza *my_p;

            std::cout << "Chicago Pizza : \n";

            if(type == "cheese"){
                my_p = new ChicagoCheesePizza();
            }else if(type == "pepirony"){
                my_p = new ChicagoPepironyPizza();
            }else if(type == "vegan"){
                my_p = new ChicagoVeganPizza();
            }else if(type == "meat"){
                my_p = new ChicagoMeatPizza();
            }
            return my_p;
        }
};

#endif