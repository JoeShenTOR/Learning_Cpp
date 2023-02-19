#include <iostream>

int main(void) {
	int A[7] = { 4,8,6,9,5,2,7 };
	int sizearray = 7, sum = 0;

	for (int i = 0; i < sizearray; i++) {
		sum += A[i];
	}

	std::cout << "The Sum of The Array is: " << sum << std::endl;

	return 0;
}