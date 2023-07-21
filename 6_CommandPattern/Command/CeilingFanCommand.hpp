#ifndef CEILING_FAN_COMMAND_HPP
#define CEILING_FAN_COMMAND_HPP

#include "Command.hpp"
#include "../Devices/Fan.hpp"

class CeilingFanCommandOn : public Command{
    private:
        Fan my_fan;
        int prevSpeed;
    public :
        CeilingFanCommandOn(Fan the_fan):my_fan(the_fan){

        }
        void execute() override{
            prevSpeed = my_fan.fan_get_speed();
            my_fan.fan_high();
        }
        void undo() override{
            if(prevSpeed == Fan::HIGH){
                my_fan.fan_high();
            }else if(prevSpeed == Fan::MEDIUM){
                my_fan.fan_medium();
            }else if(prevSpeed == Fan::LOW){
                my_fan.fan_low();
            }else if(prevSpeed == Fan::OFF){
                my_fan.turn_fan_off();
            }
        }
};

class CeilingFanCommandOff : public Command{
    private:
        Fan my_fan;
        int prevSpeed;
    public :
        CeilingFanCommandOff(Fan the_fan):my_fan(the_fan){

        }
        void execute() override{
            prevSpeed = my_fan.fan_get_speed();
            my_fan.turn_fan_off();
        }
        void undo() override{
            if(prevSpeed == Fan::HIGH){
                my_fan.fan_high();
            }else if(prevSpeed == Fan::MEDIUM){
                my_fan.fan_medium();
            }else if(prevSpeed == Fan::LOW){
                my_fan.fan_low();
            }else if(prevSpeed == Fan::OFF){
                my_fan.turn_fan_off();
            }
        }
};

#endif