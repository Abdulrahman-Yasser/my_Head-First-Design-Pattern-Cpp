#ifndef PopcornPopper_hpp
#define PopcornPopper_hpp

#include <iostream>

class PopcornPopper{
    public:
        void on(){
            std::cout << "PopCorn is on\n";
        }
        void off(){
            std::cout << "PopcornPopper is off\n";
        }
        void pop(){
            std::cout << "PopcornPopper is popping\n";
        }
};

#endif