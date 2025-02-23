
#pragma once

#include <cmath>
#include <ostream>
#include <string>

class Point
{
public:

	// Constructors
	Point(); // initialize values to 0
	Point(const double& x, const double& y);

	// Destructor
	~Point();
	
	// Operators
	Point operator+(const Point& other) const;
	Point& operator+=(const Point& other);

	// Getters
	double getX() const;
	double getY() const;

	// Methods
	double distance(const Point& other) const;

private:
	friend std::ostream& operator<<(std::ostream& os, const Point& p);

	double _x;
	double _y;
};
