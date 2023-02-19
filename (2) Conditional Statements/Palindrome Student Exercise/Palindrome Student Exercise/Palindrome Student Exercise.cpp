#include <iostream>

int main(void) {
	int num, numdup,rem,rev=0;

	std::cout << "Enter a Number: ";
	std::cin >> num;
	numdup = num;

	while (num > 0) {
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}

	if (rev == numdup) {
		std::cout << numdup << " Number is Palindrome" << std::endl;
	}
	else {
		std::cout << numdup << " Number is NOT a Paldinrome" << std::endl;
	}
		
	return 0;
}