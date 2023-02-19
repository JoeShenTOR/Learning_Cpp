#include <iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int width;

public:
	void setLength(int l) {			// set == mutator 
		if (l >= 0) {
			length = l;
		}
		else {
			length = 0;
		}
	}
	void setWidth(int w) {			// set == mutator 
		if (w >= 0) {
			width = w;
		}
		else {
			width = 0;
		}
	}
	int getLength() {				// get == accessor 
		return length;
	}
	int getWidth() {
		return width;
	}
	int area() {
		return length * width;
	}
	int perimeter() {
		return 2 * (length + width);
	}
};

int main(void) {
	Rectangle shape;
	shape.setLength(10);
	shape.setWidth(-5);
	cout << "Area is: " << shape.area() << endl;
	cout << "Perimeter is: " << shape.perimeter() << endl;
	cout << "Length of Shape is: " << shape.getLength() << endl;
	cout << "Width of Shape is: " << shape.getWidth() << endl;

	return 0;
}