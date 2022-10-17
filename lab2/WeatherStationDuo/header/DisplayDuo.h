#ifndef TASK4_DISPLAY_H
#define TASK4_DISPLAY_H

#include "Observer.h"
#include "WeatherData.h"

class CDisplayDuo: public IObserver<SWeatherInfo>
{
public:
    using ObservableType = IObservable<SWeatherInfo>;
    CDisplayDuo(ObservableType const& streetStation, ObservableType const& homeStation);
private:
    void Update(SWeatherInfo const& data, IObservable<SWeatherInfo> const& updateSource) override;

    const ObservableType* m_streetStation;
    const ObservableType* m_homeStation;
};

#endif