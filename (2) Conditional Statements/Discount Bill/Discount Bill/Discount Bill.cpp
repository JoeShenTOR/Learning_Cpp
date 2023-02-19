#include <iostream>

int main(void) {
	float totalAmount;
	float discount = 0.0;

	std::cout << "Enter Bill Amount: ";
	std::cin >> totalAmount;

	if (totalAmount < 100) {
		discount = 0;
	}
	else if (totalAmount >= 100 && totalAmount < 500) {
		discount = 0.10;
	}
	else {
		discount = 0.20;
	}
	
	std::cout << "Bill Total: " << totalAmount << std::endl;
	std::cout << "Discount: " << totalAmount * discount << std::endl;
	std::cout << "Final Bill: " << totalAmount - (totalAmount * discount) << std::endl;

	
	return 0;
}
