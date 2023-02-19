#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int imaginary;
public:
	// Constructor
	Complex(int realInput = 0, int imaginaryInput = 0) {
		real = realInput;
		imaginary = imaginaryInput;
	}
	// Accessors
	int getReal() { return real; }
	int getImaginary() { return imaginary; }

	// Methods
	friend Complex operator+(Complex x, Complex y);
	
};

Complex operator+(Complex x, Complex y) {
	Complex t;
	t.real = x.real + y.real;
	t.imaginary = x.imaginary + y.imaginary;
	return t;
}

int main(void) {
	Complex c1(3, 7);
	Complex c2(5, 4);
	Complex c3;

	c3 = c1 + c2;
	cout << c3.getReal() << "+i" << c3.getImaginary() << endl;
	return 0;
}