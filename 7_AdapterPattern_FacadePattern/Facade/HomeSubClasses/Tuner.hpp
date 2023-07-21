#ifndef TUNER_HPP
#define TUNER_HPP

#include "Amplifier.hpp"
#include <iostream>

class Tuner{
    private:
        Amplifier my_amplifier;    
    public:
        void on(){
            std::cout << "Tuner is on\n";
        }
        void off(){
            std::cout << "Tuner is off\n";
        }
        void setAm(){
            std::cout << "Tuner Set Am\n";
        }
        void setFm(){
            std::cout << "Tuner set FM\n";
        }
        void setFrequency(){
            std::cout << "Tuner set Frequency\n";
        }
};

#endif