#include <iostream>

using namespace std;

void distanceTwoPoints() {
	int x1, y1, x2, y2;
	float distance;
	cout << "Please Enter Coordinates (x1,y1) and (x2,y2): ";
	cin >> x1 >> y1 >> x2 >> y2;
	distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	
	cout << "Distance is: " << distance << endl;
}

int main() {
	distanceTwoPoints();

	return 0;
}