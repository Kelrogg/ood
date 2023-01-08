#include "pch.hpp"

#include "Canvas/SVGCanvas.hpp"
#include "Designer/Designer.hpp"
#include "Painter/Painter.hpp"

int main(int, char**)
{
	try
	{
		Designer designer{ std::move(std::make_shared<ShapeFactory>()) };
		auto draft = designer.CreateDraft(std::cin);

		Painter painter{};
		ICanvasSharedPtr canvas = std::make_shared<SVGCanvas>("output.svg", 800, 400);
		painter.DrawPicture(draft, canvas);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}

	return 0;
}
