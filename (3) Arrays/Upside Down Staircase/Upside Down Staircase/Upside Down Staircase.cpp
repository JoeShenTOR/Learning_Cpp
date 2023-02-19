#include <iostream>

int main(void) {


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i > j) {
				std::cout << " ";
			}
			else {
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}

	return 0;
}