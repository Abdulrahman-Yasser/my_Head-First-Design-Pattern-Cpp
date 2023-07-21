#ifndef CD_PLAYER_HPP
#define CD_PLAYER_HPP

#include "Amplifier.hpp"
#include <iostream>

class CdPlayer{
    private:
        Amplifier my_amplifier;
    public:
        void on(){
            std::cout << "CdPlayer is On\n";
        }
        void off(){
            std::cout << "CdPlayer is Off\n";
        }
        void eject(){
            std::cout << "CdPlayer is ejected\n";
        }
        void pause(){
            std::cout << "CdPlayer is paused\n";
        }
        void play(){
            std::cout << "CdPlayer is playing\n";
        }
        void stop(){
            std::cout << "CdPlayer is stop\n";
        }
};


#endif