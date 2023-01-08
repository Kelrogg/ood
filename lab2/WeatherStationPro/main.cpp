#include "pch.h"

#include "WeatherData.h"
#include "Display.h"
#include "StatsDisplay.h"

int main()
{
	CWeatherData wd;

	CDisplay display;
	wd.RegisterObserver(display);

	CStatsDisplay statsDisplay;
	wd.RegisterObserver(statsDisplay, 1);

	wd.SetMeasurements(3, 0.7, 760, 18, 90);
	wd.SetMeasurements(4, 0.8, 761, 10, 180);

	wd.RemoveObserver(statsDisplay);

	wd.SetMeasurements(10, 0.8, 761, 2, 360);
	wd.SetMeasurements(-10, 0.8, 761, 21, 0);
	return 0;
}