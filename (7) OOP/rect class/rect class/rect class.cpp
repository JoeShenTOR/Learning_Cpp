#include <iostream>
using namespace std;

class Rectangle {
public:
	float length;
	float width;
	
	float area() {
		return length * width;
	}
	float perimeter() {
		return 2 * (length + width);
	}
};

int main(void) {
	Rectangle shape;
	shape.length = 10;
	shape.width = 5;
	cout << "Area is: " << shape.area() << endl;
	cout << "Perimeter is: " << shape.perimeter() << endl;

 	return 0;
}