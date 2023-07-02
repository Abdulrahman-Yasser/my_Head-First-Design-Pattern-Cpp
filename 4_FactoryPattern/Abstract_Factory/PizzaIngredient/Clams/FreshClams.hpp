#ifndef FRESHCALMS_HPP
#define FRESHCALMS_HPP

#include "Calm.hpp"


class FreshCalms : public Clams{
    public:
        void get_it() override{
            std::cout << "Calms : Fresh Calms";
        }
};


#endif