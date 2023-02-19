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
	Rectangle r;
	Rectangle* p;
	p = &r;
	r.length = 10;
	p->length = 10;
	p->width = 5;
	cout << p->area() << endl;
	cout << r.area() << endl;

	return 0;
}