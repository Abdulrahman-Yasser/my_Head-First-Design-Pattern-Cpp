#include "PizzaStore/ChicagoPizzaStore.hpp"
#include "PizzaStore/NYPizzaStore.hpp"
#include "PizzaStore/PizzaStore.hpp"

int main(){
    PizzaStore* my_store = new NYPizzaStore();
    my_store->orderPizza("cheese");
    std::cout << "\n--------------------------------------\n";
    my_store->orderPizza("veggie");
    std::cout << "\n--------------------------------------\n";

    my_store = new ChicagoPizzaStore();
    my_store->orderPizza("cheese");
    std::cout << "\n--------------------------------------\n";
    my_store->orderPizza("veggie");
}

