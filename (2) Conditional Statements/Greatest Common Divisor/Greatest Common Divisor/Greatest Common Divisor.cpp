#include <iostream>


int main(void) {
	int n, m;

	std::cout << "Enter two Numbers: ";
	std::cin >> n >> m;
	while (m != n) {
		if (m > n) {
			m = m - n;
		}
		else if (n > m) {
			n = n - m;
		}
	}
	std::cout << "Greatest Common Divisor: " << m << std::endl;

	return 0;
}