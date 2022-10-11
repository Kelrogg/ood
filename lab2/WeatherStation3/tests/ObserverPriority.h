#ifndef LAB2_OBSERVERPRIORITY_H
#define LAB2_OBSERVERPRIORITY_H

#include "Observer.h"

template <typename Data = int>
class ObservableSubject : public CObservable<Data>
{
public:
    ObservableSubject()
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

template <typename Data = int>
class Observer : public IObserver<Data>
{
public:
    using OnUpdateEventFuncType = std::function<void()>;

    Observer(OnUpdateEventFuncType const& oue)
            : m_onUpdateEvent(oue)
    {
    }

private:
    void Update(const Data& data) override
    {
        m_onUpdateEvent();
    }

    OnUpdateEventFuncType m_onUpdateEvent;
};

#endif
