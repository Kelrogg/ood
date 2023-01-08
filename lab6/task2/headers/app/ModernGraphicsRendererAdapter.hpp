#ifndef APP_MODERN_GRAPHICS_RENDERER_ADAPTER_HPP
#define APP_MODERN_GRAPHICS_RENDERER_ADAPTER_HPP

#include "graphics_lib/ICanvas.hpp"
#include "modern_graphics_lib/ModernGraphicsRenderer.hpp"
#include "modern_graphics_lib/Point.hpp"

namespace app
{

class ModernGraphicsRendererAdapter : public graphics_lib::ICanvas
	, public modern_graphics_lib::ModernGraphicsRenderer
{
public:
	ModernGraphicsRendererAdapter(std::ostream& os);

	void MoveTo(int x, int y) override;
	void LineTo(int x, int y) override;

private:
	using Target = graphics_lib::ICanvas;
	using Adaptee = modern_graphics_lib::ModernGraphicsRenderer;

	modern_graphics_lib::Point m_beginPoint;
	bool m_drawing;
};

}

#endif