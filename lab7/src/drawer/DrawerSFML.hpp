#pragma once

#include <SFML/Graphics/RenderTarget.hpp>

#include "canvas/ICanvas.hpp"
#include "drawable/slide/ISlide.hpp"

class DrawerSFML
{
public:
	using SlideSharedPtr = ISlideSharedPtr;
	using RenderTarget = std::shared_ptr<sf::RenderTarget>;

	explicit DrawerSFML(const RenderTarget& sfmlRenderTarget, const SlideSharedPtr& slide);

	void SetSlide(const SlideSharedPtr& slide);
	void Draw();

private:
	using Canvas = ICanvasSharedPtr;

	SlideSharedPtr m_slide;
	Canvas m_sfmlCanvas;
};
