#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include <iostream>

class beverage{
    public:
    virtual void getDescription(void) const;
    virtual int Cost(void) = 0;
    virtual ~beverage() = default;
};

void beverage::getDescription(void) const{
    std::cout << "The drinking is : ";
}

#endif