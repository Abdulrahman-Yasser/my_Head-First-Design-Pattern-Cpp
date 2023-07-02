#include "PizzaStrore/NewYorkPizza.hpp"
#include "PizzaStrore/ChicagoStylePizzaStore.hpp"
#include "PizzaTypes/Pizza.hpp"

int main(){
    PizzaStore *my_store = new NewYorkPizzaStor();
    Pizza *my_p = my_store->OrderPizza("cheese");
    std::cout << "\n---------------\n";
    my_p = my_store->OrderPizza("vegan");

    std::cout << "\n---------------\n";
    my_store = new ChicagoPizzaStore();
    my_p = my_store->OrderPizza("vegan");

    NewYorkPizzaStor my_store_2 = NewYorkPizzaStor();
    Pizza *my_p_2 = my_store_2.OrderPizza("cheese");
    std::cout << "\n---------------\n";
    my_p_2 = my_store_2.OrderPizza("vegan");

    std::cout << "\n---------------\n";
    my_p_2 = my_store_2.OrderPizza("meat");

}