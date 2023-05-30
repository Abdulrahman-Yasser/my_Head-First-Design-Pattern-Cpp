#ifndef DECAFF_HPP
#define DECAFF_HPP

#include "Beverage.hpp"

class Decaff : public beverage{
    public:
    int Cost(void) override;
    void getDescription(void) const override;
};

void Decaff::getDescription(void) const{
    std::cout << "Decaff ";
}

int Decaff::Cost(void){
    return 10;
}


#endif