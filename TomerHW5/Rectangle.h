
#pragma once

#include "Polygon.h"

namespace myShapes
{
	// Calling it MyRectangle becuase Rectangle is taken by global namespace.
	class Rectangle : public Polygon
	{
	public:

		// Constructor
		// There's a need only for the top left corner 
		Rectangle(const Point& a, const double& length, const double& width, const std::string& type, const std::string& name);

		// Methods
		//void draw(const Canvas& canvas) override;
		//void clearDraw(const Canvas& canvas) override;

		// override functions if need (virtual + pure virtual)

	private:
		double _length, _width;
	};
}