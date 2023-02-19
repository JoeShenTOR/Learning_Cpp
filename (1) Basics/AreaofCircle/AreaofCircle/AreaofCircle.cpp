#include <iostream>

// Finds area of Circle

int main() {
	float radius;
	float area;

	std::cout << "Enter Radius of Circle: ";
	std::cin >> radius;

	area = 3.1425 * radius * radius;

	std::cout << "Area: " << area << std::endl;

	return 0;
}