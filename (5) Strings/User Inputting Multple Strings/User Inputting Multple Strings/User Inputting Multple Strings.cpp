#include <iostream>

int main(void) {
	char s[50];

	std::cout << "Enter Full Name: ";
	std::cin.getline(s,50);

	std::cout << s << std::endl;


	return 0;
}