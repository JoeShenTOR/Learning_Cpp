#include <iostream>

int main(void) {
	int n, sum=0;

	std::cout << "Enter a number to find out if its a perfect number: ";
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}

	if (sum == 2*n) {
		std::cout << n << " is a perfect number.";
	}
	else {
		std::cout << n << " is NOT a perfect number.";
	}

	return 0;
}