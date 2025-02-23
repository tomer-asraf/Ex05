#include "Polygon.h"

Polygon::Polygon(const std::string& type, const std::string& name) : 
	Shape(type, name)
{
}

std::vector<Point> Polygon::getPoints() const
{
	return _points;
}

double Polygon::getArea()
{
	int numPoints = _points.size();
	
	double area = 0;
	for (int i = 0; i < numPoints; i++)
	{
		// next point, wrapping around
		int j = (i + 1) % numPoints;
		area += (_points[i].getX() * _points[j].getY()) - (_points[j].getX() * _points[i].getY());
	}

	return std::abs(area) / 2.0;
}

double Polygon::getPerimeter()
{
	double perimeter = 0;
	int numPoints = _points.size();

	for (int i = 0; i < numPoints; i++)
	{
		perimeter += _points[i].distance(_points[(i + 1) % numPoints]);
	}

	return perimeter;
}

void Polygon::move(const Point& other)
{
	for (auto& point : _points)
	{
		point += other;
	}
}

void Polygon::printDetails()
{
	Shape::printDetails();
	std::cout << ", points: [";

	int numPoints = _points.size();
	for (int i = 0; i < numPoints; i++)
	{
		std::cout << _points[i];

		if (i + 1 < numPoints)
		{
			std::cout << ", ";
		}
	}

	std::cout << "]";
}



