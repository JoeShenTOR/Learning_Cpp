#include <iostream>

int main(void) {
	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int low = 0, high = 9, mid, key;

	std::cout << "Enter a value to find in the array: "; 
	std::cin >> key;

	// Binary Search O(log(n))
	while (low <= high) {
		mid = (low + high) / 2;
		if (key == A[mid]) {
			std::cout << key << " is found at " << mid << std::endl;
			return 0;
		}
		else if (key < A[mid]) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	std::cout << key << " is not found in the array." << std::endl;


	return 0;
}