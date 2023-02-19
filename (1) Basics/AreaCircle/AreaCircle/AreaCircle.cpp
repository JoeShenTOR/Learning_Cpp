#include <iostream>

void areaCircle() {
	float radius;
	float area;
	std::cout << "Enter Radius: ";
	std::cin >> radius;
	
	area = (3.14) * (radius * radius);
	std::cout << "Area is: " << area << std::endl;

}

int main() {
	areaCircle();

	return 0;
}