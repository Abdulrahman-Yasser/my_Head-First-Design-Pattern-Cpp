
#ifndef DUCK_HPP
#define DUCK_HPP

#include "../Fly/FlyBehavior/FlyBehavior.hpp"
#include "../Quack/QuackBehavior/QuackBehavior.hpp"

#include <memory>
#include <iostream>

class Duck{
    protected :
        std::unique_ptr<FlyBehavior> duck_FlyBehavior = nullptr;
        std::unique_ptr<QuackBehavior> duck_QuackBehavior = nullptr;
    public:
        virtual ~Duck() = default;
        virtual void display(void) const= 0;
        void setFlyBehavior(std::unique_ptr<FlyBehavior> duck_F);
        void setQuackBehavior(std::unique_ptr<QuackBehavior> duck_Q);
        void performFly(void) const;
        void performQuack(void) const;
        void swim(void) const;
};


void Duck::setFlyBehavior(std::unique_ptr<FlyBehavior> duck_F){
    duck_FlyBehavior = std::move(duck_F);
}
void Duck::setQuackBehavior(std::unique_ptr<QuackBehavior> duck_Q){
    duck_QuackBehavior = std::move(duck_Q);
}
void Duck::performFly(void) const{
    duck_FlyBehavior->Fly();
}
void Duck::performQuack(void) const{
    duck_QuackBehavior->Quack();
}
void Duck::swim(void) const{
    cout << "all ducks Swims \n";
}




#endif