#include <iostream>

using namespace std;

void sumNatural() {
	int n = 0, sum = 0;
	cout << "Please Enter a Number to Sum Up To: ";
	cin >> n;
	sum = (n * (n + 1)) / 2;
	
	cout << "Sum is: " << sum << endl;
}

int main() {
	sumNatural();

	return 0;
}