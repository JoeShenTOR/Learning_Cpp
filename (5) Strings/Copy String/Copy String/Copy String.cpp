#include <iostream>
#include <cstring>

int main(void) {
	char s[50] = "Canada FIFA 2022 Winners!";
	char s1[50];

	strcpy_s(s1, s);

	std::cout << s << std::endl;
	std::cout << s1 << std::endl;

	return 0;
}