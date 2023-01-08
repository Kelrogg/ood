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
    m_windSpeed.Refresh(data.windInfo.windSpeed);
    m_windDirection.Refresh(data.windInfo.windAngle);

    std::cout << "Temperature:\n" << CStatisticDataToString(m_temperature) <<
                    "Pressure:\n" << CStatisticDataToString(m_pressure) <<
                    "Humidity:\n" << CStatisticDataToString(m_humidity) << 
                    "Wind speed:\n" << CStatisticDataToString(m_windSpeed) <<
                    "Wind direction:\n" << CAngleStatisticDataToString(m_windDirection) << '\n';
}