#ifndef LAB3_OBSERVER_H
#define LAB3_OBSERVER_H

template <typename T>
class IObservable;

template <typename T>
class IObserver
{
public:
	virtual void Update(T const& data) = 0;
	virtual ~IObserver() = default;
};

template <typename T>
class IObservable
{
public:
	virtual ~IObservable() = default;
	virtual void RegisterObserver(IObserver<T> & observer, std::size_t priority) = 0;
	virtual void NotifyObservers() = 0;
	virtual void RemoveObserver(IObserver<T> & observer) = 0;
};

template <class T>
class CObservable : public IObservable<T>
{
public:
	using ObserverType = IObserver<T>;

	void RegisterObserver(ObserverType& observer, std::size_t priority = 0) override
	{
        auto search = std::find_if(m_observers.begin(), m_observers.end(),
                                   [&observer](auto& p){ return p.second == &observer; });
        if (search == m_observers.end())
        {
            m_observers.emplace(priority, std::addressof(observer));
        }
	}

	void NotifyObservers() override
	{
		T data = GetData();
		auto copy(m_observers);

		for (auto & [_, observer] : copy)
		{
			observer->Update(data);
		}
	}

	void RemoveObserver(ObserverType & observer) override
	{
        auto search = std::find_if(m_observers.begin(), m_observers.end(),
                               [&observer](auto& p){ return p.second == &observer; });
        if (search != m_observers.end())
        {
            m_observers.erase(search);
        }
	}

protected:
	virtual T GetData() const = 0;

private:
	std::multimap<std::size_t, ObserverType *, std::greater<std::size_t>> m_observers;
};

#endif