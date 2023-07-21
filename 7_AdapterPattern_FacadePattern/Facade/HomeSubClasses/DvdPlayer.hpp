#ifndef DvdPlayer_HPP
#define DvdPlayer_HPP

#include "Amplifier.hpp"
#include <iostream>

class DvdPlayer{
    private:
        Amplifier my_amplifier;
    public:
        void on(){
            std::cout << "DvdPlayer is On\n";
        }
        void off(){
            std::cout << "DvdPlayer is Off\n";
        }
        void eject(){
            std::cout << "DvdPlayer is ejected\n";
        }
        void pause(){
            std::cout << "DvdPlayer is paused\n";
        }
        void play(){
            std::cout << "CdPlayer is Playing\n";
        }
        void setSurroundAudio(){
            std::cout << "DvdPlayer is set Surrounded Audio\n";
        }
        void setTwoChannelAudio(){
            std::cout << "DvdPlayer is set Two channels Audio\n";
        }
        void stop(){
            std::cout << "DvdPlayer is Stopped\n";
        }
};


#endif