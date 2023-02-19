#include <iostream>


int main(void) {
	int num, remainder, sum = 0, numdup, numcount = 0;

	std::cout << "Enter a Number to Determine If Armstrong: ";
	std::cin >> num;


	numdup = num;
	while (num > 0) {
		remainder = num % 10;
		sum += ((remainder) * (remainder) * (remainder));
		num /= 10;
	} 


	if (sum == numdup) {
		std::cout << numdup << " is an armstrong number." << std::endl;
	}
	else {
		std::cout << numdup << " is NOT an armstrong number." << std::endl;
	}

	return 0;
}