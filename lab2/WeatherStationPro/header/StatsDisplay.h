#ifndef LAB3_STATS_DISPLAY_H
#define LAB3_STATS_DISPLAY_H

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

    CAngleStatisticData m_windDirection;
    CStatisticData<double> m_windSpeed;

};

#endif