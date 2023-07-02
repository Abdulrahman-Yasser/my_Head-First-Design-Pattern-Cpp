#ifndef FROZENCALMS_HPP
#define FROZENCALMS_HPP


#include "Calm.hpp"


class FrozenCalms : public Clams{
    public:
        void get_it() override{
            std::cout << "Calms : Frozen Calms";
        }
};



#endif