#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "Beverage.hpp"


class Espresso : public beverage{
    public:
    int Cost(void) override;
    void getDescription(void) const override;
};

void Espresso::getDescription(void) const{
    std::cout << "Espresso ";
}

int Espresso::Cost(void){
    return 5;
}


#endif