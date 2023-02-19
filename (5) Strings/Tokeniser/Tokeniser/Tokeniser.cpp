#include <iostream>
#include <cstring>

int main(void) {
	char s[100] = "235";
	char s2[100] = "54.78";

	long int x=strtol(s, NULL, 10);
	float y = strtof(s2, NULL);

	std::cout << x << " " << y << std::endl;

	return 0;
}