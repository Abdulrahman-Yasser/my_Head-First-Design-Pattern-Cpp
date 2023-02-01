#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
    public:
        virtual void update(double t, double h, double p) = 0 ;
};

#endif