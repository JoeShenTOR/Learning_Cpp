#include <iostream>
#include <cstring>

int main(void) {
	char s1[50] = "Good";
	char s2[50] = "Morning";
	char s3[50] = "Good";
	char s4[50] = "Morning";


	strcat_s(s1, s2);
	strncat_s(s3, s4, 4);

	std::cout << s1 << std::endl;
	std::cout << s3 << std::endl; // should be GoodMorn

	return 0;
}