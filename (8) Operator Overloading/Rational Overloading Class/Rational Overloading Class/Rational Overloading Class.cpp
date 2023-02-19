#include <iostream>

using namespace std;

class Rational {
private:
	int numerator;
	int denominator;
public:
	// Constructor
	Rational(int top = 0, int bot = 0) {
		numerator = top;
		denominator = bot;
	}
	Rational operator+(Rational r) {
		Rational t;
		t.numerator = numerator + r.numerator;
		t.denominator = denominator + r.denominator;
		return t;
	}

	friend ostream& operator<<(ostream& out, Rational& x);
};

ostream& operator<<(ostream& out, Rational& x) {
	out << x.numerator << "/" << x.denominator;
	return out;
}

int main(void) {
	Rational r1(3, 4), r2(2, 5), r3;

	r3 = r1 + r2;

	cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;

	return 0;
}