#include <iostream>
#include <cstring>

int main(void) {
	char s[100] = "Hippopotamus";
	char s1[120] = "z";

	if (strstr(s, s1) != NULL) {
		std::cout << strstr(s, s1) << std::endl;
	}
	else {
		std::cout << "Not found." << std::endl;
	}

	return 0;
}