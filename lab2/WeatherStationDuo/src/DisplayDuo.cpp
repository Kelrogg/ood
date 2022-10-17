#include "pch.h"

#include "../header/DisplayDuo.h"

CDisplayDuo::CDisplayDuo(ObservableType const& streetStation, ObservableType const& homeStation)
    : m_streetStation(std::addressof(streetStation))
    , m_homeStation(std::addressof(homeStation))
{}

void CDisplayDuo::Update(const SWeatherInfo& data, IObservable<SWeatherInfo> const& updateSource)
{
   std::cout << (std::addressof(updateSource) == m_homeStation
                   ? "Home station:\n"
                   : std::addressof(updateSource) == m_streetStation
                   ? "Street station:\n"
                   : "Unknown station:\n");

   std::cout << "Current Temp " << data.temperature << '\n';
   std::cout << "Current Hum " << data.humidity << '\n';
   std::cout << "Current Pressure " << data.pressure << '\n';
   std::cout << "----------------" << '\n';
}