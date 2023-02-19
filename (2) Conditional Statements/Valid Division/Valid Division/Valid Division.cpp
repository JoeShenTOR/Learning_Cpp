#include <iostream>

int main(void) {
	int num1, num2;
	float result;

	std::cout << "Enter Two Numbers to Divide: ";
	std::cin >> num1 >> num2;

	if (num2 == 0) {
		std::cout << "Divison by 0 Error" << std::endl;
	}
	else {
		result = num1 / num2;
		std::cout << "Result is: " << result << std::endl;
	}

	return 0;
}