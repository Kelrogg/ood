#ifndef GRAPHICS_LIB_ICANVAS_HPP
#define GRAPHICS_LIB_ICANVAS_HPP

// Пространство имен графической библиотеки (недоступно для изменения)
namespace graphics_lib
{
class ICanvas
{
public:
	virtual void MoveTo(int x, int y) = 0;
	virtual void LineTo(int x, int y) = 0;
	virtual ~ICanvas() = default;
};
}

#endif