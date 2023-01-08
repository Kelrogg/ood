#include "pch.h"

#include "../header/Display.h"

void CDisplay::Update(const SWeatherInfo& data)
{
    std::cout << "Current Temp " << data.temperature << '\n';
    std::cout << "Current Hum " << data.humidity << '\n';
    std::cout << "Current Pressure " << data.pressure << '\n';
    std::cout << "Current Wind speed " << data.windInfo.windSpeed << '\n';
    std::cout << "Current Wind direction " << data.windInfo.windAngle << '\n';
    std::cout << "----------------" << '\n';
}