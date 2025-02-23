
#pragma once

#include <iostream>
#include <string>
#include "Point.h"
//#include "Canvas.h"

class Shape 
{
public:

	// Constructor
	Shape(const std::string& name, const std::string& type);

	// Destructor
	virtual ~Shape() = default;

	// Getters
	std::string getType() const;
	std::string getName() const;

	// Methods
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	
	virtual void move(const Point& other) = 0; // add the Point to all the points of shape
	virtual void printDetails();

	//virtual void draw(const Canvas& canvas) = 0;
	//virtual void clearDraw(const Canvas& canvas) = 0;

private:
	std::string _name;
	std::string _type;
};