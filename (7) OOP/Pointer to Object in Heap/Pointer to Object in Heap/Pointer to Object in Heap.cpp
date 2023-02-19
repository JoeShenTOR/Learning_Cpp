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
	Rectangle* p = new Rectangle();
	p->length = 15;
	p->width = 10;
	cout << p->area() << endl;
	

	return 0;
}