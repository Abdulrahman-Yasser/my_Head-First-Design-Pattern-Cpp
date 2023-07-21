#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <iostream>

class Screen{
    public:
        void up(){
            std::cout << "Screen is up\n";
        }
        void down(){
            std::cout << "Screen is down\n";
        }
};


#endif