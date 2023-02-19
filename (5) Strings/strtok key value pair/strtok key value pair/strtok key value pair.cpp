#include <iostream>
#include <cstring>
#include <string.h>

int main(void) {
	char s1[20] = "x=10;y=20;z=35";

	char* token = strtok_s(s1, ";");

	while (token != NULL) {
		std::cout << token << std::endl;
		token = strtok_s(NULL, ";");
	}

	return 0;
}