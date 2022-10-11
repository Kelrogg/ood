#ifndef DISPLAY_H
#define DISPLAY_H

#include "Observer.h"
#include "WeatherData.h"
#include "iostream"

class CDisplay: public IObserver<SWeatherInfo>
{
private:
    void Update(SWeatherInfo const& data) override;
};

#endif