#include <iostream>

int main(void) {
	int numDay;


	std::cout << "Enter Day Number: ";
	std::cin >> numDay;

	if (numDay == 1) {
		std::cout << "Sun" << std::endl;
	}
	else if (numDay == 2) {
		std::cout << "Mon" << std::endl;
	}
	else if (numDay == 3) {
		std::cout << "Tues" << std::endl;
	}
	else if (numDay == 4) {
		std::cout << "Wed" << std::endl;
	}
	else if (numDay == 5) {
		std::cout << "Thurs" << std::endl;
	}
	else if (numDay == 6) {
		std::cout << "Friday" << std::endl;
	}
	else if (numDay == 7) {
		std::cout << "Saturday" << std::endl;
	}
	else {
		std::cout << "Invalid Day." << std::endl;
	}
	return 0;
}