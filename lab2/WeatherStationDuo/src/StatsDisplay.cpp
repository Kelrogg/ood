#include "pch.h"

#include "../header/StatsDisplay.h"

CStatsDisplay::CStatsDisplay(ObservableType const& streetStation, ObservableType const& homeStation)
        : m_streetStation(std::addressof(streetStation))
        , m_homeStation(std::addressof(homeStation))
{
}

void CStatsDisplay::Update(const SWeatherInfo& data, IObservable<SWeatherInfo> const& updateSource)
{
    Source place = (std::addressof(updateSource) == m_homeStation
        ? Source::HOME
        : std::addressof(updateSource) == m_streetStation
        ? Source::STREET
        : Source::UNKNOWN);

    m_statistics[place].m_temperature.Refresh(data.temperature);
    m_statistics[place].m_pressure.Refresh(data.pressure);
    m_statistics[place].m_humidity.Refresh(data.humidity);

    std::cout << (place == Source::HOME
        ? "Home station\n"
        : place == Source::STREET
        ? "Street station\n"
        : "Unknown station\n");

    std::cout << "Temperature:\n" << m_statistics[place].m_temperature.ToString() <<
                    "Pressure:\n" << m_statistics[place].m_pressure.ToString() <<
                    "Humidity:\n" << m_statistics[place].m_humidity.ToString() << '\n';
}