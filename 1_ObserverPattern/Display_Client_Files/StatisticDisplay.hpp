#ifndef STATISTICDISPLAY_H
#define STATISTICDISPLAY_H

#include "../PatternInterface/Observer.hpp"
#include "../PatternInterface/Observable.hpp"

#include "DisplayElement.hpp"


#include <iostream>

class StatisticDisplay : public Observer, public DisplayElement{
    private:
        float minTemp = 1000.0;
        float maxTemp = 0.0;
        float tempSum = 0.0;
        int numberOfReading = 0;
        Observable *weatherData = nullptr;
    public:
        StatisticDisplay() = default;
        StatisticDisplay(Observable *my_WeatherStation) : weatherData(my_WeatherStation){
            weatherData->registerObserver(this);
        }
        void update(double t, double h, double p) override;
        void display() const override;
};

inline void StatisticDisplay::update(double t, double h, double p){
    tempSum += t;
    ++numberOfReading;
    if(t > maxTemp){
        maxTemp = t;
    }
    if(t < minTemp){
        minTemp = t;
    }
    display();
}

inline void StatisticDisplay::display() const{
    std::cout << "Avg/Max/Min Temprature = " << tempSum / numberOfReading << "/" << maxTemp << "/" << minTemp << "\n";
}


#endif