#ifndef PIZZASTORE_HPP
#define PIZZASTORE_HPP


#include "../Pizza/Pizza.hpp"

class PizzaStore{
    public:
        virtual ~PizzaStore() = default;
        Pizza* orderPizza(std::string item){
            Pizza* my_pizza = createPizza(item);
            my_pizza->prepare();
            my_pizza->bake();
            my_pizza->cut();
            my_pizza->box();
            return my_pizza;
        }
    protected:
        virtual Pizza* createPizza(std::string item) = 0;
};






#endif