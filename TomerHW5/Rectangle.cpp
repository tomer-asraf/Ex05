#include "Rectangle.h"



myShapes::Rectangle::Rectangle(const Point& a, const double& length, const double& width, const std::string& type, const std::string& name) :
	Polygon(type, name)
{
	_points = { a, Point(a.getX() + length, a.getY()), Point(a.getX() + length, a.getY() - width), Point(a.getX(), a.getY() - width) };
}

//void myShapes::Rectangle::draw(const Canvas& canvas)
//{
//	canvas.draw_rectangle(_points[0], _points[1]);
//}
//
//void myShapes::Rectangle::clearDraw(const Canvas& canvas)
//{
//	canvas.clear_rectangle(_points[0], _points[1]);
//}


