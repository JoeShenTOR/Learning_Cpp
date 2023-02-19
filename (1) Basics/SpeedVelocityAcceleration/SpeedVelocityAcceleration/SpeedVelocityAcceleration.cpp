#include <iostream>
#include <math.h>

using namespace std;

void speedConvertor() {
	int u, v, a;
	float speed;
	cout << "Enter Speed, Velocity and Acceleration: ";
	cin >> u >> v >> a;
	speed = (v * v - u * u) / (2 * a);
	cout << "Speed is: " << speed;
}

int main() {
	speedConvertor();

	return 0;
}