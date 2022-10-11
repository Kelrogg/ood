#ifndef STATS_DISPLAY_H
#define STATS_DISPLAY_H

#include "iostream"
#include "WeatherData.h"
#include "StatisticData.h"

class CStatsDisplay : public IObserver<SWeatherInfo>
{
public:
    CStatsDisplay();
private:
    void Update(SWeatherInfo const& data) override;

    CStatisticData<double> m_temperature;
    CStatisticData<double> m_humidity;
    CStatisticData<double> m_pressure;
};

#endif