#include <iostream>

int main(void) {
	int n, result, limit;
	limit = 10;

	std::cout << "Enter a Number to Display Multiplcation Table: ";
	std::cin >> n;

	for (int i = 1; i <= limit; i++) {
		result = n * i;
		std::cout << n << " * " << i << " = " << result << std::endl;
	}

	return 0;
}