#include <iostream>
using namespace std;

class Rectangle {
private:
	// data
	int length;
	int width;
public:
	//functions
	Rectangle(int l, int w);
	Rectangle(Rectangle& r);
	// accessors
	int getLength() {
		return length;
	}
	int getWidth() {
		return width;
	}
	// mutators
	void setLength(int l);
	void setWidth(int w);
	// functions
	int area();
	int perimeter();
	bool isSquare();
	~Rectangle();
};

Rectangle::Rectangle(int l = 1, int w = 1) {
	length = l;
	width = w;
}

Rectangle::Rectangle(Rectangle& r) {
	length = r.length;
	width = r.width;
}

void Rectangle::setLength(int l) {
	length = l;
}

void Rectangle::setWidth(int w) {
	width = w;
}

int Rectangle::area() {
	return length * width;
}

int Rectangle::perimeter() {
	return 2 * (length + width);
}

bool Rectangle::isSquare() {
	return (length == width);
}

Rectangle::~Rectangle() {
	cout << "Destroyed" << endl;
}

int main(void) {
	Rectangle shape(10, 5);
	cout << "Area is: " << shape.area() << endl;
	cout << "Perimeter is: " << shape.perimeter() << endl;
	cout << shape.isSquare() << endl;
	cout << shape.getLength() << endl;
	return 0;
}