#ifndef Projector_hpp
#define Projector_hpp

#include "DvdPlayer.hpp"
#include <iostream>

class Projector{
    private:
        DvdPlayer my_dvdPlayer;
    public:
        void on(){
            std::cout << "Projector is on\n";
        }
        void off(){
            std::cout << "Projector is off\n";
        }
        void tvMode(){
            std::cout << "Projector is tv mode\n";
        }
        void wideScreenMode(){
            std::cout << "Projector is Screen mode\n";
        }
};

#endif