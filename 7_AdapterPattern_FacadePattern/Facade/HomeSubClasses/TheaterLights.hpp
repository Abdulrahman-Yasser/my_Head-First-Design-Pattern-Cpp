#ifndef TheaterLights_hpp
#define TheaterLights_hpp

#include <iostream>

class TheaterLights{
    public:
        void on(){
            std::cout << "TheaterLights is on\n";
        }
        void off(){
            std::cout << "TheaterLights is off\n";
        }
        void dim(){
            std::cout << "TheaterLights is dim\n";
        }
};

#endif