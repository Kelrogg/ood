#ifndef TASK5_WEATHER_DATA_H
#define TASK5_WEATHER_DATA_H

#include "Observer.h"

struct SWindInfo
{
    double windSpeed = 0;
    unsigned short windAngle = 0;
};

struct SWeatherInfo
{
    double temperature;
    double humidity;
    double pressure;
	SWindInfo windInfo;
};

class CWeatherData : public CObservable<SWeatherInfo>
{
public:
    CWeatherData();
	double GetTemperature() const;
	double GetHumidity() const;
	double GetPressure() const;
    SWindInfo GetWindInfo() const;

	void MeasurementsChanged();

	void SetMeasurements(double temp, double humidity, double pressure, double windSpeed, unsigned short windDirection);
protected:
	SWeatherInfo GetData() const override;
private:
	double m_temperature = 0.0;
	double m_humidity = 0.0;	
	double m_pressure = 760.0;
    SWindInfo m_windInfo;
};

#endif