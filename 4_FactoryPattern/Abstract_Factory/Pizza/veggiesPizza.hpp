#ifndef VEGGIES_PIZZA_H
#define VEGGIES_PIZZA_H

#include "Pizza.hpp"
#include "../PizzaIngredientFactory/PizzaIngredientFactory.hpp"

class VeggiePizza : public Pizza {
	public:
		VeggiePizza(PizzaIngredientFactory* ingFact) : ingredientFactory(ingFact) {

        }
		void prepare() override{
            std::cout << "Preparing " << name << '\n';
            dough = ingredientFactory->createDough();
            sauce = ingredientFactory->createSauce();
            cheese = ingredientFactory->createCheese();
            my_veggies = ingredientFactory->createVeggies();
        }
	private:
		PizzaIngredientFactory* ingredientFactory;
};


#endif /* VEGGIE_PIZZA_H */
