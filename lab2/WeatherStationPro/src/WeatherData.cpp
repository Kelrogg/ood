#include "pch.h"

#include "../header/WeatherData.h"

CWeatherData::CWeatherData()
        : m_temperature(0.0)
        , m_humidity(0.0)
        , m_pressure(760.0)
        , m_windInfo()
{
}

double CWeatherData::GetTemperature() const
{
    return m_temperature;
}

double CWeatherData::GetHumidity() const
{
    return m_humidity;
}

double CWeatherData::GetPressure() const
{
    return m_pressure;
}

SWindInfo CWeatherData::GetWindInfo() const
{
    return m_windInfo;
}

void CWeatherData::MeasurementsChanged()
{
    NotifyObservers();
}

void CWeatherData::SetMeasurements(double temp, double humidity, double pressure, double windSpeed, unsigned short windDirection)
{
    m_humidity = humidity;
    m_temperature = temp;
    m_pressure = pressure;
    m_windInfo.windSpeed = windSpeed;
    m_windInfo.windAngle = windDirection;

    MeasurementsChanged();
}

SWeatherInfo CWeatherData::GetData() const
{
    SWeatherInfo info;
    info.temperature = GetTemperature();
    info.humidity = GetHumidity();
    info.pressure = GetPressure();
    info.windInfo = GetWindInfo();
    return info;
}