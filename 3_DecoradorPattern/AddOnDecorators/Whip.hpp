#ifndef WHIP_HPP
#define WHIP_HPP

#include "AddOnDecorador.hpp"

class Whip : public AddOnDecorador{
    public:
    Whip(std::unique_ptr<beverage> Original_Drink);
    Whip(beverage* q);
    void getDescription(void) const override;
    int Cost(void) override;
};

Whip::Whip(std::unique_ptr<beverage> Original_Drink):AddOnDecorador(std::move(Original_Drink)){
}

Whip::Whip(beverage* q) : AddOnDecorador(std::move(std::make_unique<Decaff>())){
    std::unique_ptr<beverage> p(q);
    this->original_Object = std::move(p);
}


void Whip::getDescription(void) const{
    this->original_Object->getDescription();
    std::cout << "Whip ";
}

int Whip::Cost(void){
    return this->original_Object->Cost() + 10000;
}


#endif