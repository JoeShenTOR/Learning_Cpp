#include <iostream>

int main(void) {
	int num, reversenum = 0, remain;

	std::cout << "Enter a Number to Reverse: ";
	std::cin >> num;

	// num = 153 
	while (num > 0) {
		remain = num % 10;						// remain = 3, remain = 5, remain 1
		num /= 10;								// num = 15, num = 1, num = 0
		reversenum = reversenum * 10 + remain;	// reversenum = 3, reversenum = 35, reversenum = 351
	}

	std::cout << "Reverse Number is: " << reversenum << std::endl;

	return 0;
}