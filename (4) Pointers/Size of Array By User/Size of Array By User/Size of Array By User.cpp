#include <iostream>

using namespace std;

//int main(void) {
//	int size;
//	cout << "Enter size of array: ";
//	cin >> size;
//
//	int *p = new int[size];
//
//	cout << "Enter new size: ";
//	cin >> size;
//	p = new int[size];
//
//	for (int i = 0; i < size; i++) {
//		cout << "Enter an element into array: ";
//		cin >> p[i];
//	}
//
//	for (int i = 0; i < size; i++) {
//		cout << p[i] << " ";
//	}
//
//	delete[]p;
//	p = nullptr;
//
//
//	return 0;
//}



int main(void) {
	int* p = new int[10];

	delete[]p;
	p = new int[20];

	return 0;
}