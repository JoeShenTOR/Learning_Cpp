#include <iostream>
using namespace std;

class Rectangle 
{
public:
	float length;
	float width;
	
	int area() {
		return length * width;
	}
	int perimeter() {
		return 2 * (length + width);
	}
};

int main(void) {
	Rectangle r1;
	r1.length = 10.00;
	r1.width = 5.00;
	cout << "Area: " << r1.area() << endl;
	cout << "Perimeter: " << r1.perimeter() << endl;

	return 0;
}