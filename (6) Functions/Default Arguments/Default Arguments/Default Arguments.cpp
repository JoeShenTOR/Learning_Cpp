#include <iostream> 
using namespace std;

int sum(int num1, int num2, int num3=0) {
	return num1 + num2 + num3;
}

int maximumValue(int a = 0, int b = 0, int c = 0) {
	return a > b && a > c ? a : (b > c ? b : c);
}

int main(void) {
	cout << sum(10, 5) << endl;
	cout << sum(10, 5, 12) << endl;
	cout << maximumValue() << endl;
	cout << maximumValue(2) << endl;
	cout << maximumValue(2,4) << endl;
	cout << maximumValue(2,4,7) << endl;
	return 0;
}