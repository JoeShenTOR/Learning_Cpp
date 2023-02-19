#include <iostream>

using namespace std;

void volumeCylinder() {
	float volume;
	int r, h;
	cout << "Please Enter Radius and Height: ";
	cin >> r >> h;
	volume = 3.14f * (r * r) * h;

	cout << "Volume: " << volume << endl;
	
}

int main() {
	volumeCylinder();

	return 0;
}
