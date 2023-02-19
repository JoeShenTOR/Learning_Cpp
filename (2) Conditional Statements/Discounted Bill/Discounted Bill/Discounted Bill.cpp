#include <iostream>

int main(void) {
	float totalBill;
	float discount;

	std::cout << "Enter Total Bill Amount: ";
	std::cin >> totalBill;

	if (totalBill >= 5000) {
		discount = 0.20;
		std::cout << "Final Bill with " << discount * 100 << "%" << " discount is " << totalBill - (discount * totalBill) << std::endl;
	}
	else if (totalBill >= 2000 && totalBill < 5000) {
		discount = 0.10;
		std::cout << "Final Bill with " << discount * 100 << "%" << " discount is " << totalBill - (discount * totalBill) << std::endl;

	}
	else {
		discount = 0.05;
		std::cout << "Final Bill with " << discount * 100 << "%" << " discount is " << totalBill - (discount * totalBill) << std::endl;

	}
	return 0;
}