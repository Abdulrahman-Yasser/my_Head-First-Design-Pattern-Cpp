#ifndef TURKEYADAPTER_HPP
#define TURKEYADAPTER_HPP

#include "../Turkey/Turkey.hpp"
#include "../Ducks/Duck.hpp"

class TurkeyAdapter : public Duck {
    Turkey *turkey;
    public:
    TurkeyAdapter(Turkey *the_turkey):turkey(the_turkey) {
        
    }
    void quack() {
        turkey->gobble();
    }
    void fly() {
        for(int i=0; i < 5; i++) {
            turkey->fly();
        }
    }
};


#endif