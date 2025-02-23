
#pragma once

#include <iostream>

#include "Shape.h"

class Arrow : public Shape
{
public:

	// Constructor
	Arrow(const Point& a, const Point& b, const std::string& type, const std::string& name);

	// Getters
	Point getSource();
	Point getDestination();

	// Methods
	//void draw(const Canvas& canvas) override;
	//void clearDraw(const Canvas& canvas) override;

	double getArea() override;
	double getPerimeter() override;

	void move(const Point& other) override; // add the Point to all the points of shape
	void printDetails() override;


private:
	Point _source, _destination;
};