#include "pch.hpp"

#include "Examples.hpp"

#include "drawable/shape/CShape/ellipse/Ellipse.hpp"
#include "drawable/shape/CShape/rectangle/Rectangle.hpp"
#include "drawable/shape/CShape/triangle/Triangle.hpp"
#include "drawable/shape/group_shape/CGroupShape/GroupShape.hpp"

#include "drawable/common/rect/RectD.hpp"

IStylePtr CreateStyle(RGBAColor color, bool enableOnInit = true)
{
	return std::make_unique<Style>(color, enableOnInit);
}

void FormSlideWithComputerScreenPicture(ISlide& slide)
{
	auto shapesGroup = GroupShape::Create();

	auto screenWrapperRect = std::make_shared<Rectangle>(RectD{ 10, 10, 800, 600 }, CreateStyle(0xFFD700FF), CreateStyle(0xFFFFFFFF));

	auto sfmlogo = GroupShape::Create();
	auto greenEllipse = std::make_shared<Ellipse>(PointD{ 300, 300 }, 100, 100, CreateStyle(0x43ff64d9), CreateStyle(0x43ff64d9));
	auto greenRect = std::make_shared<Rectangle>(RectD{ 250, 250, 200, 200 }, CreateStyle(0x43ff64d9), CreateStyle(0xFFFFFFFF));
	auto onOffBtn = std::make_shared<Triangle>(PointD{ 330, 250 }, PointD{ 370, 250 }, PointD{ 350, 320 }, CreateStyle(0x43ff64d9), CreateStyle(0xFFFFFFFF));
	sfmlogo->InsertShape(greenRect);
	sfmlogo->InsertShape(greenEllipse);
	sfmlogo->InsertShape(onOffBtn);

	auto s = sfmlogo->GetGroup();

	shapesGroup->InsertShape(screenWrapperRect);
	shapesGroup->InsertShape(sfmlogo);

	auto& slideShapes = slide.GetShapes();
	for (size_t i = slideShapes.GetShapesCount(); i > 0; --i)
	{
		slideShapes.RemoveShapeAtIndex(i - 1);
	}

	slideShapes = slide.GetShapes();
	slideShapes.InsertShape(shapesGroup);

	auto shapeOutOfGroup = std::make_shared<Rectangle>(RectD{ 200, 600, 100, 20 }, CreateStyle(0xFF0000FF), CreateStyle(0xFF0000FF));
	slideShapes.InsertShape(shapeOutOfGroup);
}

void SetFillColorToShapesInSlide(ISlide& slide)
{
	auto& shapes = slide.GetShapes();

	for (size_t i = 0, total = shapes.GetShapesCount(); i < total; ++i)
	{
		auto& shape = shapes.GetShapeAtIndex(i);
		shape->GetFillStyle().SetColor(0x00FFFFFF);
	}
}

void SetSizeToShapesInSlide(ISlide& slide)
{
	auto& shapes = slide.GetShapes();

	auto& shape = shapes.GetShapeAtIndex(0);
	shape->SetFrame(RectD(20, 20, 800, 400));
}