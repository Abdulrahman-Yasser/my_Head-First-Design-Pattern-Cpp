#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "../PizzaIngredient/Cheese/Cheese.hpp"
#include "../PizzaIngredient/Dough/Dough.hpp"
#include "../PizzaIngredient/Sauce/Sauce.hpp"
#include "../PizzaIngredient/Veggies/Veggies.hpp"
#include "../PizzaIngredient/Pepperoni/Pepperoni.hpp"
#include "../PizzaIngredient/Clams/Calm.hpp"


#include <string>
#include <iostream>
#include <queue>

class Pizza {
    private:
        std::string name;
        Dough *dough;
        Sauce *sauce;
        std::queue<Veggies*> my_veggies;
        Cheese *cheese;
        Pepperoni *pepperoni;
        Clams *clam;

        virtual void prepare() = 0;
    public:
        void bake() {
            std::cout << ("Bake for 25 minutes at 350");
        }
        void cut() {
        std::cout << ("Cutting the pizza into diagonal slices");
        }
        void box() {
        std::cout << ("Place pizza in official PizzaStore box");
        }
        void setName(std::string name) {
            this->name = name;
        }
        std::string getName() {
            return name;
        }
};


#endif