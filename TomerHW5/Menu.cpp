
#include "Menu.h"

Menu::Menu() 
{
	int option = 0;

	do {
		option = 0;

		std::cout << "Enter 0 to add a new shape." << std::endl;
		std::cout << "Enter 1 to modify or get information from a current shape." << std::endl;
		std::cout << "Enter 2 to delete all of the shapes." << std::endl;
		std::cout << "Enter 3 to exit." << std::endl;

		std::cin >> option;
		switch (option)
		{
		case 0:
		{

		}
		}

	} while (option != 3);
}

Menu::~Menu()
{
}

void Menu::addShape()
{
	int option = 0;
	std::string name;
	std::string type;

	std::cout << "Enter 0 to add a circle." << std::endl;
	std::cout << "Enter 1 to add an arrow." << std::endl;
	std::cout << "Enter 2 to add a triangle." << std::endl;
	std::cout << "Enter 3 to add a rectangle." << std::endl;

	std::cin >> option;

	switch (option)
	{
	case 0:
	{
		int x = 9, y = 0;
		double radius = 0;

		std::cout << "Please enter X: ";
		std::cin >> x;

		std::cout << "Please enter Y: ";
		std::cin >> y;

		std::cout << "Please enter radius: ";
		std::cin >> radius;

		std::cout << "Please enter the name of the shape :" << std::endl;
		//Wait Waitttttttttt I'm almost done, 15 more minuets and would have been perfect
	}
	}
		
		
		
		
}

