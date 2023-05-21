

#include "Ducks/MuteDuck/MuteDuck.hpp"
#include "Ducks/ModelDuck/ModelDuck.hpp"
#include "Ducks/MallardDuck/MallardDuck.hpp"

#include "Fly/FlyJett/FlyJett.hpp"
#include "Fly/FlyRocketPowered/FlyRocketPowered.hpp"

int main(int argc, const char * argv[]) {

    MallardDuck mallard;
    mallard.display();
    mallard.performFly();
    mallard.performQuack();

    ModelDuck model;
    model.performFly();
    model.performQuack();

    MuteDuck mute;
    mute.performFly();
    mute.performQuack();

}
