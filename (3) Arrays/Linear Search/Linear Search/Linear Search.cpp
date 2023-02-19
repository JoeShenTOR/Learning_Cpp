#include <iostream>

// A "Key" is a value that we want to find the INDEX of in an array.

int main(void) {
	int sizearray = 10, A[10], key = 0;

	std::cout << "Enter a number to input into array: " << std::endl;
	
	for (int i = 0; i < sizearray; i++) {
		std::cin >> A[i];
	}

	std::cout << "Enter a key: ";
	std::cin >> key;

	for (int i = 0; i < sizearray; i++) {
		if (key == A[i]) {
			std::cout << key << " is located at index " << i;
			return 0;
		}
	}
	std::cout << key << " is not in the array.";

	return 0;
}