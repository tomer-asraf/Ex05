
#pragma once

#include "Shape.h"
#include "Point.h"

#define PI 3.14

class Circle : public Shape
{
public:

	// Constructor
	Circle(const Point& center, const double& radius, const std::string& type, const std::string& name);

	// Getters
	Point getCenter() const;
	double getRadius() const;

	// Methods
	//void draw(const Canvas& canvas) override;
	//void clearDraw(const Canvas& canvas) override;

	// add fields
	//override functions if need (virtual + pure virtual)
	double getArea() override;
	double getPerimeter() override;

	void move(const Point& other) override; // add the Point to all the points of shape
	void printDetails() override;

private:
	Point _center;
	double _radius;
};