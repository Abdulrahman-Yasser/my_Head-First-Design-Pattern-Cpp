#ifndef LIGHT_COMMAND_HPP
#define LIGHT_COMMAND_HPP

#include "Command.hpp"
#include "../Devices/Lights.hpp"


class LightCommandOn : public Command{
    Light my_light;
    public:
        LightCommandOn(Light l): my_light(l){
        }
        void execute(void) override{
            my_light.Light_turn_on();
        }
        void undo(void) override{
            my_light.Light_turn_off();
        }
};

class LightCommandOff : public Command{
    Light my_light;
    public:
        LightCommandOff(Light l): my_light(l){
        }
        void execute(void) override{
            my_light.Light_turn_off();
        }
        void undo(void) override{
            my_light.Light_turn_on();
        }
};

#endif