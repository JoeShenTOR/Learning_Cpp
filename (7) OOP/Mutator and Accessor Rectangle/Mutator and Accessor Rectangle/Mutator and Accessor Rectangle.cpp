#include <iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int width;

public:
	void setLength(int l) {
		if (l < 0) {
			length = 1;
			cout << "Value is negative!, length will be set to 1" << endl;
		}
		else {
			length = l;
		}
	}
	void setWidth(int w) {
		if (w < 0) {
			width = 1;
			cout << "Value is negative!, width will be set to 1" << endl;
		}
		else {
			width = w;
		}
	}
	int getLength() {
		return length;
	}
	int getWidth() {
		return width;
	}
	int area() {
		return length * width;
	}
	int perimeter() {
		return 2*(length + width);
	}
};

int main(void) {
	Rectangle shape;
	shape.setLength(10);
	shape.setWidth(-5);
	cout << "Length is: " << shape.getLength() << endl;
	cout << "Width is: " << shape.getWidth() << endl;
	cout << "Area is: " << shape.area() << endl;
	cout << "Perimeter is: " << shape.perimeter() << endl;
	return 0;
}