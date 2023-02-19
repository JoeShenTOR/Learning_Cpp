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
	//Accessors
	int displayReal() {
		return real;
	}
	int displayImaginary() {
		return imaginary;
	}
	// Methods
	Complex operator+(Complex x) {
		Complex temp;
		temp.real = real+x.real;
		temp.imaginary = imaginary + x.imaginary;
		return temp;
	}
	

};

int main(void) {
	Complex c1(3, 7);
	Complex c2(5, 4);
	Complex c3;

	c3 = c1 + c2;
	cout << c3.displayReal() << "+i" << c3.displayImaginary() << endl;

	return 0;
}