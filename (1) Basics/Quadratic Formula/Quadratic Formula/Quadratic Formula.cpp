#include <iostream>


using namespace std;

// Quadratic Fomrula = -b +- sqrt(b^(2) - 4ac) / 2a
void quadraticRoots() {
	float a = 0, b = 0, c = 0, root1 = 0, root2 = 0;
	cout << "Enter a,b,c of Quadratic Formula: ";
	cin >> a >> b >> c;
	root1 = (-b + sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
	root2 = (-b - sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
	cout << "First Root: " << root1 << "\nSecond Root: " << root2 << endl;

}

int main() {
	quadraticRoots();

	return 0;
}