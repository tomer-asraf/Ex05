
#pragma once

#include <vector>

#include "Shape.h"
#include "Canvas.h"

class Menu
{
public:

	Menu();
	~Menu();

	void addShape();


private: 
	Canvas _canvas;
	std::vector<Shape> _shapes;
};

