#include <iostream>

int main(void) {
	int n;

	std::cout << "Enter a number: ";
	std::cin >> n;

	if ((n % 2) == 1) {
		std::cout << n << " is odd";
	}
	else {
		std::cout << n << " is even";
	}
	
	return 0;
}