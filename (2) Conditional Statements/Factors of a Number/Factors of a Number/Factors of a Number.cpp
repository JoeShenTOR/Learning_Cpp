#include <iostream>

int main(void) {
	int n;

	std::cout << "Enter a Number to Find Factors: ";
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			std::cout << i << " is a factor." << std::endl;
		}
	}

	return 0;
}