#include "Shape.h"

Shape::Shape(const std::string& name, const std::string& type) : _name(name), _type(type)
{
}

std::string Shape::getType() const
{
	return _type;
}

std::string Shape::getName() const
{
	return _name;
}

void Shape::printDetails()
{
	std::cout << "name: " << getName() << ", type: " << getType() << std::endl;
}
