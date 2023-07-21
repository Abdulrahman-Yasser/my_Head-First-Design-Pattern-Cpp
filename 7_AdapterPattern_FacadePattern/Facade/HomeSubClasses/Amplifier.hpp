#ifndef AMPLIFIER_HPP
#define AMPLIFIER_HPP

#include <string>
#include <iostream>

class Amplifier{
    private:
        std::string tuner;
        std::string dvdPlayer;
        std::string cdPlayer;
    public:
        void on(){
            std::cout << "Amplifier is On\n";
        }
        void off(){
            std::cout << "Amplifier is Off\n";
        }
        void setCd(){
            std::cout << "Amplifier got the CD\n";
        }
        void setDvd(){
            std::cout << "Amplifier got the DVD \n";
        }
        void setStereoSound(){
            std::cout << "Amplifier Sterio Sound \n";
        }
        void setSurroundSoud(){
            std::cout << "Amplifier Surround Sound \n";
        }
        void setTuner(){
            std::cout << "Amplifier Tuner is set \n";
        }
        void setVolume(){
            std::cout << "Amplifier volume is set \n";
        }
};

#endif