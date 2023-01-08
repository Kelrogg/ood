#ifndef GRAPHICS_LIB_CANVAS_HPP
#define GRAPHICS_LIB_CANVAS_HPP

#include "ICanvas.hpp"

// Пространство имен графической библиотеки (недоступно для изменения)
namespace graphics_lib
{
class Canvas : public ICanvas
{
public:
	void MoveTo(int x, int y) override;
	void LineTo(int x, int y) override;
};
}

#endif