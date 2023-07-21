#ifndef STERIO_FOR_CD_COMMAND_HPP
#define STERIO_FOR_CD_COMMAND_HPP


#include "Command.hpp"
#include "../Devices/Stereo.hpp"

class SterioForCD_CommandOn : public Command{
    private:
        Sterio my_Sterio;
    public :
        SterioForCD_CommandOn(Sterio the_sterio):my_Sterio(the_sterio){

        }
        void execute() override{
            my_Sterio.on();
            my_Sterio.setCD();
            my_Sterio.setVolume(11);
        }
        void undo() override{
            my_Sterio.setVolume(0);
            my_Sterio.off();
        }
};

class SterioForCD_CommandOff : public Command{
    private:
        Sterio my_Sterio;
    public :
        SterioForCD_CommandOff(Sterio the_sterio):my_Sterio(the_sterio){

        }
        void execute() override{
            my_Sterio.setVolume(0);
            my_Sterio.off();
        }
        void undo() override{
            my_Sterio.on();
            my_Sterio.setCD();
            my_Sterio.setVolume(11);
        }
};
#endif