#include "pch.h"

#include "WeatherData.h"
#include "DisplayDuo.h"
#include "StatsDisplay.h"

int main()
{
	CWeatherData homeStation;
	CWeatherData streetStation;

	CDisplayDuo display(homeStation, streetStation);
    homeStation.RegisterObserver(display);
    streetStation.RegisterObserver(display);

	CStatsDisplay statsDisplay(homeStation, streetStation);
	homeStation.RegisterObserver(statsDisplay, 1);
	streetStation.RegisterObserver(statsDisplay, 1);

	streetStation.SetMeasurements(3, 0.7, 760);
	homeStation.SetMeasurements(4, 0.8, 761);

	homeStation.RemoveObserver(statsDisplay);

	streetStation.SetMeasurements(10, 0.8, 761);
	homeStation.SetMeasurements(-10, 0.8, 761);
	return 0;
}