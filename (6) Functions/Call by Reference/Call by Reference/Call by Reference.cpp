#include <iostream>
using namespace std;

// Pass By Reference is when u actual want parameters to be modified
void swap(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;

}

int main(void) {
	int n = 4, n2 = 8;
	swap(n, n2);
	cout << n << " " << n2 << endl;
	return 0;
}