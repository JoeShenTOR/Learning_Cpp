#include <iostream>

using namespace std;

float add(float number1, float number2) {
	float z;
	z = number1 + number2;
	return z;
}

int main(void) {
	float num1, num2, result=0;
	cout << "Enter two floating numbers: ";
	cin >> num1 >> num2;

	result = add(num1, num2);
	cout << result << endl;

	return 0;
}