
//#include "Menu.h"
#include "Arrow.h"

int main()
{	
	Arrow a(Point(1, 1), Point(2, 1), "my_type", "tomer");
	
	std::cout << "************* Testing Arrow ************" << std::endl;
	std::cout << "- Initializing with: (1, 1), (2, 1), \"my_type\", \"tomer\"." << std::endl;
	std::cout << "perimeter: " << a.getPerimeter() << std::endl;
	std::cout << "area: " << a.getArea() << std::endl;
	std::cout << "moving by (1, 1)..." << std::endl;
	a.move(Point(1, 1));
	std::cout << "now the values are: src: " << a.getSource() << ", dest: " << a.getDestination() << std::endl;

	
	return 0;
}