#ifndef FAN_HPP
#define FAN_HPP

#include <iostream>
#include <string>
class Fan{
    private:
        std::string device_ip;
        std::string location;
    public:
        static const int HIGH = 3;
        static const int MEDIUM = 2;
        static const int LOW = 1;
        static const int OFF = 0;
        int speed;
        Fan(std::string ip, std::string l):location(l), device_ip(ip), speed(0){
            
        }
        void turn_fan_on(void){
            std::cout <<  location << " : Turn the fan on \n";
        }
        void turn_fan_off(void){
            std::cout <<  location << " : Turn the fan off \n";
        }
        void fan_high(void){
            speed = HIGH;
            std::cout <<  location << " : Turn the fan on with speed : "<< speed <<" \n";
        }
        void fan_medium(void){
            speed = MEDIUM;
            std::cout <<  location << " : Turn the fan on with speed : "<< speed <<" \n";
        }
        void fan_low(void){
            speed = LOW;
            std::cout <<  location << " : Turn the fan on with speed : "<< speed <<" \n";
        }
        int fan_get_speed(void){
            std::cout <<  location << " : getting the speed : "<< speed <<" \n";
            return speed;
        }
};

#endif