#include <iostream>
#include <cstring>

int main(void) {
	char s[50];

	std::cout << "Enter your Full Name: ";
	std::cin.getline(s, 50);

	std::cout << "Your name has " << strlen(s) - 1 << " characters." << std::endl;

	return 0;
}