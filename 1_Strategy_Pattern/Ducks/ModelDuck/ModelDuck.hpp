#ifndef MODELDUCK_H
#define MODELDUCK_H


#include "../../Duck_baseClass/Duck.hpp"
#include "../../Fly/FlyNoway/FlyNoway.hpp"
#include "../../Quack/squeakQuack/squeakQuack.hpp"

class ModelDuck:public Duck{
    public:
    ModelDuck();
    void display(void) const override;
};
ModelDuck::ModelDuck(){
    duck_FlyBehavior = std::make_unique<FlyNoway>();
    duck_QuackBehavior = std::make_unique<squeakQuack>();
}
void ModelDuck::display(void) const {
    cout << "Iam a ModelDuck" << endl;
}

#endif