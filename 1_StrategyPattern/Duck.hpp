#include "FlyBehavior/FlyInterface.hpp"
#include "QuackBehavior/QuackInterface.hpp"

class Duck{
    private:
    FlyBehavior *fb;
    QuackBehavior *qb;
    public:
    Duck(FlyBehavior *f, QuackBehavior *q){
        fb = f;
        qb = q;
    }
    void display(void){
        cout << "here you go, there is your duck" << endl;
    }
    void performFly(void){
        fb->fly();
    }
};
