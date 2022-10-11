#ifndef LAB3_DISPLAY_H
#define LAB3_DISPLAY_H

#include "Observer.h"
#include "WeatherData.h"

class CDisplay: public IObserver<SWeatherInfo>
{
private:
    void Update(SWeatherInfo const& data) override;
};

#endif