#ifndef HOUSEBLEND_HPP
#define HOUSEBLEND_HPP

#include "Beverage.hpp"

class HouseBlend : public beverage{
    public:
    int Cost(void) override;
    void getDescription(void) const override;
};

void HouseBlend::getDescription(void) const{
    std::cout << "HouseBlend ";
}

int HouseBlend::Cost(void){
    return 4;
}


#endif