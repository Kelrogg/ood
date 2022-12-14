#ifndef SHAPES_COMMON_SHAPE_TYPE_HPP_
#define SHAPES_COMMON_SHAPE_TYPE_HPP_

#include "../utility/IEqualString.hpp"

enum class ShapeType
{
	ELLIPSE = 0,
	RECTANGLE,
	REGULAR_POLYGON,
	TRIANGLE,
	UNKNOWN,
};

namespace shapes_string_types
{

constexpr std::string_view RECTANGLE_TYPE = "rectangle";
constexpr std::string_view TRIANGLE_TYPE = "triangle";
constexpr std::string_view ELLIPSE_TYPE = "ellipse";
constexpr std::string_view REGULAR_POLYGON_TYPE = "regular-polygon";

};

template <typename StringT>
inline ShapeType StringToShapeType(StringT&& str)
{
	using namespace shapes_string_types;

	if (IEqualStrings(str, RECTANGLE_TYPE))
	{
		return ShapeType::RECTANGLE;
	}
	if (IEqualStrings(str, TRIANGLE_TYPE))
	{
		return ShapeType::TRIANGLE;
	}
	if (IEqualStrings(str, ELLIPSE_TYPE))
	{
		return ShapeType::ELLIPSE;
	}
	if (IEqualStrings(str, REGULAR_POLYGON_TYPE))
	{
		return ShapeType::REGULAR_POLYGON;
	}
	return ShapeType::UNKNOWN;
}

inline std::istream& operator>>(std::istream& lhs, ShapeType& rhs)
{
	if (!std::istream::sentry(lhs))
	{
		return lhs;
	}

	std::string src;
	lhs >> src;

	auto res = StringToShapeType(std::move(src));
	if (res == ShapeType::UNKNOWN)
	{
		lhs.setstate(std::ios_base::failbit);
		return lhs;
	}
	rhs = res;

	return lhs;
}

#endif
