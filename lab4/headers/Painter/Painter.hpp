#ifndef PAINTER_PAINTER_H_
#define PAINTER_PAINTER_H_

#include "../Canvas/ICanvas.hpp"
#include "../Draft/PictureDraft.hpp"

class Painter
{
public:
	void DrawPicture(const PictureDraft& draft, const ICanvasSharedPtr& canvas);
};

#endif