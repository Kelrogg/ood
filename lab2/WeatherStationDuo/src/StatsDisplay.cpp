#include "pch.h"

#include "../header/StatsDisplay.h"

CStatsDisplay::CStatsDisplay()
        : m_humidity()
        , m_pressure()
        , m_temperature()
{
}

void CStatsDisplay::Update(const SWeatherInfo& data)
{
    m_temperature.Refresh(data.temperature);
    m_pressure.Refresh(data.pressure);
    m_humidity.Refresh(data.humidity);

    std::cout << "Temperature:\n" << m_temperature.ToString() <<
                    "Pressure:\n" << m_pressure.ToString() <<
                    "Humidity:\n" << m_humidity.ToString() << '\n';
}