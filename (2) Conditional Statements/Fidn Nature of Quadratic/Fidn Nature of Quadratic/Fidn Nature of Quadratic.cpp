#include <iostream>

int main(void) {
	int b, a, c, discriminant;

	std::cout << "Enter b, a, c values: ";
	std::cin >> b >> a >> c;

	discriminant = (b * b) - (4 * a * c);

	if (discriminant > 0) {
		std::cout << "Roots are Real and Unique";
	}
	else if (discriminant == 0) {
		std::cout << "Roots are Real and Equal";
	}
	else {
		std::cout << "Roots are unreal and imaginary" << std::endl;
	}

	return 0;
}