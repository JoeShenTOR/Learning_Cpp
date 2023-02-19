#include <iostream>

int main(void) {
	int low = 0, mid, high = 9, key;
	int A[10];

	for (int i = 0; i <= high; i++) {
		std::cout << "Enter Elements into Array: ";
		std::cin >> A[i];
	}

	std::cout << "Enter a Value to Find in Array: ";
	std::cin >> key;

	while (low <= high) {
		mid = (low + high) / 2;
		if (key == A[mid]) {
			std::cout << mid;
			return 0;
		}
		else if (key > A[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	std::cout << key << " is not found in array.";

	return 0;
}