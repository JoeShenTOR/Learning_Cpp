#include <iostream>

int main(void) {
	int A[7] = { 4,8,6,4,5,2,7 };
	int largestVal = A[0];
	int sizearray = 7;

	for (int i = 0; i < sizearray; i++) {
		if (largestVal < A[i]) {
			largestVal = A[i];
		}
	}

	std::cout << "The Largest Value in The Array is: " << largestVal << std::endl;
	

	return 0;
}