#ifndef DRAFT_PICTURE_DRAFT_HPP
#define DRAFT_PICTURE_DRAFT_HPP

#include "../Shapes/IShape.hpp"

class PictureDraft
{
public:
	template <typename ShapePtr>
	void AddShape(ShapePtr&& ptr)
	{
		m_shapes.emplace_back(std::forward<ShapePtr>(ptr));
	}

	const ShapeSharedPtr& GetShape(size_t index) const;
	size_t GetShapeCount() const;

	const auto begin() const
	{
		return m_shapes.begin();
	}

	const auto end() const
	{
		return m_shapes.end();
	}

private:
	std::vector<ShapeSharedPtr> m_shapes{};
};

#endif
