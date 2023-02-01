#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "Observer.hpp"

class Observable{
    public:
        virtual void registerObserver( Observer *O) = 0;
        virtual void removeObserver( Observer *O) = 0;
        virtual void notifyObservers() = 0;
};


#endif