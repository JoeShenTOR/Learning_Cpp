#include <iostream>

int main(void) {
	int count = 1;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << count << " ";
			count++;
		}
		std::cout << std::endl;
	}

	return 0;
}