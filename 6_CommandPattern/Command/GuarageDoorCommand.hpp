#ifndef GUARAGE_DOOR_COMMAND_HPP
#define GUARAGE_DOOR_COMMAND_HPP

#include "Command.hpp"
#include "../Devices/GuarageDoor.hpp"

class GuarageDoorCommandUp : public Command{
    private:
        GuarageDoor my_guarage;
    public:
        GuarageDoorCommandUp(GuarageDoor g): my_guarage(g){

        }
        void execute() override{
            my_guarage.GuarageUp();
        }
        void undo() override{
            my_guarage.GuarageDown();
        }
};

class GuarageDoorCommandDown : public Command{
    private:
        GuarageDoor my_guarage;
    public:
        GuarageDoorCommandDown(GuarageDoor g): my_guarage(g){

        }
        void execute() override{
            my_guarage.GuarageDown();
        }
        void undo() override{
            my_guarage.GuarageUp();
        }
};


#endif