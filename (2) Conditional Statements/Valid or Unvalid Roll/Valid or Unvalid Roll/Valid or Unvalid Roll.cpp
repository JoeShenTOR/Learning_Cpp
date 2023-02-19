#include <iostream>

int main(void) {
	int roll;

	std::cout << "Enter a roll: ";
	std::cin >> roll;

	if (roll < 0 || roll > 6) {
		std::cout << roll << " Roll is invalid";
	}
	else {
		std::cout << roll << " Roll is valid.";
	}

	return 0;
}