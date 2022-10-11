#include "pch.h"

#include "../header/Display.h"

void CDisplay::Update(const SWeatherInfo& data)
{
    std::cout << "Current Temp " << data.temperature << '\n';
    std::cout << "Current Hum " << data.humidity << '\n';
    std::cout << "Current Pressure " << data.pressure << '\n';
    std::cout << "----------------" << std::endl;
}