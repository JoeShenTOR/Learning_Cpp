#include <iostream>

int main(void) {
	int *p = new int[5];
	p[0] = 12;
	p[1] = 13;
	std::cout << p[1] << std::endl;

	delete []p;
	p = nullptr;
		 
	return 0;
}