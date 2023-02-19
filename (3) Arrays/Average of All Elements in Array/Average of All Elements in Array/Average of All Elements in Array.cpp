#include <iostream>

using namespace std;

int main(void) {
	int numElements;
	float average, sum = 0, A[100];

	cout << "Enter number of elements: ";
	cin >> numElements;

	for (int i = 0; i < numElements; i++) {
		cout << "Enter element to insert: ";
		cin >> A[i];
	}

	for (int i = 0; i < numElements; i++) {
		sum += A[i];
	}

	average = (sum) / numElements;
	cout << "Average of Elements in Array is: " << average << endl;

	return 0;
}