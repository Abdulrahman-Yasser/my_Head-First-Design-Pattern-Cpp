#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <string>
#include <queue>

class Pizza{
    public :
        string name;
        string dough;
        string sauce;
        std::queue<string> my_toppings;
    public:
        virtual ~Pizza(){

        }
        virtual void prepare(void){
            std::cout << "Preparing the pizza\n";
            std::cout << "Preparing : " << name << std::endl;;
            std::cout << "dough : " << dough << std::endl;;
            std::cout << "sauce : " << sauce << std::endl;;
            for(int i = 0; i < my_toppings.size(); i++){
                std::cout << my_toppings.front() << std::endl;
                my_toppings.pop();
            }
        }
        virtual void bake(void){
            std::cout << "Baking the pizza\n";
        }
        virtual void cut(void){
            std::cout << "Cutting the pizza\n";
        }
        virtual void box(void){
            std::cout << "Boxing the pizza\n";
        }
};


#endif