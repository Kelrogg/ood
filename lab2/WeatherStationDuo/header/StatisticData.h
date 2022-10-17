#ifndef TASK4_STATISTIC_DATA_H
#define TASK4_STATISTIC_DATA_H

template <typename T>
class CStatisticData
{
public:
    CStatisticData()
            : m_min(std::numeric_limits<T>::max())
            , m_max(std::numeric_limits<T>::min())
            , m_accumulatedValue(0)
            , m_valueQuantity(0)
    {
    }

    void Refresh(T const& nextValue)
    {
        m_min = std::min(m_min, nextValue);
        m_max = std::max(m_max, nextValue);

        m_accumulatedValue += nextValue;

        ++m_valueQuantity;
    }

    T GetMin() const
    {
        return m_min;
    }

    T GetMax() const
    {
        return m_max;
    }

    T GetAverage() const
    {
        return m_accumulatedValue / m_valueQuantity;
    }

    std::string ToString()
    {
        std::stringstream result;
        result << "Max: " << m_max << '\n' <<
                "Min: " << m_min << '\n' <<
                "Average: " << GetAverage() << '\n';
        return result.str();
    }

private:
    T m_min;
    T m_max;
    T m_accumulatedValue;
    std::size_t m_valueQuantity;
};

#endif