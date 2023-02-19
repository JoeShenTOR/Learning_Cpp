#include <iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int width;

public:
	Rectangle(int l=1, int w=1) {
		setLength(l);
		setWidth(w);
	}
	Rectangle(Rectangle &r) {
		length = r.length;
		width = r.width;
	}
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
		return 2 * (length + width);
	}
};

int main(void) {
	Rectangle r1(10,5);
	Rectangle r2(r1);
	cout << "Area is: " << r1.area() << endl;
	cout << "Area is: " << r2.area() << endl;


	return 0;
}