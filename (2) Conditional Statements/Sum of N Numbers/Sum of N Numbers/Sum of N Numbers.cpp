#include <iostream>

int main(void) {
	int n, sum=0;

	std::cout << "Enter n to Sum Up to: ";
	std::cin >> n;
	
	for (int i = 0;i <= n;i++) {
		sum += i;
	}

	std::cout << "Sum is: " << sum << std::endl;

	return 0;
}