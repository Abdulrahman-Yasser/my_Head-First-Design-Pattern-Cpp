#ifndef CURRENTCONDITIONDISPLAY_H
#define CURRENTCONDITIONDISPLAY_H

#include "../PatternInterface/Observer.hpp"
#include "../PatternInterface/Observable.hpp"

#include "DisplayElement.hpp"


#include <iostream>

class CurrentConditionDiplay : public Observer, public DisplayElement{
    private:
        float temprature = 0.0;
        float humanity = 0.0;
        Observable *weatherData = nullptr;
    public:
        CurrentConditionDiplay() = default;
        CurrentConditionDiplay(Observable *my_WeatherStation) : weatherData(my_WeatherStation){
            weatherData->registerObserver(this);
        }
        void update(double t, double h, double p) override;
        void display() const override;
};

inline void CurrentConditionDiplay::update(double t, double h, double p){
    temprature = t;
    humanity = h;
    display();
}

inline void CurrentConditionDiplay::display() const{
    std::cout << "Current Condition " << temprature << " F degree and "<< humanity << "% humanity" << "\n";
}

#endif