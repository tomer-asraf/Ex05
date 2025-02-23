
#pragma once

#include <string>
#include "Polygon.h"

class Triangle : public Polygon
{
public:
	
	// Constructor
	Triangle(const Point& a, const Point& b, const Point& c, const std::string& type, const std::string& name);

	// Methods
	//void draw(const Canvas& canvas) override;
	//void clearDraw(const Canvas& canvas) override;
};