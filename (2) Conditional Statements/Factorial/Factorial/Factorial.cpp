#include <iostream>

using namespace std;

int main(void) {
	int n, sum = 1;

	cout << "Enter a number for a factorial: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum *= i;
	}

	cout << "Sum is: " << sum << endl;

	return 0;
}