#include <iostream>
using namespace std;


// static makes the declaration only happens once.
void fun() {
	static int s = 10;
	s++;
	cout << s << endl;
}

int main(void) {
	fun(); // 11
	fun(); // 12

	return 0;
}