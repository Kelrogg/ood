#ifndef TASK5_STATISTIC_DATA_H
#define TASK5_STATISTIC_DATA_H

#define _USE_MATH_DEFINES
#include <math.h>

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


private:
    T m_min;
    T m_max;
    T m_accumulatedValue;
    std::size_t m_valueQuantity;
};

inline constexpr int MAX_ANGLE = 360;
inline constexpr int REVOLVED_ANGLE = 180;

class CAngleStatisticData
{
public:
    void Refresh(const double& nextValue)
    {
        m_resultingY += std::sin(ToRadians(nextValue));
        m_resultingX += std::cos(ToRadians(nextValue));

        auto x = ToDegrees(std::atan2(m_resultingY, m_resultingX)) + MAX_ANGLE;
        m_average = std::fmod(x, MAX_ANGLE);
    }

    double GetAverage() const noexcept
    {
        return m_average;
    }

private:
    double ToRadians(double degrees) const
    {
        return M_PI * degrees / REVOLVED_ANGLE;
    }

    double ToDegrees(double radians) const
    {
        return REVOLVED_ANGLE * radians / M_PI;
    }

    double m_resultingY = 0;
    double m_resultingX = 0;
    double m_average = 0;
};

template <typename T>
static std::string CStatisticDataToString(CStatisticData<T> const& data)
{
    return std::string(
            "Max: " + std::to_string(data.GetMax()) + '\n' +
            "Min: " + std::to_string(data.GetMin()) + '\n' +
            "Average: " + std::to_string(data.GetAverage()) + '\n'
    );
}

static std::string CAngleStatisticDataToString(CAngleStatisticData const& data)
{
    return std::string(
            "Average: " + std::to_string(data.GetAverage()) + '\n'
    );
}

#endif