#include <iostream>

int main(void) {
	int num, numFactors = 0;

	std::cout << "Enter a Number to Determine if Prime: ";
	std::cin >> num;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			numFactors++;
		}
	}

	if (numFactors == 2) {
		std::cout << num << " is a prime number." << std::endl;
	}
	else {
		std::cout << num << " is NOT a prime number." << std::endl;
	}

	return 0;
}