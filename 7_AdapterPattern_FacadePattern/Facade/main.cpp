
#include "FacadeClass/Facade.hpp"

int main(){
    Facade my_home;
    std::cout << "\n-------------------------- Watching Movie -------------------------- \n";
    my_home.watchMovie();
    std::cout << "\n-------------------------- endMovie -------------------------- \n";
    my_home.endMovie();
    std::cout << "\n-------------------------- listenToRadio -------------------------- \n";
    my_home.listenToRadio();
    std::cout << "\n-------------------------- endRadio -------------------------- \n";
    my_home.endRadio();
}
