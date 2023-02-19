#include <iostream>

int main(void) {
	int A[10][10], B[10][10], Result[10][10], rowsA, colsA, rowsB, colsB;

	std::cout << "Enter row and column size of Matrix 1: ";
	std::cin >> rowsA >> colsA;

	std::cout << "Enter row and column size of Matrix 2: ";
	std::cin >> rowsB >> colsB;

	while (colsA != rowsB) {
		std::cout << "Error incorrect dimensions!" << std::endl;

		std::cout << "Enter row and column size of Matrix 1: ";
		std::cin >> rowsA >> colsA;

		std::cout << "Enter row and column size of Matrix 2: ";
		std::cin >> rowsB >> colsB;

	}

	// User Input for Array 1
	for (int i = 0; i < rowsA; i++) {
		for (int j = 0; j < colsA; j++) {
			std::cout << "Enter elements of Matrix1, " << "(" << i + 1 << "," << j + 1 << ")" << " : " << std::endl;
			std::cin >> A[i][j];
		}
	}

	// User Input for Array 2
	for (int i = 0; i < rowsB; i++) {
		for (int j = 0; j < colsB; j++) {
			std::cout << "Enter elements of Matrix2, " << "(" << i + 1 << "," << j + 1 << ")" << " : " << std::endl;
			std::cin >> B[i][j];
		}
	}

	// Multiplies Matrix (2x2  x  2x3 == 2x3)
	for (int i = 0; i < rowsA; i++) {
		for (int j = 0; j < colsB; j++) {
			Result[i][j] = 0;
			for (int k = 0; k < colsA; k++) {
				Result[i][j] += A[i][k] * B[k][j];
			}
		}
	}


	// Prints Out Array 1
	for (int i = 0; i < rowsA; i++) {
		for (int j = 0; j < colsA; j++) {
			std::cout << A[i][j] << " ";
		}
		std::cout << std::endl;
	}

	// Prints Out Array 2
	for (int i = 0; i < rowsB; i++) {
		for (int j = 0; j < colsB; j++) {
			std::cout << B[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < rowsA; i++) {
		for (int j = 0; j < colsB; j++) {
			std::cout << Result[i][j] << " ";
		}
		std::cout << std::endl;
	}



	return 0;
}