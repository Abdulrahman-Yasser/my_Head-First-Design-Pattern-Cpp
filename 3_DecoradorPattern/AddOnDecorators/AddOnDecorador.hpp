#ifndef ADDONDECORADOR_HPP
#define ADDONDECORADOR_HPP

#include "../Beverage/Beverage.hpp"
#include <memory>
class AddOnDecorador : public beverage{
    protected:
    std::unique_ptr<beverage> original_Object;
    AddOnDecorador(std::unique_ptr<beverage> OriginalDrink);
};


AddOnDecorador::AddOnDecorador(std::unique_ptr<beverage> OriginalDrink){
    this->original_Object = std::move(OriginalDrink);
}


#endif