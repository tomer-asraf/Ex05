
#include "Arrow.h"

Arrow::Arrow(const Point& a, const Point& b, const std::string& type, const std::string& name) : 
	Shape(type, name), _source(a), _destination(b)
{
	if (a.distance(b) == 0)
	{
		std::cerr << "Error - An Arrow can not point from a point to itself." << std::endl;
		exit(EXIT_FAILURE);
	}	
}

Point Arrow::getSource()
{
	return _source;
}

Point Arrow::getDestination()
{
	return _destination;
}

//void Arrow::draw(const Canvas& canvas)
//{
//	canvas.draw_arrow(_source, _destination);
//}
//
//void Arrow::clearDraw(const Canvas& canvas)
//{
//	canvas.clear_arrow(_source, _destination);
//}

double Arrow::getArea()
{
	return 0.0;
}

double Arrow::getPerimeter()
{
	return _source.distance(_destination);
}

void Arrow::move(const Point& other)
{
	_source += other;
	_destination += other;
}

void Arrow::printDetails()
{
	Shape::printDetails();
	std::cout << ", source: " << _source << ", dest: " << _destination;
}


