
#pragma once

#include <vector>
#include "Shape.h"

class Polygon : public Shape
{
public:

	// Constructor
	Polygon(const std::string& type, const std::string& name);

	// Methods

	// Getters
	std::vector<Point> getPoints() const;

	// override functions if need (virtual + pure virtual)
	double getArea() override;
	double getPerimeter() override;

	void move(const Point& other) override; // add the Point to all the points of shape
	
	//allow for a derived class to change printing logic
	virtual void printDetails() override;

protected:
	std::vector<Point> _points;
};