#ifndef CARAMEL_HPP
#define CARAMEL_HPP

#include "AddOnDecorador.hpp"

class Caramel : public AddOnDecorador{
    public:
    Caramel(std::unique_ptr<beverage> Original_Drink) : AddOnDecorador(std::move(Original_Drink)){
        
    }
    void getDescription(void) const override;
    int Cost(void) override;
};


void Caramel::getDescription(void) const{
    this->original_Object->getDescription();
    std::cout << "Caramel ";
}

int Caramel::Cost(void){
    return this->original_Object->Cost() + 14;
}

#endif