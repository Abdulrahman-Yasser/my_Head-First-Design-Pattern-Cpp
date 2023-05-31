#ifndef CARAMEL_HPP
#define CARAMEL_HPP

#include "AddOnDecorador.hpp"

class Caramel : public AddOnDecorador{
    public:
    Caramel(std::unique_ptr<beverage> Original_Drink);
    Caramel(beverage* q);
    void getDescription(void) const override;
    int Cost(void) override;
};

Caramel::Caramel(std::unique_ptr<beverage> Original_Drink) : AddOnDecorador(std::move(Original_Drink)){
}

Caramel::Caramel(beverage* q) : AddOnDecorador(std::move(std::make_unique<Decaff>())){
    std::unique_ptr<beverage> p(q);
    this->original_Object = std::move(p);
}


void Caramel::getDescription(void) const{
    this->original_Object->getDescription();
    std::cout << "Caramel ";
}

int Caramel::Cost(void){
    return this->original_Object->Cost() + 10;
}

#endif