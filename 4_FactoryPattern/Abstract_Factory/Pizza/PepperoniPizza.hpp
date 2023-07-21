#ifndef PEPPERONIPIZZA_HPP
#define PEPPERONIPIZZA_HPP


#include "Pizza.hpp"
#include "../PizzaIngredientFactory/PizzaIngredientFactory.hpp"

class PepperoniPizza : public Pizza { 
	public:
		PepperoniPizza(PizzaIngredientFactory* infac) : ingredientFactory(infac) {

        }
		void prepare() override{
            std::cout << "Preparing " << name << '\n';
            dough = ingredientFactory->createDough();
            sauce = ingredientFactory->createSauce();
            cheese = ingredientFactory->createCheese();
            pepperoni = ingredientFactory->createPepperoni();
        }
	private:
		PizzaIngredientFactory* ingredientFactory = nullptr;
};



#endif