#include <iostream>

int main(void) {
	int x, y;
	std::cout << "Enter Two Numbers: ";
	std::cin >> x >> y;


	if (x > y) {
		std::cout << "x > y";
	}
	else {
		std::cout << "x < y";
	}

	return 0;
}