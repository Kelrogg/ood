#ifndef CANVAS_SVG_CANVAS_HPP
#define CANVAS_SVG_CANVAS_HPP

//#include "/usr/local/lib/wx/include/gtk3-unicode-3.3/wx/setup.h"
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include "wx/dcsvg.h"
#include "wx/notebook.h"

#include "ICanvas.hpp"

class SVGCanvas : public ICanvas, public wxFrame
{
public:
	SVGCanvas(const wxString& outputFileName, unsigned int width, unsigned int height);

	void DrawEllipse(const Point& center, unsigned int verticalR, unsigned int horizontalRadius) final;
	void DrawLine(const Point& from, const Point& to) final;
	void DrawRegularPolygon(const std::vector<Point>& points) final;
	void SetColor(Color color) final;

private:
	wxSVGFileDC m_svgFile;
	//wxDECLARE_EVENT_TABLE();
};

#endif
