#pragma once

template <typename T>
struct Point
{
	Point() = default;
	Point(T x, T y)
		: x(x)
		, y(y)
	{
	}

	T Distance(const Point& other) const;

	bool operator==(const Point& other) const;
	bool operator!=(const Point& other) const;

	T x, y;
};