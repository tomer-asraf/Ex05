#include "Triangle.h"

Triangle::Triangle(const Point& a, const Point& b, const Point& c, const std::string& type, const std::string& name) :
	Polygon(type, name)
{
	double ab = a.distance(b), bc = b.distance(c), ca = c.distance(a);
	if (!(ab + bc > ca && ab + ca > bc && bc + ca > ab))
	{
		std::cerr << "Error - Those Points does not form a valid triangle." << std::endl;
		exit(EXIT_FAILURE);
	}

	_points = { a, b, c };
}

//void Triangle::draw(const Canvas& canvas)
//{
//	canvas.draw_triangle(_points[0], _points[1], _points[2]);
//}
//
//void Triangle::clearDraw(const Canvas& canvas)
//{
//	canvas.clear_triangle(_points[0], _points[1], _points[2]);
//}


