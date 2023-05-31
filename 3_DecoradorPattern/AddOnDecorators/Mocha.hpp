#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "AddOnDecorador.hpp"

class Mocha : public AddOnDecorador{
    public:
    Mocha(std::unique_ptr<beverage> q);
    void getDescription(void) const override;
    int Cost(void) override;
};

Mocha::Mocha(std::unique_ptr<beverage> q) : AddOnDecorador(std::move(q)){
}

void Mocha::getDescription(void) const{
    this->original_Object->getDescription();
    std::cout << "Mocha ";
}

int Mocha::Cost(void){
    return this->original_Object->Cost() + 100;
}


#endif