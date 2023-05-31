#ifndef DARKROAST_HPP
#define DARKROAST_HPP

#include "Beverage.hpp"

class DarkRoast : public beverage{
    public:
    int Cost(void) override;
    void getDescription(void) const override;
};

void DarkRoast::getDescription(void) const{
    std::cout << "DarkRoast ";
}

int DarkRoast::Cost(void){
    return 1;
}


#endif