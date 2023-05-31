#ifndef WHIP_HPP
#define WHIP_HPP

#include "AddOnDecorador.hpp"

class Whip : public AddOnDecorador{
    public:
    Whip(std::unique_ptr<beverage> Original_Drink);
    void getDescription(void) const override;
    int Cost(void) override;
};

Whip::Whip(std::unique_ptr<beverage> Original_Drink):AddOnDecorador(std::move(Original_Drink)){
}


void Whip::getDescription(void) const{
    this->original_Object->getDescription();
    std::cout << "Whip ";
}

int Whip::Cost(void){
    return this->original_Object->Cost() + 10000;
}


#endif