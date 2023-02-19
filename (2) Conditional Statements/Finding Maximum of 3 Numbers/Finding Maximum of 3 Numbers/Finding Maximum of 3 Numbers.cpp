#include <iostream>

int main(void) {
	int a, b, c;

	std::cout << "Enter Three Numbers: ";
	std::cin >> a >> b >> c;

	if (a > b && a > c) {
		std::cout << a << " is the largest number.";
	}
	else {
		if (b > a && b > c) {
			std::cout << b << " is the largest number.";
		}
		else {
			std::cout << c << " is the largest number";
		}
	}

	return 0;
}