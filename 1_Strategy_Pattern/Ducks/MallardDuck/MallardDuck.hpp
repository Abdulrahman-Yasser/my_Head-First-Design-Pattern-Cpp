#ifndef MALLAREDDUCK_H
#define MALLAREDDUCK_H

#include "../../Duck_baseClass/Duck.hpp"
#include "../../Fly/FlyNoway/FlyNoway.hpp"
#include "../../Quack/squeakQuack/squeakQuack.hpp"

class MallardDuck:public Duck{
    public:
    MallardDuck();
    void display(void) const override;
};
MallardDuck::MallardDuck(){
    duck_FlyBehavior = std::make_unique<FlyNoway>();
    duck_QuackBehavior = std::make_unique<squeakQuack>();
}
void MallardDuck::display(void) const {
    cout << "Iam a MallardDuck" << endl;
}

#endif