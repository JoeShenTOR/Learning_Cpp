#include <iostream>

using namespace std;

template <class T>
T maxnum(T number1, T number2) {
	return number1 > number2 ? number1:number2;	//return a > b, return a, otherwise b
}

int main(void) {
	cout << maxnum(12, 14) << endl;
	cout << maxnum(2.3, 1.4) << endl;
	return 0;
}