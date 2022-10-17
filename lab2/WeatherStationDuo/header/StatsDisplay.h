#ifndef TASK4_STATS_DISPLAY_H
#define TASK4_STATS_DISPLAY_H

#include "WeatherData.h"
#include "StatisticData.h"

class CStatsDisplay : public IObserver<SWeatherInfo>
{
public:
    using ObservableType = IObservable<SWeatherInfo>;
    CStatsDisplay(ObservableType const& streetStation, ObservableType const& homeStation);
private:
    void Update(SWeatherInfo const& data, IObservable<SWeatherInfo> const& updateSource) override;

    enum Source
    {
        STREET,
        HOME,
        UNKNOWN
    };

    struct Statistic
    {
        CStatisticData<double> m_temperature;
        CStatisticData<double> m_humidity;
        CStatisticData<double> m_pressure;
    };

    std::unordered_map<Source, Statistic> m_statistics;

    const ObservableType* m_streetStation;
    const ObservableType* m_homeStation;
};

#endif