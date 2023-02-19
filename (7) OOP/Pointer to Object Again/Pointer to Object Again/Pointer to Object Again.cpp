#include <iostream>
using namespace std;

class Rectangle {
public:
	int length;
	int width;

	int area() {
		return length * width;
	}
	int perimeter() {
		return 2 * (length + width);
	}
};

int main(void) {
	Rectangle r1;
	Rectangle* ptr = &r1;
	ptr->length = 10;
	ptr->width = 5;
	cout << ptr->area() << endl;
	cout << ptr->perimeter() << endl;
	cout << r1.area() << endl;
	cout << r1.perimeter() << endl;

	return 0;
}