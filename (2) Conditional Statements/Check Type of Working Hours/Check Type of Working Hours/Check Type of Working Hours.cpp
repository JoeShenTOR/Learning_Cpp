#include <iostream>

int main(void) {
	int hours;
	std::cout << "Enter Hours: ";
	std::cin >> hours;

	if (hours >= 9 && hours <= 18) {
		std::cout << "Working";
	}
	else {
		std::cout << "Leisure";
	}

	return 0;
}