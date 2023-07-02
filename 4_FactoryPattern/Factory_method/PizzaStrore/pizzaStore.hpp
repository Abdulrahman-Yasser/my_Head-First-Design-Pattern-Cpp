#ifndef PIZZASTORE_CPP
#define PIZZASTORE_CPP


#include <iostream>
#include <string.h>
using namespace std;
#include "../PizzaTypes/Pizza.hpp"

class PizzaStore{
    public:

        Pizza *OrderPizza(string type){
            Pizza *my_p;

            my_p = createPizza(type);

            my_p->prepare();
            my_p->bake();
            my_p->cut();
            my_p->box();

            return my_p;
        }
    protected:
        virtual Pizza *createPizza(string type) = 0;
};

#endif