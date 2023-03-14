#ifndef FORECASTDIPLAY_H
#define FORECASTDIPLAY_H

#include "../PatternInterface/Observer.hpp"
#include "../PatternInterface/Observable.hpp"

#include "DisplayElement.hpp"


#include <iostream>

class ForecastDisplay : public Observer, public DisplayElement{
    private:
        double currentPressure = 0.0;
        double PrevPressure = 0.0;
        Observable *weatherData = nullptr;
    public:
        ForecastDisplay() = default;
        ForecastDisplay(Observable *my_WeatherStation) : weatherData(my_WeatherStation){
            weatherData->registerObserver(this);
        }
        void update(double t, double h, double p) override;
        void display() const override;
};

inline void ForecastDisplay::update(double t, double h, double p){
    PrevPressure = currentPressure;
    currentPressure = p;
    display();
}

inline void ForecastDisplay::display() const{
    std::cout << "Forcast: ";
    if(currentPressure > PrevPressure){
        std::cout << "Improving weather on the way\n";
    }else if(currentPressure == PrevPressure){
        std::cout << "Forcast: More of the same\n";
    }else if(currentPressure < PrevPressure){
        std::cout << "Forcast: Watch out for cooler, rainy weather\n";
    }
}


#endif