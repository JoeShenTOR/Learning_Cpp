#include <iostream>

int main(void) {
	int num, remain;

	std::cout << "Enter a number to reverse: ";
	std::cin >> num;

	// num = 1724 --->  (1720) + 4
	// num = 1724 ---> (1724) / (10) --> 172.4 --> since 'n' type = int, then it will round down to 172.
	while (num > 0) {
		remain = num % 10; // finds last digit
		std::cout << remain << " ";
		num /= 10; // finds n-1 position
	}

	return 0;
}