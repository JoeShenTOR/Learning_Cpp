#include <iostream>
using namespace std;

int Search(int A[], int key, int size) {
	for (int i = 0; i < size; i++) {
		if (A[i] == key) {
			return i;
		}
	}
	return -1;
}

int main(void) {
	int A[] = { 2,4,5,7,10,9,13 };

	int k;
	cout << "Enter an element to search for: ";
	cin >> k;

	int index = Search(A, k, 7);
	if (index == -1) {
		cout << k << " is not in the array.";
	}
	else {
		cout << k << " is at index: " << index << endl;
	}

	return 0;
}