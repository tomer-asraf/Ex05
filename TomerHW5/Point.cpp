#include "Point.h"

Point::Point() : 
	_x(0), _y(0)
{
}

Point::Point(const double& x, const double& y) : 
	_x(x), _y(y)
{
}

Point::~Point()
{
}

Point Point::operator+(const Point& other) const
{
	return Point(_x + other._x, _y + other._y);
}

Point& Point::operator+=(const Point& other)
{
	_x += other._x;
	_y += other._y;

	return *this;
}

double Point::getX() const
{
	return _x;
}

double Point::getY() const
{
	return _y;
}

double Point::distance(const Point& other) const
{
	return std::sqrt(std::pow(_x - other._x, 2) + std::pow(_y - other._y, 2));
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
	return os << "(" + std::to_string(p._x) + ", " + std::to_string(p._y) + ")";
}
