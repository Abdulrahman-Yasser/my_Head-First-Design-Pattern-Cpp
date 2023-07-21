#ifndef LIGHTS_HPP
#define LIGHTS_HPP

#include <string>
#include <iostream>

class Light{
    protected:
        std::string device_ip;
        std::string location;
    public:
        Light(std::string ip, std::string l):location(l), device_ip(ip){
            
        }
        void Light_turn_on(void){
            std::cout << location << " : Light is on\n";
        }
        void Light_turn_off(void){
            std::cout <<  location << " : Light is off\n";
        }
};

#endif