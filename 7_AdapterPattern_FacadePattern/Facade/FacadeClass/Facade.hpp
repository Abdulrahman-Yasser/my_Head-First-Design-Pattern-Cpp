#ifndef FACADE_HPP
#define FACADE_HPP

#include "../HomeSubClasses/Amplifier.hpp"
#include "../HomeSubClasses/CdPlayer.hpp"
#include "../HomeSubClasses/DvdPlayer.hpp"
#include "../HomeSubClasses/PopcornPopper.hpp"
#include "../HomeSubClasses/Projector.hpp"
#include "../HomeSubClasses/Screen.hpp"
#include "../HomeSubClasses/TheaterLights.hpp"
#include "../HomeSubClasses/Tuner.hpp"

class Facade{
    private:
        Amplifier f_Amplifier;
        CdPlayer f_CdPlayer;
        DvdPlayer f_DvdPlayer;
        PopcornPopper f_PopcornPopper;
        Projector f_Projector;
        Screen f_Screen;
        TheaterLights f_TheaterLights;
        Tuner f_Tuner;
    public:
        Facade(){

        }
        void watchMovie(void){
            f_TheaterLights.on();
            f_Amplifier.on();
            f_Amplifier.setDvd();
            f_DvdPlayer.on();
            f_Projector.on();
            f_Screen.up();
            f_Amplifier.setVolume();
            f_PopcornPopper.on();
            f_PopcornPopper.pop();
            f_TheaterLights.off();
        }
        void endMovie(void){
            f_TheaterLights.on();
            f_DvdPlayer.off();
            f_Projector.off();
            f_Amplifier.off();
            f_Screen.down();
            f_PopcornPopper.off();
            f_TheaterLights.off();
        }
        void listenToCd(void){
            f_Amplifier.setCd();
            f_CdPlayer.on();
            f_CdPlayer.play();
        }
        void endCd(void){
            f_CdPlayer.eject();
            f_CdPlayer.off();
            f_Amplifier.off();
        }
        void listenToRadio(void){
            f_Amplifier.on();
            f_Tuner.on();
            f_Tuner.setFm();
            f_Tuner.setFrequency();
            f_Amplifier.setVolume();
        }
        void endRadio(void){
            f_Tuner.off();
            f_Amplifier.off();
        }
};


#endif