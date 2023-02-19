#include <iostream>

int main(void) {
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	if (num >= 0) {
		std::cout << num << " is positive";
	}
	else {
		std::cout << num << " is negative";
	}
	
	return 0;
}