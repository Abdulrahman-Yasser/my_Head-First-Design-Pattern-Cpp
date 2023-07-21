#ifndef GUARAGE_DOOR_HPP
#define GUARAGE_DOOR_HPP

#include <string>
#include <iostream>

class GuarageDoor{
    protected:
        std::string device_ip;
        std::string location;
    public:
        GuarageDoor(std::string ip, std::string l):location(l), device_ip(ip){
            
        }
        void GuarageUp(void){
            std::cout <<  location << " : Guarage is up !!\n";
        }    
        void GuarageDown(void){
            std::cout <<  location << " : Guarage is Down !!\n";
        }
};

#endif