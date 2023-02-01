#ifndef WEATHERSTATION_SERVERDATA_H
#define WEATHERSTATION_SERVERDATA_H

#include "../PatternInterface/Observable.hpp"
#include "../PatternInterface/Observer.hpp"
#include <stdlib.h>
#include <iostream>
#include <list>

/*
inline : it copies the function body when instead of calling the function
so it's kinda like #define but with functions
we use itwith the small functions, if the function is kinda big, so it will be missused
*/

class WeatherStation : public Observable{
    private:
        double temperature;
        double humanity;
        double pressure;
        std::list<Observer *> my_observers = {};
    public:
        WeatherStation() = default;
        void registerObserver( Observer *O) override{
            my_observers.push_back(O);
        }
        void removeObserver( Observer *O) override;
        void notifyObservers() override ;
        void measurementChanged(){
            notifyObservers();
        }
        void setMeasurements(const double &t, const double &h, const double &p);
};

inline void WeatherStation::removeObserver( Observer *O){
    if(!my_observers.empty()){
        my_observers.remove(O);
    }
}
inline void WeatherStation::notifyObservers(){
    for(auto o : my_observers){
        o->update(temperature, humanity, pressure);
    }
}
inline void WeatherStation::setMeasurements(const double &t, const double &h, const double &p){
    temperature = t;
    humanity = h;
    pressure = p;
    measurementChanged();
}

#endif