#pragma once

#include "../IGroupShape.hpp"

#include "../../style/CStyle/StyleComposite.hpp"

class GroupShape : public IGroupShape
	, public std::enable_shared_from_this<GroupShape>
{
public:
	static IGroupShapeSharedPtr Create();
	static IGroupShapePtr CreateUnique();

	const RectD& GetFrame() const final;
	void SetFrame(const RectD& rect) final;

	IStyle& GetOutlineStyle() final;
	const IStyle& GetOutlineStyle() const final;

	IStyle& GetFillStyle() final;
	const IStyle& GetFillStyle() const final;

	IGroupShapeSharedPtr GetGroup() final;
	IGroupShapeConstSharedPtr GetGroup() const final;

	size_t GetShapesCount() const final;
	void InsertShape(const IShapeSharedPtr& shape, std::optional<size_t> position = std::nullopt) final;
	const IShapeSharedPtr& GetShapeAtIndex(size_t index) final;
	void RemoveShapeAtIndex(size_t index) final;

	void Draw(Canvas& canvas) final;

protected:
	explicit GroupShape();

private:
	using ShapesContainer = std::list<IShapeSharedPtr>;
	using GorupRectD = std::optional<RectD>;

	mutable GorupRectD m_groupRect;

	ShapesContainer m_containerShapes;
	StyleComposite m_fillStyle, m_oulineStyle;
};