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
    protected:
        std::string name;
        Dough *dough;
        Sauce *sauce;
        std::queue<Veggies*> my_veggies;
        Cheese *cheese;
        Pepperoni *pepperoni;
        Clams *clam;
    public:
        virtual ~Pizza() = default;
        Pizza():dough( nullptr), sauce (nullptr), cheese (nullptr),
                pepperoni (nullptr), clam (nullptr), my_veggies(){

        }
        virtual void prepare() = 0;
        void bake() {
            if(dough){
                dough->get_it();
                std::cout << "\n";
            }
            if(sauce){
                sauce->get_it();
                std::cout << "\n";
            }
            if(cheese){
                cheese->get_it();
                std::cout << "\n";
            }
            if(pepperoni){
                pepperoni->get_it();
                std::cout << "\n";
            }
            if(clam){
                clam->get_it();
                std::cout << "\n";
            }
            if(my_veggies.size()){
                while(my_veggies.size() > 0){
                    my_veggies.front()->get_it();
                    my_veggies.pop();
                }
                std::cout << "\n";
            }
            std::cout << ("Bake for 25 minutes at 350\n");
        }
        void cut() {
        std::cout << ("Cutting the pizza into diagonal slices\n");
        }
        void box() {
        std::cout << ("Place pizza in official PizzaStore box\n");
        }
        void setName(std::string name) {
            this->name = name;
        }
        std::string getName() {
            return name;
        }
};


#endif