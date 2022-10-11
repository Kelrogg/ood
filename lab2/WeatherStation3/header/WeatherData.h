#ifndef LAB3_WEATHER_DATA_H
#define LAB3_WEATHER_DATA_H

#include "Observer.h"

struct SWeatherInfo
{
    double temperature = 0;
    double humidity = 0;
    double pressure = 0;
};

class CWeatherData : public CObservable<SWeatherInfo>
{
public:
    CWeatherData();
	double GetTemperature() const;
	double GetHumidity() const;
	double GetPressure() const;

	void MeasurementsChanged();

	void SetMeasurements(double temp, double humidity, double pressure);
protected:
	SWeatherInfo GetData() const override;
private:
	double m_temperature = 0.0;
	double m_humidity = 0.0;	
	double m_pressure = 760.0;	
};

#endif