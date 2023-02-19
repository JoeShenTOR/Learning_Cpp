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
	friend ostream & operator<<(ostream &out, Complex &c);

};

ostream& operator<<(ostream& out, Complex& c) {
	out << c.real << "+i" << c.imaginary<<endl;
	return out;
}

int main(void) {
	Complex c(10, 5);
	cout << c;

	return 0;
}