#include "Circle.h"

Circle::Circle(const Point& center, const double& radius, const std::string& type, const std::string& name) : 
	Shape(type, name), _center(center), _radius(radius)
{

}

Point Circle::getCenter() const
{
	return _center;
}

double Circle::getRadius() const
{
	return _radius;
}

double Circle::getArea()
{
	return PI * std::pow(_radius, 2);
}

double Circle::getPerimeter()
{
	return 2 * PI * _radius;
}

void Circle::move(const Point& other)
{
	_center += other;
}

void Circle::printDetails()
{
	Shape::printDetails();
	std::cout << ", center: " << _center << ", radius: " << std::to_string(_radius);
}

//void Circle::draw(const Canvas& canvas)
//{
//	canvas.draw_circle(getCenter(), getRadius());
//}
//
//void Circle::clearDraw(const Canvas& canvas)
//{
//	canvas.clear_circle(getCenter(), getRadius());
//}
