#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string str = "programming";

	// replace gramm to b to produce probing
	str.replace(3,5, "b");

	cout << str << endl;

	return 0;
}