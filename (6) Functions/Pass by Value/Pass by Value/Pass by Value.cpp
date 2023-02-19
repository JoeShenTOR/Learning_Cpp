#include <iostream>

using namespace std;

void swap(int a, int b) {
	cout << a << " " << b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
}

int main(void) {
	int num1 = 4, num2 = 8;
	swap(num1, num2);

	return 0;
}