#ifndef LAB2_DANGEROUS_OBSERVER_H
#define LAB2_DANGEROUS_OBSERVER_H

#include "Observer.h"

using Data = int;

class DangerousObservable : public CObservable<Data>
{
public:
    DangerousObservable()
            : m_data()
    {
    }

protected:
    Data GetData() const override
    {
        return m_data;
    }

private:
    Data m_data;
};

class DangerousObserver : public IObserver<Data>
{
public:
    using OnUpdateEvent = std::function<void()>;

    DangerousObserver(const OnUpdateEvent& e)
            : m_event(e)
    {
    }

private:
    void Update(const Data& data) override
    {
        m_event();
    }

    OnUpdateEvent m_event;
};

#endif