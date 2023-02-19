#include <iostream>

int main(void) {
	int m1, m2, m3, total;
	float average;

	std::cout << "Enter Marks: ";
	std::cin >> m1 >> m2 >> m3;

	total = m1 + m2 + m3;
	average = total / 3.0;

	if (average >= 60) {
		std::cout << "Current Grade is A";
	}
	else if (average > 35 && average < 60) {
		std::cout << "Current Grade is B";
	}
	else {
		std::cout << "Current Grade is C";
	}

	return 0;
}