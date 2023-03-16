#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "../FlyBehavior/FlyInterface.hpp"


class FlyWithWings :public FlyBehavior {
    public:
    void fly(void) override;
};

#endif