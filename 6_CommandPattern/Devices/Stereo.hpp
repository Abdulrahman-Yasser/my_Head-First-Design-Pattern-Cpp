#ifndef STERIO_HPP
#define STERIO_HPP

#include <iostream>
#include <string>
class Sterio{
    private:
        std::string device_ip;
        std::string location;
    public:
        Sterio(std::string ip, std::string l):location(l), device_ip(ip){
            
        }
        void on(void){
            std::cout << location << ":: Turn the Sterio on \n";
        }
        void setCD(void){
            std::cout << location << ":: Sterio is CD \n";
        }
        void setDVD(void){
            std::cout << location << ":: Sterio is DVD on \n";
        }
        void setRadio(void){
            std::cout << location << ":: Sterio is Radio \n";
        }
        void setVolume(int i){
            std::cout << location << ":: Sterio Volume is " << i <<" \n";
        }
        void off(void){
            std::cout << location << ":: Turn the Sterio off \n";
        }
};


#endif