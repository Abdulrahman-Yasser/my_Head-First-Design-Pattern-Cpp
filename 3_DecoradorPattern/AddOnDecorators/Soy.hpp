#ifndef SOY_HPP
#define SOY_HPP

#include "AddOnDecorador.hpp"

class Soy: public AddOnDecorador{
    public:
    Soy(std::unique_ptr<beverage> Original_Drink) : AddOnDecorador(std::move(Original_Drink)){
        
    }
    void getDescription(void) const override;
    int Cost(void) override;
};

void Soy::getDescription(void) const{
    this->original_Object->getDescription();
    std::cout << "Soy ";
}

int Soy::Cost(void){
    return this->original_Object->Cost() + 1000;
}


#endif