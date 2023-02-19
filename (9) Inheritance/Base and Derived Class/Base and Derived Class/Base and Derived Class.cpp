#include <iostream>

class Base {
public:
	int x;

	void show() {
		std::cout << x << " ";
	}

};

// Inheritance Example
class Derived : public Base {
public:
	int y;
	void display() {
		std::cout << " " << x << " " << y;
	}
};


int main(int argc, char* argv[]) {
	Base b;
	b.x = 25;
	b.show();

	Derived d;
	d.x = 123;
	d.y = 30;
	d.show();
	d.display();

	return 0;
}