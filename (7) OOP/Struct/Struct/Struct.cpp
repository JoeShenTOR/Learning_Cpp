#include <iostream>
using namespace std;

// Structures are public by default
// Classes are private by default.

struct Demo{
	int x;
	int y;

	void Display() {
		cout << x << " " << y << endl;
	}
};

int main(void) {
	Demo d;
	d.x = 10;
	d.y = 20;
	d.Display();

	return 0;
}