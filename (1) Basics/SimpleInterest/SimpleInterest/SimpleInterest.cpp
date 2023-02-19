#include <iostream>

using namespace std;

void simpleInterest() {
	int p, r, t;
	float interest;
	cout << "Please Enter P, R, T: ";
	cin >> p >> r >> t;
	interest = p * r * t / 100.0;
	cout << "Interest is: " << interest << endl;

}

int main() {
	simpleInterest();

	return 0;
}