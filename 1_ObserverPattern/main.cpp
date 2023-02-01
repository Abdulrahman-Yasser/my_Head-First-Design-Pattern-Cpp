#include "WeatherStationServer/WeatherStation_ServerData.hpp"
#include "Display_Client_Files/CurrentConditionDisplay.hpp"
#include "Display_Client_Files/StatisticDisplay.hpp"
#include "Display_Client_Files/ForecastDisplay.hpp"

#include <iostream>

int main(){
    WeatherStation my_Station;
    /*
    First way to subscribe : 
    */
    CurrentConditionDiplay my_CurrentConditionDiplay(&my_Station);
    ForecastDisplay my_ForecastDisplay(&my_Station);
    StatisticDisplay my_StatisticDisplay(&my_Station);

    /*
    Second way to subscribe : 
    */
    // my_Station.registerObserver(&my_CurrentConditionDiplay);
    // my_Station.registerObserver(&my_ForecastDisplay);
    // my_Station.registerObserver(&my_StatisticDisplay);

	my_Station.setMeasurements(80, 65, 30.4f);
	my_Station.setMeasurements(82, 70, 29.2f);
	my_Station.setMeasurements(78, 90, 29.2f);

}
