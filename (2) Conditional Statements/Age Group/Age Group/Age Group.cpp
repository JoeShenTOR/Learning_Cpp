#include <iostream>

int main(void) {
	int age;

	std::cout << "Enter Age: ";
	std::cin >> age;

	if (age >= 12 && age <= 50) {
		std::cout << "You are young." << std::endl;
	}

	else {
		std::cout << "You are old" << std::endl;
	}

	return 0;
}