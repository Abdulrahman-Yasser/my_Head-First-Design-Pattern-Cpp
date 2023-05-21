#ifndef MUTEDUCK_H
#define MUTEDUCK_H

#include "../../Duck_baseClass/Duck.hpp"
#include "../../Fly/FlyWithWings/FlyWithWings.hpp"
#include "../../Quack/MuteQuack/MuteQuack.hpp"

class MuteDuck: public Duck{
    public:
    MuteDuck();
    void display(void) const override;
};
MuteDuck::MuteDuck(){
    duck_FlyBehavior = std::make_unique<FlyWithWings>();
    duck_QuackBehavior = std::make_unique<MuteQuack>();
}

void MuteDuck::display(void) const {
    cout << "Iam a MuteDuck" << endl;
}

#endif