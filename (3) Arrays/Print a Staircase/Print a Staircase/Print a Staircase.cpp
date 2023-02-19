#include <iostream>

/*
Print Out Pattern:
*
**
***
****

*/





int main(void) {
	// i = 0, j = 0 = prints line 1*
	// i = 0, j = 1 = prints nothing and newline
	// i = 1, j = 0 = prints line 2 *
	// i = 1, j = 1 = prints line 2 **
	// i = 1, j = 2 = prints nothing and newline
	// i = 2, j = 0 = prints line 3 *
	// i = 2, j = 1 = prints line 3 **
	// i = 2, j = 2 = prints line 3 ***
	// i = 2, j = 3 = prints nothing and newline
	// i = 3, j = 0 = prints line 4 *
	// i = 3, j = 1 = prints line 4 **
	// i = 3, j = 2 = prints line 4 ***
	// i = 3, j = 3 = prints line 4 ****


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i >= j) {
				std::cout << "* ";
			}
		}
		std::cout << std::endl;
	}


	return 0;
}